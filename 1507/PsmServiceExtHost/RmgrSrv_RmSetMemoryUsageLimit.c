/*
 * XREFs of RmgrSrv_RmSetMemoryUsageLimit @ 0x1800464C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHostIdFromProcessToken@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x18004D620 (-GetHostIdFromProcessToken@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 */

__int64 __fastcall RmgrSrv_RmSetMemoryUsageLimit(__int64 a1, DevPlat::Shared *a2, unsigned __int64 *a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = -1LL;
  result = DevPlat::Shared::GetHostIdFromProcessToken(a2, &v6, a3);
  *a4 = 0;
  return result;
}
