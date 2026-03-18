/*
 * XREFs of GreSetTextCharacterExtra @ 0x1401F92E4
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetTextCharacterExtra(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  _QWORD v6[15]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0x80000000;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v5 = *(_QWORD *)(v6[0] + 976LL);
    v3 = *(_DWORD *)(v5 + 280);
    *(_DWORD *)(v5 + 280) = a2;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v3;
}
