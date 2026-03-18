/*
 * XREFs of ?FlushAllTemporaryAllocation@VIDMM_GLOBAL@@IEAAXXZ @ 0x1C003A1CC
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::FlushAllTemporaryAllocation(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL *v1; // r8
  VIDMM_GLOBAL *v3; // rdx
  VIDMM_GLOBAL *v4; // rax
  VIDMM_GLOBAL *v5; // r10
  VIDMM_GLOBAL **v6; // rcx
  VIDMM_GLOBAL **v7; // r10

  v1 = (VIDMM_GLOBAL *)((char *)this + 3768);
  v3 = (VIDMM_GLOBAL *)*((_QWORD *)this + 471);
  while ( v3 != v1 )
  {
    v4 = v3;
    v3 = *(VIDMM_GLOBAL **)v3;
    v5 = *(VIDMM_GLOBAL **)v4;
    v6 = (VIDMM_GLOBAL **)*((_QWORD *)v4 + 1);
    if ( *(VIDMM_GLOBAL **)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    v7 = (VIDMM_GLOBAL **)*((_QWORD *)this + 474);
    *(_QWORD *)v4 = (char *)this + 3784;
    *((_QWORD *)v4 + 1) = v7;
    if ( *v7 != (VIDMM_GLOBAL *)((char *)this + 3784) )
      __fastfail(3u);
    *v7 = v4;
    *((_QWORD *)this + 474) = v4;
  }
}
