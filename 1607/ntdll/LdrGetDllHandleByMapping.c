/*
 * XREFs of LdrGetDllHandleByMapping @ 0x1800784A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C80 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByMapping @ 0x180078550 (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x1800D2D5C (LdrpFatalExceptionFilter.c)
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
