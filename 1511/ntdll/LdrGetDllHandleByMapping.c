/*
 * XREFs of LdrGetDllHandleByMapping @ 0x180076C10
 * Callers:
 *     <none>
 * Callees:
 *     LdrpIncrementModuleLoadCount @ 0x180011798 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x180076CC0 (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x1800CB54C (LdrpFatalExceptionFilter.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  NTSTATUS LoadedDllByMapping; // ebx
  char *v5; // rdi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h]
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h]

  LoadedDllByMapping = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(BaseAddress, OutHeaders);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = (char *)BaseAddressa;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount((__int64)BaseAddressa);
        if ( LoadedDllByMapping >= 0 )
          *DllHandle = (PVOID)*((_QWORD *)BaseAddressa + 6);
      }
      else
      {
        LoadedDllByMapping = -1073741515;
        v5 = (char *)BaseAddressa;
      }
      LdrpDereferenceModule(v5);
    }
  }
  return LoadedDllByMapping;
}
