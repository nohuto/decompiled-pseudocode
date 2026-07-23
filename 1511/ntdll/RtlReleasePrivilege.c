/*
 * XREFs of RtlReleasePrivilege @ 0x180082A10
 * Callers:
 *     LdrpMapViewOfSection @ 0x18000EA30 (LdrpMapViewOfSection.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x1800A58E0 (NtAdjustPrivilegesToken.c)
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
