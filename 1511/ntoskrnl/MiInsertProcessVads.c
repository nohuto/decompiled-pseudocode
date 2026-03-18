/*
 * XREFs of MiInsertProcessVads @ 0x140462C58
 * Callers:
 *     MiInitializeUserNoAccess @ 0x14046232C (MiInitializeUserNoAccess.c)
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertProcessVads(struct _KPROCESS *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v4 = (unsigned __int64)v2;
      v2 = (_QWORD *)*v2;
      MiInsertVadCharges(v4, a1);
      result = MiGetWsAndInsertVad(v4, v5, v6);
    }
    while ( v2 );
  }
  return result;
}
