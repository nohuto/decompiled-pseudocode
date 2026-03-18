/*
 * XREFs of KiExecuteAllDpcs @ 0x1400A53E0
 * Callers:
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x14016315C (KiExecuteDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // r12
  _DWORD *v5; // r11
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
  __int64 v21; // rdx
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // rcx
  char *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
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
  __int64 v39; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-B8h]
  __int16 v43; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+54h] [rbp-ACh]
  __int16 *v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  unsigned int v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  _QWORD v54[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v55[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v56[4]; // [rsp+D0h] [rbp-30h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v4 = a4;
  v5 = a3;
  v39 = a2;
  v50 = a4;
  v7 = a1 + 11648 + 40LL * a4;
  result = *(unsigned int *)(v7 + 24);
  v51 = v7;
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
      v44 = 4200450;
    }
    else
    {
      v10 = 3908;
      v44 = 4196866;
    }
    v43 = v10;
    v11 = &v43;
  }
  v53 = *(_QWORD *)(a1 + 11536);
  v45 = v11;
  while ( 1 )
  {
    v12 = (volatile signed __int32 *)(v7 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v12);
      goto LABEL_49;
    }
    if ( _interlockedbittestandset64(v12, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v12);
LABEL_49:
      v5 = a3;
      v12 = (volatile signed __int32 *)(v7 + 16);
      a2 = v39;
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
    v46 = v18;
    v47 = v19;
    v49 = v20;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v12, retaddr);
      v18 = v46;
      v19 = v47;
      v20 = v49;
      a2 = v39;
      v5 = a3;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v54[0] = BugCheckParameter2;
      v55[1] = 16LL;
      v54[1] = 0x7E35C6C7F3DD7277LL
             * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever));
      v55[0] = v54;
      EtwTraceKernelEvent((int)v55, 1, 0x20040000u, 0xF65u, 4196866);
      v18 = v46;
      v19 = v47;
      v20 = v49;
      a2 = v39;
      v5 = a3;
    }
    if ( v11 )
    {
      v21 = (unsigned int)EtwpActiveSystemLoggers;
      v22 = 0LL;
      v23 = !_BitScanForward((unsigned int *)&v24, EtwpActiveSystemLoggers);
      v42 = 0;
      if ( !v23 )
      {
        do
        {
          v21 = ((_DWORD)v21 - 1) & (unsigned int)v21;
          v25 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v24;
          if ( v25 && (*((_DWORD *)v25 + 1) & 0x80u) != 0 )
            v22 = (1 << LOBYTE(word_140327822[2 * v24])) | (unsigned int)v22;
          v23 = !_BitScanForward((unsigned int *)&v24, v21);
        }
        while ( !v23 );
        v7 = v51;
        v42 = v22;
      }
      v26 = 0LL;
      do
      {
        if ( _bittest((const int *)&v22, v9) )
        {
          v27 = ((__int64 (__fastcall *)(__int64, __int64, __int64))EtwpSystemTimeStamp[v26])(v24, v21, v22);
          v22 = v42;
          v55[v26 + 2] = v27;
        }
        else
        {
          v55[v26 + 2] = 0LL;
        }
        ++v9;
        ++v26;
      }
      while ( v9 < 2 );
      v4 = v50;
      v18 = v46;
      v19 = v47;
      v20 = v49;
      a2 = v39;
      v5 = a3;
      v52 = v9;
    }
    v28 = ((*v5)++ & 0xF) + 1LL;
    v29 = &v5[4 * v28];
    *(_QWORD *)v29 = BugCheckParameter2;
    v29[2] = MEMORY[0xFFFFF78000000320];
    v30 = *(unsigned int *)(a2 + 484);
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
    a2 = v39;
    v29[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v30 != *(_DWORD *)(v39 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v30, *(unsigned int *)(v39 + 484));
    v11 = v45;
    if ( v45 )
    {
      v32 = EtwpActiveSystemLoggers;
      v33 = *((_DWORD *)v45 + 1);
      v34 = *v45;
      v23 = !_BitScanForward((unsigned int *)&v35, EtwpActiveSystemLoggers);
      v56[2] = &BugCheckParameter2;
      v48 = v35;
      v56[3] = 8LL;
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
              v37 = (unsigned __int16)word_140327822[2 * v35];
              v38 = (unsigned __int16)EtwpSystemLogger[2 * (unsigned int)v35];
              v56[1] = 8LL;
              v56[0] = &v55[v37 + 2];
              EtwpLogKernelEvent((unsigned int)v56, v38, 2, v34, v33);
            }
          }
          v23 = !_BitScanForward((unsigned int *)&v35, v32);
        }
        while ( !v23 );
        v7 = v51;
        v4 = v50;
        a2 = v39;
        v48 = v35;
      }
      v11 = v45;
    }
    _disable();
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_43;
    v5 = a3;
    v9 = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v12, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
LABEL_43:
  result = v53;
  *(_QWORD *)(a1 + 11536) = v53;
  return result;
}
