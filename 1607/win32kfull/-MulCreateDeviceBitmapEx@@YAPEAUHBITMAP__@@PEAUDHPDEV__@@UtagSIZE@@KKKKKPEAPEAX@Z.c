/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKKKKPEAPEAX@Z @ 0x1C0294E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C027D360 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C0299064 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0299360 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL a2,
        ULONG a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        void **a8)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  ULONG v10; // esi
  unsigned int v11; // r11d
  struct DHPDEV__ *v12; // r8
  DHSURF dhsurf; // r13
  HBITMAP RedirectionDeviceBitmap; // r15
  DHSURF v15; // r12
  int v16; // r10d
  __int64 *i; // rcx
  __int64 v18; // rdx
  __int64 **v19; // r9
  __int64 **v20; // r14
  __int64 v21; // rbx
  __int64 *v22; // rax
  HSURF v23; // rax
  HSURF v24; // rsi
  SURFOBJ *v25; // r12
  __int64 (__fastcall *v26)(__int64, SIZEL, _QWORD, _QWORD, DHSURF, unsigned int, unsigned int, void **); // r10
  HSURF v27; // rax
  DHSURF v28; // rax
  SURFOBJ *v29; // rdx
  __int64 v30; // rax
  SURFOBJ *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rsi
  HSURF v34; // rcx
  int v36; // [rsp+58h] [rbp-41h]
  struct _LUID v37; // [rsp+60h] [rbp-39h] BYREF
  int v38; // [rsp+68h] [rbp-31h]
  void *v39; // [rsp+70h] [rbp-29h] BYREF
  __int64 *v40; // [rsp+78h] [rbp-21h] BYREF
  __int64 **v41; // [rsp+80h] [rbp-19h]
  DHSURF v42; // [rsp+88h] [rbp-11h]
  SURFOBJ *pso; // [rsp+90h] [rbp-9h]

  v8 = *((_QWORD *)a1 + 4);
  v9 = 0LL;
  v42 = 0LL;
  v10 = a3;
  v11 = a4;
  v40 = (__int64 *)v8;
  v12 = a1;
  dhsurf = 0LL;
  RedirectionDeviceBitmap = 0LL;
  v15 = 0LL;
  if ( (*(_DWORD *)(v8 + 56) & 0x4000000) == 0
    || (a4 & 2) == 0 && g_pDwmState && gfDwmDeviceBitmapsEnabledForMultiAdapter )
  {
    v39 = 0LL;
    v16 = a4 & 2;
    v38 = v16;
    if ( (a4 & 2) != 0 && a8 )
      v39 = *a8;
    v41 = 0LL;
    if ( (*(_DWORD *)(v8 + 56) & 0x4000000) == 0 )
      goto LABEL_17;
    for ( i = *(__int64 **)a1; i; i = (__int64 *)*i )
    {
      v18 = *(_QWORD *)(i[7] + 2600);
      if ( v18 && *(_DWORD *)(v18 + 264) == *((_DWORD *)v12 + 26) && *(_DWORD *)(v18 + 268) == *((_DWORD *)v12 + 27) )
      {
        v41 = (__int64 **)i;
        break;
      }
    }
    v37 = 0LL;
    PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v40, &v37);
    v20 = v19;
    if ( !v19 )
LABEL_17:
      v20 = *(__int64 ***)v12;
    if ( v20 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        v22 = v20[6];
        v40 = v22;
        v36 = 0;
        if ( (v22[231] & 0x8000000) != 0 && (v22[269] & 0x8000) != 0 && v22[349] )
        {
          v23 = (HSURF)((__int64 (__fastcall *)(__int64, SIZEL, _QWORD))v22[349])(v22[228], a2, v10);
          v24 = v23;
          if ( !v23 )
            goto LABEL_64;
          v25 = EngLockSurface(v23);
          v36 = 1;
        }
        else
        {
          if ( (v22[231] & 0x8000000) != 0 )
            goto LABEL_64;
          v26 = (__int64 (__fastcall *)(__int64, SIZEL, _QWORD, _QWORD, DHSURF, unsigned int, unsigned int, void **))v22[433];
          if ( !v26 )
            goto LABEL_64;
          v27 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))v26)(
                         v22[228],
                         a2,
                         v10,
                         v11,
                         v15,
                         a6,
                         a7,
                         &v39);
          v24 = v27;
          if ( !v27 )
            goto LABEL_64;
          v25 = EngLockSurface(v27);
          if ( !v25 )
            break;
          v21 = (__int64)*PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v40);
          v42 = v25->dhsurf;
        }
        if ( !v25 )
          break;
        if ( !dhsurf )
        {
          v37.LowPart = 0;
          v28 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
          dhsurf = v28;
          if ( !v28 )
            goto LABEL_51;
          RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v28, a2, a3);
          if ( !RedirectionDeviceBitmap )
            goto LABEL_54;
          if ( !EngModifySurface(
                  (HSURF)RedirectionDeviceBitmap,
                  *((HDEV *)a1 + 4),
                  *((_DWORD *)a1 + 17),
                  3u,
                  dhsurf,
                  0LL,
                  0,
                  0LL)
            || (v37.LowPart = 1, pso = EngLockSurface((HSURF)RedirectionDeviceBitmap), (v29 = pso) == 0LL) )
          {
LABEL_51:
            if ( RedirectionDeviceBitmap )
              EngDeleteSurface((HSURF)RedirectionDeviceBitmap);
            if ( !v37.LowPart )
            {
LABEL_54:
              if ( dhsurf )
                EngFreeMem(dhsurf);
            }
            EngUnlockSurface(v25);
            v34 = v24;
            goto LABEL_66;
          }
          *((_QWORD *)dhsurf + 1) = dhsurf + 6;
          *(_QWORD *)dhsurf = a1;
          dhsurf[4] = (struct DHSURF__)v20[2];
          v30 = SURFOBJ_TO_SURFACE_NOT_NULL(v29);
          *(_QWORD *)(v30 + 504) = v39;
          *(_DWORD *)(v30 + 520) = a6;
          v31 = pso;
          *(_QWORD *)(v30 + 512) = v21;
          EngUnlockSurface(v31);
        }
        *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8LL * *((unsigned int *)v20 + 4)) = v25;
        v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v25);
        v33 = v32;
        if ( v36 )
        {
          *(_DWORD *)(v32 + 112) |= 0x80000u;
          *(_DWORD *)(v32 + 116) |= 1u;
        }
        else if ( (a4 & 1) != 0 )
        {
          *(_DWORD *)(v32 + 116) |= 1u;
          *(_QWORD *)(v32 + 504) = v39;
          *(_DWORD *)(v32 + 520) = a6;
          *(_QWORD *)(v32 + 512) = v21;
        }
        else if ( v38 )
        {
          *(_DWORD *)(v32 + 116) |= 8u;
        }
        *(_DWORD *)(v32 + 116) |= 4u;
        *(_QWORD *)(v32 + 136) = RedirectionDeviceBitmap;
        vSetupDevBitmap((struct PDEVOBJ *)&v40, (struct SURFACE *)v32);
        *(_DWORD *)(v33 + 112) |= 0x800000u;
        GreMarkUndeletableBitmap(v25->hsurf);
        if ( !v41 || (v20 != v41 ? (v20 = (__int64 **)*v20) : (v20 = *(__int64 ***)a1), v20 == v41) )
          v20 = (__int64 **)*v20;
        if ( !v20 )
        {
          v16 = v38;
          goto LABEL_58;
        }
        v11 = a4;
        v10 = a3;
        v15 = v42;
      }
      EngDeleteSurface(v24);
LABEL_64:
      if ( !RedirectionDeviceBitmap )
        return (HBITMAP)v9;
      v34 = (HSURF)RedirectionDeviceBitmap;
LABEL_66:
      EngDeleteSurface(v34);
    }
    else
    {
LABEL_58:
      if ( a8 && !v16 )
        *a8 = v39;
      return RedirectionDeviceBitmap;
    }
  }
  return (HBITMAP)v9;
}
