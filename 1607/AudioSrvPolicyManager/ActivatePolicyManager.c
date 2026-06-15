/*
 * XREFs of ActivatePolicyManager @ 0x180003B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z @ 0x180004084 (-Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall ActivatePolicyManager(
        struct IEndpointCharacteristicsCache *a1,
        struct IVolumeProvider *a2,
        struct CWindowsPolicyManager **a3)
{
  HRESULT Instance; // eax
  __int64 result; // rax
  struct CWindowsPolicyManager *v6; // rcx
  struct CWindowsPolicyManager *v7; // [rsp+40h] [rbp+8h] BYREF

  g_pVolumeProvider = a2;
  g_pEndpointChCache = a1;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               3u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &g_DeviceEnumerator);
  v7 = 0LL;
  if ( Instance < 0 )
    return 2147500034LL;
  result = CWindowsPolicyManager::Create(&v7);
  if ( (int)result < 0 )
    return 2147500034LL;
  v6 = v7;
  *a3 = v7;
  g_PolicyManager = v6;
  return result;
}
