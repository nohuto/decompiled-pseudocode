/*
 * XREFs of EtwpTraceUmEvent @ 0x18004CC90
 * Callers:
 *     EtwLogTraceEvent @ 0x18004CC30 (EtwLogTraceEvent.c)
 *     EtwTraceEventInstance @ 0x1800F3D40 (EtwTraceEventInstance.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18004A5F4 (EtwpReserveTraceBuffer.c)
 *     EtwpRelogEvent @ 0x180094D8C (EtwpRelogEvent.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall EtwpTraceUmEvent(__int16 a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  int v4; // r12d
  size_t v5; // r15
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int i; // ecx
  LARGE_INTEGER *v15; // r9
  char *v16; // rax
  char *v17; // rdi
  char *v18; // r12
  unsigned int j; // r15d
  const void *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  _CLIENT_ID *p_ClientId; // rdx
  char *v25; // rcx
  char v26; // [rsp+30h] [rbp-1B8h]
  unsigned int v27; // [rsp+34h] [rbp-1B4h]
  unsigned int v28; // [rsp+38h] [rbp-1B0h]
  int v29; // [rsp+3Ch] [rbp-1ACh]
  _DWORD v31[3]; // [rsp+44h] [rbp-1A4h] BYREF
  __int64 v32; // [rsp+58h] [rbp-190h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-188h]
  unsigned __int64 v34; // [rsp+68h] [rbp-180h] BYREF
  int UniqueThread; // [rsp+70h] [rbp-178h]
  char *v36; // [rsp+78h] [rbp-170h]
  char *v37; // [rsp+80h] [rbp-168h]
  int UniqueProcess; // [rsp+88h] [rbp-160h]
  struct _TEB *v39; // [rsp+90h] [rbp-158h]
  _CLIENT_ID *v40; // [rsp+98h] [rbp-150h]
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v4 = a4;
  v5 = a3;
  v32 = 0LL;
  v7 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  if ( (a1 & 0x7FFFu) < 0x40 && EtwpLoggerArray )
  {
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF) + 8));
    v7 = *(_QWORD *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF));
    if ( (v7 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF) + 8));
      return 4201LL;
    }
    *(_QWORD *)&v31[1] = *(_QWORD *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF));
    result = 0LL;
  }
  else
  {
    result = 4201LL;
  }
  v27 = result;
  if ( !(_DWORD)result )
  {
    v9 = *a2;
    v28 = v9;
    if ( v9 >= a3 )
    {
      v29 = *((_DWORD *)a2 + 11);
      if ( (v29 & 0x200000) != 0 )
      {
        v10 = EtwpRelogEvent(v7, a2);
      }
      else
      {
        if ( (v29 & 0x100000) != 0 )
        {
          v11 = v9 - a3;
          if ( v11 > 0x100 )
          {
            v27 = 13;
            goto LABEL_47;
          }
          memset(Src, 0, sizeof(Src));
          if ( v11 )
            memmove(Src, (char *)a2 + v5, v11);
          v12 = v5;
          v28 = v5;
          v13 = v11 >> 4;
          v31[0] = v13;
          for ( i = 0; ; ++i )
          {
            v33 = i;
            if ( i >= v13 )
              break;
            v12 += LODWORD(Src[2 * i + 1]);
            v28 = v12;
            if ( v12 < LODWORD(Src[2 * i + 1]) )
            {
              v27 = 234;
              goto LABEL_47;
            }
          }
          v4 = a4;
        }
        if ( (v29 & 0x200) != 0 )
        {
          v26 = 1;
          v15 = 0LL;
        }
        else
        {
          v26 = 0;
          v15 = (LARGE_INTEGER *)&v34;
        }
        v39 = NtCurrentTeb();
        v7 = *(_QWORD *)&v31[1];
        v16 = (char *)EtwpReserveTraceBuffer(*(__int64 *)&v31[1], v28, v39->CurrentIdealProcessor.Reserved, v15, &v32);
        v17 = v16;
        v36 = v16;
        if ( v16 )
        {
          if ( (v29 & 0x100000) != 0 )
          {
            v18 = &v16[v5];
            v37 = &v16[v5];
            memmove(v16, a2, v5);
            for ( j = 0; j < v31[0]; ++j )
            {
              v20 = Src[2 * j];
              v21 = (unsigned int)Src[2 * j + 1];
              if ( v20 && v21 )
              {
                v22 = v21;
                memmove(v18, v20, v21);
                v18 += v22;
                v37 = v18;
              }
            }
            v4 = a4;
          }
          else
          {
            memmove(v16, a2, v28);
          }
          if ( (v29 & 0x80000) != 0 )
            *(_OWORD *)(v17 + 24) = *(_OWORD *)*((_QWORD *)a2 + 3);
          if ( !v26 )
          {
            v23 = v34;
            *((_QWORD *)v17 + 2) = v34;
            if ( *(_DWORD *)(*(_QWORD *)&v31[1] + 16LL) != 3 )
              v23 = __rdtsc();
            *((_QWORD *)v17 + 5) = v23;
          }
          *(_DWORD *)v17 = v4 | v28;
          p_ClientId = &NtCurrentTeb()->ClientId;
          v40 = p_ClientId;
          UniqueThread = (int)p_ClientId->UniqueThread;
          v25 = v36;
          *((_DWORD *)v36 + 2) = UniqueThread;
          UniqueProcess = (int)p_ClientId->UniqueProcess;
          *((_DWORD *)v25 + 3) = UniqueProcess;
          _InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
          v7 = *(_QWORD *)&v31[1];
          goto LABEL_47;
        }
        if ( v28 <= 0xFFF8 )
          v10 = *(_DWORD *)(*(_QWORD *)&v31[1] + 212LL) < v28 ? 234 : 8;
        else
          v10 = 534;
      }
      v27 = v10;
    }
    else
    {
      v27 = 87;
    }
LABEL_47:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v7 + 20) + 8));
    return v27;
  }
  return result;
}
