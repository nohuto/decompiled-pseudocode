/*
 * XREFs of ?RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ @ 0x1C0063220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F678 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::RestoreFromPurge(VIDMM_APERTURE_SEGMENT *this)
{
  char *v1; // r15
  char *v3; // r14
  VIDMM_APERTURE_SEGMENT *v4; // r14
  struct _VIDMM_GLOBAL_ALLOC *v5; // r13
  int v6; // ecx
  __int64 v7; // rdi
  BOOL v8; // esi
  __int64 v9; // rbx
  struct _MDL *FullMDL; // rax
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
    v5 = (struct _VIDMM_GLOBAL_ALLOC *)(v3 - 384);
    v3 = *(char **)v3;
    v6 = **((_DWORD **)v5 + 59);
    if ( (v6 & 0x10000000) == 0 )
    {
      v7 = *(_QWORD *)this;
      v8 = (v6 & 0x800004) == 4;
      v9 = *((_QWORD *)v5 + 17) / 4096LL;
      FullMDL = VidMmGetFullMDL(v5, 0LL);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))(v7 + 200))(
        this,
        v5,
        *((_QWORD *)v5 + 1) >> 12,
        v9,
        v9,
        FullMDL,
        0,
        v8);
    }
  }
  v4 = (VIDMM_APERTURE_SEGMENT *)*((_QWORD *)this + 21);
  while ( v4 != (VIDMM_APERTURE_SEGMENT *)((char *)this + 168) )
  {
    v11 = (char *)v4 - 384;
    v4 = *(VIDMM_APERTURE_SEGMENT **)v4;
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
