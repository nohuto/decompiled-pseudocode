/*
 * XREFs of GreDPtoLP @ 0x14003E6C0
 * Callers:
 *     xxxGetUpdateRect @ 0x14002BE14 (xxxGetUpdateRect.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x14003F6C0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 * Callees:
 *     ?GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z @ 0x14003E8F4 (-GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreDPtoLP(HDC a1, struct tagPOINT *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepTransformPoints((struct XDCOBJ *)v5, a2, a2, 2, 0);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
