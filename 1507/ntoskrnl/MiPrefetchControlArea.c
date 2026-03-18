/*
 * XREFs of MiPrefetchControlArea @ 0x14051B0F4
 * Callers:
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x140086168 (MiPfCompletePrefetchIos.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x1404B2C24 (MiPfExecuteReadList.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  int List; // esi
  _DWORD *v8; // rdi
  __int16 v9; // ax
  int v11; // ebp
  __int16 v12; // ax
  PVOID P[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0LL, a1, a2, a4, a3, a4, a6, (__int64 *)P);
  if ( List >= 0 && (v8 = P[0]) != 0LL )
  {
    ++BYTE2(CurrentThread[1].Teb);
    v8[18] = 0;
    v11 = MiPfPutPagesInTransition((__int64)v8, 0LL);
    if ( v11 >= 0 && *((_DWORD **)v8 + 11) != v8 + 22 )
    {
      MiPfExecuteReadList((__int64)v8, a5, a6);
      MiPfCompletePrefetchIos((_BYTE **)v8 + 11, 0LL, 0LL);
    }
    MiReleaseReadListResources((__int64)v8);
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    --BYTE2(CurrentThread[1].Teb);
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v11;
  }
  else
  {
    v9 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return (unsigned int)List;
  }
}
