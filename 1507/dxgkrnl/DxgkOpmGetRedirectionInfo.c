/*
 * XREFs of DxgkOpmGetRedirectionInfo @ 0x1C012ABD8
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002AF74 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C0123E68 (-DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C0175B74 (DmmGetClientVidPnTargetModeInfo.c)
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C0176984 (DmmGetSourceConnectedToTargetInClientVidPn.c)
 */

__int64 __fastcall DxgkOpmGetRedirectionInfo(__int64 a1, unsigned int a2, unsigned __int64 *a3, char *a4)
{
  __int64 v5; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int SourceConnectedToTargetInClientVidPn; // esi
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 Numerator; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rbp
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // [rsp+40h] [rbp-28h] BYREF
  struct _D3DDDI_RATIONAL v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+80h] [rbp+18h] BYREF

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 9250LL;
    WdLogEvent5_WdAssertion(v12);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*(_DWORD *)(a1 + 284) & 0x80u) == 0 )
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(*(ADAPTER_DISPLAY **)(a1 + 1976), (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, (unsigned int)v5, &v32);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_9;
      Numerator = v32.Numerator;
      if ( v32.Numerator == -1 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        *(_QWORD *)(v22 + 24) = 9280LL;
        WdLogEvent5_WdAssertion(v22);
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(a1 + 1976), Numerator);
      if ( !DisplayModeInfo )
      {
        v25 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v25 + 24) = Numerator;
        *(_QWORD *)(v25 + 32) = a1;
        WdLogEvent5_WdError(v25);
        return 3221225485LL;
      }
      SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(
                                               a1,
                                               v5,
                                               0,
                                               0,
                                               0LL,
                                               (struct _D3DDDI_RATIONAL)&v32,
                                               (__int64)&v33,
                                               (__int64)&v31);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
      {
LABEL_9:
        v20 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v20 + 24) = v5;
        *(_QWORD *)(v20 + 32) = a1;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        memset(a4, 0, 0x2CuLL);
        *(_QWORD *)(a4 + 20) = v33;
        *((_DWORD *)a4 + 8) = *((_DWORD *)DisplayModeInfo + 2);
        *(_QWORD *)(a4 + 36) = v31;
        if ( v32.Numerator != *((_DWORD *)DisplayModeInfo + 6) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
          *(_QWORD *)(v30 + 24) = 9306LL;
          WdLogEvent5_WdAssertion(v30);
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
