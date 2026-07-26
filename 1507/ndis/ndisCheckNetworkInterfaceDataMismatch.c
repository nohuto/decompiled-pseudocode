/*
 * XREFs of ndisCheckNetworkInterfaceDataMismatch @ 0x1C009C3EC
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C009D13C (-QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A54F8 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00E2D6C (-SetValueUlong@KRegKey@@QEAAJPEBGK@Z.c)
 */

__int64 __fastcall ndisCheckNetworkInterfaceDataMismatch(__int64 a1, __int64 a2)
{
  HANDLE v2; // rbx
  char v5; // r14
  const unsigned __int16 *v6; // rdx
  NTSTATUS ValueUshort; // edi
  unsigned __int16 v8; // cx
  unsigned int v9; // r9d
  unsigned int v10; // eax
  unsigned __int16 v12; // cx
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // al
  unsigned int v15; // [rsp+20h] [rbp-20h]
  unsigned int v16; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  HANDLE DeviceRegKey; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  Handle = 0LL;
  v5 = 0;
  ValueUshort = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 3888), 2u, 0xC2000000, &DeviceRegKey);
  if ( ValueUshort >= 0 )
  {
    if ( DeviceRegKey )
      v2 = DeviceRegKey;
    Handle = v2;
    ValueUshort = KRegKey::QueryValueUshort((KRegKey *)&Handle, v6, (unsigned __int16 *)&v16);
    if ( ValueUshort >= 0 )
    {
      v8 = *(_WORD *)(a2 + 180);
      if ( (_WORD)v16 != v8 )
      {
        if ( *(_BYTE *)(a1 + 32) >= 6u )
        {
          if ( (unsigned __int8)byte_1C0085314 < 2u )
            goto LABEL_19;
          v10 = (unsigned __int16)v16;
          v9 = v8;
          v12 = 183;
          goto LABEL_17;
        }
        ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, L"*IfType", v8);
        if ( ValueUshort < 0 )
          goto LABEL_11;
        v5 = 1;
      }
      ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, L"*MediaType", &v16);
      if ( ValueUshort < 0 )
        goto LABEL_11;
      v9 = *(_DWORD *)(a2 + 8);
      v10 = v16;
      if ( v16 == v9 )
        goto LABEL_8;
      v13 = *(_BYTE *)(a1 + 32);
      if ( v13 <= 6u && (v13 != 6 || *(_BYTE *)(a1 + 33) < 0x3Cu) )
      {
        if ( v5 )
        {
          ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, L"*MediaType", v9);
          if ( ValueUshort < 0 )
            goto LABEL_11;
        }
LABEL_8:
        ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, L"*PhysicalMediaType", &v16);
        if ( ValueUshort < 0 )
          goto LABEL_11;
        v9 = *(_DWORD *)(a2 + 12);
        if ( v16 == v9 )
        {
LABEL_10:
          if ( v5 )
          {
            ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, L"NdisUpdatedNetworkInterface", 1u);
            if ( ValueUshort >= 0 )
              ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
          }
          goto LABEL_11;
        }
        v14 = *(_BYTE *)(a1 + 32);
        if ( v14 <= 6u && (v14 != 6 || *(_BYTE *)(a1 + 33) < 0x3Cu) )
        {
          if ( !v5 )
            goto LABEL_11;
          ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, L"*PhysicalMediaType", v9);
          if ( ValueUshort < 0 )
            goto LABEL_11;
          goto LABEL_10;
        }
        if ( (unsigned __int8)byte_1C0085314 >= 2u )
        {
          v12 = 185;
          v15 = v16;
          goto LABEL_18;
        }
LABEL_19:
        ValueUshort = -1073741823;
        goto LABEL_11;
      }
      if ( (unsigned __int8)byte_1C0085314 < 2u )
        goto LABEL_19;
      v12 = 184;
LABEL_17:
      v15 = v10;
LABEL_18:
      WPP_SF_qdD(v12, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, v9, v15);
      goto LABEL_19;
    }
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ValueUshort;
}
