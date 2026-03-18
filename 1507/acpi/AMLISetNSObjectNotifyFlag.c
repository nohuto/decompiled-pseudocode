/*
 * XREFs of AMLISetNSObjectNotifyFlag @ 0x1C0023C7C
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007A9F8 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLISetNSObjectNotifyFlag(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *(_WORD *)(*a1 + 56) |= 0x10u;
  return result;
}
