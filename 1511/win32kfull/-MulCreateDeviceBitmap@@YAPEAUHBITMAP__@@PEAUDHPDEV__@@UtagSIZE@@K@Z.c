/*
 * XREFs of ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C02954D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C02998C4 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0299B90 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL a2, ULONG a3)
{
  __int64 **v3; // rdi
  struct _MDSURF *v4; // rbx
  HBITMAP Bitmap; // rsi
  __int64 v8; // rax
  HSURF v9; // rax
  HSURF v10; // r15
  SURFOBJ *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  SIZEL sizl; // [rsp+68h] [rbp+10h]

  sizl = a2;
  v3 = *(__int64 ***)a1;
  v4 = 0LL;
  Bitmap = 0LL;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v8 = (__int64)v3[6];
      v16 = v8;
      if ( (*(_DWORD *)(v8 + 1848) & 0x8000000) != 0 && *(_QWORD *)(v8 + 2800) )
      {
        v9 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD))(v8 + 2800))(*(_QWORD *)(v8 + 1824), sizl, a3);
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
          vSetupDevBitmap((struct PDEVOBJ *)&v16, (struct SURFACE *)v13);
        }
      }
      v3 = (__int64 **)*v3;
    }
    while ( v3 );
    if ( v4 )
    {
      LOBYTE(a2.cx) = 5;
      v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD))HmgShareLockCheck)(Bitmap, a2);
      v16 = v14;
      if ( v14 )
      {
        *(_DWORD *)(v14 + 112) |= 0x400000u;
        *(_WORD *)(v14 + 100) = 3;
        *(_QWORD *)(v14 + 24) = v4;
        EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 17));
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v16);
    }
  }
  return Bitmap;
}
