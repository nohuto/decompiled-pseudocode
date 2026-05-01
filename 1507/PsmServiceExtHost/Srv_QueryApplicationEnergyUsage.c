/*
 * XREFs of Srv_QueryApplicationEnergyUsage @ 0x1800465B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z @ 0x18004647C (-GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z.c)
 */

__int64 __fastcall Srv_QueryApplicationEnergyUsage(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6[4]; // [rsp+20h] [rbp-138h] BYREF
  unsigned int v7[64]; // [rsp+30h] [rbp-128h] BYREF

  v6[0] = 128;
  result = GetPackageFullNameFromRPCContext(v6, v7);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, _QWORD, __int64))g_pAppEnergyManager->lpVtbl[1].AddRef)(
             g_pAppEnergyManager,
             v7,
             a2,
             a3);
  return result;
}
