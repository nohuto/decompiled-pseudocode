/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x1401D8810
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x140630CC8 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiEmptyWorkingSetHelper @ 0x14001F788 (MiEmptyWorkingSetHelper.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiRotateHeadWsle @ 0x1400B6674 (MiRotateHeadWsle.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiLockSetPfnPriority @ 0x1400E8410 (MiLockSetPfnPriority.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rsi
  _DWORD *v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned int v9; // r12d
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  __int64 *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rcx
  char v23; // dl
  bool v24; // zf
  KIRQL v26; // [rsp+20h] [rbp-158h]
  unsigned __int64 v27; // [rsp+28h] [rbp-150h]
  int v29; // [rsp+34h] [rbp-144h]
  unsigned __int64 v30; // [rsp+38h] [rbp-140h]
  __int64 v31; // [rsp+40h] [rbp-138h]
  unsigned __int64 v33; // [rsp+50h] [rbp-128h]
  __int64 v34; // [rsp+58h] [rbp-120h]
  __int64 v35; // [rsp+60h] [rbp-118h] BYREF
  unsigned int v36[40]; // [rsp+70h] [rbp-108h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v37; // [rsp+110h] [rbp-68h] BYREF

  v3 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)a1 )
  {
    v29 = 0;
  }
  else
  {
    v29 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v37);
  }
  v5 = -1LL;
  v36[0] = 0;
  v6 = (_DWORD *)(a1 + 1280);
  v34 = 0LL;
  v7 = *(_QWORD *)(a1 + 1464);
  v8 = 0LL;
  v9 = 0;
  v10 = 2;
  while ( 1 )
  {
    v31 = 0LL;
    v27 = v8;
    v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
    if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
      break;
    if ( v10 == 2 )
    {
      if ( *(_DWORD *)(v7 + 64) == 16 )
      {
        v10 = 1;
        v9 = 13;
LABEL_10:
        v30 = *(_QWORD *)(v7 + 8LL * v9 + 112);
        v11 = MiRotateHeadWsle(v7, v9);
        v14 = v30;
        v5 = v11;
        v15 = 0LL;
        v33 = 0LL;
        goto LABEL_14;
      }
      v10 = 0;
      v9 = 5;
    }
    if ( v10 )
      goto LABEL_10;
    if ( ++v5 < *(_QWORD *)(v7 + 8) )
      v5 = *(_QWORD *)(v7 + 8);
    v14 = *(_QWORD *)&v6[2 * v9 + 10];
    v15 = *(_QWORD *)(v7 + 16);
    v33 = v15;
    v30 = v14;
    while ( 1 )
    {
LABEL_14:
      if ( v10 )
      {
        if ( v5 == 0xFFFFFFFFFLL )
          goto LABEL_16;
      }
      else if ( v5 > v15 )
      {
        goto LABEL_16;
      }
      if ( v8 >= v14 )
      {
LABEL_16:
        if ( v36[0] )
          MiFreeWsleList(a1 + 1280, v36, 0);
        goto LABEL_47;
      }
      v16 = *(_QWORD *)(*(_QWORD *)(v7 + 496) + v5 * *(unsigned int *)(v7 + 64));
      if ( (v16 & 1) != 0 && (*(_QWORD *)(*(_QWORD *)(v7 + 496) + v5 * *(unsigned int *)(v7 + 64)) & 0xE00LL) == 0xC00 )
      {
        ++v27;
        v17 = (v16 & 0x800000000000LL) != 0 ? v16 | 0xFFFF000000000000uLL : v16 & 0xFFFFFFFFFFFFLL;
        v18 = (__int64 *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v35 = MI_READ_PTE_LOCK_FREE(v18);
        if ( (v35 & 0x20) == 0 )
        {
          v19 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v35);
          v12 = 0x3FFFFFFFFFFFFFFFLL;
          v20 = 48 * v19 - 0x58000000000LL;
          if ( (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            v12 = a3;
            if ( (a3 & 2) == 0 || (v13 = 0x200000000000000LL, (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0) )
            {
              v21 = MI_GET_PFN_PRIORITY(v20);
              v24 = (v23 & 1) == 0;
              v12 = a2;
              if ( v24 )
              {
                if ( v21 > a2 )
                  MiLockSetPfnPriority(v22, a2, v13);
              }
              else if ( a2 == 8 || v21 == a2 )
              {
                MiEmptyWorkingSetHelper(a1 + 1280, (__int64)v18, v5, v36);
                ++v31;
              }
            }
          }
        }
      }
      if ( (++v34 & 0xF) == 0 && (*v6 & 0x40000000) != 0 )
        break;
      if ( KeShouldYieldProcessor() )
        break;
      if ( v10 )
        v5 = MiRotateHeadWsle(v7, v9);
      else
        ++v5;
      v8 = v27;
      v14 = v30;
      v15 = v33;
    }
    if ( v36[0] )
    {
      MiFreeWsleList(a1 + 1280, v36, 0);
      v36[0] = 0;
    }
    LOBYTE(v12) = v26;
    MiUnlockWorkingSetExclusive(a1 + 1280, v12, v13);
    v8 = v27 - v31;
  }
  v3 = -1073741558;
LABEL_47:
  LOBYTE(v12) = v26;
  MiUnlockWorkingSetExclusive(a1 + 1280, v12, v13);
  if ( v29 == 1 )
    KiUnstackDetachProcess(&v37, 0LL);
  return v3;
}
