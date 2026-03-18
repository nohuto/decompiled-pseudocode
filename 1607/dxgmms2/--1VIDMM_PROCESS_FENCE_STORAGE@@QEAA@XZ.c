/*
 * XREFs of ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C00447B4
 * Callers:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x1C001D148 (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005C8A0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C000F570 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(VIDMM_PROCESS_FENCE_STORAGE *this)
{
  VIDMM_FENCE_STORAGE_PAGE **v2; // rbx
  VIDMM_FENCE_STORAGE_PAGE **v3; // rbx
  VIDMM_FENCE_STORAGE_PAGE **v4; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v5; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v6; // rax
  VIDMM_FENCE_STORAGE_PAGE *v7; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v8; // rax
  VIDMM_FENCE_STORAGE_PAGE *v9; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v10; // rax

  v2 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 8);
  while ( *v2 != (VIDMM_FENCE_STORAGE_PAGE *)v2 )
  {
    v7 = *v2;
    v8 = *(VIDMM_FENCE_STORAGE_PAGE ***)*v2;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)*v2 + 1) != v2 || v8[1] != v7 )
      __fastfail(3u);
    *v2 = (VIDMM_FENCE_STORAGE_PAGE *)v8;
    v8[1] = (VIDMM_FENCE_STORAGE_PAGE *)v2;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v7);
  }
  v3 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 24);
  while ( *v3 != (VIDMM_FENCE_STORAGE_PAGE *)v3 )
  {
    v5 = *v3;
    v6 = *(VIDMM_FENCE_STORAGE_PAGE ***)*v3;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)*v3 + 1) != v3 || v6[1] != v5 )
      __fastfail(3u);
    *v3 = (VIDMM_FENCE_STORAGE_PAGE *)v6;
    v6[1] = (VIDMM_FENCE_STORAGE_PAGE *)v3;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v5);
  }
  v4 = (VIDMM_FENCE_STORAGE_PAGE **)((char *)this + 40);
  while ( *v4 != (VIDMM_FENCE_STORAGE_PAGE *)v4 )
  {
    v9 = *v4;
    v10 = *(VIDMM_FENCE_STORAGE_PAGE ***)*v4;
    if ( *((VIDMM_FENCE_STORAGE_PAGE ***)*v4 + 1) != v4 || v10[1] != v9 )
      __fastfail(3u);
    *v4 = (VIDMM_FENCE_STORAGE_PAGE *)v10;
    v10[1] = (VIDMM_FENCE_STORAGE_PAGE *)v4;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v9);
  }
}
