/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C000E040
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C000E2BC (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0025970 (RaidAdapterTargetedRescan.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0034560 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidBusEnumeratorReleaseUnit @ 0x1C000E604 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C000E9CC (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C000EEB0 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C000F52C (RaidBusEnumeratorProcessBusUnit.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     WPP_SF_ddd @ 0x1C0027818 (WPP_SF_ddd.c)
 *     WPP_SF_D @ 0x1C0027BA0 (WPP_SF_D.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rax
  char v12; // [rsp+30h] [rbp-21h]
  char v13; // [rsp+30h] [rbp-21h]
  char v14; // [rsp+30h] [rbp-21h]
  _QWORD v15[12]; // [rsp+38h] [rbp-19h] BYREF

  memset(v15, 0, 0x58uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v15);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids,
      BYTE1(v15[0]),
      BYTE2(v15[0]),
      BYTE3(v15[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiryCallback, a1, a2, (unsigned int)v15, 36, v12);
  v6 = v5;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids, v5);
  }
  if ( v6 >= 0 )
  {
    v7 = RaidBusEnumeratorGenericInquiry(
           (unsigned int)&RaidEnumSupportedPagesCallback,
           a1,
           a2,
           (unsigned int)v15,
           255,
           v13);
    v6 = v7;
    if ( v7 == -1073741801 )
      goto LABEL_23;
    if ( v7 == -1073741670 )
      goto LABEL_23;
    if ( (v15[0] & 1) != 0 )
    {
      v8 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumDeviceIdCallback, a1, a2, (unsigned int)v15, 255, v14);
      v6 = v8;
      if ( v8 == -1073741801 || v8 == -1073741670 )
        goto LABEL_23;
    }
    if ( (v15[0] & 2) != 0 )
    {
      v9 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumSerialNumber, a1, a2, (unsigned int)v15, 255, v14);
      v6 = v9;
      if ( v9 == -1073741801 || v9 == -1073741670 )
        goto LABEL_23;
    }
    if ( (*(_BYTE *)v15[4] & 0x1F) == 0 )
    {
      v10 = *(_BYTE *)(v15[4] + 4LL);
      if ( v10 >= 0x37u )
      {
        v11 = v10 + 5LL;
        if ( v11 > 0xFF )
          LODWORD(v11) = 255;
        RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiry1667Callback, a1, a2, (unsigned int)v15, v11, v14);
      }
    }
    if ( (v15[0] & 4) != 0 )
      RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumAtaInformation, a1, a2, (unsigned int)v15, 572, v14);
  }
  RaidBusEnumeratorProcessBusUnit(a1, v15);
LABEL_23:
  RaidBusEnumeratorReleaseUnit(a1, v15);
  if ( v6 == -1073741801 || v6 == -1073741670 )
    return (unsigned int)v6;
  else
    return 0LL;
}
