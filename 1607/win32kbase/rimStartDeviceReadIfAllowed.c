/*
 * XREFs of rimStartDeviceReadIfAllowed @ 0x1C0010A58
 * Callers:
 *     rimIssueReads @ 0x1C0010984 (rimIssueReads.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0010A8C (RIMStartDeviceSpecificRead.c)
 */

__int64 __fastcall rimStartDeviceReadIfAllowed(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d

  v2 = *(_DWORD *)(a2 + 184);
  v3 = 0;
  if ( (v2 & 0x80u) == 0 && (v2 & 0x40) == 0 && (v2 & 0x100) == 0 && (v2 & 0x800) == 0 )
    return (unsigned int)RIMStartDeviceSpecificRead(a1, a2);
  return v3;
}
