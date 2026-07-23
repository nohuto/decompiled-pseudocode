/*
 * XREFs of KiExecuteAllDpcs @ 0x140058E00
 * Callers:
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1401397A8 (KiExecuteDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // r12
  __int64 result; // rax
  __int64 **v9; // r12
  __int16 *v10; // rbx
  volatile signed __int32 *v11; // r13
  __int64 *v12; // rcx
  __int64 *v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // esi
  bool i; // zf
  __int64 v22; // rcx
  char *v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rdi
  __int64 v26; // rbx
  _DWORD *v27; // rbx
  ULONG_PTR v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // edi
  __int16 v33; // si
  unsigned int v34; // ebx
  unsigned int v35; // ecx
  char *v36; // rax
  __int64 v37; // rax
  int v38; // r8d
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v42; // [rsp+50h] [rbp-B8h] BYREF
  int v43; // [rsp+54h] [rbp-B4h]
  __int16 *v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  __int64 v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  __int64 **v48; // [rsp+78h] [rbp-90h]
  _DWORD *v49; // [rsp+80h] [rbp-88h]
  unsigned int v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-60h]
  _QWORD v55[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v56[4]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v57[4]; // [rsp+E0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+150h] [rbp+48h]

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v49 = a3;
  v47 = a2;
  v46 = a4;
  v7 = a4 + 4 * (a4 + 364LL);
  result = *(unsigned int *)(v4 + 8 * v7 + 24);
  v9 = (__int64 **)(v4 + 8 * v7);
  v48 = v9;
  if ( !(_DWORD)result )
    return result;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v10 = 0LL;
  }
  else
  {
    if ( a4 )
    {
      v43 = 4200450;
      v42 = 3906;
    }
    else
    {
      v43 = 4196866;
      v42 = 3908;
    }
    v10 = &v42;
  }
  v11 = (volatile signed __int32 *)(v9 + 2);
  v54 = *(_QWORD *)(v4 + 11536);
  v44 = v10;
  while ( 1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v11);
LABEL_13:
      v5 = v46;
      goto LABEL_14;
    }
    if ( _interlockedbittestandset64(v11, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v11);
      goto LABEL_13;
    }
LABEL_14:
    if ( *((int *)v9 + 6) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(v4 + 2 * v5 + 11756), 0xFFEDu);
      if ( !*((_DWORD *)v9 + 6) )
        break;
    }
    v12 = *v9;
    v13 = (__int64 *)**v9;
    *v9 = v13;
    if ( !v13 )
      v9[1] = (__int64 *)v9;
    v14 = (unsigned __int64)(v12 - 1);
    BugCheckParameter2 = v12[2];
    v15 = v12[4];
    v16 = (_QWORD *)v12[6];
    v17 = v12[3];
    v12[6] = 0LL;
    v53 = v15;
    v18 = v12[5];
    --*((_DWORD *)v9 + 6);
    v9[4] = v12 - 1;
    v51 = v17;
    v52 = v18;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v11, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v55[0] = BugCheckParameter2;
      v56[1] = 16LL;
      v55[1] = 0x7E35C6C7F3DD7277LL
             * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v14 ^ KiWaitAlways), KiWaitNever));
      v56[0] = v55;
      EtwTraceKernelEvent((int)v56, 1, 0x20040000u, 3941, 4196866);
    }
    if ( v10 )
    {
      v19 = EtwpActiveSystemLoggers;
      v20 = 0;
      for ( i = !_BitScanForward((unsigned int *)&v22, EtwpActiveSystemLoggers);
            !i;
            i = !_BitScanForward((unsigned int *)&v22, v19) )
      {
        v19 &= v19 - 1;
        v23 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v22;
        if ( v23 && (*((_DWORD *)v23 + 1) & 0x80u) != 0 )
          v20 |= 1 << LOBYTE(word_1402FD342[2 * v22]);
      }
      v24 = 0;
      v25 = 0LL;
      do
      {
        if ( _bittest(&v20, v24) )
          v56[v25 + 2] = ((__int64 (__fastcall *)(__int64))EtwpSystemTimeStamp[v25])(v22);
        else
          v56[v25 + 2] = 0LL;
        ++v24;
        ++v25;
      }
      while ( v24 < 2 );
      v9 = v48;
      v17 = v51;
      v6 = v49;
      v50 = v24;
    }
    v26 = ((*v6)++ & 0xF) + 1LL;
    v27 = &v6[4 * v26];
    *(_QWORD *)v27 = BugCheckParameter2;
    v27[2] = MEMORY[0xFFFFF78000000320];
    v28 = *(unsigned int *)(v47 + 484);
    *(_DWORD *)(a1 + 23328) = 0;
    KiResetGlobalDpcWatchdogProfiler(a1);
    v29 = a1;
    *(_QWORD *)(a1 + 11536) = v16;
    if ( v16 != (_QWORD *)1 )
    {
      v16[4] = __rdtsc();
      v29 = a1;
    }
    if ( !a4 )
      *(_BYTE *)(v29 + 11754) = 1;
    ((void (__fastcall *)(unsigned __int64, __int64, __int64, __int64))BugCheckParameter2)(v14, v17, v53, v52);
    v4 = a1;
    if ( !a4 )
      *(_BYTE *)(a1 + 11754) = 0;
    if ( v16 != (_QWORD *)1 )
    {
      v30 = __rdtsc();
      v16[3] += (((unsigned __int64)HIDWORD(v30) << 32) | (unsigned int)v30) - v16[4];
      ++v16[5];
    }
    v31 = v47;
    v27[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v28 != *(_DWORD *)(v31 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v28, *(unsigned int *)(v31 + 484));
    v10 = v44;
    if ( v44 )
    {
      v32 = *((_DWORD *)v44 + 1);
      v33 = *v44;
      v34 = EtwpActiveSystemLoggers;
      i = !_BitScanForward(&v35, EtwpActiveSystemLoggers);
      v57[2] = &BugCheckParameter2;
      LODWORD(v45) = v35;
      v57[3] = 8LL;
      if ( !i )
      {
        do
        {
          v34 &= v34 - 1;
          v36 = (char *)&EtwpGroupMasks + 32 * v35;
          if ( v36 )
          {
            if ( (*((_DWORD *)v36 + 1) & 0x80u) != 0 )
            {
              v37 = (unsigned __int16)word_1402FD342[2 * v35];
              v38 = (unsigned __int16)EtwpSystemLogger[2 * v35];
              v57[1] = 8LL;
              v57[0] = &v56[v37 + 2];
              EtwpLogKernelEvent((unsigned int)v57, v35, v38, 2, v33, v32);
            }
          }
          i = !_BitScanForward(&v35, v34);
        }
        while ( !i );
        v9 = v48;
        v4 = a1;
        LODWORD(v45) = v35;
      }
      v10 = v44;
    }
    _disable();
    if ( !*((_DWORD *)v9 + 6) )
      goto LABEL_55;
    v5 = v46;
    v6 = v49;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v11);
LABEL_55:
  result = v54;
  *(_QWORD *)(v4 + 11536) = v54;
  return result;
}
