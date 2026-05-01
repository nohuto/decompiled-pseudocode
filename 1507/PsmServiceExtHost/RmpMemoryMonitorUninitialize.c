/*
 * XREFs of RmpMemoryMonitorUninitialize @ 0x18003DCC0
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 *     RmpUninitializeGlobalModules @ 0x18003996C (RmpUninitializeGlobalModules.c)
 * Callees:
 *     <none>
 */

int __fastcall RmpMemoryMonitorUninitialize(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int i; // edi
  void *v3; // rcx
  int result; // eax

  v1 = a1;
  if ( *(_QWORD *)(a1 + 48) )
  {
    SetEvent(*((HANDLE *)RmSvcGlobals + 211));
    WaitForSingleObjectEx(*(HANDLE *)(v1 + 48), 0xFFFFFFFF, 0);
    CloseHandle(*(HANDLE *)(v1 + 48));
  }
  TpSetTimer(*(_QWORD *)(v1 + 56), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(v1 + 56), 1LL);
  TpReleaseTimer(*(_QWORD *)(v1 + 56));
  for ( i = 0; i < 6; ++i )
  {
    v3 = *(void **)v1;
    if ( i )
      result = CloseHandle(v3);
    else
      result = NtClose(v3);
    v1 += 8LL;
  }
  return result;
}
