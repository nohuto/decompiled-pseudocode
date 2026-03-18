/*
 * XREFs of ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C0075F58
 * Callers:
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@@Z @ 0x1C003E68C (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C003EA8C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C0075AA8 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0075C98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::FreeBlock(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx

  if ( *(_BYTE *)this )
  {
    *(_DWORD *)a2 = 1;
    v2 = (__int64 *)((char *)a2 + 32);
    v3 = (__int64 *)((char *)this + 88);
    v4 = *v3;
    *v2 = *v3;
    v2[1] = (__int64)v3;
    if ( *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *(_QWORD *)(v4 + 8) = v2;
    *v3 = (__int64)v2;
  }
  else
  {
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
  }
}
