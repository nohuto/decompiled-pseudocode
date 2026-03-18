/*
 * XREFs of ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0285444
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0284D28 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C029DEB0 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::vClient(UMPDOBJ *this, void *a2)
{
  struct SURFACE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  if ( !*((_WORD *)v2 + 50) && *((char *)v2 + 102) < 0 && *((_DWORD *)v2 + 138) == 1 )
  {
    v3 = *((_QWORD *)v2 + 9);
    v4 = *((_QWORD *)v2 + 10);
    *((_QWORD *)v2 + 9) = *((_QWORD *)v2 + 67);
    *((_QWORD *)v2 + 10) = *((_QWORD *)v2 + 68);
    *((_DWORD *)v2 + 138) = 0;
    *((_QWORD *)v2 + 67) = v3;
    *((_QWORD *)v2 + 68) = v4;
  }
}
