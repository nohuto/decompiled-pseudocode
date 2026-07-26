/*
 * XREFs of ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C0094B9C
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C0094AE0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_LqL @ 0x1C003ECEC (WPP_SF_LqL.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0094F08 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00BEF0C (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisIfQueryFilterObject(
        struct _NDIS_FILTER_BLOCK *a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rsi
  unsigned int v7; // r12d
  _NDIS_MINIPORT_BLOCK *Miniport; // r14
  __int64 v10; // rdx
  _NDIS_IF_BLOCK *IfBlock; // r13
  unsigned __int8 MajorNdisVersion; // cl
  __int32 ifAdminStatus; // ecx
  unsigned __int32 MediaConnectState; // eax
  int MiniportStatistics; // eax
  unsigned __int64 ifLastChange; // rax
  bool v18; // cf
  struct _NDIS_FILTER_BLOCK *v19; // r8
  struct _NDIS_MINIPORT_BLOCK *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h]
  struct _NDIS_OID_REQUEST v23; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0LL;
  v22 = a2;
  memset(&v23, 0, 248);
  v7 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_LqL(0x38u, a2, a2, (__int64)a4);
  memset(&v23, 0, 0xF8uLL);
  Miniport = a1->Miniport;
  v10 = v22;
  *(_DWORD *)&v23.NdisReserved[16] |= 8u;
  IfBlock = a1->IfBlock;
  *(_QWORD *)&v23.NdisReserved[32] = &ndisIntReqNsi;
  v23.Header = (NDIS_OBJECT_HEADER)15466902;
  v23.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v23.RequestType = 2LL;
  v23.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v23.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  MajorNdisVersion = Miniport->DriverHandle->MajorNdisVersion;
  if ( v22 == 66184 )
  {
    if ( *a3 >= 4 )
    {
      *a3 = 4;
      ifAdminStatus = Miniport->IfBlock->ifAdminStatus;
      goto LABEL_12;
    }
    return 3221291030LL;
  }
  if ( v22 > 0x10288 )
  {
    switch ( v22 )
    {
      case 0x1028Au:
        if ( *a3 < 4 )
          return 3221291030LL;
        *a3 = 4;
        MediaConnectState = IfBlock->MediaConnectState;
        goto LABEL_20;
      case 0x1028Cu:
        if ( *a3 < 4 )
          return 3221291030LL;
        *a3 = 4;
        MediaConnectState = IfBlock->MediaDuplexState;
        goto LABEL_20;
      case 0x20106u:
        if ( *a3 < 0x90 )
          return 3221291030LL;
        *a3 = 144;
        MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, a4, a1);
        goto LABEL_32;
      case 0x20202u:
        if ( *a3 < 8 )
          return 3221291030LL;
        v23.DATA.QUERY_INFORMATION.Oid = 131586;
        break;
      case 0x20208u:
        if ( *a3 < 8 )
          return 3221291030LL;
        v23.DATA.QUERY_INFORMATION.Oid = 131592;
        break;
      default:
        switch ( v22 )
        {
          case 0x20219u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v18 = MajorNdisVersion < 6u;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
            v21 = 0LL;
            v19 = a1;
            v20 = Miniport;
            if ( v18 )
            {
              v23.DATA.QUERY_INFORMATION.Oid = 131591;
              ndisIfQuerySetMiniport(Miniport, &v23, a1);
              *(_QWORD *)a4 = v21;
              v21 = 0LL;
              v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
              v23.DATA.QUERY_INFORMATION.Oid = 131593;
              v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v23, a1);
              *(_QWORD *)a4 += v21;
              v23.DATA.QUERY_INFORMATION.Oid = 131595;
              goto LABEL_68;
            }
            v23.DATA.QUERY_INFORMATION.Oid = 131609;
            break;
          case 0x2021Au:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v18 = MajorNdisVersion < 6u;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
            v21 = 0LL;
            v19 = a1;
            v20 = Miniport;
            if ( v18 )
            {
              v23.DATA.QUERY_INFORMATION.Oid = 131585;
              ndisIfQuerySetMiniport(Miniport, &v23, a1);
              *(_QWORD *)a4 = v21;
              v21 = 0LL;
              v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
              v23.DATA.QUERY_INFORMATION.Oid = 131587;
              v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v23, a1);
              *(_QWORD *)a4 += v21;
              v23.DATA.QUERY_INFORMATION.Oid = 131589;
              goto LABEL_68;
            }
            v23.DATA.QUERY_INFORMATION.Oid = 131610;
            break;
          case 0x2021Bu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v18 = MajorNdisVersion < 6u;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
            v21 = 0LL;
            v19 = a1;
            v20 = Miniport;
            if ( v18 )
            {
              v23.DATA.QUERY_INFORMATION.Oid = 131332;
              ndisIfQuerySetMiniport(Miniport, &v23, a1);
              *(_QWORD *)a4 = v21;
              v23.DATA.QUERY_INFORMATION.Oid = 131333;
LABEL_68:
              v21 = 0LL;
              v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
              v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v23, a1);
              *(_QWORD *)a4 += v21;
              goto LABEL_33;
            }
            v23.DATA.QUERY_INFORMATION.Oid = 131611;
            break;
          case 0x2021Cu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            if ( MajorNdisVersion < 6u )
              goto LABEL_26;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
            v21 = 0LL;
            v23.DATA.QUERY_INFORMATION.Oid = 131612;
            v7 = ndisIfQuerySetMiniport(Miniport, &v23, a1);
LABEL_72:
            *(_QWORD *)a4 = v21;
            goto LABEL_33;
          default:
LABEL_62:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v23.DATA.QUERY_INFORMATION.Oid = v10;
            v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            *(_QWORD *)a4 = 0LL;
            v23.DATA.QUERY_INFORMATION.InformationBuffer = a4;
            MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v23, a1);
LABEL_32:
            v7 = MiniportStatistics;
            goto LABEL_33;
        }
        ndisIfQuerySetMiniport(v20, &v23, v19);
        goto LABEL_72;
    }
    *a3 = 8;
    v23.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
    v23.DATA.QUERY_INFORMATION.InformationBuffer = &v21;
    v21 = 0LL;
    v7 = ndisIfQuerySetMiniport(Miniport, &v23, a1);
    if ( !v7 )
      v4 = v21;
    *(_QWORD *)a4 = v4;
    goto LABEL_33;
  }
  switch ( v22 )
  {
    case 0x10106u:
      if ( *a3 < 4 )
        return 3221291030LL;
      *a3 = 4;
      MediaConnectState = IfBlock->ifMtu;
LABEL_20:
      *(_DWORD *)a4 = MediaConnectState;
      goto LABEL_13;
    case 0x10280u:
      if ( *a3 )
      {
        *a3 = 1;
        *a4 = Miniport->IfBlock->ifPromiscuousMode;
        goto LABEL_13;
      }
      return 3221291030LL;
    case 0x10281u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifLastChange;
      goto LABEL_36;
    case 0x10282u:
      if ( *a3 < 8 )
        return 3221291030LL;
      *a3 = 8;
      ifLastChange = IfBlock->ifCounterDiscontinuityTime;
      goto LABEL_36;
  }
  if ( v22 != 66179 )
  {
    switch ( v22 )
    {
      case 0x10284u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        ifLastChange = IfBlock->XmitLinkSpeed;
        break;
      case 0x10285u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
        ifLastChange = IfBlock->RcvLinkSpeed;
        break;
      case 0x10286u:
        if ( *a3 < 8 )
          return 3221291030LL;
        *a3 = 8;
LABEL_26:
        *(_QWORD *)a4 = 0LL;
        goto LABEL_13;
      case 0x10287u:
        if ( *a3 < 0xD8 )
          return 3221291030LL;
        *a3 = 216;
        *(_DWORD *)a4 = Miniport->IfBlock->ifOperStatus;
        *((_DWORD *)a4 + 1) = Miniport->IfBlock->ifOperStatusFlags;
        *((_DWORD *)a4 + 2) = IfBlock->MediaConnectState;
        *((_DWORD *)a4 + 3) = IfBlock->MediaDuplexState;
        *((_QWORD *)a4 + 3) = IfBlock->XmitLinkSpeed;
        *((_QWORD *)a4 + 4) = IfBlock->RcvLinkSpeed;
        v7 = ndisIfGetMiniportStatistics(Miniport, a4 + 64, a1);
        *((_DWORD *)a4 + 4) = IfBlock->ifMtu;
        a4[20] = Miniport->IfBlock->ifPromiscuousMode;
        a4[21] = IfBlock->ifDeviceWakeUpEnable;
        *((_QWORD *)a4 + 5) = IfBlock->ifLastChange;
        *((_QWORD *)a4 + 6) = IfBlock->ifCounterDiscontinuityTime;
        *((_QWORD *)a4 + 7) = 0LL;
        *((_DWORD *)a4 + 52) = IfBlock->CompartmentId;
        *((_DWORD *)a4 + 53) = Miniport->IfBlock->SupportedStatistics;
LABEL_33:
        v10 = v22;
        goto LABEL_13;
      default:
        goto LABEL_62;
    }
LABEL_36:
    *(_QWORD *)a4 = ifLastChange;
    goto LABEL_13;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  ifAdminStatus = Miniport->IfBlock->ifOperStatus;
LABEL_12:
  *(_DWORD *)a4 = ifAdminStatus;
LABEL_13:
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_LqL(0x39u, v10, v10, (__int64)a4);
  return v7;
}
