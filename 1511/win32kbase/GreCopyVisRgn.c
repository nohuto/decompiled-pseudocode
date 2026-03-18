/*
 * XREFs of GreCopyVisRgn @ 0x1C0044310
 * Callers:
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027EDC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027F10 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002863C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  MDCOBJA::MDCOBJA((MDCOBJA *)v5, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 0);
  if ( v5[0] )
  {
    if ( v6[0] )
    {
      v7 = *(_QWORD *)(v5[0] + 1512LL);
      if ( v7 )
      {
        if ( (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v6, (struct RGNOBJ *)&v7) )
          v3 = RGNOBJ::iComplexity((RGNOBJ *)v6);
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v5);
  return v3;
}
