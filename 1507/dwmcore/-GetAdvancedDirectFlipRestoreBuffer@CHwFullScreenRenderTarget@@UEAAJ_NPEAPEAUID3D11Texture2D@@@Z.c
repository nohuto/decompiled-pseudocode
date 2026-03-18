/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x180140240
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        struct ID3D11Texture2D **a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  struct ID3D11Texture2D *v7; // rsi
  int v8; // eax
  __int64 v9; // r15

  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID3D11Texture2D **))(*(_QWORD *)v3 + 128LL))(
           *((_QWORD *)this + 4),
           a2,
           a3);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x252u);
      return v4;
    }
    v9 = *((_QWORD *)this + 23);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 23));
    *((_QWORD *)this + 23) = *a3;
    v7 = *a3;
    if ( *a3 )
      goto LABEL_11;
  }
  else
  {
    v7 = (struct ID3D11Texture2D *)*((_QWORD *)this + 23);
    if ( v7 )
    {
      *a3 = v7;
LABEL_11:
      ((void (__fastcall *)(struct ID3D11Texture2D *))v7->lpVtbl->AddRef)(v7);
      return v4;
    }
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x24Cu);
  }
  return v4;
}
