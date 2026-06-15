/*
 * XREFs of ??_E?$CAggregateValuesBase@W4CpGlitchEvent@@PEAI@@UEAAPEAXI@Z @ 0x14003AD00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
