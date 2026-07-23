/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x140002AE4
 * Callers:
 *     ExInitializeLookasideListEx @ 0x140002AA0 (ExInitializeLookasideListEx.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ExInitializeLookasideListExInternal(
        PSLIST_HEADER SListHead,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PPRIVILEGE_SET Privileges),
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int16 v9; // si
  int v12; // r12d
  int v13; // ebp
  __int64 *v14; // rdi
  KSPIN_LOCK *v15; // r15
  int v16; // ebp
  PVOID (__stdcall *v17)(POOL_TYPE, SIZE_T, ULONG); // rax
  void (__stdcall *v18)(PPRIVILEGE_SET); // rax
  KIRQL v19; // dl
  PSLIST_HEADER *v20; // rax
  PSLIST_HEADER v21; // rbx

  v9 = a8;
  if ( a8 )
  {
    if ( (unsigned __int16)(a8 - 256) > 0x300u )
      return 3221225718LL;
  }
  else
  {
    v9 = 256;
  }
  if ( a9 )
    v9 = 0;
  v12 = a6;
  if ( a6 <= 8 )
    v12 = 8;
  if ( ((a5 - 1) & a5) != 0 || (a5 & 0xFFFFFFFC) != 0 )
    return 3221225715LL;
  if ( (a5 & 1) != 0 )
  {
    v13 = 16;
  }
  else
  {
    v13 = 0;
    if ( a5 )
      v13 = 8;
  }
  if ( (a4 & 0xFFFFFC18) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  if ( (a4 & 1) != 0 )
  {
    v14 = &ExPagedLookasideListHead;
    v15 = &ExPagedLookasideLock;
  }
  else
  {
    v14 = &ExNPagedLookasideListHead;
    v15 = &ExNPagedLookasideLock;
  }
  InitializeSListHead(SListHead);
  LOWORD(SListHead[1].Alignment) = ExMinimumLookasideDepth;
  v16 = a4 | v13;
  *((_DWORD *)&SListHead[2].HeaderX64 + 2) = a7;
  v17 = a2;
  *((_WORD *)&SListHead[1].HeaderX64 + 1) = v9;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 4) = 0LL;
  if ( !a2 )
    v17 = CmpAllocatePoolWithTag;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 12) = 0LL;
  SListHead[3].Alignment = (unsigned __int64)v17;
  v18 = a3;
  *((_DWORD *)&SListHead[2].HeaderX64 + 1) = v16;
  *((_DWORD *)&SListHead[2].HeaderX64 + 3) = v12;
  if ( !a3 )
    v18 = MiDeleteSubsection;
  SListHead[5].Alignment = 0LL;
  SListHead[3].Region = (unsigned __int64)v18;
  v19 = KeAcquireSpinLockRaiseToDpc(v15);
  if ( a9 )
  {
    LOWORD(SListHead[1].Alignment) = v9;
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    LODWORD(SListHead[1].Alignment) = -65536;
  }
  v20 = (PSLIST_HEADER *)v14[1];
  v21 = SListHead + 4;
  if ( *v20 != (PSLIST_HEADER)v14 )
    __fastfail(3u);
  v21->Alignment = (unsigned __int64)v14;
  v21->Region = (unsigned __int64)v20;
  *v20 = v21;
  v14[1] = (__int64)v21;
  KeReleaseSpinLock(v15, v19);
  return 0LL;
}
