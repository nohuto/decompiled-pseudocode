/*
 * XREFs of LdrpDestroyNode @ 0x180074C74
 * Callers:
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpCondenseGraphRecurse @ 0x180074B30 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
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
