/*
 * XREFs of ndisIovCreateDefaultNicSwitch @ 0x1C00ABC88
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisIovAddSwitchToList @ 0x1C0065108 (ndisIovAddSwitchToList.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00A5D70 (NdisOpenConfigurationKeyByName.c)
 *     NdisCloseConfiguration @ 0x1C00A9050 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AA1F0 (NdisOpenConfigurationEx.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00D9DA0 (ndisIovReadSwitchConfiguration.c)
 */

__int64 __fastcall ndisIovCreateDefaultNicSwitch(__int64 a1)
{
  unsigned int SwitchConfiguration; // ebx
  __int64 v3; // rax
  __int64 v5; // rax
  char *PoolWithTag; // rax
  char *v7; // rsi
  __int64 *v8; // r12
  __int64 *v9; // rax
  __int64 *v10; // r15
  __int64 *v11; // r13
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  _DWORD *v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // rdx
  char *v21; // rax
  char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int Status[2]; // [rsp+38h] [rbp-D0h] BYREF
  PVOID ConfigurationHandle; // [rsp+40h] [rbp-C8h] BYREF
  PVOID SubKeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v29[248]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v30[4]; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v31[140]; // [rsp+178h] [rbp+70h] BYREF

  memset(&ConfigObject, 0, sizeof(ConfigObject));
  SwitchConfiguration = 0;
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  memset(v31, 0, 548);
  memset(v29, 0, sizeof(v29));
  memset(v30, 0, 12);
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(0xAu, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1);
  v3 = *(_QWORD *)(a1 + 4672);
  if ( v3 && (*(_BYTE *)(v3 + 8) & 3) == 3 )
  {
    v5 = *(_QWORD *)(a1 + 3616);
    if ( !v5 || *(_BYTE *)(v5 + 1) < 2u || *(_WORD *)(v5 + 2) < 0x74u || !*(_DWORD *)(v5 + 36) )
    {
      SwitchConfiguration = -1073741637;
      goto LABEL_4;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x298uLL, 0x6F69444Eu);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SwitchConfiguration = -1073741670;
      goto LABEL_4;
    }
    memset(PoolWithTag, 0, 0x298uLL);
    *((_QWORD *)v7 + 1) = v7;
    *(_QWORD *)v7 = v7;
    v8 = (__int64 *)(v7 + 56);
    *((_QWORD *)v7 + 11) = v7 + 80;
    *((_QWORD *)v7 + 10) = v7 + 80;
    *((_QWORD *)v7 + 8) = v7 + 56;
    *((_QWORD *)v7 + 7) = v7 + 56;
    *((_QWORD *)v7 + 2) = a1;
    *((_QWORD *)v7 + 4) = 1LL;
    v9 = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F69444Eu);
    v10 = v9;
    if ( v9 )
    {
      memset(v9, 0, 0x30uLL);
      *v10 = a1;
      v11 = v10 + 4;
      v10[2] = (__int64)v7;
      v10[5] = (__int64)(v10 + 4);
      v10[4] = (__int64)(v10 + 4);
      *((_QWORD *)v7 + 5) = v10;
      v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x378uLL, 0x6F69444Eu);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, 0x378uLL);
        v13[16] |= 1u;
        *((_QWORD *)v13 + 9) = a1;
        *((_QWORD *)v13 + 10) = 0LL;
        *((_QWORD *)v13 + 11) = v7;
        *((_QWORD *)v13 + 12) = v10;
        *((_QWORD *)v13 + 14) = 49283456LL;
        v13[30] = *((_DWORD *)v7 + 9);
        *((_WORD *)v13 + 322) = -1;
        v13[31] = 0;
        v13[163] = 0;
        v13[164] = 1;
        *((_QWORD *)v13 + 110) = v13 + 218;
        *((_QWORD *)v13 + 109) = v13 + 218;
        ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
        ConfigObject.NdisHandle = (void *)a1;
        ConfigObject.Flags = 0;
        Status[0] = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
        SwitchConfiguration = Status[0];
        if ( !Status[0] )
        {
          NdisOpenConfigurationKeyByName(Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
          SwitchConfiguration = Status[0];
          if ( !Status[0] )
          {
            v31[0] = 35914112;
            SwitchConfiguration = ndisIovReadSwitchConfiguration(SubKeyHandle);
            if ( !SwitchConfiguration )
            {
              if ( v31[2] != 1 || v31[3] )
              {
                SwitchConfiguration = -1073676267;
              }
              else
              {
                v14 = *(_DWORD **)(a1 + 3616);
                v15 = v31[133];
                if ( v31[133] > v14[12] )
                  v15 = v14[12];
                v31[133] = v15;
                v31[134] = v14[10];
                v31[135] = v14[16];
                v31[136] = v14[13] - v31[135];
                memset(v29, 0, sizeof(v29));
                *(_DWORD *)&v29[88] |= 8u;
                *(_QWORD *)&v29[104] = &ndisIntReqGeneric;
                *(_DWORD *)v29 = 15466902;
                *(_QWORD *)&v29[40] = v31;
                *(_QWORD *)&v29[4] = 12LL;
                *(_DWORD *)&v29[48] = 548;
                *(_DWORD *)&v29[32] = 66103;
                *(_QWORD *)&v29[52] = 548LL;
                SwitchConfiguration = ndisQuerySetMiniport((void *)a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, 0LL);
                if ( !SwitchConfiguration )
                {
                  v16 = 4LL;
                  v17 = v7 + 100;
                  v18 = v31;
                  do
                  {
                    *v17 = *v18;
                    v17[1] = v18[1];
                    v17[2] = v18[2];
                    v17[3] = v18[3];
                    v17[4] = v18[4];
                    v17[5] = v18[5];
                    v17[6] = v18[6];
                    v17 += 8;
                    v19 = v18[7];
                    v18 += 8;
                    *(v17 - 1) = v19;
                    --v16;
                  }
                  while ( v16 );
                  *v17 = *v18;
                  v17[1] = v18[1];
                  *((_DWORD *)v17 + 8) = *((_DWORD *)v18 + 8);
                  v13[162] = 1;
                  SwitchConfiguration = ndisIovAddSwitchToList(a1, (__int64)v7);
                  if ( !SwitchConfiguration )
                  {
                    v20 = *v8;
                    v21 = (char *)(v13 + 8);
                    *((_QWORD *)v13 + 4) = *v8;
                    *((_QWORD *)v13 + 5) = v8;
                    if ( *(__int64 **)(v20 + 8) != v8 )
                      __fastfail(3u);
                    *(_QWORD *)(v20 + 8) = v21;
                    *v8 = (__int64)v21;
                    v22 = (char *)(v13 + 12);
                    ++*((_DWORD *)v7 + 12);
                    v23 = *v11;
                    *((_QWORD *)v13 + 6) = *v11;
                    *((_QWORD *)v13 + 7) = v11;
                    if ( *(__int64 **)(v23 + 8) != v11 )
                      __fastfail(3u);
                    *(_QWORD *)(v23 + 8) = v22;
                    *v11 = (__int64)v22;
                    ++*((_DWORD *)v10 + 7);
                    *(_QWORD *)(a1 + 4744) = v10;
                    v24 = *(_QWORD *)(a1 + 4808);
                    *(_QWORD *)v13 = v24;
                    *((_QWORD *)v13 + 1) = a1 + 4808;
                    if ( *(_QWORD *)(v24 + 8) != a1 + 4808 )
                      __fastfail(3u);
                    *(_QWORD *)(v24 + 8) = v13;
                    *(_QWORD *)(a1 + 4808) = v13;
                    ++*(_DWORD *)(a1 + 4800);
                    goto LABEL_41;
                  }
                  v30[0] = 786816;
                  v30[2] = 0;
                  memset(v29, 0, sizeof(v29));
                  *(_DWORD *)&v29[88] |= 8u;
                  *(_QWORD *)&v29[104] = &ndisIntReqGeneric;
                  *(_DWORD *)v29 = 15466902;
                  *(_QWORD *)&v29[40] = v30;
                  *(_DWORD *)&v29[32] = 66105;
                  *(_QWORD *)&v29[4] = 1LL;
                  *(_DWORD *)&v29[48] = 12;
                  ndisQuerySetMiniport((void *)a1, 0LL, (struct _NDIS_OID_REQUEST *)v29, 0LL, 0LL);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        SwitchConfiguration = -1073741670;
      }
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      SwitchConfiguration = -1073741670;
    }
    ExFreePoolWithTag(v7, 0);
LABEL_41:
    if ( SubKeyHandle )
      NdisCloseConfiguration(SubKeyHandle);
    if ( ConfigurationHandle )
      NdisCloseConfiguration(ConfigurationHandle);
  }
LABEL_4:
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qD(0xBu, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1, SwitchConfiguration);
  return SwitchConfiguration;
}
