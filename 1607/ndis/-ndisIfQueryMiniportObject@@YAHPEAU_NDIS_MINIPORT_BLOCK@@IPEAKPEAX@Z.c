/*
 * XREFs of ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C009AC48
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C009A290 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_LqL @ 0x1C0042948 (WPP_SF_LqL.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009AF68 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C3C54 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisIfQueryMiniportObject(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v7; // rsi
  unsigned int v9; // r12d
  __int64 v10; // rdx
  _NDIS_IF_BLOCK *IfBlock; // r15
  __int64 v12; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // cl
  __int32 ifAdminStatus; // eax
  int MiniportStatistics; // eax
  unsigned __int64 ifLastChange; // rax
  bool v19; // cf
  struct _NDIS_MINIPORT_BLOCK *v20; // rcx
  _QWORD v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_OID_REQUEST v22; // [rsp+40h] [rbp-C0h] BYREF

  v7 = 0LL;
  v9 = 0;
  memset(&v22, 0, 0xF8uLL);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_LqL(0x3Au, v10, a2, (__int64)a4);
  memset(&v22, 0, 0xF8uLL);
  IfBlock = a1->IfBlock;
  *(_QWORD *)&v22.NdisReserved[32] = &ndisIntReqNsi;
  v12 = 8LL;
  DriverHandle = a1->DriverHandle;
  *(_DWORD *)&v22.NdisReserved[16] |= 8u;
  v22.Header = (NDIS_OBJECT_HEADER)15466902;
  v22.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v22.RequestType = 2LL;
  v22.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v22.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( a2 == 66184 )
  {
    if ( *a3 >= 4 )
    {
      *a3 = 4;
      ifAdminStatus = IfBlock->ifAdminStatus;
      goto LABEL_12;
    }
    return 3221291030LL;
  }
  if ( a2 > 0x10288 )
  {
    switch ( a2 )
    {
      case 0x1028Au:
        if ( *a3 >= 4 )
        {
          *a3 = 4;
          ifAdminStatus = a1->MiniportMediaConnectState;
          goto LABEL_12;
        }
        return 3221291030LL;
      case 0x1028Cu:
        if ( *a3 >= 4 )
        {
          *a3 = 4;
          ifAdminStatus = a1->MiniportMediaDuplexState;
          goto LABEL_12;
        }
        return 3221291030LL;
      case 0x20106u:
        if ( *a3 < 0x90 )
          return 3221291030LL;
        *a3 = 144;
        MiniportStatistics = ndisIfGetMiniportStatistics(a1, a4, 0LL);
LABEL_31:
        v9 = MiniportStatistics;
        goto LABEL_13;
      case 0x20202u:
        if ( *a3 < 8 )
          return 3221291030LL;
        v22.DATA.QUERY_INFORMATION.Oid = 131586;
        break;
      case 0x20208u:
        if ( *a3 < 8 )
          return 3221291030LL;
        v22.DATA.QUERY_INFORMATION.Oid = 131592;
        break;
      default:
        switch ( a2 )
        {
          case 0x20219u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v19 = MajorNdisVersion < 6u;
            v21[0] = 0LL;
            v20 = a1;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            if ( v19 )
            {
              v22.DATA.QUERY_INFORMATION.Oid = 131591;
              ndisIfQuerySetMiniport(a1, &v22, 0LL);
              *(_QWORD *)a4 = v21[0];
              v21[0] = 0LL;
              v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
              v22.DATA.QUERY_INFORMATION.Oid = 131593;
              v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v22, 0LL);
              *(_QWORD *)a4 += v21[0];
              v22.DATA.QUERY_INFORMATION.Oid = 131595;
              goto LABEL_66;
            }
            v22.DATA.QUERY_INFORMATION.Oid = 131609;
            break;
          case 0x2021Au:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v19 = MajorNdisVersion < 6u;
            v21[0] = 0LL;
            v20 = a1;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            if ( v19 )
            {
              v22.DATA.QUERY_INFORMATION.Oid = 131585;
              ndisIfQuerySetMiniport(a1, &v22, 0LL);
              *(_QWORD *)a4 = v21[0];
              v21[0] = 0LL;
              v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
              v22.DATA.QUERY_INFORMATION.Oid = 131587;
              v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v22, 0LL);
              *(_QWORD *)a4 += v21[0];
              v22.DATA.QUERY_INFORMATION.Oid = 131589;
              goto LABEL_66;
            }
            v22.DATA.QUERY_INFORMATION.Oid = 131610;
            break;
          case 0x2021Bu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v19 = MajorNdisVersion < 6u;
            v21[0] = 0LL;
            v20 = a1;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            if ( v19 )
            {
              v22.DATA.QUERY_INFORMATION.Oid = 131332;
              ndisIfQuerySetMiniport(a1, &v22, 0LL);
              *(_QWORD *)a4 = v21[0];
              v22.DATA.QUERY_INFORMATION.Oid = 131333;
LABEL_66:
              v21[0] = 0LL;
              v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
              v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(a1, &v22, 0LL);
              *(_QWORD *)a4 += v21[0];
              goto LABEL_13;
            }
            v22.DATA.QUERY_INFORMATION.Oid = 131611;
            break;
          case 0x2021Cu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            if ( MajorNdisVersion < 6u )
              goto LABEL_25;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
            v21[0] = 0LL;
            v22.DATA.QUERY_INFORMATION.Oid = 131612;
            v9 = ndisIfQuerySetMiniport(a1, &v22, 0LL);
            goto LABEL_70;
          default:
LABEL_60:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            *(_QWORD *)a4 = 0LL;
            v22.DATA.QUERY_INFORMATION.Oid = a2;
            v22.DATA.QUERY_INFORMATION.InformationBuffer = a4;
            MiniportStatistics = ndisIfQuerySetMiniport(a1, &v22, 0LL);
            goto LABEL_31;
        }
        ndisIfQuerySetMiniport(v20, &v22, 0LL);
LABEL_70:
        ifLastChange = v21[0];
        goto LABEL_34;
    }
    *a3 = 8;
    v22.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
    v22.DATA.QUERY_INFORMATION.InformationBuffer = v21;
    v21[0] = 0LL;
    v9 = ndisIfQuerySetMiniport(a1, &v22, 0LL);
    if ( !v9 )
      v7 = v21[0];
    goto LABEL_25;
  }
  switch ( a2 )
  {
    case 0x10106u:
      if ( *a3 >= 4 )
      {
        *a3 = 4;
        ifAdminStatus = IfBlock->ifMtu;
        goto LABEL_12;
      }
      return 3221291030LL;
    case 0x10280u:
      if ( *a3 )
      {
        *a3 = 1;
        *a4 = IfBlock->ifPromiscuousMode;
        goto LABEL_13;
      }
      return 3221291030LL;
    case 0x10281u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifLastChange;
      goto LABEL_34;
    case 0x10282u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifCounterDiscontinuityTime;
      goto LABEL_34;
  }
  if ( a2 != 66179 )
  {
    switch ( a2 )
    {
      case 0x10284u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        ifLastChange = a1->MiniportXmitLinkSpeed;
        break;
      case 0x10285u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        ifLastChange = a1->MiniportRcvLinkSpeed;
        break;
      case 0x10286u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
LABEL_25:
        *(_QWORD *)a4 = v7;
        goto LABEL_13;
      case 0x10287u:
        if ( *a3 >= 0xD8 )
        {
          *a3 = 216;
          *(_DWORD *)a4 = IfBlock->ifOperStatus;
          *((_DWORD *)a4 + 1) = IfBlock->ifOperStatusFlags;
          *((_DWORD *)a4 + 2) = a1->MiniportMediaConnectState;
          *((_DWORD *)a4 + 3) = a1->MiniportMediaDuplexState;
          *((_QWORD *)a4 + 3) = a1->MiniportXmitLinkSpeed;
          *((_QWORD *)a4 + 4) = a1->MiniportRcvLinkSpeed;
          v9 = ndisIfGetMiniportStatistics(a1, a4 + 64, 0LL);
          *((_DWORD *)a4 + 4) = IfBlock->ifMtu;
          a4[20] = IfBlock->ifPromiscuousMode;
          a4[21] = IfBlock->ifDeviceWakeUpEnable;
          *((_QWORD *)a4 + 5) = IfBlock->ifLastChange;
          *((_QWORD *)a4 + 6) = IfBlock->ifCounterDiscontinuityTime;
          *((_QWORD *)a4 + 7) = 0LL;
          *((_DWORD *)a4 + 52) = IfBlock->CompartmentId;
          *((_DWORD *)a4 + 53) = IfBlock->SupportedStatistics;
          goto LABEL_13;
        }
        return 3221291030LL;
      default:
        goto LABEL_60;
    }
LABEL_34:
    *(_QWORD *)a4 = ifLastChange;
    goto LABEL_13;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  ifAdminStatus = IfBlock->ifOperStatus;
LABEL_12:
  *(_DWORD *)a4 = ifAdminStatus;
LABEL_13:
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_LqL(0x3Bu, v12, a2, (__int64)a4);
  return v9;
}
