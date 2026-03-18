/*
 * XREFs of GreValidateVisrgn @ 0x1C0088AD8
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0023B18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  struct REGION **v3; // rcx
  struct DC *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v4, a1);
  v3 = (struct REGION **)v4[0];
  if ( v4[0] )
  {
    if ( a2 )
      *((_DWORD *)v4[0] + 9) |= 0x100000u;
    else
      *((_DWORD *)v4[0] + 9) &= ~0x100000u;
    GrepValidateVisRgn((struct DC *)v3, v3[189]);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v4);
}
