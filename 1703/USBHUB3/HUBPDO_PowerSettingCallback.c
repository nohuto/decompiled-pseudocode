/*
 * XREFs of HUBPDO_PowerSettingCallback @ 0x1C0015C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
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
  char v15; // cl
  char v16; // al
  int Source1; // [rsp+78h] [rbp+48h] BYREF

  v4 = Context + 551;
  v7 = 0;
  Source1 = Context[551];
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_3_LINK_POWER_MANAGEMENT_POLICY, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_ENABLE_FOR_DEVICES, 0x10uLL) == 16
      || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_ENABLE_FOR_HUBS, 0x10uLL) == 16 )
    {
      if ( ValueLength < 4 )
        goto LABEL_37;
      v15 = *Value != 0;
      v16 = Source1 & 0xFE;
    }
    else
    {
      if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_ENABLE_FOR_DEVICES, 0x10uLL) != 16
        && RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_ENABLE_FOR_HUBS, 0x10uLL) != 16 )
      {
        if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_TIMEOUT_FOR_DEVICES, 0x10uLL) == 16
          || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_TIMEOUT_FOR_HUBS, 0x10uLL) == 16 )
        {
          if ( ValueLength >= 4 )
          {
            v14 = *Value;
            if ( *Value )
            {
              if ( v14 != 1 )
              {
                if ( v14 == 2 )
                  LOBYTE(Source1) = Source1 & 0xEB;
                goto LABEL_40;
              }
              v12 = Source1 & 0xEB | 4;
              goto LABEL_7;
            }
            LOBYTE(Source1) = Source1 | 0x14;
            goto LABEL_40;
          }
        }
        else
        {
          if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_TIMEOUT_FOR_DEVICES, 0x10uLL) != 16
            && RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_TIMEOUT_FOR_HUBS, 0x10uLL) != 16 )
          {
            goto LABEL_40;
          }
          if ( ValueLength >= 4 )
          {
            v13 = *Value;
            if ( *Value )
            {
              if ( v13 != 1 )
              {
                if ( v13 == 2 )
                  LOBYTE(Source1) = Source1 & 0xD7;
                goto LABEL_40;
              }
              v12 = Source1 & 0xD7 | 8;
              goto LABEL_7;
            }
            LOBYTE(Source1) = Source1 | 0x28;
            goto LABEL_40;
          }
        }
LABEL_37:
        v7 = -1073741811;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*((_QWORD *)Context + 1) + 1432LL),
          2u,
          2u,
          0x72u,
          (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
          -1073741811);
        return v7;
      }
      if ( ValueLength < 4 )
        goto LABEL_37;
      v15 = *Value != 0 ? 2 : 0;
      v16 = Source1 & 0xFD;
    }
    LOBYTE(Source1) = v16 | v15;
    goto LABEL_40;
  }
  v10 = *Value;
  if ( (unsigned int)*Value > 3 )
    goto LABEL_37;
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
LABEL_7:
      LOBYTE(Source1) = v12;
      break;
    case 2:
      v12 = v11 & 0x3F;
      goto LABEL_7;
    case 3:
      v12 = v11 & 0x3F | 0x80;
      goto LABEL_7;
  }
LABEL_40:
  if ( RtlCompareMemory(&Source1, v4, 4uLL) != 4 )
  {
    *v4 = Source1;
    HUBSM_AddEvent((__int64)(Context + 122), 4055);
  }
  return v7;
}
