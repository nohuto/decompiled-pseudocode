/*
 * XREFs of ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C02959B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C0299DC4 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C029A0C0 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL a2, ULONG a3)
{
  __int64 **v3; // rdi
  struct _MDSURF *v4; // rbx
  HBITMAP Bitmap; // rsi
  __int64 *v8; // rax
  HSURF v9; // rax
  HSURF v10; // r15
  SURFOBJ *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE v15[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h]
  __int64 *v17; // [rsp+90h] [rbp+8h] BYREF
  SIZEL sizl; // [rsp+98h] [rbp+10h]

  sizl = a2;
  v3 = *(__int64 ***)a1;
  v4 = 0LL;
  Bitmap = 0LL;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v8 = v3[6];
      v17 = v8;
      if ( (v8[231] & 0x8000000) != 0 && v8[350] )
      {
        v9 = (HSURF)((__int64 (__fastcall *)(__int64, SIZEL, _QWORD))v8[350])(v8[228], sizl, a3);
        v10 = v9;
        v11 = v9 ? EngLockSurface(v9) : 0LL;
        if ( v11 )
        {
          if ( !v4 )
          {
            v4 = pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
            if ( !v4 )
              goto LABEL_19;
            Bitmap = EngCreateBitmap(sizl, 0, a3, 1u, 0LL);
            if ( !Bitmap )
            {
              EngFreeMem(v4);
LABEL_19:
              EngUnlockSurface(v11);
              EngDeleteSurface(v10);
              return 0LL;
            }
          }
          v12 = *((_QWORD *)v4 + 1);
          *(_QWORD *)v4 = a1;
          *(_QWORD *)(v12 + 8LL * *((unsigned int *)v3 + 4)) = v11;
          v13 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
          *(_DWORD *)(v13 + 112) |= 0x80000u;
          *(_QWORD *)(v13 + 136) = Bitmap;
          vSetupDevBitmap((struct PDEVOBJ *)&v17, (struct SURFACE *)v13);
        }
      }
      v3 = (__int64 **)*v3;
    }
    while ( v3 );
    if ( v4 )
    {
      SURFREF::SURFREF((SURFREF *)v15, (HSURF)Bitmap);
      if ( v16 )
      {
        *(_DWORD *)(v16 + 112) |= 0x400000u;
        *(_WORD *)(v16 + 100) = 3;
        *(_QWORD *)(v16 + 24) = v4;
        EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 17));
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
    }
  }
  return Bitmap;
}
