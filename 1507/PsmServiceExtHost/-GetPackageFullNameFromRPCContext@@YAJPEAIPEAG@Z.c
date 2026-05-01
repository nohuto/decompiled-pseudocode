/*
 * XREFs of ?GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z @ 0x18004647C
 * Callers:
 *     Srv_QueryApplicationEnergyUsage @ 0x1800465B0 (Srv_QueryApplicationEnergyUsage.c)
 *     Srv_RegisterForEnergyChangeNotifications @ 0x1800466A0 (Srv_RegisterForEnergyChangeNotifications.c)
 *     Srv_ResetTotalEnergyUsage @ 0x1800467A0 (Srv_ResetTotalEnergyUsage.c)
 *     Srv_UnRegisterForEnergyChangeNotifications @ 0x180046830 (Srv_UnRegisterForEnergyChangeNotifications.c)
 * Callees:
 *     ?GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z @ 0x18004D360 (-GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z.c)
 *     ?GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z @ 0x18004D434 (-GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z.c)
 */

__int64 __fastcall GetPackageFullNameFromRPCContext(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned __int16 *v5; // r9
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  dwProcessId = 0;
  result = DevPlat::Shared::GetRPCClientProcessId((DevPlat::Shared *)&dwProcessId, a2);
  if ( (int)result >= 0 )
    return DevPlat::Shared::GetPackageFullNameFromProcessId(dwProcessId, a1, (PWSTR)a2, v5);
  return result;
}
