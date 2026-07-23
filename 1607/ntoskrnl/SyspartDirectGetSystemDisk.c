/*
 * XREFs of SyspartDirectGetSystemDisk @ 0x1406D6180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SyspartDirectGetSystemDisk(void *a1, unsigned int a2, unsigned int *a3)
{
  return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk, a1, a2, a3);
}
