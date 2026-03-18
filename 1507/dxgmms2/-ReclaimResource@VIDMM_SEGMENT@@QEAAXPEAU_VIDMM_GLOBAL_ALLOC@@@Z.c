/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070C80
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C003ABE8 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005202C (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00762FC (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(VIDMM_LINEAR_POOL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  char *v7; // rax
  __int64 v8; // rdx
  char **v9; // rcx
  char *v10; // rbx
  char **v11; // rcx

  if ( ((_DWORD)this[7] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[18], *((void **)a2 + 18));
  v4 = *((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 30) = 2;
  v5 = *((unsigned int *)this + 93);
  this[26] = (VIDMM_LINEAR_POOL *)((char *)this[26] + v4);
  v6 = *((_QWORD *)this[1] + 5104) + 264 * v5;
  *(_QWORD *)(v6 + 8LL * *((int *)this + 108) + 232) += v4;
  ++*((_DWORD *)this + 78);
  if ( ((_DWORD)this[7] & 0x1001) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
      *((_QWORD *)a2 + 2));
  v7 = (char *)a2 + 384;
  v8 = *((_QWORD *)a2 + 48);
  v9 = (char **)*((_QWORD *)a2 + 49);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v8 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384) || *v9 != v7 )
    __fastfail(3u);
  *v9 = (char *)v8;
  v10 = (char *)(this + 19);
  *(_QWORD *)(v8 + 8) = v9;
  v11 = (char **)*((_QWORD *)v10 + 1);
  *(_QWORD *)v7 = v10;
  *((_QWORD *)a2 + 49) = v11;
  if ( *v11 != v10 )
    __fastfail(3u);
  *v11 = v7;
  *((_QWORD *)v10 + 1) = v7;
}
