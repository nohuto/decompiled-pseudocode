/*
 * XREFs of ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x180126CDC
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18005B684 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CSnapshot::PerformDelayedSnapshot(CSnapshot *this)
{
  unsigned int v2; // edi
  CCachedVisualImage *v3; // rcx
  LONG v4; // eax
  int v5; // eax
  struct tagRECT v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CCachedVisualImage *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 10);
    v7.left = 0;
    v7.top = 0;
    v7.right = v4;
    v7.bottom = *((_DWORD *)this + 11);
    *((_BYTE *)this + 56) = 1;
    v5 = CCachedVisualImage::Snapshot(v3, &v7);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x7Eu);
    *((_BYTE *)this + 56) = 0;
  }
  return v2;
}
