/*
 * XREFs of ??_G?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x180019670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
