/*
 * XREFs of Srv_ResetTotalEnergyUsage @ 0x1800467A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z @ 0x18004647C (-GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z.c)
 */

__int64 __fastcall Srv_ResetTotalEnergyUsage(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4[4]; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v5[64]; // [rsp+30h] [rbp-118h] BYREF

  v4[0] = 128;
  result = GetPackageFullNameFromRPCContext(v4, v5);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, _QWORD))g_pAppEnergyManager->lpVtbl[3].AddRef)(
             g_pAppEnergyManager,
             v5,
             a2);
  return result;
}
