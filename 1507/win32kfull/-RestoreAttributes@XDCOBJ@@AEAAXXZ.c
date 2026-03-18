/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0019FD0
 * Callers:
 *     GreHintDCWnd @ 0x1C0016C90 (GreHintDCWnd.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0019E80 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreRealizePalette @ 0x1C0111C40 (GreRealizePalette.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025E5E8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     NtGdiResizePalette @ 0x1C02B26C0 (NtGdiResizePalette.c)
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
