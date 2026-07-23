/*
 * XREFs of RtlReleasePrivilege @ 0x180087820
 * Callers:
 *     LdrpMapViewOfSection @ 0x18002F344 (LdrpMapViewOfSection.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x1800A6C40 (NtAdjustPrivilegesToken.c)
 */

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  void *v2; // rcx
  char *v3; // r8

  if ( (*((_DWORD *)StatePointer + 8) & 3) != 1 )
    NtAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0LL, 0LL);
  if ( (*((_BYTE *)StatePointer + 32) & 1) != 0 )
  {
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)StatePointer + 8, 8u);
    v2 = (void *)*((_QWORD *)StatePointer + 1);
    if ( v2 )
      NtClose(v2);
  }
  v3 = (char *)*((_QWORD *)StatePointer + 2);
  if ( v3 != (char *)StatePointer + 36 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  NtClose(*(HANDLE *)StatePointer);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, StatePointer);
}
