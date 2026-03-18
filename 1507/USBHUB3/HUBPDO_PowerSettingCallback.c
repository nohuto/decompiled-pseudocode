/*
 * XREFs of HUBPDO_PowerSettingCallback @ 0x1C0014290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBPDO_PowerSettingCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, _DWORD *Context)
{
  _DWORD *v4; // r15
  unsigned int v7; // ebx
  int v10; // ecx
  char v11; // al
  char v12; // al
  int v13; // eax
  int v14; // eax
  char v15; // al
  char v16; // cl
  int Source1; // [rsp+78h] [rbp+48h] BYREF

  v4 = Context + 551;
  v7 = 0;
  Source1 = Context[551];
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_3_LINK_POWER_MANAGEMENT_POLICY, 0x10uLL) == 16 )
  {
    v10 = *Value;
    if ( (unsigned int)*Value <= 3 )
    {
      if ( !v10 )
      {
        Source1 = 0;
        goto LABEL_40;
      }
      v11 = Source1 | 0x3F;
      LOBYTE(Source1) = Source1 | 0x3F;
      switch ( v10 )
      {
        case 1:
          v12 = v11 & 0x3F | 0x40;
          break;
        case 2:
          v12 = v11 & 0x3F;
          break;
        case 3:
          v12 = v11 & 0x3F | 0x80;
          break;
        default:
          goto LABEL_40;
      }
      goto LABEL_39;
    }
LABEL_36:
    v7 = -1073741811;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)Context + 1) + 1432LL),
      2u,
      2u,
      0x6Cu,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      -1073741811);
    return v7;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_ENABLE_FOR_DEVICES, 0x10uLL) == 16
    || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_ENABLE_FOR_HUBS, 0x10uLL) == 16 )
  {
    if ( ValueLength < 4 )
      goto LABEL_36;
    v15 = Source1;
    v16 = (Source1 ^ (*Value != 0)) & 1;
    goto LABEL_38;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_ENABLE_FOR_DEVICES, 0x10uLL) == 16
    || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_ENABLE_FOR_HUBS, 0x10uLL) == 16 )
  {
    if ( ValueLength < 4 )
      goto LABEL_36;
    v15 = Source1;
    v16 = (Source1 ^ (2 * (*Value != 0))) & 2;
LABEL_38:
    v12 = v16 ^ v15;
LABEL_39:
    LOBYTE(Source1) = v12;
    goto LABEL_40;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_TIMEOUT_FOR_DEVICES, 0x10uLL) == 16
    || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_TIMEOUT_FOR_HUBS, 0x10uLL) == 16 )
  {
    if ( ValueLength >= 4 )
    {
      v14 = *Value;
      if ( !*Value )
      {
        LOBYTE(Source1) = Source1 | 0x14;
        goto LABEL_40;
      }
      if ( v14 != 1 )
      {
        if ( v14 == 2 )
          LOBYTE(Source1) = Source1 & 0xEB;
        goto LABEL_40;
      }
      v12 = Source1 & 0xEB | 4;
      goto LABEL_39;
    }
    goto LABEL_36;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_TIMEOUT_FOR_DEVICES, 0x10uLL) == 16
    || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_TIMEOUT_FOR_HUBS, 0x10uLL) == 16 )
  {
    if ( ValueLength >= 4 )
    {
      v13 = *Value;
      if ( !*Value )
      {
        LOBYTE(Source1) = Source1 | 0x28;
        goto LABEL_40;
      }
      if ( v13 != 1 )
      {
        if ( v13 == 2 )
          LOBYTE(Source1) = Source1 & 0xD7;
        goto LABEL_40;
      }
      v12 = Source1 & 0xD7 | 8;
      goto LABEL_39;
    }
    goto LABEL_36;
  }
LABEL_40:
  if ( RtlCompareMemory(&Source1, v4, 4uLL) != 4 )
  {
    *v4 = Source1;
    HUBSM_AddEvent((__int64)(Context + 122), 0xFD7u);
  }
  return v7;
}
