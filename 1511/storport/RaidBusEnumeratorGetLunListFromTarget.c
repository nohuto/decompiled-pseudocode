/*
 * XREFs of RaidBusEnumeratorGetLunListFromTarget @ 0x1C000E750
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C000E3D0 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C000E8EC (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C000F7D4 (RaidSelectDeviceDumpCollectionMode.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 *     WPP_SF_D @ 0x1C0027BA0 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x1C0027BDC (WPP_SF_qD.c)
 *     WPP_SF_qddd @ 0x1C0027C28 (WPP_SF_qddd.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunListFromTarget(_QWORD *a1, int a2, int a3, _BYTE *a4)
{
  int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int64 result; // rax
  unsigned __int8 *v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r9
  PDEVICE_OBJECT v14; // rcx
  unsigned __int8 *v15; // rsi
  unsigned __int16 v16; // bx
  unsigned __int16 i; // bx
  int v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 *v19; // [rsp+48h] [rbp-8h] BYREF
  int v20; // [rsp+88h] [rbp+38h]

  v20 = a2;
  v18 = 16;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qddd(
      WPP_GLOBAL_Control->AttachedDevice,
      15LL,
      &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids,
      *a1,
      (unsigned __int8)a2,
      BYTE1(a2),
      BYTE2(a2));
    a2 = v20;
  }
  v7 = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v18, (__int64)&v19);
  LOWORD(v8) = 0;
  v9 = v7;
  if ( v7 >= 0 )
    goto LABEL_8;
  if ( v7 != -1073741789 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        16LL,
        &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids,
        (unsigned int)v7);
    }
    return v9;
  }
  result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, v20, a3, (unsigned int)&v18, (__int64)&v19);
  if ( (_DWORD)result == -1073741789 )
  {
    v18 = 8 * *(unsigned __int8 *)(*a1 + 450LL) + 8;
    result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, v20, a3, (unsigned int)&v18, (__int64)&v19);
  }
  LOWORD(v8) = 0;
  if ( (int)result >= 0 )
  {
LABEL_8:
    memset(a4, 0, 0xFFuLL);
    v11 = v19;
    v12 = (unsigned int)(v19[3] | ((v19[2] | ((v19[1] | (*v19 << 8)) << 8)) << 8)) >> 3;
    RaidSelectDeviceDumpCollectionMode(*a1);
    v14 = WPP_GLOBAL_Control;
    if ( v12 )
    {
      v15 = v11 + 9;
      v8 = v12;
      do
      {
        v16 = _byteswap_ushort(*(_WORD *)(v15 - 1)) & 0x3FFF;
        if ( v16 >= 0xFFu )
        {
          if ( v14 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          {
            if ( (HIDWORD(v14->Timer) & 0x4000) != 0 && BYTE1(v14->Timer) >= 3u )
            {
              WPP_SF_qD(v14->AttachedDevice, 17LL, &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids, *a1, v16);
              v14 = WPP_GLOBAL_Control;
            }
            if ( v14 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(v14->Timer) & 0x4000) != 0
              && BYTE1(v14->Timer) >= 3u )
            {
              WPP_SF_D(v14->AttachedDevice, 18LL, &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids, v16);
              v14 = WPP_GLOBAL_Control;
            }
          }
        }
        else
        {
          a4[v16] = 1;
        }
        v15 += 8;
        --v8;
      }
      while ( v8 );
    }
    if ( v14 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(v14->Timer) & 0x4000) != 0 && BYTE1(v14->Timer) >= 4u )
      {
        WPP_SF_q(v14->AttachedDevice, 19LL, &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids, *a1);
        v14 = WPP_GLOBAL_Control;
      }
      if ( v14 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v14->Timer) & 0x4000) != 0 && BYTE1(v14->Timer) >= 5u )
      {
        WPP_SF_(v14->AttachedDevice, 20LL, &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids, v13);
        v14 = WPP_GLOBAL_Control;
      }
    }
    for ( i = v8; i < 0xFFu; ++i )
    {
      if ( *a4 != (_BYTE)v8
        && v14 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(v14->Timer) & 0x4000) != 0
        && BYTE1(v14->Timer) >= 5u )
      {
        WPP_SF_D(v14->AttachedDevice, 21LL, &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids, i);
        v14 = WPP_GLOBAL_Control;
      }
      ++a4;
    }
    return 0LL;
  }
  return result;
}
