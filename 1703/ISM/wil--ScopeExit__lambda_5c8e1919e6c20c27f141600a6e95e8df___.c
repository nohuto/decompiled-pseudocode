/*
 * XREFs of wil::ScopeExit__lambda_5c8e1919e6c20c27f141600a6e95e8df___ @ 0x180066848
 * Callers:
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x180065884 (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ScopeExit__lambda_5c8e1919e6c20c27f141600a6e95e8df___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
