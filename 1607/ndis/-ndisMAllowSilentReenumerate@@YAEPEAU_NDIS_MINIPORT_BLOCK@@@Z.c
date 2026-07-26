/*
 * XREFs of ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D3C20
 * Callers:
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0062BCC (ndisMReenumerateFailedAdapterInternal.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00A773C (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1C00E29C4 (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 */

char __fastcall ndisMAllowSilentReenumerate(struct _NDIS_MINIPORT_BLOCK *a1)
{
  HANDLE v1; // rbx
  char v2; // di
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF
  HANDLE DeviceRegKey; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( IoOpenDeviceRegistryKey(a1->PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey) >= 0 )
  {
    if ( DeviceRegKey )
      v1 = DeviceRegKey;
    Handle = v1;
    if ( KRegKey::QueryValueUlong((KRegKey *)&Handle, (struct _UNICODE_STRING *)&stru_1C0076DC0, &v4) >= 0
      && v4
      && (int)KRegKey::SetValueUlong((KRegKey *)&Handle, &stru_1C0076DC0, v4 - 1) >= 0 )
    {
      v1 = Handle;
      v2 = 1;
      goto LABEL_10;
    }
    v1 = Handle;
  }
  v2 = 0;
LABEL_10:
  if ( v1 )
    ZwClose(v1);
  return v2;
}
