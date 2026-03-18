/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x18017FED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        struct ID3D11Texture2D **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  struct ID3D11Texture2D *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v4 = 0;
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 128LL))(v5);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x257u);
      return v4;
    }
    v9 = *((_QWORD *)this + 25);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 25) = *a3;
    v7 = *a3;
    if ( *a3 )
      goto LABEL_9;
  }
  else
  {
    v7 = (struct ID3D11Texture2D *)*((_QWORD *)this + 25);
    if ( v7 )
    {
      *a3 = v7;
LABEL_9:
      ((void (__fastcall *)(struct ID3D11Texture2D *))v7->lpVtbl->AddRef)(v7);
      return v4;
    }
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x251u);
  }
  return v4;
}
