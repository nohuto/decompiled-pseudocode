/*
 * XREFs of Srv_ResetTotalEnergyUsage @ 0x18004BEA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z @ 0x18004BB20 (-GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z.c)
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
