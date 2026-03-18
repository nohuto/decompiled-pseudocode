/*
 * XREFs of DrvSetMDEVPowerState @ 0x1C0088B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvSetMDEVPowerState(__int64 a1, int a2)
{
  unsigned int i; // r8d
  __int64 result; // rax
  __int64 v5; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
  {
    result = *(_QWORD *)(32 * (i + 1LL) + a1);
    v5 = *(_QWORD *)(result + 2600);
    if ( a2 )
      *(_DWORD *)(v5 + 160) &= ~0x80000000;
    else
      *(_DWORD *)(v5 + 160) |= 0x80000000;
  }
  return result;
}
