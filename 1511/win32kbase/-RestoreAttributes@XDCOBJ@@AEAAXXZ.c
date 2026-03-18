/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10
 * Callers:
 *     GreGetClipBox @ 0x1C0014B60 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0014D20 (GreIntersectClipRect.c)
 *     GreSelectVisRgn @ 0x1C0023950 (GreSelectVisRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     NtGdiCreateCompatibleDC @ 0x1C0025AB0 (NtGdiCreateCompatibleDC.c)
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0030A80 (GreGetBounds.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00319F0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031AC8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     GreSelectPalette @ 0x1C0049120 (GreSelectPalette.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C00C05D0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  _OWORD *v1; // rax
  _OWORD *v2; // rdx
  __int64 v3; // r8

  if ( *((_DWORD *)this + 2) )
  {
    v1 = (_OWORD *)(*(_QWORD *)this + 960LL);
    if ( *(_OWORD **)(*(_QWORD *)this + 80LL) == v1 )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        v2 = *(_OWORD **)(*(_QWORD *)this + 952LL);
        v3 = 3LL;
        do
        {
          *v2 = *v1;
          v2[1] = v1[1];
          v2[2] = v1[2];
          v2[3] = v1[3];
          v2[4] = v1[4];
          v2[5] = v1[5];
          v2[6] = v1[6];
          v2 += 8;
          *(v2 - 1) = v1[7];
          v1 += 8;
          --v3;
        }
        while ( v3 );
        *v2 = *v1;
        v2[1] = v1[1];
      }
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 952LL);
      *((_DWORD *)this + 2) = 0;
    }
  }
}
