/*
 * XREFs of ndisSetupMiniportProtocolHandlers @ 0x1C0018C68
 * Callers:
 *     ndisSetupNdis6OpenHandlers @ 0x1C0018BF4 (ndisSetupNdis6OpenHandlers.c)
 * Callees:
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 */

_UNKNOWN **__fastcall ndisSetupMiniportProtocolHandlers(_QWORD *a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  bool v7; // r14
  bool v8; // bp
  char v9; // dl
  __int64 v10; // rcx
  bool v11; // zf
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = *(_BYTE *)(a2 + 56) >= 6u;
  v8 = *(_BYTE *)(a3 + 32) >= 6u;
  v9 = byte_1C00895CD;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
  {
    result = (_UNKNOWN **)WPP_SF_qqq(136LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, a3, a1);
    v9 = byte_1C00895CD;
  }
  if ( !v7 )
    goto LABEL_14;
  if ( v8 )
  {
    v10 = a1[4];
    a1[65] = *(_QWORD *)(a2 + 184);
    a1[67] = v10;
    result = *(_UNKNOWN ***)(a2 + 176);
    a1[68] = result;
    a1[69] = v10;
    *(_DWORD *)(a3 + 2248) = 1;
  }
  if ( !v8 )
  {
    if ( !*(_BYTE *)(a3 + 1993) )
    {
      *(_DWORD *)(a3 + 2012) = 0;
      *(_BYTE *)(a3 + 1993) = 1;
    }
    a1[66] = a3;
    a1[65] = *(_QWORD *)(a2 + 184);
    a1[67] = a1[4];
    v11 = (*(_DWORD *)(a3 + 120) & 0x20000000) == 0;
    *(_QWORD *)(a3 + 1896) = ndisMIndicatePacketsToNetBufferLists;
    if ( !v11 )
      *(_QWORD *)(a3 + 432) = ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a3 + 2192) = a3;
    *(_QWORD *)(a3 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a3 + 640) = &EthIndicateReceive;
    a1[68] = *(_QWORD *)(a2 + 176);
    result = (_UNKNOWN **)a1[4];
    a1[69] = result;
    *(_DWORD *)(a3 + 2248) = 1;
LABEL_14:
    if ( !v7 )
    {
      result = (_UNKNOWN **)&ndisMSendNetBufferListsCompleteToNdisPackets;
      a1[67] = a1;
      a1[65] = &ndisMSendNetBufferListsCompleteToNdisPackets;
    }
  }
  if ( (unsigned __int8)v9 >= 4u )
    return (_UNKNOWN **)WPP_SF_qqq(137LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, a3, a1);
  return result;
}
