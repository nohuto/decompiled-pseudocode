/*
 * XREFs of wil::scope_exit__lambda_fd12116e55b93fce935965703f14cfad___ @ 0x180078AE8
 * Callers:
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800787C0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180078B00 (-OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_fd12116e55b93fce935965703f14cfad___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int64 v4; // xmm1_8

  v2 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 24) = 1;
  v4 = *((_QWORD *)a2 + 2);
  *(_OWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
