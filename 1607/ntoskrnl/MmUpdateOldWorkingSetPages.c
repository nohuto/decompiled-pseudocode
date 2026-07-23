/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x1401EA350
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x140668C44 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x140015C78 (MiEmptyWorkingSetHelper.c)
 *     MiRotateHeadWsle @ 0x140016970 (MiRotateHeadWsle.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiLockSetPfnPriority @ 0x1400A8B18 (MiLockSetPfnPriority.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // r15d
  int v9; // r14d
  ULONG_PTR *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r10
  unsigned __int64 v16; // r10
  __int64 v17; // rcx
  unsigned int PfnPriority; // eax
  __int64 v19; // rcx
  __int64 v20; // r10
  char v21; // dl
  __int64 v22; // rdx
  LONG *SharedVm; // rbx
  KIRQL v25; // [rsp+20h] [rbp-158h]
  int v26; // [rsp+24h] [rbp-154h]
  ULONG_PTR *SharedWorkingSetList; // [rsp+28h] [rbp-150h]
  unsigned __int64 v28; // [rsp+30h] [rbp-148h]
  __int64 v29; // [rsp+38h] [rbp-140h]
  __int64 v30; // [rsp+40h] [rbp-138h] BYREF
  int v31; // [rsp+48h] [rbp-130h]
  unsigned __int64 i; // [rsp+50h] [rbp-128h]
  __int64 v33; // [rsp+58h] [rbp-120h]
  __int64 v34; // [rsp+60h] [rbp-118h]
  unsigned int v35[40]; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v36[48]; // [rsp+110h] [rbp-68h] BYREF

  v3 = 0;
  v31 = a3;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)a1 )
  {
    v26 = 0;
  }
  else
  {
    v26 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v36);
  }
  v34 = *(_QWORD *)(a1 + 1296);
  v6 = -1LL;
  SharedWorkingSetList = MiGetSharedWorkingSetList(a1 + 1280);
  v30 = 0LL;
  v8 = 0;
  v35[0] = 0;
  v33 = 0LL;
  v9 = 2;
  while ( 1 )
  {
    v29 = 0LL;
    SharedVm = MiGetSharedVm(v7);
    v25 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
      break;
    v10 = SharedWorkingSetList;
    if ( v9 == 2 )
    {
      if ( *((_DWORD *)SharedWorkingSetList + 8) == 16 )
      {
        v9 = 1;
        v8 = 13;
        goto LABEL_10;
      }
      v9 = 0;
      v8 = 5;
    }
    if ( !v9 )
    {
      if ( ++v6 < SharedWorkingSetList[1] )
        v6 = SharedWorkingSetList[1];
      v12 = *(_QWORD *)(a1 + 1280 + 8LL * v8 + 40);
      v13 = SharedWorkingSetList[2];
      v28 = v12;
      goto LABEL_14;
    }
LABEL_10:
    v28 = *(_QWORD *)(v34 + 8LL * v8 + 32);
    v11 = MiRotateHeadWsle(a1 + 1280, v8);
    v10 = SharedWorkingSetList;
    v6 = v11;
    v12 = v28;
    v13 = 0LL;
LABEL_14:
    v14 = v30;
    for ( i = v13; ; v13 = i )
    {
      if ( v9 )
      {
        if ( v6 == 0xFFFFFFFFFLL )
          goto LABEL_17;
      }
      else if ( v6 > v13 )
      {
        goto LABEL_17;
      }
      if ( v14 >= v12 )
      {
LABEL_17:
        if ( v35[0] )
          MiFreeWsleList(a1 + 1280, v35, 0);
        goto LABEL_48;
      }
      v15 = *(_QWORD *)(v10[10] + v6 * *((unsigned int *)v10 + 8));
      if ( (v15 & 1) != 0 && (*(_QWORD *)(v10[10] + v6 * *((unsigned int *)v10 + 8)) & 0xE00LL) == 0xC00 )
      {
        ++v14;
        v16 = (v15 & 0x800000000000LL) != 0 ? v15 | 0xFFFF000000000000uLL : v15 & 0xFFFFFFFFFFFFLL;
        v30 = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v30 & 0x20) == 0 )
        {
          v17 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v30) - 0x58000000000LL;
          if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
            && ((v31 & 2) == 0 || (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) == 0) )
          {
            PfnPriority = MiGetPfnPriority(v17);
            if ( (v21 & 1) != 0 )
            {
              if ( a2 == 8 || PfnPriority == a2 )
              {
                MiEmptyWorkingSetHelper(a1 + 1280, v20, v6, v35);
                ++v29;
              }
            }
            else if ( PfnPriority > a2 )
            {
              MiLockSetPfnPriority(v19, a2);
            }
          }
        }
      }
      if ( (++v33 & 0xF) == 0 && MiWorkingSetIsContended(a1 + 1280) )
        break;
      if ( KeShouldYieldProcessor() )
        break;
      if ( v9 )
        v6 = MiRotateHeadWsle(a1 + 1280, v8);
      else
        ++v6;
      v10 = SharedWorkingSetList;
      v12 = v28;
    }
    if ( v35[0] )
    {
      MiFreeWsleList(a1 + 1280, v35, 0);
      v35[0] = 0;
    }
    LOBYTE(v22) = v25;
    MiUnlockWorkingSetExclusive(a1 + 1280, v22);
    v7 = a1 + 1280;
    v30 = v14 - v29;
  }
  v3 = -1073741558;
LABEL_48:
  LOBYTE(v12) = v25;
  MiUnlockWorkingSetExclusive(a1 + 1280, v12);
  if ( v26 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v36, 0);
  return v3;
}
