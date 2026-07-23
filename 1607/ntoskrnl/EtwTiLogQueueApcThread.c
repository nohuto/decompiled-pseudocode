/*
 * XREFs of EtwTiLogQueueApcThread @ 0x14022873C
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiVadQueryEventWrite @ 0x140228DC0 (EtwpTiVadQueryEventWrite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void EtwTiLogQueueApcThread(char a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // r15
  _KPROCESS *v7; // r12
  const EVENT_DESCRIPTOR *v8; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  struct _KTHREAD *CurrentThread; // rdx
  char *v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rcx
  char *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ebx
  BOOLEAN v28; // al
  __int64 v29; // rcx
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h]
  _KPROCESS *Process; // [rsp+58h] [rbp-28h]
  __int64 v34; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+68h] [rbp-18h] BYREF
  __int64 v36; // [rsp+70h] [rbp-10h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+58h] BYREF
  va_list va; // [rsp+D8h] [rbp+58h]
  __int64 v39; // [rsp+E0h] [rbp+60h] BYREF
  va_list va1; // [rsp+E0h] [rbp+60h]
  va_list va2; // [rsp+E8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v37 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL) )
  {
    v6 = *(_QWORD *)(a2 + 544);
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = KeGetCurrentThread()->Process;
    if ( v7 != (_KPROCESS *)v6 )
    {
      v8 = (const EVENT_DESCRIPTOR *)&THREATINT_QUEUEUSERAPC_REMOTE_KERNEL_CALLER;
      if ( a1 )
        v8 = &THREATINT_QUEUEUSERAPC_REMOTE;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v8) )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x6E734954u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          v11 = EtwpTiFillProcessIdentity((__int64)PoolWithTag, (__int64)Process, &v34);
          CurrentThread = KeGetCurrentThread();
          v13 = (char *)&v10[2 * v11];
          *((_DWORD *)v13 + 3) = 0;
          *(_QWORD *)v13 = (char *)CurrentThread + 1592;
          *((_DWORD *)v13 + 2) = 4;
          *((_DWORD *)v13 + 7) = 0;
          *((_QWORD *)v13 + 2) = CurrentThread + 1;
          *((_DWORD *)v13 + 6) = 8;
          v14 = EtwpTiFillProcessIdentity((__int64)&v10[2 * v11 + 4], v6, &v35) + v11 + 2;
          v15 = 2LL * v14;
          v14 += 2;
          v16 = (char *)&v10[v15];
          *((_DWORD *)v16 + 3) = 0;
          *(_QWORD *)v16 = a2 + 1592;
          *((_DWORD *)v16 + 2) = 4;
          *((_DWORD *)v16 + 7) = 0;
          *((_QWORD *)v16 + 2) = a2 + 1504;
          *((_DWORD *)v16 + 6) = 8;
          v17 = EtwpTiFillProcessIdentity((__int64)&v10[2 * v14], (__int64)v7, &v36);
          LOBYTE(v30) = (*(_DWORD *)(a2 + 116) & 0x10) != 0;
          v18 = v17 + v14;
          v19 = v18 + 1;
          v18 *= 2LL;
          v10[v18] = &v30;
          v10[v18 + 1] = 1LL;
          v20 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 1064LL);
          if ( !v20 || (v21 = *(_WORD *)(v20 + 8), v21 != 332) && v21 != 452 || (v31 = -(a3 >> 2), v31 > 0xFFFFFFFF) )
            v31 = a3;
          v22 = 2LL * v19;
          v10[v22] = &v31;
          v10[v22 + 1] = 8LL;
          v23 = v19 + 1;
          v24 = v19 + 2;
          v23 *= 2LL;
          v10[v23] = va;
          v10[v23 + 1] = 8LL;
          v25 = 2LL * v24;
          v10[v25] = va1;
          v10[v25 + 1] = 8LL;
          v26 = v24 + 1;
          v27 = v24 + 2;
          v26 *= 2LL;
          v10[v26] = va2;
          v10[v26 + 1] = 8LL;
          v28 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL);
          v29 = v32;
          if ( v28 )
            v29 = v37;
          v32 = v29;
          EtwpTiVadQueryEventWrite((_DWORD)v10, 42, v27, v6, (__int64)&v31, 2, (__int64)v8, v28, v30);
          ExFreePoolWithTag(v10, 0);
        }
      }
    }
  }
}
