/*
 * XREFs of ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0290694
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02686DC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028E578 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02904B4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bUndoMakeOpaque(struct SURFACE *a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax

  v1 = 0;
  if ( *((_WORD *)a1 + 50) == 3 && *((struct PDEV **)a1 + 6) == gpRedirDev )
  {
    *((_WORD *)a1 + 50) = *((_WORD *)a1 + 232);
    *((_DWORD *)a1 + 28) = *((_DWORD *)a1 + 117);
    v2 = *((_QWORD *)a1 + 57);
    *((_QWORD *)a1 + 57) = -1LL;
    *((_DWORD *)a1 + 28) &= ~0x200000u;
    *((_DWORD *)a1 + 116) = -1;
    *((_DWORD *)a1 + 117) = -1;
    v1 = 1;
    *((_QWORD *)a1 + 6) = v2;
  }
  return v1;
}
