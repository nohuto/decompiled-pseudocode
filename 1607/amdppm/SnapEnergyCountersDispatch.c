/*
 * XREFs of SnapEnergyCountersDispatch @ 0x1C0004D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall SnapEnergyCountersDispatch(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // r10

  result = (__int64 (*)(void))DevExts;
  v2 = *(_QWORD *)(DevExts + 8LL * a1);
  if ( v2 )
  {
    result = (__int64 (*)(void))qword_1C00099D8[27 * *(unsigned __int8 *)(v2 + 336)];
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
