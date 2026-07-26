/*
 * XREFs of ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C009A350
 * Callers:
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C009A290 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_LqL @ 0x1C0042948 (WPP_SF_LqL.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009AF68 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C3C54 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisIfQueryFilterObject(
        struct _NDIS_FILTER_BLOCK *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v7; // rbx
  unsigned int MiniportStatistics; // r14d
  __int64 v10; // rdx
  _NDIS_MINIPORT_BLOCK *Miniport; // r15
  __int64 IfBlock; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // r8
  __int32 ifOperStatus; // ecx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h]
  struct _NDIS_OID_REQUEST v21; // [rsp+40h] [rbp-C0h] BYREF

  v7 = 0LL;
  MiniportStatistics = 0;
  memset(&v21, 0, 0xF8uLL);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_LqL(0x38u, v10, a2, (__int64)a4);
  memset(&v21, 0, 0xF8uLL);
  *(_DWORD *)&v21.NdisReserved[16] |= 8u;
  Miniport = a1->Miniport;
  IfBlock = (__int64)a1->IfBlock;
  *(_QWORD *)&v21.NdisReserved[32] = &ndisIntReqNsi;
  v21.Header = (NDIS_OBJECT_HEADER)15466902;
  v21.DATA.QUERY_INFORMATION.Oid = 0;
  *(_QWORD *)&v21.RequestType = 2LL;
  v21.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v21.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  DriverHandle = Miniport->DriverHandle;
  v20 = IfBlock;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( a2 == 66179 )
  {
    if ( *a3 < 4 )
      return 3221291030LL;
    *a3 = 4;
    ifOperStatus = Miniport->IfBlock->ifOperStatus;
LABEL_13:
    *(_DWORD *)a4 = ifOperStatus;
    goto LABEL_14;
  }
  if ( a2 != 65798 )
  {
    if ( a2 != 66184 )
    {
      switch ( a2 )
      {
        case 0x10286u:
          if ( *a3 >= 8 )
          {
            *a3 = 8;
            *(_QWORD *)a4 = 0LL;
            goto LABEL_14;
          }
          break;
        case 0x10281u:
          if ( *a3 >= 8 )
          {
            *a3 = 8;
            *(_QWORD *)a4 = *(_QWORD *)(IfBlock + 1360);
            goto LABEL_14;
          }
          break;
        case 0x20106u:
          if ( *a3 >= 0x90 )
          {
            *a3 = 144;
            MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, a4, a1);
            goto LABEL_14;
          }
          break;
        default:
          if ( a2 > 0x20106 )
          {
            switch ( a2 )
            {
              case 0x20202u:
                if ( *a3 < 8 )
                  return 3221291030LL;
                *a3 = 8;
                v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                v19 = 0LL;
                v21.DATA.QUERY_INFORMATION.Oid = 131586;
                v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v21, a1);
                if ( !MiniportStatistics )
                  v7 = v19;
                *(_QWORD *)a4 = v7;
                break;
              case 0x20208u:
                if ( *a3 < 8 )
                  return 3221291030LL;
                *a3 = 8;
                v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                v19 = 0LL;
                v21.DATA.QUERY_INFORMATION.Oid = 131592;
                v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v21, a1);
                if ( !MiniportStatistics )
                  v7 = v19;
                *(_QWORD *)a4 = v7;
                break;
              case 0x20219u:
                if ( *a3 < 8 )
                  return 3221291030LL;
                *a3 = 8;
                v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                v19 = 0LL;
                v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v21.DATA.QUERY_INFORMATION.Oid = 131609;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 = v19;
                }
                else
                {
                  v21.DATA.QUERY_INFORMATION.Oid = 131591;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 = v19;
                  v19 = 0LL;
                  v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                  v21.DATA.QUERY_INFORMATION.Oid = 131593;
                  v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 += v19;
                  v19 = 0LL;
                  v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                  v21.DATA.QUERY_INFORMATION.Oid = 131595;
                  v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 += v19;
                }
                break;
              case 0x2021Au:
                if ( *a3 < 8 )
                  return 3221291030LL;
                *a3 = 8;
                v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                v19 = 0LL;
                v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v21.DATA.QUERY_INFORMATION.Oid = 131610;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 = v19;
                }
                else
                {
                  v21.DATA.QUERY_INFORMATION.Oid = 131585;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 = v19;
                  v19 = 0LL;
                  v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                  v21.DATA.QUERY_INFORMATION.Oid = 131587;
                  v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 += v19;
                  v19 = 0LL;
                  v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                  v21.DATA.QUERY_INFORMATION.Oid = 131589;
                  v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 += v19;
                }
                break;
              case 0x2021Bu:
                if ( *a3 < 8 )
                  return 3221291030LL;
                *a3 = 8;
                v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                v19 = 0LL;
                v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v21.DATA.QUERY_INFORMATION.Oid = 131611;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 = v19;
                }
                else
                {
                  v21.DATA.QUERY_INFORMATION.Oid = 131332;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 = v19;
                  v19 = 0LL;
                  v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                  v21.DATA.QUERY_INFORMATION.Oid = 131333;
                  v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 += v19;
                }
                break;
              case 0x2021Cu:
                if ( *a3 < 8 )
                  return 3221291030LL;
                *a3 = 8;
                if ( MajorNdisVersion >= 6u )
                {
                  v19 = 0LL;
                  v21.DATA.QUERY_INFORMATION.InformationBuffer = &v19;
                  v21.DATA.QUERY_INFORMATION.Oid = 131612;
                  v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                  MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v21, a1);
                  *(_QWORD *)a4 = v19;
                }
                else
                {
                  *(_QWORD *)a4 = 0LL;
                }
                break;
              default:
LABEL_67:
                if ( *a3 < 8 )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = 0LL;
                v21.DATA.QUERY_INFORMATION.Oid = a2;
                v21.DATA.QUERY_INFORMATION.InformationBuffer = a4;
                v21.DATA.QUERY_INFORMATION.InformationBufferLength = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(Miniport, &v21, a1);
                break;
            }
          }
          else
          {
            switch ( a2 )
            {
              case 0x10280u:
                if ( !*a3 )
                  return 3221291030LL;
                *a3 = 1;
                *a4 = Miniport->IfBlock->ifPromiscuousMode;
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
              case 0x10287u:
                if ( *a3 < 0xD8 )
                  return 3221291030LL;
                *a3 = 216;
                *(_DWORD *)a4 = Miniport->IfBlock->ifOperStatus;
                *((_DWORD *)a4 + 1) = Miniport->IfBlock->ifOperStatusFlags;
                *((_DWORD *)a4 + 2) = *(_DWORD *)(IfBlock + 1220);
                *((_DWORD *)a4 + 3) = *(_DWORD *)(IfBlock + 1224);
                *((_QWORD *)a4 + 3) = *(_QWORD *)(IfBlock + 1200);
                *((_QWORD *)a4 + 4) = *(_QWORD *)(IfBlock + 1208);
                v17 = ndisIfGetMiniportStatistics(Miniport, a4 + 64, a1);
                v18 = v20;
                MiniportStatistics = v17;
                *((_DWORD *)a4 + 4) = *(_DWORD *)(v20 + 1120);
                IfBlock = Miniport->IfBlock->ifPromiscuousMode;
                a4[20] = IfBlock;
                a4[21] = *(_BYTE *)(v18 + 1217);
                *((_QWORD *)a4 + 5) = *(_QWORD *)(v18 + 1360);
                *((_QWORD *)a4 + 6) = *(_QWORD *)(v18 + 1368);
                *((_QWORD *)a4 + 7) = 0LL;
                *((_DWORD *)a4 + 52) = *(_DWORD *)(v18 + 576);
                *((_DWORD *)a4 + 53) = Miniport->IfBlock->SupportedStatistics;
                break;
              case 0x1028Au:
                if ( *a3 < 4 )
                  return 3221291030LL;
                *a3 = 4;
                *(_DWORD *)a4 = *(_DWORD *)(IfBlock + 1220);
                break;
              case 0x1028Cu:
                if ( *a3 < 4 )
                  return 3221291030LL;
                *a3 = 4;
                *(_DWORD *)a4 = *(_DWORD *)(IfBlock + 1224);
                break;
              default:
                goto LABEL_67;
            }
          }
          goto LABEL_14;
      }
      return 3221291030LL;
    }
    if ( *a3 < 4 )
      return 3221291030LL;
    *a3 = 4;
    ifOperStatus = Miniport->IfBlock->ifAdminStatus;
    goto LABEL_13;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  *(_DWORD *)a4 = *(_DWORD *)(IfBlock + 1120);
LABEL_14:
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_LqL(0x39u, IfBlock, a2, (__int64)a4);
  return MiniportStatistics;
}
