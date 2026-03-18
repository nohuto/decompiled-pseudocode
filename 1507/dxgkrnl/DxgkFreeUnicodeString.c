/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C00B4374
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0024520 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0025700 (DpiMiracastTargetDeviceChange.c)
 *     DpiFreeAdapterInfo @ 0x1C00B431C (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C01684A0 (DpiFdoResetFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkFreeUnicodeString(_QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
