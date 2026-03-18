/*
 * XREFs of DxgkGetGpuUsageStatistics @ 0x1C00ADB20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct DXGGLOBAL *__fastcall DxgkGetGpuUsageStatistics(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *result; // rax

  result = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  *a1 = *((_QWORD *)result + 12);
  return result;
}
