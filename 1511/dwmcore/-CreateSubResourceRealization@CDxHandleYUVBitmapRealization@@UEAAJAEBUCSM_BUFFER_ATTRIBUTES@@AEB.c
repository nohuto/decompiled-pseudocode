/*
 * XREFs of ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@UEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18015E700
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18015E34C (--0CDxHandleYUVBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap@@@Z @ 0x18015FC14 (-Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  int v8; // esi
  CDxHandleYUVBitmapRealization *v9; // rax
  CDxHandleYUVBitmapRealization *v10; // rdi
  int v11; // eax

  *a4 = 0LL;
  v8 = -2147024809;
  if ( *((_DWORD *)a3 + 7) )
  {
    v9 = (CDxHandleYUVBitmapRealization *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                            WPF::g_pProcessHeap,
                                            528LL);
    if ( v9 )
      v10 = CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(v9, (const struct _GUID *)this + 2, a2, a3);
    else
      v10 = 0LL;
    if ( v10 )
    {
      (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = CDxHandleDecodeBitmapRealization::Initialize(
              v10,
              *((struct CD3DVidMemOnlyTexture **)this + 57),
              *((struct CDecodedBitmap **)this + 59));
      v8 = v11;
      if ( v11 >= 0 )
      {
        *a4 = v10;
        v10 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC9u);
      }
      if ( v8 < 0 )
      {
        if ( !v10 )
          return (unsigned int)v8;
        *((_QWORD *)v10 + 38) = 0LL;
      }
      if ( v10 )
        (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC0u);
    }
  }
  return (unsigned int)v8;
}
