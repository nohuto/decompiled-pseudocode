/*
 * XREFs of CmpNotifyChangeKey @ 0x1404000F4
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpNotifyChangeKey(__int64 a1, __int64 a2, int a3, char a4, int a5, int a6, __int64 a7)
{
  __int64 v11; // rbx
  __int64 v12; // r14
  char *PoolWithQuotaTag; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 *v20; // r8
  _QWORD *v21; // rax
  unsigned __int8 CurrentIrql; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 **v25; // rcx
  struct _KTHREAD *v26; // rax
  __int64 **p_QuantumTarget; // rax
  _QWORD *v28; // rdx
  unsigned __int64 *v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rax
  int v32; // ecx
  signed __int32 v33[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-58h] BYREF
  char v35; // [rsp+50h] [rbp-48h]
  char v36; // [rsp+51h] [rbp-47h]
  char v37; // [rsp+52h] [rbp-46h]
  _QWORD *v38; // [rsp+58h] [rbp-40h] BYREF
  int v39; // [rsp+60h] [rbp-38h]
  int v40; // [rsp+64h] [rbp-34h]

  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v30 = -1073741444;
    goto LABEL_35;
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( !v11 )
  {
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x626E4D43u);
    v11 = (__int64)PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      *((_QWORD *)PoolWithQuotaTag + 4) = *(_QWORD *)(a1 + 8);
      *((_DWORD *)PoolWithQuotaTag + 12) = a3 & 0x3FFFFFFF | ((a4 & 1) << 30);
      *((_QWORD *)PoolWithQuotaTag + 3) = PoolWithQuotaTag + 16;
      *((_QWORD *)PoolWithQuotaTag + 2) = PoolWithQuotaTag + 16;
      *(_QWORD *)(a1 + 16) = PoolWithQuotaTag;
      *((_QWORD *)PoolWithQuotaTag + 5) = a1;
      SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(PoolWithQuotaTag + 56));
      v14 = (__int64 *)(v12 + 2712);
      if ( *(_QWORD *)(v12 + 2712) )
      {
        while ( 1 )
        {
          v14 = (__int64 *)*v14;
          if ( ((*(_DWORD *)(v14[4] + 4) >> 21) & 0x3FFu) > ((*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) >> 21) & 0x3FFu) )
            break;
          if ( !*v14 )
            goto LABEL_7;
        }
        *(_QWORD *)v11 = v14;
        *(_QWORD *)v14[1] = v11;
        *(_QWORD *)(v11 + 8) = v14[1];
        v14[1] = v11;
      }
      else
      {
LABEL_7:
        *v14 = v11;
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 8) = v14;
      }
      goto LABEL_9;
    }
    v30 = -1073741670;
LABEL_35:
    CmpFreePostBlock(a2);
    return v30;
  }
LABEL_9:
  v15 = (__int64 *)(v11 + 16);
  v16 = *(_QWORD *)(v11 + 16);
  if ( *(_QWORD *)(v16 + 8) != v11 + 16 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v15;
  *(_QWORD *)a2 = v16;
  *(_QWORD *)(v16 + 8) = a2;
  *v15 = a2;
  v17 = (_QWORD *)(a2 + 32);
  if ( (*(_DWORD *)(a2 + 56) & 0x10000) != 0 )
  {
    *(_QWORD *)(a2 + 40) = a2 + 32;
    *v17 = v17;
  }
  else
  {
    v28 = *(_QWORD **)(a7 + 40);
    if ( *v28 != a7 + 32 )
      __fastfail(3u);
    *v17 = a7 + 32;
    *(_QWORD *)(a2 + 40) = v28;
    *v28 = v17;
    *(_QWORD *)(a7 + 40) = v17;
  }
  v18 = 3LL;
  if ( (unsigned int)(unsigned __int16)*(_DWORD *)(a2 + 56) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v33, 0);
      CurrentThread[1].InitialStack = &CurrentThread[1].QuantumTarget;
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].QuantumTarget;
    }
    v25 = (__int64 **)(a2 + 16);
    v26 = KeGetCurrentThread();
    if ( (*(_DWORD *)(a2 + 56) & 0x10000) != 0 )
    {
      p_QuantumTarget = (__int64 **)&v26[1].QuantumTarget;
      v20 = *p_QuantumTarget;
      if ( (__int64 **)(*p_QuantumTarget)[1] != p_QuantumTarget )
        __fastfail(3u);
      *v25 = v20;
      *(_QWORD *)(a2 + 24) = p_QuantumTarget;
      v20[1] = (__int64)v25;
      *p_QuantumTarget = (__int64 *)v25;
    }
    else
    {
      v29 = &v26[1].QuantumTarget;
      v20 = (__int64 *)v29[1];
      if ( (unsigned __int64 *)*v20 != v29 )
        __fastfail(3u);
      *v25 = (__int64 *)v29;
      *(_QWORD *)(a2 + 24) = v20;
      *v20 = (__int64)v25;
      v29[1] = (unsigned __int64)v25;
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    v19 = (_QWORD *)qword_140747790;
    v20 = &CmpAsyncKernelPostList;
    v21 = (_QWORD *)(a2 + 16);
    if ( *(__int64 **)qword_140747790 != &CmpAsyncKernelPostList )
      __fastfail(3u);
    *v21 = &CmpAsyncKernelPostList;
    *(_QWORD *)(a2 + 24) = v19;
    *v19 = v21;
    qword_140747790 = a2 + 16;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x2000000) != 0 )
  {
    v31 = *(_QWORD *)(a1 + 8);
    v32 = *(_DWORD *)(a2 + 56);
    v40 = 0;
    v34[1] = v31;
    v35 = *(_BYTE *)(a2 + 56);
    v37 = BYTE2(v32) & 1;
    v38 = v34;
    v34[0] = a2;
    v36 = a4;
    v39 = 19;
    EtwTraceKernelEvent((int)&v38, 1, 0x42000000u, 2352, 5249282);
  }
  if ( *(int *)(v11 + 48) >= 0 )
    return 259LL;
  CmpPostNotify(v11, v18, (__int64)v20, 0x10Cu, 1, 0LL, 0LL);
  return 0LL;
}
