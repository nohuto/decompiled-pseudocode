/*
 * XREFs of MiPrefetchControlArea @ 0x14050A6B4
 * Callers:
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x140023494 (MiPfCompletePrefetchIos.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14042B620 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x14042B724 (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  int List; // esi
  char *v8; // rbx
  int v9; // ebp
  PVOID P[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0LL, a1, a2, a4, a3, a4, a6, (__int64 *)P);
  if ( List >= 0 && (v8 = (char *)P[0]) != 0LL )
  {
    ++BYTE6(CurrentThread[1].Queue);
    *((_DWORD *)v8 + 18) = 0;
    v9 = MiPfPutPagesInTransition((__int64)v8, 0LL);
    if ( v9 >= 0 && *((char **)v8 + 11) != v8 + 88 )
    {
      MiPfExecuteReadList((__int64)v8, a5, a6, 0LL);
      MiPfCompletePrefetchIos((ULONG_PTR *)v8 + 11, 0LL, 0LL);
    }
    MiReleaseReadListResources((__int64)v8);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    --BYTE6(CurrentThread[1].Queue);
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return (unsigned int)List;
  }
}
