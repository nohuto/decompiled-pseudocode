/*
 * XREFs of EngUnmapFile @ 0x1C027E600
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E8BF0 (Win32UnmapViewInSessionSpace.c)
 */

BOOL __stdcall EngUnmapFile(ULONG_PTR iFile)
{
  BOOL v1; // esi
  NTSTATUS v3; // ebx

  v1 = 0;
  if ( !iFile )
    return 0;
  v3 = Win32UnmapViewInSessionSpace(*(PVOID *)(iFile + 8));
  vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
  Win32FreePool(iFile);
  LOBYTE(v1) = v3 >= 0;
  return v1;
}
