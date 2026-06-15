/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800391B8
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003904C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAt(
        __int64 a1,
        __int64 *a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (__int64 *)PickerHostContextManager::s_PickerHostContextList )
    PickerHostContextManager::s_PickerHostContextList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_1800E55B8 )
    qword_1800E55B8 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  return ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(
           (__int64)&PickerHostContextManager::s_PickerHostContextList,
           a2);
}
