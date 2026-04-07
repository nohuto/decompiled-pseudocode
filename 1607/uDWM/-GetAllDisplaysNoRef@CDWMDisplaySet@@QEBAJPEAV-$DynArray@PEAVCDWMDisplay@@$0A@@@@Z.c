/*
 * XREFs of ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003EC90
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x18001E910 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetAllDisplaysNoRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v6; // rax
  unsigned int v7; // edx
  int v8; // eax
  int v9; // ebx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 64) )
  {
    while ( 1 )
    {
      v6 = *(unsigned int *)(a2 + 24);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
      v7 = v6 + 1;
      if ( (int)v6 + 1 < (unsigned int)v6 )
        break;
      v2 = 0;
      if ( v7 <= *(_DWORD *)(a2 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v6) = v11;
        *(_DWORD *)(a2 + 24) = v7;
      }
      else
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v11);
        v9 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
        v2 = v9;
        if ( v9 < 0 )
          goto LABEL_11;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
        return v2;
    }
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v2 = -2147024362;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x13Bu);
  }
  return v2;
}
