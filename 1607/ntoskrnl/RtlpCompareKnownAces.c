/*
 * XREFs of RtlpCompareKnownAces @ 0x140414F40
 * Callers:
 *     RtlpIsDuplicateAce @ 0x140414E20 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx

  v4 = *a2;
  return *((_BYTE *)RtlBaseAceType + v4) == *((_BYTE *)RtlBaseAceType + *a1)
      && (!*((_BYTE *)&RtlIsSystemAceType + v4) || ((a1[1] ^ a2[1]) & 0xC0) == 0)
      && RtlEqualSid(a2 + 8, a1 + 8);
}
