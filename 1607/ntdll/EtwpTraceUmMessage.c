/*
 * XREFs of EtwpTraceUmMessage @ 0x18005ABA4
 * Callers:
 *     EtwTraceMessageVa @ 0x18005A370 (EtwTraceMessageVa.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x18005BD00 (EtwpReserveTraceBuffer.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall EtwpTraceUmMessage(__int16 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5)
{
  char v6; // bl
  __int64 v7; // r15
  __int64 result; // rax
  bool v9; // r12
  unsigned int v10; // edi
  __int64 v11; // rsi
  __int64 i; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  signed __int32 v15; // ecx
  volatile signed __int32 *v16; // rdx
  signed __int32 *v17; // rdi
  struct _TEB *v18; // rcx
  __int64 v19; // rsi
  const void *v20; // rdx
  size_t v21; // rbx
  int v22; // eax
  signed __int32 *v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  __int64 v25; // [rsp+58h] [rbp-60h] BYREF
  __int64 v26; // [rsp+60h] [rbp-58h]
  __int64 v27; // [rsp+68h] [rbp-50h] BYREF
  signed __int32 UniqueThread; // [rsp+70h] [rbp-48h]
  signed __int32 UniqueProcess; // [rsp+74h] [rbp-44h]
  __int64 v30; // [rsp+78h] [rbp-40h]
  struct _TEB *v31; // [rsp+80h] [rbp-38h]
  const void *v32; // [rsp+88h] [rbp-30h]
  unsigned int v33; // [rsp+C0h] [rbp+8h]

  v6 = a2;
  v25 = 0LL;
  if ( (a1 & 0x7FFFu) < 0x40 && EtwpLoggerArray )
  {
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF) + 8));
    v7 = *(_QWORD *)(EtwpLoggerArray + 16LL * (a1 & 0x7FFF));
    if ( (v7 & 1) != 0 )
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
    v7 = v24;
  }
  v33 = result;
  if ( !(_DWORD)result )
  {
    v9 = (a2 & 0x18) != 0;
    if ( !*(_QWORD *)(v7 + 400) )
      v6 = a2 & 0xFE;
    v10 = ((v6 & 0x20) != 0 ? 8 : 0)
        + ((a2 & 0x18) != 0 ? 16 : 8)
        + ((v6 & 4) != 0 ? 4 : 0)
        + ((v6 & 1) != 0 ? 4 : 0)
        + ((v6 & 2) != 0 ? 0x10 : 0);
    v11 = a5;
    for ( i = a5 - 8; *(_QWORD *)(i + 8); v10 += *(_DWORD *)i )
    {
      i += 16LL;
      if ( v10 + *(_DWORD *)i < v10 )
        return 534LL;
    }
    v31 = NtCurrentTeb();
    v13 = v24;
    v14 = EtwpReserveTraceBuffer(
            v24,
            v10,
            v31->CurrentIdealProcessor.Reserved,
            (unsigned __int64)&v25 & -(__int64)((a2 & 0x18) != 0),
            &v27);
    v30 = v14;
    v15 = 0;
    v16 = *(volatile signed __int32 **)(v7 + 400);
    if ( v16 )
    {
      v15 = _InterlockedIncrement(v16);
      v13 = v24;
      v14 = v30;
    }
    if ( !v14 )
    {
      if ( v10 <= 0xFFF8 )
        v22 = *(_DWORD *)(v13 + 212) < v10 ? 234 : 8;
      else
        v22 = 534;
      v33 = v22;
LABEL_34:
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v13 + 20) + 8));
      return v33;
    }
    *(_DWORD *)v14 = -1879048192;
    *(_WORD *)v14 = v10;
    *(_WORD *)(v14 + 6) = v6 & 0x3F | 0x80;
    *(_WORD *)(v14 + 4) = a4;
    v17 = (signed __int32 *)(v14 + 8);
    v23 = (signed __int32 *)(v14 + 8);
    if ( (v6 & 1) != 0 )
    {
      *v17 = v15;
      v17 = (signed __int32 *)(v14 + 12);
      v23 = (signed __int32 *)(v14 + 12);
    }
    if ( (v6 & 4) != 0 )
    {
      *v17++ = *a3;
    }
    else
    {
      if ( (v6 & 2) == 0 )
      {
LABEL_21:
        if ( v9 )
        {
          *(_QWORD *)v17 = v25;
          v17 += 2;
          v23 = v17;
        }
        if ( (v6 & 0x20) != 0 )
        {
          v18 = NtCurrentTeb();
          UniqueThread = (signed __int32)v18->ClientId.UniqueThread;
          *v23 = UniqueThread;
          UniqueProcess = (signed __int32)v18->ClientId.UniqueProcess;
          v23[1] = UniqueProcess;
          v17 = v23 + 2;
        }
        v26 = a5;
        while ( 1 )
        {
          v19 = v11 + 8;
          v26 = v19;
          v20 = *(const void **)(v19 - 8);
          v32 = v20;
          if ( !v20 )
            break;
          v11 = v19 + 8;
          v26 = v11;
          v21 = *(_QWORD *)(v11 - 8);
          memmove(v17, v20, v21);
          v17 = (signed __int32 *)((char *)v17 + v21);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
        v13 = v24;
        goto LABEL_34;
      }
      *(_OWORD *)v17 = *(_OWORD *)a3;
      v17 += 4;
    }
    v23 = v17;
    goto LABEL_21;
  }
  return result;
}
