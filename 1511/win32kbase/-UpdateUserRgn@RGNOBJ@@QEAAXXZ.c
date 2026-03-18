/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetRectRgn @ 0x1C0025020 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C0025120 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C00251A0 (GreGetRgnBox.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0026470 (SetOrCreateRectRgnIndirectPublic.c)
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     SetRectRgnIndirect @ 0x1C0026D20 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027EDC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     bDeleteRegion @ 0x1C0037860 (bDeleteRegion.c)
 *     GreOffsetRgn @ 0x1C00441E0 (GreOffsetRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // rax
  __int64 v3; // r8
  int v4; // ecx

  v2 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v3 = *((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*v2 + 2);
    if ( v3 )
    {
      if ( (*(_DWORD *)v3 & 0x10) != 0 )
      {
        if ( v2[21] == 1 )
          v4 = 1;
        else
          v4 = (v2[20] > 0xA0u) + 2;
        *(_DWORD *)(v3 + 4) = v4;
        *(_OWORD *)(v3 + 8) = *(_OWORD *)(*(_QWORD *)this + 88LL);
      }
    }
  }
}
