/*
 * XREFs of ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008976C
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046670 (-QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceManager::ProcessRestoreContent(
        CCompositionSurfaceManager *this,
        struct IRenderTargetDisplay *a2)
{
  int v2; // edi
  struct _RTL_GENERIC_TABLE *v3; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rax
  CBitmapRealization *v7; // rbx
  __int64 (__fastcall *v8)(CBitmapRealization *, const struct _GUID *, void **); // rsi
  int v9; // eax
  int v11; // eax
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    v6 = v5[1];
    v2 = 0;
    v12 = 0LL;
    v7 = *(CBitmapRealization **)(v6 + 128);
    if ( v7 )
    {
      v8 = **(__int64 (__fastcall ***)(CBitmapRealization *, const struct _GUID *, void **))v7;
      if ( v8 == CBitmapRealization::QueryInterface )
        v9 = CBitmapRealization::QueryInterface(v7, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v12);
      else
        v9 = v8(v7, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v12);
      if ( v9 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(void *, struct IRenderTargetDisplay *))(*(_QWORD *)v12 + 56LL))(v12, a2);
        v2 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x12Au);
      }
      if ( v12 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xBCu);
      return (unsigned int)v2;
    }
  }
  return (unsigned int)v2;
}
