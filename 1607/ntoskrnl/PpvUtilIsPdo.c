/*
 * XREFs of PpvUtilIsPdo @ 0x140701894
 * Callers:
 *     IovUtilIsWdmStack @ 0x14070E250 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140718A78 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpvUtilIsPdo(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 396) & 0x20000) == 0 )
        return 1;
    }
  }
  return result;
}
