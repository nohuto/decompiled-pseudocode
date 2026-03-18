/*
 * XREFs of ?RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ @ 0x1C006C9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::RestoreFromPurge(VIDMM_APERTURE_SEGMENT *this)
{
  char *v1; // r15
  char *v3; // r14
  struct _VIDMM_GLOBAL_ALLOC *v4; // r13
  int v5; // ecx
  __int64 v6; // rdi
  BOOL v7; // esi
  __int64 v8; // rbx
  struct _MDL *FullMDL; // rax
  VIDMM_APERTURE_SEGMENT *v10; // r14
  char *v11; // r13
  int v12; // ecx
  __int64 v13; // rdi
  BOOL v14; // esi
  __int64 v15; // rbx
  struct _MDL *v16; // rax

  v1 = (char *)this + 152;
  v3 = (char *)*((_QWORD *)this + 19);
  while ( v3 != v1 )
  {
    v4 = (struct _VIDMM_GLOBAL_ALLOC *)(v3 - 384);
    v3 = *(char **)v3;
    v5 = **((_DWORD **)v4 + 59);
    if ( (v5 & 0x10000000) == 0 )
    {
      v6 = *(_QWORD *)this;
      v7 = (v5 & 0x800004) == 4;
      v8 = *((_QWORD *)v4 + 17) / 4096LL;
      FullMDL = VidMmGetFullMDL(v4, 0LL);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))(v6 + 200))(
        this,
        v4,
        *((_QWORD *)v4 + 1) >> 12,
        v8,
        v8,
        FullMDL,
        0,
        v7);
    }
  }
  v10 = (VIDMM_APERTURE_SEGMENT *)*((_QWORD *)this + 21);
  while ( v10 != (VIDMM_APERTURE_SEGMENT *)((char *)this + 168) )
  {
    v11 = (char *)v10 - 384;
    v10 = *(VIDMM_APERTURE_SEGMENT **)v10;
    v12 = **((_DWORD **)v11 + 59);
    if ( (v12 & 0x10000000) == 0 )
    {
      v13 = *(_QWORD *)this;
      v14 = (v12 & 0x800004) == 4;
      v15 = *((_QWORD *)v11 + 17) / 4096LL;
      v16 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v11, 0LL);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, char *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))(v13 + 200))(
        this,
        v11,
        *((_QWORD *)v11 + 1) >> 12,
        v15,
        v15,
        v16,
        0,
        v14);
    }
  }
}
