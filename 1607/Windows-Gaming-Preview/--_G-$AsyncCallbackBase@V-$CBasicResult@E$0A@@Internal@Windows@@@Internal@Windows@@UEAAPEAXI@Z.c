/*
 * XREFs of ??_G?$AsyncCallbackBase@V?$CBasicResult@E$0A@@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x180017350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CBasicResult<unsigned char,0>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CBasicResult<unsigned char,0>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
