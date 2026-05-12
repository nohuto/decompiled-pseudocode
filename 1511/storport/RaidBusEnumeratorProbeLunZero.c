/*
 * XREFs of RaidBusEnumeratorProbeLunZero @ 0x1C000E22C
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C000E3D0 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorReleaseUnit @ 0x1C000E604 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C000E9CC (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C000EEB0 (RaidBusEnumeratorGetUnit.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorProbeLunZero(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _BYTE v5[104]; // [rsp+30h] [rbp-68h] BYREF

  memset(v5, 0, 0x58uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v5);
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumProbeLunZeroCallback, a1, a2, (unsigned int)v5, 36);
    RaidBusEnumeratorReleaseUnit(a1, v5);
    return v5[85] == 0 ? 0xC000000E : 0;
  }
  return result;
}
