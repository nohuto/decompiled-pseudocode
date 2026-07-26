/*
 * XREFs of ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C0096FF0
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C0096B90 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_LqL @ 0x1C003DC44 (WPP_SF_LqL.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009756C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C5DDC (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisIfQueryMiniportObject(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  unsigned int MiniportStatistics; // r15d
  _NDIS_IF_BLOCK *IfBlock; // r13
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  __int64 MajorNdisVersion; // rdx
  __int32 ifOperStatus; // eax
  _QWORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_OID_REQUEST v16; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0LL;
  v6 = a2;
  memset(&v16, 0, 248);
  MiniportStatistics = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_LqL(0x3Au, a2, a2, (__int64)a4);
  memset(&v16, 0, 0xF8uLL);
  *(_DWORD *)&v16.NdisReserved[16] |= 8u;
  IfBlock = a1->IfBlock;
  *(_QWORD *)&v16.NdisReserved[32] = &ndisIntReqNsi;
  DriverHandle = a1->DriverHandle;
  v16.Header = (NDIS_OBJECT_HEADER)15466902;
  v16.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v16.RequestType = 2LL;
  v16.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v16.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( v6 == 66179 )
  {
    if ( *a3 >= 4 )
    {
      *a3 = 4;
      ifOperStatus = IfBlock->ifOperStatus;
      goto LABEL_10;
    }
    return 3221291030LL;
  }
  if ( v6 == 65798 )
  {
    if ( *a3 >= 4 )
    {
      *a3 = 4;
      ifOperStatus = IfBlock->ifMtu;
      goto LABEL_10;
    }
    return 3221291030LL;
  }
  if ( v6 != 66184 )
  {
    if ( v6 != 131334 )
    {
      if ( v6 <= 0x20106 )
      {
        switch ( v6 )
        {
          case 0x10280u:
            if ( !*a3 )
              return 3221291030LL;
            *a3 = 1;
            *(_BYTE *)a4 = IfBlock->ifPromiscuousMode;
            goto LABEL_11;
          case 0x10281u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = IfBlock->ifLastChange;
            goto LABEL_11;
          case 0x10282u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = IfBlock->ifCounterDiscontinuityTime;
            goto LABEL_11;
          case 0x10284u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = a1->MiniportXmitLinkSpeed;
            goto LABEL_11;
          case 0x10285u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = a1->MiniportRcvLinkSpeed;
            goto LABEL_11;
          case 0x10286u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = 0LL;
            goto LABEL_11;
          case 0x10287u:
            if ( *a3 < 0xD8 )
              return 3221291030LL;
            *a3 = 216;
            *a4 = IfBlock->ifOperStatus;
            a4[1] = IfBlock->ifOperStatusFlags;
            a4[2] = a1->MiniportMediaConnectState;
            a4[3] = a1->MiniportMediaDuplexState;
            *((_QWORD *)a4 + 3) = a1->MiniportXmitLinkSpeed;
            *((_QWORD *)a4 + 4) = a1->MiniportRcvLinkSpeed;
            MiniportStatistics = ndisIfGetMiniportStatistics(a1, a4 + 16, 0LL);
            a4[4] = IfBlock->ifMtu;
            *((_BYTE *)a4 + 20) = IfBlock->ifPromiscuousMode;
            *((_BYTE *)a4 + 21) = IfBlock->ifDeviceWakeUpEnable;
            *((_QWORD *)a4 + 5) = IfBlock->ifLastChange;
            *((_QWORD *)a4 + 6) = IfBlock->ifCounterDiscontinuityTime;
            *((_QWORD *)a4 + 7) = 0LL;
            a4[52] = IfBlock->CompartmentId;
            a4[53] = IfBlock->SupportedStatistics;
            goto LABEL_11;
          case 0x1028Au:
            if ( *a3 < 4 )
              return 3221291030LL;
            *a3 = 4;
            ifOperStatus = a1->MiniportMediaConnectState;
            goto LABEL_10;
          case 0x1028Cu:
            if ( *a3 < 4 )
              return 3221291030LL;
            *a3 = 4;
            ifOperStatus = a1->MiniportMediaDuplexState;
            goto LABEL_10;
          default:
            goto LABEL_65;
        }
      }
      switch ( v6 )
      {
        case 0x20202u:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
          v15[0] = 0LL;
          v16.DATA.QUERY_INFORMATION.Oid = 131586;
          v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          MiniportStatistics = ndisIfQuerySetMiniport(a1, &v16, 0LL);
          if ( !MiniportStatistics )
            v4 = v15[0];
          *(_QWORD *)a4 = v4;
          break;
        case 0x20208u:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
          v15[0] = 0LL;
          v16.DATA.QUERY_INFORMATION.Oid = 131592;
          v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          MiniportStatistics = ndisIfQuerySetMiniport(a1, &v16, 0LL);
          if ( !MiniportStatistics )
            v4 = v15[0];
          *(_QWORD *)a4 = v4;
          break;
        case 0x20219u:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v15[0] = 0LL;
          v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
          if ( (unsigned __int8)MajorNdisVersion >= 6u )
          {
            v16.DATA.QUERY_INFORMATION.Oid = 131609;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 = v15[0];
          }
          else
          {
            v16.DATA.QUERY_INFORMATION.Oid = 131591;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 = v15[0];
            v15[0] = 0LL;
            v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
            v16.DATA.QUERY_INFORMATION.Oid = 131593;
            v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 += v15[0];
            v15[0] = 0LL;
            v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
            v16.DATA.QUERY_INFORMATION.Oid = 131595;
            v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 += v15[0];
          }
          break;
        case 0x2021Au:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v15[0] = 0LL;
          v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
          if ( (unsigned __int8)MajorNdisVersion >= 6u )
          {
            v16.DATA.QUERY_INFORMATION.Oid = 131610;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 = v15[0];
          }
          else
          {
            v16.DATA.QUERY_INFORMATION.Oid = 131585;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 = v15[0];
            v15[0] = 0LL;
            v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
            v16.DATA.QUERY_INFORMATION.Oid = 131587;
            v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 += v15[0];
            v15[0] = 0LL;
            v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
            v16.DATA.QUERY_INFORMATION.Oid = 131589;
            v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 += v15[0];
          }
          break;
        case 0x2021Bu:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v15[0] = 0LL;
          v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
          if ( (unsigned __int8)MajorNdisVersion >= 6u )
          {
            v16.DATA.QUERY_INFORMATION.Oid = 131611;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 = v15[0];
          }
          else
          {
            v16.DATA.QUERY_INFORMATION.Oid = 131332;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 = v15[0];
            v15[0] = 0LL;
            v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
            v16.DATA.QUERY_INFORMATION.Oid = 131333;
            v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 += v15[0];
          }
          break;
        case 0x2021Cu:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          if ( (unsigned __int8)MajorNdisVersion >= 6u )
          {
            v15[0] = 0LL;
            v16.DATA.QUERY_INFORMATION.InformationBuffer = v15;
            v16.DATA.QUERY_INFORMATION.Oid = 131612;
            v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            MiniportStatistics = ndisIfQuerySetMiniport(a1, &v16, 0LL);
            *(_QWORD *)a4 = v15[0];
          }
          else
          {
            *(_QWORD *)a4 = 0LL;
          }
          break;
        default:
LABEL_65:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          *(_QWORD *)a4 = 0LL;
          v16.DATA.QUERY_INFORMATION.Oid = v6;
          v16.DATA.QUERY_INFORMATION.InformationBuffer = a4;
          v16.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
          MiniportStatistics = ndisIfQuerySetMiniport(a1, &v16, 0LL);
          break;
      }
      goto LABEL_11;
    }
    if ( *a3 >= 0x90 )
    {
      *a3 = 144;
      MiniportStatistics = ndisIfGetMiniportStatistics(a1, a4, 0LL);
      goto LABEL_11;
    }
    return 3221291030LL;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  ifOperStatus = IfBlock->ifAdminStatus;
LABEL_10:
  *a4 = ifOperStatus;
LABEL_11:
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_LqL(0x3Bu, MajorNdisVersion, v6, (__int64)a4);
  return MiniportStatistics;
}
