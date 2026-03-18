/*
 * XREFs of NtGdiDdNotifyFullscreenSpriteUpdate @ 0x140348ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344914 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  struct XDCOBJ *v3; // rcx
  unsigned int v4; // ebx
  _QWORD v6[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( v6[0] )
    v4 = SpDdNotifyFullscreenSpriteUpdate(v3, a2);
  else
    v4 = -1073741811;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v4;
}
