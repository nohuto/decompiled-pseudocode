/*
 * XREFs of Srv_RegisterForEnergyChangeNotifications @ 0x1800466A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z @ 0x18004647C (-GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z.c)
 */

__int64 __fastcall Srv_RegisterForEnergyChangeNotifications(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v8[4]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v9[64]; // [rsp+40h] [rbp-138h] BYREF

  v8[0] = 128;
  result = GetPackageFullNameFromRPCContext(v8, v9);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, _QWORD, __int64, __int64))g_pAppEnergyManager->lpVtbl[2].QueryInterface)(
             g_pAppEnergyManager,
             v9,
             a2,
             a3,
             a4);
  return result;
}
