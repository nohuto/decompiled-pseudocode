/*
 * XREFs of CmpNotifyChangeKey @ 0x14042C358
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     CmpFreePostBlock @ 0x1404ECFB0 (CmpFreePostBlock.c)
 *     CmpPostNotify @ 0x1404ECFFC (CmpPostNotify.c)
 */

__int64 __fastcall CmpNotifyChangeKey(__int64 a1, __int64 a2, int a3, char a4, int a5, int a6, __int64 a7)
{
  __int64 v8; // rdx
  char *v12; // rbx
  __int64 v13; // r14
  char *PoolWithQuotaTag; // rax
  __int64 **v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // edx
  __int64 **v19; // rcx
  __int64 *v20; // r8
  unsigned __int8 CurrentIrql; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v24; // rcx
  struct _KTHREAD *v25; // rax
  __int64 **p_QuantumTarget; // rax
  _QWORD *v27; // rdx
  unsigned __int64 *v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rax
  int v31; // ecx
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-58h] BYREF
  char v34; // [rsp+50h] [rbp-48h]
  char v35; // [rsp+51h] [rbp-47h]
  char v36; // [rsp+52h] [rbp-46h]
  _QWORD *v37; // [rsp+58h] [rbp-40h] BYREF
  int v38; // [rsp+60h] [rbp-38h]
  int v39; // [rsp+64h] [rbp-34h]

  v8 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v8 + 4) & 0x20000) != 0 )
  {
    v29 = -1073741444;
    goto LABEL_35;
  }
  v12 = *(char **)(a1 + 16);
  v13 = *(_QWORD *)(v8 + 32);
  if ( !v12 )
  {
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x626E4D43u);
    v12 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      *((_QWORD *)PoolWithQuotaTag + 4) = *(_QWORD *)(a1 + 8);
      *((_DWORD *)PoolWithQuotaTag + 12) = a3 & 0x3FFFFFFF | ((a4 & 1) << 30);
      *((_QWORD *)PoolWithQuotaTag + 3) = PoolWithQuotaTag + 16;
      *((_QWORD *)PoolWithQuotaTag + 2) = PoolWithQuotaTag + 16;
      *(_QWORD *)(a1 + 16) = PoolWithQuotaTag;
      *((_QWORD *)PoolWithQuotaTag + 5) = a1;
      SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(PoolWithQuotaTag + 56));
      v15 = (__int64 **)(v13 + 2712);
      if ( *(_QWORD *)(v13 + 2712) )
      {
        while ( 1 )
        {
          v15 = (__int64 **)*v15;
          if ( ((*((_DWORD *)v15[4] + 1) >> 21) & 0x3FFu) > ((*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) >> 21) & 0x3FFu) )
            break;
          if ( !*v15 )
            goto LABEL_7;
        }
        *(_QWORD *)v12 = v15;
        *v15[1] = (__int64)v12;
        *((_QWORD *)v12 + 1) = v15[1];
        v15[1] = (__int64 *)v12;
      }
      else
      {
LABEL_7:
        *v15 = (__int64 *)v12;
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = v15;
      }
      goto LABEL_9;
    }
    v29 = -1073741670;
LABEL_35:
    CmpFreePostBlock(a2);
    return v29;
  }
LABEL_9:
  v16 = *((_QWORD *)v12 + 2);
  *(_QWORD *)a2 = v16;
  *(_QWORD *)(a2 + 8) = v12 + 16;
  if ( *(char **)(v16 + 8) != v12 + 16 )
    __fastfail(3u);
  *(_QWORD *)(v16 + 8) = a2;
  *((_QWORD *)v12 + 2) = a2;
  v17 = (_QWORD *)(a2 + 32);
  if ( (*(_DWORD *)(a2 + 56) & 0x10000) != 0 )
  {
    *(_QWORD *)(a2 + 40) = a2 + 32;
    *v17 = v17;
  }
  else
  {
    v27 = *(_QWORD **)(a7 + 40);
    *v17 = a7 + 32;
    *(_QWORD *)(a2 + 40) = v27;
    if ( *v27 != a7 + 32 )
      __fastfail(3u);
    *v27 = v17;
    *(_QWORD *)(a7 + 40) = v17;
  }
  v18 = 3;
  if ( (unsigned int)(unsigned __int16)*(_DWORD *)(a2 + 56) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentThread = KeGetCurrentThread();
    if ( (BYTE4(CurrentThread[1].Queue) & 8) == 0 )
    {
      BYTE4(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v32, 0);
      CurrentThread[1].InitialStack = &CurrentThread[1].QuantumTarget;
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].QuantumTarget;
    }
    v24 = (__int64 *)(a2 + 16);
    v25 = KeGetCurrentThread();
    if ( (*(_DWORD *)(a2 + 56) & 0x10000) != 0 )
    {
      p_QuantumTarget = (__int64 **)&v25[1].QuantumTarget;
      v20 = *p_QuantumTarget;
      *v24 = (__int64)*p_QuantumTarget;
      *(_QWORD *)(a2 + 24) = p_QuantumTarget;
      if ( (__int64 **)v20[1] != p_QuantumTarget )
        __fastfail(3u);
      v20[1] = (__int64)v24;
      *p_QuantumTarget = v24;
    }
    else
    {
      v28 = &v25[1].QuantumTarget;
      v20 = (__int64 *)v28[1];
      *v24 = (__int64)v28;
      *(_QWORD *)(a2 + 24) = v20;
      if ( (unsigned __int64 *)*v20 != v28 )
        __fastfail(3u);
      *v20 = (__int64)v24;
      v28[1] = (unsigned __int64)v24;
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    v19 = (__int64 **)qword_14077E750;
    v20 = &CmpAsyncKernelPostList;
    *(_QWORD *)(a2 + 24) = qword_14077E750;
    *(_QWORD *)(a2 + 16) = &CmpAsyncKernelPostList;
    if ( *v19 != &CmpAsyncKernelPostList )
      __fastfail(3u);
    *v19 = (__int64 *)(a2 + 16);
    qword_14077E750 = a2 + 16;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x2000000) != 0 )
  {
    v30 = *(_QWORD *)(a1 + 8);
    v31 = *(_DWORD *)(a2 + 56);
    v39 = 0;
    v33[1] = v30;
    v34 = *(_BYTE *)(a2 + 56);
    v36 = BYTE2(v31) & 1;
    v37 = v33;
    v33[0] = a2;
    v35 = a4;
    v38 = 19;
    EtwTraceKernelEvent((int)&v37, 1, 0x42000000u, 0x930u, 5249282);
  }
  if ( *((int *)v12 + 12) >= 0 )
    return 259LL;
  CmpPostNotify((_DWORD)v12, v18, (_DWORD)v20, 268, 1, 0LL, 0LL);
  return 0LL;
}
