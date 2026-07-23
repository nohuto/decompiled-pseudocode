/*
 * XREFs of EtwpTraceUmMessage @ 0x1800111DC
 * Callers:
 *     EtwTraceMessageVa @ 0x18000E510 (EtwTraceMessageVa.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1800110EC (EtwpReserveTraceBuffer.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall EtwpTraceUmMessage(__int16 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5)
{
  char v6; // bl
  __int64 result; // rax
  __int64 v8; // r15
  bool v9; // r12
  unsigned int v10; // edi
  __int64 v11; // rsi
  __int64 i; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  signed __int32 v15; // ecx
  volatile signed __int32 *v16; // rdx
  int v17; // eax
  signed __int32 *v18; // rdi
  struct _TEB *v19; // rcx
  __int64 v20; // rsi
  const void *v21; // rdx
  size_t v22; // rbx
  signed __int32 *v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  __int64 v25; // [rsp+48h] [rbp-70h] BYREF
  int v26; // [rsp+50h] [rbp-68h]
  int v27; // [rsp+54h] [rbp-64h]
  int v28; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+60h] [rbp-58h]
  __int64 v30; // [rsp+68h] [rbp-50h] BYREF
  __int64 v31; // [rsp+70h] [rbp-48h]
  signed __int32 UniqueProcess; // [rsp+78h] [rbp-40h]
  signed __int32 UniqueThread; // [rsp+7Ch] [rbp-3Ch]
  struct _TEB *v34; // [rsp+80h] [rbp-38h]
  const void *v35; // [rsp+88h] [rbp-30h]
  unsigned int v36; // [rsp+C0h] [rbp+8h]

  v6 = a2;
  v25 = 0LL;
  if ( (a1 & 0x7FFFu) < 0x40 && EtwpLoggerArray )
  {
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF) + 8));
    v8 = *(_QWORD *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF));
    if ( (v8 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF) + 8));
      return 4201LL;
    }
    v24 = *(_QWORD *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF));
    result = 0LL;
  }
  else
  {
    result = 4201LL;
    v8 = v24;
  }
  v36 = result;
  if ( !(_DWORD)result )
  {
    v9 = (a2 & 0x18) != 0;
    if ( !*(_QWORD *)(v8 + 408) )
      v6 = a2 & 0xFE;
    v28 = v6 & 1;
    v27 = v6 & 2;
    v26 = v6 & 0x20;
    v10 = (v26 != 0 ? 8 : 0)
        + ((a2 & 0x18) != 0 ? 16 : 8)
        + ((v6 & 4) != 0 ? 4 : 0)
        + (v28 != 0 ? 4 : 0)
        + (v27 != 0 ? 0x10 : 0);
    v11 = a5;
    for ( i = a5 - 8; *(_QWORD *)(i + 8); v10 += *(_DWORD *)i )
    {
      i += 16LL;
      if ( v10 + *(_DWORD *)i < v10 )
        return 534LL;
    }
    v34 = NtCurrentTeb();
    v13 = v24;
    v14 = EtwpReserveTraceBuffer(
            v24,
            v10,
            v34->CurrentIdealProcessor.Reserved,
            (LARGE_INTEGER *)((unsigned __int64)&v25 & -(__int64)((a2 & 0x18) != 0)),
            &v30);
    v31 = v14;
    v15 = 0;
    v16 = *(volatile signed __int32 **)(v8 + 408);
    if ( v16 )
    {
      v15 = _InterlockedIncrement(v16);
      v13 = v24;
      v14 = v31;
    }
    if ( !v14 )
    {
      if ( v10 <= 0xFFF8 )
        v17 = *(_DWORD *)(v13 + 212) < v10 ? 234 : 8;
      else
        v17 = 534;
      v36 = v17;
LABEL_38:
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v13 + 20) + 8));
      return v36;
    }
    *(_DWORD *)v14 = -1879048192;
    *(_WORD *)v14 = v10;
    *(_WORD *)(v14 + 6) = v6 & 0x3F | 0x80;
    *(_WORD *)(v14 + 4) = a4;
    v18 = (signed __int32 *)(v14 + 8);
    v23 = (signed __int32 *)(v14 + 8);
    if ( v28 )
    {
      *v18 = v15;
      v18 = (signed __int32 *)(v14 + 12);
      v23 = (signed __int32 *)(v14 + 12);
    }
    if ( (v6 & 4) != 0 )
    {
      *v18++ = *a3;
    }
    else
    {
      if ( !v27 )
      {
LABEL_30:
        if ( v9 )
        {
          *(_QWORD *)v18 = v25;
          v18 += 2;
          v23 = v18;
        }
        if ( v26 )
        {
          v19 = NtCurrentTeb();
          UniqueThread = (signed __int32)v19->ClientId.UniqueThread;
          *v23 = UniqueThread;
          UniqueProcess = (signed __int32)v19->ClientId.UniqueProcess;
          v23[1] = UniqueProcess;
          v18 = v23 + 2;
        }
        v29 = a5;
        while ( 1 )
        {
          v20 = v11 + 8;
          v29 = v20;
          v21 = *(const void **)(v20 - 8);
          v35 = v21;
          if ( !v21 )
            break;
          v11 = v20 + 8;
          v29 = v11;
          v22 = *(_QWORD *)(v11 - 8);
          memmove(v18, v21, v22);
          v18 = (signed __int32 *)((char *)v18 + v22);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
        v13 = v24;
        goto LABEL_38;
      }
      *(_OWORD *)v18 = *(_OWORD *)a3;
      v18 += 4;
    }
    v23 = v18;
    goto LABEL_30;
  }
  return result;
}
