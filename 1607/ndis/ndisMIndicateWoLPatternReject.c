/*
 * XREFs of ndisMIndicateWoLPatternReject @ 0x1C0049468
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisGetCombinedPMConfig @ 0x1C0022264 (ndisGetCombinedPMConfig.c)
 *     ndisUpdateWmiPMParamsForPatterns @ 0x1C004AEB8 (ndisUpdateWmiPMParamsForPatterns.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00B12E8 (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisMIndicateWoLPatternReject(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v5; // edx
  unsigned __int8 v6; // al
  __int64 **v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  void **v12; // rcx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    v5 = **(_DWORD **)(a2 + 48);
    v6 = *(_BYTE *)(a1 + 32);
    if ( v6 > 6u || v6 == 6 && *(_BYTE *)(a1 + 33) >= 0x14u )
      v7 = (__int64 **)(a1 + 968);
    else
      v7 = (__int64 **)(a1 + 960);
    v8 = *v7;
    if ( *v7 )
    {
      do
      {
        v9 = v8;
        if ( *((_DWORD *)v8 + 10) == v5 )
          break;
        v7 = (__int64 **)v8;
        v9 = 0LL;
        v8 = (__int64 *)*v8;
      }
      while ( v8 );
      if ( v9 )
      {
        *v7 = (__int64 *)*v8;
        *(_DWORD *)(a2 + 96) = 0;
        v10 = v9 + 1;
        if ( v10 )
        {
          do
          {
            v11 = v10;
            v10 = (_QWORD *)*v10;
            v12 = (void **)(v11 - 1);
            if ( v12[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(v12, 0);
            ++*(_DWORD *)(a2 + 96);
          }
          while ( v10 );
          if ( v2 )
          {
            ndisUpdateWmiPMParamsForPatterns(a1);
            ndisGetCombinedPMConfig(a1, a1 + 1120);
            ndisMiniportPMParametersUpdated(a1);
          }
        }
      }
    }
  }
}
