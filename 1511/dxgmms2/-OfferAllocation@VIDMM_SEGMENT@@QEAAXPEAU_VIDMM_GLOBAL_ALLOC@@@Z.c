/*
 * XREFs of ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055944
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::OfferAllocation(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // rax
  char **v3; // rdx
  VIDMM_GLOBAL *v4; // rcx

  switch ( *((_DWORD *)a2 + 104) )
  {
    case 1:
      if ( *(_DWORD *)(*((_QWORD *)a2 + 59) + 4LL) == 2 )
      {
        *((_DWORD *)a2 + 20) |= 0x40u;
        VIDMM_GLOBAL::MarkGlobalAllocation(this[1], (union _LARGE_INTEGER **)a2, 0LL, 0LL);
      }
      break;
    case 2:
      v2 = (char *)(this + 34);
      v3 = (char **)((char *)a2 + 400);
      v4 = this[35];
      *v3 = v2;
      v3[1] = (char *)v4;
      if ( *(char **)v4 != v2 )
        __fastfail(3u);
LABEL_4:
      *(_QWORD *)v4 = v3;
      *((_QWORD *)v2 + 1) = v3;
      return;
    case 3:
      v2 = (char *)(this + 36);
      v3 = (char **)((char *)a2 + 400);
      v4 = this[37];
      *v3 = v2;
      v3[1] = (char *)v4;
      if ( *(char **)v4 != v2 )
        __fastfail(3u);
      goto LABEL_4;
  }
}
