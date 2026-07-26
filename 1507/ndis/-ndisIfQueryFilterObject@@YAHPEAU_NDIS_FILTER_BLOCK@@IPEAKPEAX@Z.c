/*
 * XREFs of ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C0096C50
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C0096B90 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_LqL @ 0x1C003DC44 (WPP_SF_LqL.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009756C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C5DDC (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisIfQueryFilterObject(
        struct _NDIS_FILTER_BLOCK *a1,
        __int64 a2,
        unsigned int *a3,
        _NET_IF_OPER_STATUS *a4)
{
  __int64 v4; // rbx
  unsigned int v6; // r14d
  unsigned int v8; // r12d
  _NDIS_MINIPORT_BLOCK *Miniport; // r15
  __int64 IfBlock; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // r8
  __int32 ifOperStatus; // ecx
  int MiniportStatistics; // eax
  __int64 v17; // r8
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h]
  struct _NDIS_OID_REQUEST v20; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0LL;
  v6 = a2;
  memset(&v20, 0, 248);
  v8 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_LqL(0x38u, a2, a2, (__int64)a4);
  memset(&v20, 0, 0xF8uLL);
  *(_DWORD *)&v20.NdisReserved[16] |= 8u;
  Miniport = a1->Miniport;
  IfBlock = (__int64)a1->IfBlock;
  *(_QWORD *)&v20.NdisReserved[32] = &ndisIntReqNsi;
  v20.Header = (NDIS_OBJECT_HEADER)15466902;
  v20.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v20.RequestType = 2LL;
  v20.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v20.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  DriverHandle = Miniport->DriverHandle;
  v19 = IfBlock;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( v6 == 66179 )
  {
    if ( *a3 >= 4 )
    {
      *a3 = 4;
      ifOperStatus = Miniport->IfBlock->ifOperStatus;
      goto LABEL_10;
    }
    return 3221291030LL;
  }
  if ( v6 == 65798 )
  {
    if ( *a3 >= 4 )
    {
      *a3 = 4;
      *a4 = *(_NET_IF_OPER_STATUS *)(IfBlock + 1120);
      goto LABEL_11;
    }
    return 3221291030LL;
  }
  if ( v6 != 66184 )
  {
    if ( v6 != 131334 )
    {
      if ( v6 > 0x20106 )
      {
        switch ( v6 )
        {
          case 0x20202u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
            v18 = 0LL;
            v20.DATA.QUERY_INFORMATION.Oid = 131586;
            v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v8 = ndisIfQuerySetMiniport(Miniport, &v20, a1);
            if ( !v8 )
              v4 = v18;
            *(_QWORD *)a4 = v4;
            break;
          case 0x20208u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
            v18 = 0LL;
            v20.DATA.QUERY_INFORMATION.Oid = 131592;
            v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v8 = ndisIfQuerySetMiniport(Miniport, &v20, a1);
            if ( !v8 )
              v4 = v18;
            *(_QWORD *)a4 = v4;
            break;
          case 0x20219u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
            v18 = 0LL;
            v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( MajorNdisVersion >= 6u )
            {
              v20.DATA.QUERY_INFORMATION.Oid = 131609;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 = v18;
            }
            else
            {
              v20.DATA.QUERY_INFORMATION.Oid = 131591;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 = v18;
              v18 = 0LL;
              v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
              v20.DATA.QUERY_INFORMATION.Oid = 131593;
              v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 += v18;
              v18 = 0LL;
              v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
              v20.DATA.QUERY_INFORMATION.Oid = 131595;
              v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 += v18;
            }
            break;
          case 0x2021Au:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
            v18 = 0LL;
            v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( MajorNdisVersion >= 6u )
            {
              v20.DATA.QUERY_INFORMATION.Oid = 131610;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 = v18;
            }
            else
            {
              v20.DATA.QUERY_INFORMATION.Oid = 131585;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 = v18;
              v18 = 0LL;
              v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
              v20.DATA.QUERY_INFORMATION.Oid = 131587;
              v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 += v18;
              v18 = 0LL;
              v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
              v20.DATA.QUERY_INFORMATION.Oid = 131589;
              v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 += v18;
            }
            break;
          case 0x2021Bu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
            v18 = 0LL;
            v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            if ( MajorNdisVersion >= 6u )
            {
              v20.DATA.QUERY_INFORMATION.Oid = 131611;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 = v18;
            }
            else
            {
              v20.DATA.QUERY_INFORMATION.Oid = 131332;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 = v18;
              v18 = 0LL;
              v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
              v20.DATA.QUERY_INFORMATION.Oid = 131333;
              v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 += v18;
            }
            break;
          case 0x2021Cu:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            if ( MajorNdisVersion >= 6u )
            {
              v18 = 0LL;
              v20.DATA.QUERY_INFORMATION.InformationBuffer = &v18;
              v20.DATA.QUERY_INFORMATION.Oid = 131612;
              v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
              v8 = ndisIfQuerySetMiniport(Miniport, &v20, a1);
              *(_QWORD *)a4 = v18;
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
            v20.DATA.QUERY_INFORMATION.Oid = v6;
            v20.DATA.QUERY_INFORMATION.InformationBuffer = a4;
            v20.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
            v8 = ndisIfQuerySetMiniport(Miniport, &v20, a1);
            break;
        }
      }
      else
      {
        switch ( v6 )
        {
          case 0x10280u:
            if ( !*a3 )
              return 3221291030LL;
            *a3 = 1;
            *(_BYTE *)a4 = Miniport->IfBlock->ifPromiscuousMode;
            break;
          case 0x10281u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = *(_QWORD *)(IfBlock + 1360);
            break;
          case 0x10282u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = *(_QWORD *)(IfBlock + 1368);
            break;
          case 0x10284u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = *(_QWORD *)(IfBlock + 1200);
            break;
          case 0x10285u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = *(_QWORD *)(IfBlock + 1208);
            break;
          case 0x10286u:
            if ( *a3 < 8 )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = 0LL;
            break;
          case 0x10287u:
            if ( *a3 < 0xD8 )
              return 3221291030LL;
            *a3 = 216;
            *a4 = Miniport->IfBlock->ifOperStatus;
            a4[1] = (_NET_IF_OPER_STATUS)Miniport->IfBlock->ifOperStatusFlags;
            a4[2] = *(_NET_IF_OPER_STATUS *)(IfBlock + 1220);
            a4[3] = *(_NET_IF_OPER_STATUS *)(IfBlock + 1224);
            *((_QWORD *)a4 + 3) = *(_QWORD *)(IfBlock + 1200);
            *((_QWORD *)a4 + 4) = *(_QWORD *)(IfBlock + 1208);
            MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, a4 + 16, a1);
            v17 = v19;
            v8 = MiniportStatistics;
            a4[4] = *(_NET_IF_OPER_STATUS *)(v19 + 1120);
            IfBlock = Miniport->IfBlock->ifPromiscuousMode;
            *((_BYTE *)a4 + 20) = IfBlock;
            *((_BYTE *)a4 + 21) = *(_BYTE *)(v17 + 1217);
            *((_QWORD *)a4 + 5) = *(_QWORD *)(v17 + 1360);
            *((_QWORD *)a4 + 6) = *(_QWORD *)(v17 + 1368);
            *((_QWORD *)a4 + 7) = 0LL;
            a4[52] = *(_NET_IF_OPER_STATUS *)(v17 + 576);
            a4[53] = (_NET_IF_OPER_STATUS)Miniport->IfBlock->SupportedStatistics;
            break;
          case 0x1028Au:
            if ( *a3 < 4 )
              return 3221291030LL;
            *a3 = 4;
            *a4 = *(_NET_IF_OPER_STATUS *)(IfBlock + 1220);
            break;
          case 0x1028Cu:
            if ( *a3 < 4 )
              return 3221291030LL;
            *a3 = 4;
            *a4 = *(_NET_IF_OPER_STATUS *)(IfBlock + 1224);
            break;
          default:
            goto LABEL_65;
        }
      }
      goto LABEL_11;
    }
    if ( *a3 >= 0x90 )
    {
      *a3 = 144;
      v8 = ndisIfGetMiniportStatistics(Miniport, a4, a1);
      goto LABEL_11;
    }
    return 3221291030LL;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  ifOperStatus = Miniport->IfBlock->ifAdminStatus;
LABEL_10:
  *a4 = ifOperStatus;
LABEL_11:
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_LqL(0x39u, IfBlock, v6, (__int64)a4);
  return v8;
}
