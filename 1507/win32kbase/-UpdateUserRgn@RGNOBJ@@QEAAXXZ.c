/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0
 * Callers:
 *     GreRectInRegion @ 0x1C000B8D0 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C000BED0 (GreGetRgnBox.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     SetRectRgnIndirect @ 0x1C0041D40 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0042050 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042C0C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteRegion @ 0x1C0044670 (bDeleteRegion.c)
 *     GreOffsetRgn @ 0x1C0054700 (GreOffsetRgn.c)
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
    v3 = *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v2 + 16);
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
