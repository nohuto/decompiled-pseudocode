/*
 * XREFs of RmpSystemDuplicateHandle @ 0x1800377C8
 * Callers:
 *     ?RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002F9B8 (-RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpGameModeConstructRecipientArrayCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180031A30 (-RmpGameModeConstructRecipientArrayCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemDuplicateHandle(HANDLE SourceHandle, PHANDLE TargetHandle)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax

  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  return NtDuplicateObject(v5, SourceHandle, CurrentProcess, TargetHandle, 0, 0, 2u);
}
