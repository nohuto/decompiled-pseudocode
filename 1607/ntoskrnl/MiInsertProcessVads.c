/*
 * XREFs of MiInsertProcessVads @ 0x14046D884
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046D378 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeUserNoAccess @ 0x1404DC360 (MiInitializeUserNoAccess.c)
 * Callees:
 *     MiGetWsAndInsertVad @ 0x140030AE0 (MiGetWsAndInsertVad.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertProcessVads(struct _KPROCESS *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v4 = (__int64)v2;
      v2 = (_QWORD *)*v2;
      MiInsertVadCharges(v4, a1);
      result = MiGetWsAndInsertVad(v4);
    }
    while ( v2 );
  }
  return result;
}
