/*
 * XREFs of AMLISetNSObjectNotifyFlag @ 0x1C002C2FC
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C009B958 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLISetNSObjectNotifyFlag(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *(_WORD *)(*a1 + 64) |= 0x10u;
  return result;
}
