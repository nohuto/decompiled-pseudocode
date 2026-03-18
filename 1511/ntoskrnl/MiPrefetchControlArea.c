/*
 * XREFs of MiPrefetchControlArea @ 0x1404AF248
 * Callers:
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1400387EC (MiPfCompletePrefetchIos.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiPfExecuteReadList @ 0x1403F70AC (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x14047B59C (MiReleaseReadListResources.c)
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
  List = MiPfPrepareSequentialReadList(0LL, a1, a2, a4, a3, a4, a6, P);
  if ( List >= 0 && (v8 = (char *)P[0]) != 0LL )
  {
    ++BYTE2(CurrentThread[1].Teb);
    *((_DWORD *)v8 + 18) = 0;
    v9 = MiPfPutPagesInTransition((__int64)v8, 0LL);
    if ( v9 >= 0 && *((char **)v8 + 11) != v8 + 88 )
    {
      MiPfExecuteReadList((__int64)v8, a5, a6);
      MiPfCompletePrefetchIos((ULONG_PTR *)v8 + 11, 0LL, 0LL);
    }
    MiReleaseReadListResources((__int64)v8);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    --BYTE2(CurrentThread[1].Teb);
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return (unsigned int)List;
  }
}
