/*
 * XREFs of ?GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z @ 0x18004BB20
 * Callers:
 *     Srv_QueryApplicationEnergyUsage @ 0x18004BCB0 (Srv_QueryApplicationEnergyUsage.c)
 *     Srv_RegisterForEnergyChangeNotifications @ 0x18004BDA0 (Srv_RegisterForEnergyChangeNotifications.c)
 *     Srv_ResetTotalEnergyUsage @ 0x18004BEA0 (Srv_ResetTotalEnergyUsage.c)
 *     Srv_UnRegisterForEnergyChangeNotifications @ 0x18004C250 (Srv_UnRegisterForEnergyChangeNotifications.c)
 * Callees:
 *     ?GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z @ 0x180053F5C (-GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z.c)
 *     ?GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z @ 0x180054030 (-GetPackageFullNameFromProcessId@Shared@DevPlat@@YAJKPEAIPEAG@Z.c)
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
