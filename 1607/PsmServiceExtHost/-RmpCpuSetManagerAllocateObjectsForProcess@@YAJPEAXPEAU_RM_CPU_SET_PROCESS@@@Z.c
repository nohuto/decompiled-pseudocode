/*
 * XREFs of ?RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002F9B8
 * Callers:
 *     RmpCpuSetManagerRegisterProcessWithAllocation @ 0x1800315D0 (RmpCpuSetManagerRegisterProcessWithAllocation.c)
 * Callees:
 *     RmpSystemDuplicateHandle @ 0x1800377C8 (RmpSystemDuplicateHandle.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateObjectsForProcess(void *a1, void **a2)
{
  __int64 result; // rax
  DWORD ProcessId; // eax

  result = RmpSystemDuplicateHandle(a1, a2 + 2);
  if ( (int)result >= 0 )
  {
    ProcessId = GetProcessId(a2[2]);
    *((_DWORD *)a2 + 14) = ProcessId;
    a2[1] = (void *)(HIBYTE(ProcessId)
                   + 37 * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL))));
    return 0LL;
  }
  return result;
}
