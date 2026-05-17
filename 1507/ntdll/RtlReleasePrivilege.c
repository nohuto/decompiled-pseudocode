/*
 * XREFs of RtlReleasePrivilege @ 0x1800774D0
 * Callers:
 *     LdrpMapViewOfSection @ 0x180040BD0 (LdrpMapViewOfSection.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x180093D10 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(HANDLE *a1)
{
  HANDLE v2; // rcx
  unsigned __int64 v3; // r8

  if ( ((_DWORD)a1[4] & 3) != 1 )
    NtAdjustPrivilegesToken(*a1, 0LL, a1[2]);
  if ( ((_BYTE)a1[4] & 1) != 0 )
  {
    NtSetInformationThread(-2LL, 5LL, a1 + 1);
    v2 = a1[1];
    if ( v2 )
      NtClose(v2);
  }
  v3 = (unsigned __int64)a1[2];
  if ( (HANDLE *)v3 != (HANDLE *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  NtClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}
