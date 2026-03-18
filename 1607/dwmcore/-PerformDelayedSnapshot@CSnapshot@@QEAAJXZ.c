/*
 * XREFs of ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x18014356C
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CSnapshot::PerformDelayedSnapshot(CSnapshot *this)
{
  unsigned int v2; // edi
  CCachedVisualImage *v3; // rcx
  LONG v4; // eax
  int v5; // eax
  struct tagRECT v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CCachedVisualImage *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 28);
    v7.left = 0;
    v7.top = 0;
    v7.right = v4;
    v7.bottom = *((_DWORD *)this + 29);
    *((_BYTE *)this + 136) = 1;
    v5 = CCachedVisualImage::Snapshot(v3, &v7);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x87u);
    *((_BYTE *)this + 136) = 0;
  }
  return v2;
}
