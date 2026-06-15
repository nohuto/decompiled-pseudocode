/*
 * XREFs of ?Find@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPickerHostContext@@PEAU3@@Z @ 0x1800390E4
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003904C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::Find(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)PickerHostContextManager::s_PickerHostContextList;
  if ( !PickerHostContextManager::s_PickerHostContextList )
    return 0LL;
  while ( result[2] != *a2 )
  {
    result = (_QWORD *)*result;
    if ( !result )
      return 0LL;
  }
  return result;
}
