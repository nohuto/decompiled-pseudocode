/*
 * XREFs of MiInsertProcessVads @ 0x140467DD0
 * Callers:
 *     MiInitializeUserNoAccess @ 0x1404626E4 (MiInitializeUserNoAccess.c)
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiGetWsAndInsertVad @ 0x14008A9F0 (MiGetWsAndInsertVad.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertProcessVads(__int64 a1, _QWORD *a2)
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
