/*
 * XREFs of GreSetRectRgn @ 0x1C0025020
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     EngSetRectRgn @ 0x1C0074E50 (EngSetRectRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0075658 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiSetRectRgn @ 0x1C00BEAE0 (NtGdiSetRectRgn.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rbx
  unsigned int v9; // r15d
  struct _RECTL v11; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-10h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v12, a1, 0);
  v8 = v12[0];
  v9 = 0;
  if ( v12[0] )
  {
    v11.left = a2;
    v11.top = a3;
    v11.right = a4;
    v11.bottom = a5;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      if ( a2 > a4 )
      {
        v11.left = a4;
        v11.right = a2;
      }
      if ( a3 > a5 )
      {
        v11.top = a5;
        v11.bottom = a3;
      }
      RGNOBJ::vSet((RGNOBJ *)v12, &v11);
      v9 = 1;
    }
  }
  if ( !v13 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v12);
  if ( v8 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
  return v9;
}
