/*
 * XREFs of DxgkOpmGetRedirectionInfo @ 0x1C0131178
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002ABDC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C0129D60 (-DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C017A10C (DmmGetClientVidPnTargetModeInfo.c)
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C017AF1C (DmmGetSourceConnectedToTargetInClientVidPn.c)
 */

__int64 __fastcall DxgkOpmGetRedirectionInfo(__int64 a1, unsigned int a2, unsigned __int64 *a3, char *a4)
{
  __int64 v5; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  int SourceConnectedToTargetInClientVidPn; // esi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Numerator; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  struct _D3DDDI_RATIONAL v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 9595LL;
    WdLogEvent5_WdAssertion(v9);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*(_DWORD *)(a1 + 284) & 0x100) == 0 )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(*(ADAPTER_DISPLAY **)(a1 + 1984), (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, (unsigned int)v5, &v23);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_9;
      Numerator = v23.Numerator;
      if ( v23.Numerator == -1 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v16 + 24) = 9625LL;
        WdLogEvent5_WdAssertion(v16);
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(a1 + 1984), Numerator);
      if ( !DisplayModeInfo )
      {
        v19 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v19 + 24) = Numerator;
        *(_QWORD *)(v19 + 32) = a1;
        WdLogEvent5_WdError(v19);
        return 3221225485LL;
      }
      SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(
                                               a1,
                                               v5,
                                               0,
                                               0,
                                               0LL,
                                               (struct _D3DDDI_RATIONAL)&v23,
                                               (__int64)&v24,
                                               (__int64)&v22);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
      {
LABEL_9:
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = v5;
        *(_QWORD *)(v14 + 32) = a1;
        WdLogEvent5_WdError(v14);
      }
      else
      {
        memset(a4, 0, 0x2CuLL);
        *(_QWORD *)(a4 + 20) = v24;
        *((_DWORD *)a4 + 8) = *((_DWORD *)DisplayModeInfo + 2);
        *(_QWORD *)(a4 + 36) = v22;
        if ( v23.Numerator != *((_DWORD *)DisplayModeInfo + 6) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v21 + 24) = 9651LL;
          WdLogEvent5_WdAssertion(v21);
        }
        switch ( *((_DWORD *)DisplayModeInfo + 6) )
        {
          case 2:
            *((_DWORD *)a4 + 7) = 4;
            break;
          case 3:
            *((_DWORD *)a4 + 7) = 3;
            break;
          case 0xFF:
            *((_DWORD *)a4 + 7) = 0;
            break;
          default:
            *((_DWORD *)a4 + 7) = 2;
            break;
        }
      }
    }
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return result;
}
