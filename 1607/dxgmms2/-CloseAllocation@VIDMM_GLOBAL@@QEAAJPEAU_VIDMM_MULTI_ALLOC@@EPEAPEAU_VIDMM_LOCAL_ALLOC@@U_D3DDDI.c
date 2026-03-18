/*
 * XREFs of ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0057654
 * Callers:
 *     VidMmCloseAllocation @ 0x1C0011290 (VidMmCloseAllocation.c)
 *     VidMmTryCloseAllocation @ 0x1C0011720 (VidMmTryCloseAllocation.c)
 * Callees:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        char a3,
        struct _VIDMM_LOCAL_ALLOC **a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  unsigned int v6; // ebx
  struct _VIDMM_LOCAL_ALLOC **v7; // rax

  v6 = 0;
  v7 = a4;
  if ( a4 )
    *a4 = 0LL;
  LOBYTE(a4) = a3;
  if ( (int)VIDMM_GLOBAL::CloseOneAllocation(this, a2, v7, (__int64)a4, a5, a6) < 0 )
    return (unsigned int)-1071775486;
  return v6;
}
