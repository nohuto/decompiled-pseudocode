/*
 * XREFs of ndisOidPreIovNicSwitchParameters @ 0x1C00D4250
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C00139E8 (ndisIovFindSwitchBySwitchId.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0023E20 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C0038468 (WPP_SF_qqDD.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D282C (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreIovNicSwitchParameters(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r15
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  _BYTE *v4; // r12
  __int64 v5; // r14
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  __int64 v10; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  __int64 *SwitchBySwitchId; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  _BYTE *OidSourceHandle; // rax

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qq(0x19u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v1, v3);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = 548;
  if ( v7 == 12 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x224u )
    {
      if ( *(_DWORD *)(v3 + 52) < 0x224u )
      {
        *(_DWORD *)(v3 + 68) = 548;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 68) = 548;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( *(_DWORD *)(a1 + 40) )
      goto LABEL_51;
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) < 2u )
      goto LABEL_15;
    *(_DWORD *)(a1 + 40) = 0;
    v8 = 552;
    if ( *(_DWORD *)(v3 + 48) >= 0x228u )
    {
      if ( *(_DWORD *)(v3 + 52) < 0x228u )
      {
        *(_DWORD *)(v3 + 68) = 552;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
LABEL_14:
      if ( *(_DWORD *)(a1 + 40) )
      {
LABEL_51:
        v2 = 1;
        goto LABEL_52;
      }
      goto LABEL_15;
    }
    *(_DWORD *)(v3 + 68) = 552;
LABEL_25:
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_14;
  }
  if ( v7 != 1 )
    goto LABEL_50;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x224u )
  {
    *(_DWORD *)(v3 + 56) = 548;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_51;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) >= 2u )
  {
    *(_DWORD *)(a1 + 40) = 0;
    v8 = 552;
    if ( *(_DWORD *)(v3 + 48) >= 0x228u )
      goto LABEL_14;
    *(_DWORD *)(v3 + 56) = 552;
    goto LABEL_25;
  }
LABEL_15:
  if ( !v1 )
    goto LABEL_52;
  v9 = *(_DWORD *)(v3 + 4);
  if ( v9 == 12 )
  {
    *(_DWORD *)(v3 + 60) = 0;
    *(_DWORD *)(v3 + 64) = v8;
  }
  else
  {
    if ( v9 != 1 )
      goto LABEL_29;
    *(_DWORD *)(v3 + 52) = v8;
  }
  v5 = *(_QWORD *)(v3 + 40);
LABEL_29:
  if ( !ndisIovNicSwitchWithoutIovSupported((__int64)v1) )
  {
    SriovCurrentCapabilities = v1->SriovCurrentCapabilities;
    if ( !SriovCurrentCapabilities
      || !v1->NicSwitchCurrentCapabilities
      || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
    {
      goto LABEL_50;
    }
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v10, *(_DWORD *)(v5 + 12));
  if ( !SwitchBySwitchId )
  {
LABEL_34:
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_51;
  }
  v13 = *(_DWORD *)(v3 + 4);
  if ( v13 == 12 )
  {
    memmove(*(void **)(v3 + 40), (char *)SwitchBySwitchId + 100, v8);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(v3 + 60) = v8;
    goto LABEL_51;
  }
  if ( v13 != 1 )
    goto LABEL_52;
  if ( v8 >= 0x228 )
  {
    if ( ndisIovHWvRSSSupported(v1) )
    {
      v14 = *(_DWORD *)(v5 + 548);
      if ( !v14 || v14 > v1->NicSwitchCurrentCapabilities->MaxNumQueuePairsForDefaultVPort )
        goto LABEL_34;
    }
    else if ( *(_DWORD *)(v5 + 548) != 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
  }
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
LABEL_50:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_51;
  }
  v4 = OidSourceHandle;
  if ( (*(_DWORD *)(v5 + 4) & 0x10000) == 0 || *(_WORD *)(v5 + 16) > 0x200u )
    goto LABEL_34;
LABEL_52:
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qqDD(0x1Au, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v1, v4, v2, *(_DWORD *)(a1 + 40));
  return v2;
}
