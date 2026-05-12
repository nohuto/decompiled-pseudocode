/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C0011FD0
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0012294 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0029414 (RaidAdapterTargetedRescan.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0037760 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C00022D0 (RaidRemoveTrailingBlanks.c)
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C00125B8 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0012980 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0013018 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C00136F8 (RaidBusEnumeratorProcessBusUnit.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     WPP_SF_D @ 0x1C002AE50 (WPP_SF_D.c)
 *     WPP_SF_ddd @ 0x1C002AED4 (WPP_SF_ddd.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  _OWORD *Pool; // rax
  int v13; // r11d
  int v14; // r11d
  char v15; // [rsp+28h] [rbp-D8h]
  char v16; // [rsp+28h] [rbp-D8h]
  char v17; // [rsp+28h] [rbp-D8h]
  __int64 v18[12]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v19[7]; // [rsp+90h] [rbp-70h] BYREF

  memset(v18, 0, sizeof(v18));
  result = RaidBusEnumeratorGetUnit(a1, a2, v18);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_0f528954af03336098861edcd0252264_Traceguids,
      BYTE1(v18[0]),
      BYTE2(v18[0]),
      BYTE3(v18[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumInquiryCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v18,
         36,
         v15);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_0f528954af03336098861edcd0252264_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 >= 0 )
  {
    v6 = RaidBusEnumeratorGenericInquiry(
           (unsigned int)&RaidEnumSupportedPagesCallback,
           (_DWORD)a1,
           a2,
           (unsigned int)v18,
           255,
           v16);
    v5 = v6;
    if ( v6 == -1073741801 )
      goto LABEL_24;
    if ( v6 == -1073741670 )
      goto LABEL_24;
    if ( (v18[0] & 1) != 0 )
    {
      v7 = RaidBusEnumeratorGenericInquiry(
             (unsigned int)&RaidEnumDeviceIdCallback,
             (_DWORD)a1,
             a2,
             (unsigned int)v18,
             255,
             v17);
      v5 = v7;
      if ( v7 == -1073741801 || v7 == -1073741670 )
        goto LABEL_24;
    }
    if ( (v18[0] & 2) != 0 )
    {
      v8 = RaidBusEnumeratorGenericInquiry(
             (unsigned int)&RaidEnumSerialNumber,
             (_DWORD)a1,
             a2,
             (unsigned int)v18,
             255,
             v17);
      v5 = v8;
      if ( v8 == -1073741801 || v8 == -1073741670 )
        goto LABEL_24;
    }
    if ( (*(_BYTE *)v18[4] & 0x1F) == 0 )
    {
      v9 = *(_BYTE *)(v18[4] + 4);
      if ( v9 >= 0x37u )
      {
        v10 = v9 + 5LL;
        if ( v10 > 0xFF )
          LODWORD(v10) = 255;
        RaidBusEnumeratorGenericInquiry(
          (unsigned int)&RaidEnumInquiry1667Callback,
          (_DWORD)a1,
          a2,
          (unsigned int)v18,
          v10,
          v17);
      }
    }
    if ( (v18[0] & 4) != 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumAtaInformation,
        (_DWORD)a1,
        a2,
        (unsigned int)v18,
        572,
        v17);
    }
    else if ( v18[1] && RaidIsUnitControlSupported(v18[1], 11) )
    {
      memset((char *)v19 + 4, 0, 0x68uLL);
      v11 = *a1;
      *(_QWORD *)&v19[0] = 0x6C00000001LL;
      v5 = RaCallMiniportUnitControl(v11 + 296);
      if ( v5 < 0 )
      {
        v5 = 0;
      }
      else
      {
        Pool = RaidAllocatePool(NonPagedPoolNx, 0x6CuLL, 0x32316152u, *(_QWORD *)(*a1 + 8));
        v18[10] = (__int64)Pool;
        if ( !Pool )
        {
          v5 = -1073741801;
          goto LABEL_24;
        }
        *Pool = v19[0];
        Pool[1] = v19[1];
        Pool[2] = v19[2];
        Pool[3] = v19[3];
        Pool[4] = v19[4];
        Pool[5] = v19[5];
        *((_QWORD *)Pool + 12) = *(_QWORD *)&v19[6];
        *((_DWORD *)Pool + 26) = DWORD2(v19[6]);
        RaidRemoveTrailingBlanks(v18[10] + 8, 17);
        RaidRemoveTrailingBlanks(v18[10] + 25, v13 + 48);
        RaidRemoveTrailingBlanks(v18[10] + 90, v14);
      }
    }
  }
  RaidBusEnumeratorProcessBusUnit(a1, v18);
LABEL_24:
  RaidBusEnumeratorReleaseUnit(a1, v18);
  if ( v5 == -1073741801 || v5 == -1073741670 )
    return (unsigned int)v5;
  else
    return 0LL;
}
