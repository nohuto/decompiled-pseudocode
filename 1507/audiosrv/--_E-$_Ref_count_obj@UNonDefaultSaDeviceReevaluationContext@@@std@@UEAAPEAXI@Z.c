/*
 * XREFs of ??_E?$_Ref_count_obj@UNonDefaultSaDeviceReevaluationContext@@@std@@UEAAPEAXI@Z @ 0x180091E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj<NonDefaultSaDeviceReevaluationContext>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
