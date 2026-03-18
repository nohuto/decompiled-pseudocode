/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180032C50
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18008322C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800833F0 (-GetAlphaMode@CBitmapRealization@@UEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180083800 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 */

void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  CBitmapRealization *v2; // rbx
  enum DXGI_ALPHA_MODE (__fastcall *v5)(CBitmapRealization *__hidden); // rbp
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  int v7; // edx
  enum DXGI_ALPHA_MODE v8; // ebp
  enum DXGI_ALPHA_MODE (__fastcall *v9)(CBitmapRealization *__hidden); // rsi
  enum DXGI_ALPHA_MODE v10; // eax

  v2 = (CDxHandleBitmapRealization *)((char *)this + 112);
  v5 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmapRealization *__hidden))(*((_QWORD *)this + 14) + 48LL);
  if ( v5 == CBitmapRealization::GetAlphaMode )
    AlphaMode = CBitmapRealization::GetAlphaMode((CDxHandleBitmapRealization *)((char *)this + 112));
  else
    AlphaMode = v5((CDxHandleBitmapRealization *)((char *)this + 112));
  v7 = *((_DWORD *)a2 + 4);
  v8 = AlphaMode;
  if ( v7 != *((_DWORD *)this + 36) || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 17) )
    CBitmapRealization::UpdateDisplayRestriction(this, v7, *((HMONITOR *)a2 + 1));
  CBitmapRealization::UpdateAttributes(this, a2);
  v9 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v2 + 48LL);
  if ( v9 == CBitmapRealization::GetAlphaMode )
    v10 = CBitmapRealization::GetAlphaMode(v2);
  else
    v10 = v9(v2);
  if ( v8 != v10 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16, (unsigned int)v10);
}
