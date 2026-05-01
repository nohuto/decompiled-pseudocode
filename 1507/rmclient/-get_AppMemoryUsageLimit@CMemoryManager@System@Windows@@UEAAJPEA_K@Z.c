/*
 * XREFs of ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18000DE40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppMemoryInformation@System@Windows@@YAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180005E30 (-GetAppMemoryInformation@System@Windows@@YAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 */

signed int __fastcall Windows::System::CMemoryManager::get_AppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2,
        struct _PROCESS_JOB_MEMORY_INFO *a3)
{
  signed int result; // eax
  int AppMemoryInformation; // eax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return -2147024809;
  *a2 = 0LL;
  AppMemoryInformation = Windows::System::GetAppMemoryInformation((Windows::System *)&v6, 0LL, a3);
  if ( AppMemoryInformation == -1073741394 )
    return -2147024891;
  if ( AppMemoryInformation >= 0 )
  {
    *a2 = v6;
    return 0;
  }
  else
  {
    result = RtlNtStatusToDosError(AppMemoryInformation);
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
