/*
 * XREFs of ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064D90
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::OfferAllocation(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // rax
  char **v3; // rdx
  VIDMM_GLOBAL *v4; // rcx

  switch ( *((_DWORD *)a2 + 112) )
  {
    case 1:
      if ( *(_WORD *)(*((_QWORD *)a2 + 63) + 4LL) == 2 )
      {
        *((_DWORD *)a2 + 20) |= 0x40u;
        VIDMM_GLOBAL::MarkGlobalAllocation(this[1], (DXGFASTMUTEX **)a2, 0LL, 0LL);
      }
      break;
    case 2:
      v2 = (char *)(this + 34);
      v3 = (char **)((char *)a2 + 416);
      v4 = this[35];
      if ( *(char **)v4 != v2 )
        __fastfail(3u);
LABEL_4:
      *v3 = v2;
      v3[1] = (char *)v4;
      *(_QWORD *)v4 = v3;
      *((_QWORD *)v2 + 1) = v3;
      return;
    case 3:
      v2 = (char *)(this + 36);
      v3 = (char **)((char *)a2 + 416);
      v4 = this[37];
      if ( *(char **)v4 != v2 )
        __fastfail(3u);
      goto LABEL_4;
  }
}
