/*
 * XREFs of ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C028DCD8
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02686DC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028BFE8 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028E090 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bBmpUndoMakeOpaque(struct SURFACE *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // rax

  v1 = 0;
  if ( *((_WORD *)a1 + 50) == 3 && *((struct PDEV **)a1 + 6) == gpBmpDev )
  {
    *((_WORD *)a1 + 50) = *((_WORD *)a1 + 232);
    v2 = *((_DWORD *)a1 + 28) & 0xFFFC7A10;
    *((_DWORD *)a1 + 116) = -1;
    *((_DWORD *)a1 + 28) = *((_DWORD *)a1 + 117) | v2;
    v3 = *((_QWORD *)a1 + 57);
    *((_QWORD *)a1 + 57) = -1LL;
    *((_DWORD *)a1 + 117) = -1;
    v1 = 1;
    *((_QWORD *)a1 + 6) = v3;
  }
  return v1;
}
