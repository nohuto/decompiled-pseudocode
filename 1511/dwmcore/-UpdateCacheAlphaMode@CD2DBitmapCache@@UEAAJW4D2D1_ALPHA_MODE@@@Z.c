/*
 * XREFs of ?UpdateCacheAlphaMode@CD2DBitmapCache@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x18015F620
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCacheAlphaMode(CD2DBitmapCache *this, unsigned int a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  int v5; // eax
  __int64 v6; // r14

  v2 = *((_QWORD *)this + 5);
  v3 = 0;
  if ( v2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 64LL))(*((_QWORD *)this + 5), a2);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3Au);
      v6 = *((_QWORD *)this + 4);
      if ( v6 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 4));
        *((_QWORD *)this + 4) = 0LL;
      }
    }
  }
  (*(void (__fastcall **)(CD2DBitmapCache *, _QWORD))(*(_QWORD *)this + 24LL))(this, *((_QWORD *)this + 4));
  return v3;
}
