/*
 * XREFs of ndisCheckNetworkInterfaceDataMismatch @ 0x1C00AC124
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C00A79D8 (-QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A7F1C (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00E2950 (-SetValueUlong@KRegKey@@QEAAJPEBGK@Z.c)
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
  unsigned __int8 v12; // al
  unsigned __int16 v13; // cx
  unsigned __int8 v14; // cl
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-20h]
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF
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
    ValueUshort = KRegKey::QueryValueUshort((KRegKey *)&Handle, v6, (unsigned __int16 *)&v17);
    if ( ValueUshort >= 0 )
    {
      v8 = *(_WORD *)(a2 + 180);
      if ( (_WORD)v17 != v8 )
      {
        if ( *(_BYTE *)(a1 + 32) >= 6u )
        {
          if ( (unsigned __int8)byte_1C00895D4 < 2u )
            goto LABEL_24;
          v10 = (unsigned __int16)v17;
          v9 = v8;
          v13 = 186;
          goto LABEL_22;
        }
        ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, L"*IfType", v8);
        if ( ValueUshort < 0 )
          goto LABEL_11;
        v5 = 1;
      }
      ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"*MediaType", &v17);
      if ( ValueUshort < 0 )
        goto LABEL_11;
      v9 = *(_DWORD *)(a2 + 8);
      v10 = v17;
      if ( v17 == v9 )
        goto LABEL_8;
      v14 = *(_BYTE *)(a1 + 32);
      if ( v14 <= 6u && (v14 != 6 || *(_BYTE *)(a1 + 33) < 0x3Cu) )
      {
        if ( v5 )
        {
          ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, L"*MediaType", v9);
          if ( ValueUshort < 0 )
            goto LABEL_11;
        }
LABEL_8:
        ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"*PhysicalMediaType", &v17);
        if ( ValueUshort < 0 )
          goto LABEL_11;
        v9 = *(_DWORD *)(a2 + 12);
        if ( v17 == v9 )
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
        v12 = *(_BYTE *)(a1 + 32);
        if ( v12 <= 6u && (v12 != 6 || *(_BYTE *)(a1 + 33) < 0x3Cu) )
        {
          if ( !v5 )
            goto LABEL_11;
          v15 = KRegKey::SetValueUlong((KRegKey *)&Handle, L"*PhysicalMediaType", v9);
          ValueUshort = v15;
          if ( v15 < 0 )
            goto LABEL_11;
          goto LABEL_10;
        }
        if ( (unsigned __int8)byte_1C00895D4 >= 2u )
        {
          v13 = 188;
          v16 = v17;
          goto LABEL_23;
        }
LABEL_24:
        ValueUshort = -1073741823;
        goto LABEL_11;
      }
      if ( (unsigned __int8)byte_1C00895D4 < 2u )
        goto LABEL_24;
      v13 = 187;
LABEL_22:
      v16 = v10;
LABEL_23:
      WPP_SF_qdD(v13, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v9, v16);
      goto LABEL_24;
    }
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ValueUshort;
}
