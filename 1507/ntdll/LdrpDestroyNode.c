/*
 * XREFs of LdrpDestroyNode @ 0x18004416C
 * Callers:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpCondenseGraphRecurse @ 0x180044028 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpDestroyNode(unsigned __int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v4; // rbx

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)*v1;
      RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v1);
      v1 = v4;
    }
    while ( v4 );
  }
  return RtlFreeHeap(LdrpHeap, 0, a1);
}
