/*
 * XREFs of KiExecuteAllDpcs @ 0x140044870
 * Callers:
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1401338C8 (KiExecuteDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r12
  __int64 v5; // r11
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned int v9; // esi
  __int16 v10; // ax
  __int16 *v11; // r14
  volatile signed __int32 *v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // rax
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // rdi
  _QWORD *v17; // r15
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // rcx
  char *v25; // rax
  __int64 v26; // r14
  _DWORD *v27; // rdx
  __int64 v28; // rsi
  _DWORD *v29; // rsi
  ULONG_PTR v30; // r14
  unsigned __int64 v31; // rax
  unsigned int v32; // edi
  int v33; // esi
  unsigned __int16 v34; // r14
  __int64 v35; // rcx
  char *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v43; // [rsp+40h] [rbp-C0h]
  __int16 v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h]
  __int16 *v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  int v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  unsigned int v54; // [rsp+90h] [rbp-70h]
  _DWORD *v55; // [rsp+98h] [rbp-68h]
  _QWORD v56[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v57[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v58[4]; // [rsp+D0h] [rbp-30h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v4 = a4;
  v55 = (_DWORD *)a3;
  v5 = a2;
  v51 = a4;
  v7 = a1 + 11648 + 40LL * a4;
  result = *(unsigned int *)(v7 + 24);
  v52 = v7;
  if ( !(_DWORD)result )
    return result;
  v9 = 0;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v11 = 0LL;
  }
  else
  {
    if ( a4 )
    {
      v10 = 3906;
      v45 = 4200450;
    }
    else
    {
      v10 = 3908;
      v45 = 4196866;
    }
    v44 = v10;
    v11 = &v44;
  }
  v53 = *(_QWORD *)(a1 + 11536);
  v46 = v11;
  while ( 1 )
  {
    v12 = (volatile signed __int32 *)(v7 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v12);
      goto LABEL_52;
    }
    if ( _interlockedbittestandset64(v12, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v12, 4294967277LL, a3);
LABEL_52:
      v5 = a2;
      v12 = (volatile signed __int32 *)(v7 + 16);
    }
    if ( *(int *)(v7 + 24) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(a1 + 2 * v4 + 11756), 0xFFEDu);
      if ( !*(_DWORD *)(v7 + 24) )
        break;
    }
    v13 = *(__int64 **)v7;
    v14 = **(_QWORD **)v7;
    *(_QWORD *)v7 = v14;
    if ( !v14 )
      *(_QWORD *)(v7 + 8) = v7;
    v15 = v13[2];
    v16 = (unsigned __int64)(v13 - 1);
    BugCheckParameter2 = v15;
    v17 = *(_QWORD **)(v16 + 56);
    v18 = *(_QWORD *)(v16 + 32);
    v19 = *(_QWORD *)(v16 + 40);
    v20 = *(_QWORD *)(v16 + 48);
    *(_QWORD *)(v16 + 56) = 0LL;
    --*(_DWORD *)(v7 + 24);
    *(_QWORD *)(v7 + 32) = v16;
    v48 = v18;
    v47 = v19;
    v49 = v20;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v12, retaddr);
      v18 = v48;
      v19 = v47;
      v20 = v49;
      v5 = a2;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v56[0] = BugCheckParameter2;
      v57[1] = 16LL;
      v56[1] = 0x7E35C6C7F3DD7277LL
             * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever));
      v57[0] = v56;
      EtwTraceKernelEvent((int)v57, 1, 0x20040000u, 0xF65u, 4196866);
      v18 = v48;
      v19 = v47;
      v20 = v49;
      v5 = a2;
    }
    if ( v11 )
    {
      v21 = (unsigned int)EtwpActiveSystemLoggers;
      v22 = 0LL;
      v23 = !_BitScanForward((unsigned int *)&v24, EtwpActiveSystemLoggers);
      v43 = 0;
      if ( !v23 )
      {
        do
        {
          v21 = ((_DWORD)v21 - 1) & (unsigned int)v21;
          v25 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v24;
          if ( v25 && (*((_DWORD *)v25 + 1) & 0x80u) != 0 )
            v22 = (1 << LOBYTE(word_1402D84E2[2 * v24])) | (unsigned int)v22;
          v23 = !_BitScanForward((unsigned int *)&v24, v21);
        }
        while ( !v23 );
        v43 = v22;
      }
      v26 = 0LL;
      do
      {
        if ( _bittest((const int *)&v22, v9) )
        {
          v39 = EtwpSystemTimeStamp[v26];
          if ( v39 == EtwpGetCycleCount )
          {
            v40 = __rdtsc();
            v21 = (unsigned __int64)HIDWORD(v40) << 32;
          }
          else
          {
            v40 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64))v39)(v24, v21, v22);
            v22 = v43;
          }
          v57[v26 + 2] = v40;
        }
        else
        {
          v57[v26 + 2] = 0LL;
        }
        ++v9;
        ++v26;
      }
      while ( v9 < 2 );
      v7 = v52;
      v4 = v51;
      v18 = v48;
      v19 = v47;
      v20 = v49;
      v5 = a2;
      v54 = v9;
    }
    v27 = v55;
    v28 = ((*v55)++ & 0xF) + 1LL;
    v29 = &v27[4 * v28];
    *(_QWORD *)v29 = BugCheckParameter2;
    v29[2] = MEMORY[0xFFFFF78000000320];
    v30 = *(unsigned int *)(v5 + 484);
    *(_DWORD *)(a1 + 23328) = 0;
    *(_QWORD *)(a1 + 11536) = v17;
    if ( v17 != (_QWORD *)1 )
      v17[4] = __rdtsc();
    ((void (__fastcall *)(unsigned __int64, __int64, __int64, __int64))BugCheckParameter2)(v16, v18, v19, v20);
    if ( v17 != (_QWORD *)1 )
    {
      v31 = __rdtsc();
      v17[3] += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v17[4];
      ++v17[5];
    }
    v5 = a2;
    v29[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v30 != *(_DWORD *)(a2 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v30, *(unsigned int *)(a2 + 484));
    v11 = v46;
    if ( v46 )
    {
      v32 = EtwpActiveSystemLoggers;
      v33 = *((_DWORD *)v46 + 1);
      v34 = *v46;
      v23 = !_BitScanForward((unsigned int *)&v35, EtwpActiveSystemLoggers);
      v58[2] = &BugCheckParameter2;
      v50 = v35;
      v58[3] = 8LL;
      if ( !v23 )
      {
        do
        {
          v32 &= v32 - 1;
          v36 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v35;
          if ( v36 )
          {
            if ( (*((_DWORD *)v36 + 1) & 0x80u) != 0 )
            {
              v37 = (unsigned __int16)word_1402D84E2[2 * v35];
              v38 = (unsigned __int16)EtwpSystemLogger[2 * (unsigned int)v35];
              v58[1] = 8LL;
              v58[0] = &v57[v37 + 2];
              EtwpLogKernelEvent((unsigned int)v58, v38, 2, v34, v33);
            }
          }
          v23 = !_BitScanForward((unsigned int *)&v35, v32);
        }
        while ( !v23 );
        v7 = v52;
        v4 = v51;
        v5 = a2;
        v50 = v35;
      }
      v11 = v46;
    }
    _disable();
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_43;
    v9 = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v12);
LABEL_43:
  result = v53;
  *(_QWORD *)(a1 + 11536) = v53;
  return result;
}
