/*
 * XREFs of ndisQueryGuidData @ 0x1C00A976C
 * Callers:
 *     ndisWmiQuerySingleInstance @ 0x1C00A9BF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00D5C4C (ndisWmiQueryAllData.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0010DE8 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWmiGetGuid @ 0x1C00178A4 (ndisWmiGetGuid.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisWmiQueryPMActiveCapabilities @ 0x1C00CAF78 (ndisWmiQueryPMActiveCapabilities.c)
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00D72F8 (ndisNDKWmiGetAdapterCapabilities.c)
 */

__int64 __fastcall ndisQueryGuidData(
        CHAR *a1,
        size_t Size,
        struct _NDIS_MINIPORT_BLOCK *a3,
        void *a4,
        _QWORD *a5,
        int a6,
        struct _NDIS_MINIPORT_BLOCK *a7)
{
  size_t v8; // r13
  CHAR v10; // di
  PCSZ v12; // rsi
  int v13; // eax
  NTSTATUS v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  char *v24; // rcx
  __int64 Length; // rax
  unsigned int PnPFlags; // ecx
  __int64 v27; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct _NDIS_MINIPORT_BLOCK *v31; // rcx
  int SetMiniport; // eax
  unsigned int v33; // r14d
  int v34; // eax
  int v35; // eax
  CHAR *v36; // rsi
  unsigned int v37; // edx
  __int64 v38; // [rsp+20h] [rbp-E0h]
  PCSZ SourceString; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  _STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  _BYTE v44[248]; // [rsp+80h] [rbp-80h] BYREF

  v8 = (unsigned int)Size;
  v10 = 0;
  v43 = (__int64)a7;
  SourceString = 0LL;
  memset(v44, 0, sizeof(v44));
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  UnicodeString.Length = 0;
  if ( (unsigned __int8)byte_1C00895D9 >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a3, a7);
  if ( !(_DWORD)v8 )
    goto LABEL_35;
  memset(a1, 0, v8);
  ndisWmiGetGuid(&SourceString, (__int64)a3, a5, 0);
  v12 = SourceString;
  if ( !SourceString )
  {
    if ( (unsigned __int8)byte_1C00895D9 >= 2u )
      WPP_SF_q(0x1Fu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a3);
    goto LABEL_38;
  }
  v13 = *((_DWORD *)SourceString + 6);
  if ( (v13 & 0x20000000) != 0 )
  {
    v14 = 0;
    v15 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v15 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( v15 )
    {
      v16 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
      if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
        v16 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
      if ( v16 )
      {
        v17 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
        if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
          v17 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
        if ( v17 )
        {
          v18 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
          if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
            v18 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
          if ( v18 )
          {
            v19 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
            if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
              v19 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
            if ( v19 )
            {
              v20 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
                v20 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
              if ( !v20 )
              {
                *(_DWORD *)a1 = 1835392;
                *((_DWORD *)a1 + 1) = a3->PMAdminConfig.Value & 3;
                *((_DWORD *)a1 + 2) = (a3->PMAdminConfig.Value >> 2) & 3;
                *((_DWORD *)a1 + 3) = (a3->PMAdminConfig.Value >> 4) & 3;
                *((_DWORD *)a1 + 4) = (a3->PMAdminConfig.Value >> 6) & 3;
                *((_DWORD *)a1 + 5) = (a3->PMAdminConfig.Value >> 8) & 3;
                *((_DWORD *)a1 + 6) = (a3->PMAdminConfig.Value >> 10) & 3;
                goto LABEL_32;
              }
              v21 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
                v21 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
              if ( !v21 )
              {
                ndisWmiQueryPMActiveCapabilities(a3, a1);
                goto LABEL_32;
              }
              v22 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
                v22 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
              if ( !v22 )
              {
                v10 = a3->CombinedNdisRSSParameters != 0LL;
LABEL_31:
                *a1 = v10;
                goto LABEL_32;
              }
              v27 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
                v27 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
              if ( !v27 )
              {
                NDKBlock = ndisGetNDKBlock(a3);
                if ( NDKBlock )
                  v10 = *((_BYTE *)NDKBlock + 24);
                goto LABEL_31;
              }
              v29 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
                v29 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
              if ( !v29 )
              {
                ndisNDKWmiGetAdapterCapabilities(a3, a1);
                goto LABEL_32;
              }
              if ( !a4 )
                goto LABEL_38;
              v30 = *(_QWORD *)SourceString - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
              if ( *(_QWORD *)SourceString == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
                v30 = *((_QWORD *)SourceString + 1) - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
              if ( v30 )
              {
LABEL_38:
                v14 = -1073741811;
                goto LABEL_32;
              }
              goto LABEL_32;
            }
            if ( (a3->PnPFlags & 0x4000001) == 0x4000001
              && (unsigned int)(a3->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
            {
              *a1 = BYTE1(a3->PnPCapabilities) & 1;
              goto LABEL_32;
            }
LABEL_49:
            v14 = -1073741808;
            goto LABEL_32;
          }
          PnPFlags = a3->PnPFlags;
          if ( (PnPFlags & 0x4000001) != 0x4000001 || a3->AoAc )
            goto LABEL_49;
          LOBYTE(PnPFlags) = (PnPFlags & 0x40) != 0;
        }
        else
        {
          if ( (a3->PnPFlags & 0x8001) != 1 || a3->AoAc )
            goto LABEL_49;
          PnPFlags = ((unsigned __int8)~LOBYTE(a3->PnPCapabilities) >> 3) & 1;
        }
        *a1 = PnPFlags;
        goto LABEL_32;
      }
      *(_QWORD *)&v42 = 0LL;
      v24 = a1 + 18;
      *((_QWORD *)&v42 + 1) = a3->NetLuid.Value;
      DWORD1(v42) = a3->IfIndex;
      Length = a3->MiniportName.Length;
      LODWORD(v42) = 1573124;
      *(_OWORD *)a1 = v42;
      *((_WORD *)a1 + 8) = Length;
    }
    else
    {
      v24 = a1 + 2;
      *(_WORD *)a1 = a3->MiniportName.Length;
    }
    memmove(v24, a3->MiniportName.Buffer, a3->MiniportName.Length);
    goto LABEL_32;
  }
  if ( (v13 & 0x80u) != 0 )
  {
LABEL_35:
    v14 = 0;
    goto LABEL_32;
  }
  if ( (v13 & 1) == 0 )
    goto LABEL_49;
  if ( (v13 & 0x10) != 0 )
  {
    LODWORD(v8) = v8 - 4;
    SourceString = a1 + 4;
  }
  else if ( (v13 & 0xC) != 0 )
  {
    LODWORD(v8) = v8 - 2;
    SourceString = a1 + 2;
    if ( (v13 & 4) != 0 )
      LODWORD(v8) = ((unsigned int)v8 >> 1) + 1;
  }
  else
  {
    SourceString = a1;
  }
  memset(v44, 0, sizeof(v44));
  *(_DWORD *)&v44[88] |= 8u;
  *(_QWORD *)&v44[104] = &ndisIntReqWmi;
  *(_DWORD *)v44 = 15466902;
  *(_DWORD *)&v44[32] = *((_DWORD *)v12 + 4);
  *(_QWORD *)&v44[40] = SourceString;
  *(_QWORD *)&v44[4] = 2LL;
  *(_DWORD *)&v44[48] = v8;
  if ( a4 || (v31 = a7) == 0LL )
    v31 = a3;
  SetMiniport = ndisQuerySetMiniport(v31, a4, (struct _NDIS_OID_REQUEST *)v44, 0LL, 0LL);
  v33 = SetMiniport;
  if ( SetMiniport )
  {
    if ( (unsigned __int8)byte_1C00895D9 >= 2u )
      WPP_SF_qD(0x20u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a7, SetMiniport);
    if ( (*((_DWORD *)v12 + 6) & 0x200) != 0 )
    {
      if ( (v33 & 0xC0010000) == 0xC0010000 )
        v33 = (unsigned __int16)v33 | 0xC0230000;
    }
    else if ( v33 != 259 && v33 != -2147483643 )
    {
      v34 = -1073741823;
      if ( v33 != -1073741823 && v33 != -1073741670 && v33 != -1073741637 )
      {
        if ( v33 == -1073676266 )
        {
          v14 = -1073741789;
        }
        else if ( v33 == -1073676268 )
        {
          v14 = -1073741306;
        }
        else
        {
          if ( v33 == -1073676267 )
            v34 = -1073741811;
          v14 = v34;
        }
        goto LABEL_32;
      }
    }
    v14 = v33;
    goto LABEL_32;
  }
  v35 = *((_DWORD *)v12 + 6);
  v14 = 0;
  if ( (v35 & 0x10) != 0 )
  {
    *(_DWORD *)a1 = (unsigned int)v8 / *((_DWORD *)v12 + 5);
  }
  else if ( (v35 & 8) != 0 )
  {
    *(_WORD *)a1 = v8;
  }
  else if ( (v35 & 4) != 0 )
  {
    v36 = (CHAR *)SourceString;
    RtlInitAnsiString(&DestinationString, SourceString);
    v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    if ( v14 >= 0 )
    {
      v37 = UnicodeString.Length;
      *(_WORD *)a1 = UnicodeString.Length;
      memmove(v36, UnicodeString.Buffer, v37);
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
LABEL_32:
  if ( (unsigned __int8)byte_1C00895D9 >= 4u )
  {
    LODWORD(v38) = v14;
    WPP_SF_qqd(0x21u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a3, v43, v38);
  }
  return (unsigned int)v14;
}
