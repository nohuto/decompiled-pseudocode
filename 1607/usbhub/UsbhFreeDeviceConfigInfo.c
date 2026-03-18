/*
 * XREFs of UsbhFreeDeviceConfigInfo @ 0x1C002623C
 * Callers:
 *     UsbhQueryParentHubConfig @ 0x1C0026128 (UsbhQueryParentHubConfig.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeDeviceConfigInfo(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)(a1 + 36);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 36) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v3 = *(void **)(a1 + 20);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 20) = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
  }
  v4 = *(void **)(a1 + 52);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 52) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
