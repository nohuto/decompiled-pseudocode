/*
 * XREFs of ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0286C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C02877F0 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0288CB0 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

HSURF __fastcall PanEnableSurface(struct DHPDEV__ *a1)
{
  int v1; // r8d
  int v3; // eax
  int v4; // edx
  HSURF v5; // rax
  SURFOBJ *v6; // r14
  SURFOBJ *v7; // rax
  SURFOBJ *v8; // rsi
  __int64 v9; // rax
  DHPDEV v10; // rcx
  LONG v11; // r15d
  HSURF DeviceSurface; // rdi
  HDEV v13; // rdx
  HBITMAP Bitmap; // r13
  SURFOBJ *v15; // rax
  SURFOBJ *v16; // r12
  HBITMAP v17; // r15
  HDEV v18; // rdx
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  int v25; // [rsp+68h] [rbp-8h]
  int v26; // [rsp+B0h] [rbp+40h]
  SIZEL sizl; // [rsp+B8h] [rbp+48h]
  SIZEL sizla; // [rsp+B8h] [rbp+48h]
  HSEMAPHORE v29; // [rsp+C0h] [rbp+50h] BYREF

  v1 = *((_DWORD *)a1 + 1);
  v3 = (*((_DWORD *)a1 + 2) - *(_DWORD *)a1) >> 1;
  v4 = *((_DWORD *)a1 + 3) - v1;
  *((_DWORD *)a1 + 4) = v3;
  v4 >>= 1;
  *((_DWORD *)a1 + 6) = *(_DWORD *)a1 + v3;
  *((_DWORD *)a1 + 5) = v4;
  *((_DWORD *)a1 + 7) = v4 + v1;
  v29 = (HSEMAPHORE)*((_QWORD *)a1 + 15);
  EngAcquireSemaphore(v29);
  v5 = (HSURF)(*((__int64 (__fastcall **)(_QWORD))a1 + 103))(*((_QWORD *)a1 + 4));
  v6 = 0LL;
  if ( !v5 )
    goto LABEL_32;
  v7 = EngLockSurface(v5);
  v8 = v7;
  if ( !v7 )
  {
LABEL_31:
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v29);
    (*((void (__fastcall **)(_QWORD))a1 + 104))(*((_QWORD *)a1 + 4));
LABEL_32:
    DeviceSurface = 0LL;
    goto LABEL_33;
  }
  v9 = SURFOBJ_TO_SURFACE(v7);
  *(_DWORD *)(v9 + 112) &= ~0x1000u;
  v10 = (DHPDEV)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 9) = v8;
  v8->dhpdev = v10;
  LODWORD(v9) = a1[3];
  v11 = *((_DWORD *)a1 + 2);
  sizl = (SIZEL)__PAIR64__(v9, v11);
  v26 = v9;
  DeviceSurface = EngCreateDeviceSurface(0LL, (SIZEL)__PAIR64__(v9, v11), *((_DWORD *)a1 + 10));
  if ( !DeviceSurface )
  {
LABEL_30:
    EngUnlockSurface(v8);
    goto LABEL_31;
  }
  v13 = (HDEV)*((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 7) = DeviceSurface;
  if ( !EngModifySurface(DeviceSurface, v13, 0x394ABu, 3u, (DHSURF)a1 + 14, 0LL, 0, 0LL) )
  {
LABEL_29:
    EngDeleteSurface(DeviceSurface);
    goto LABEL_30;
  }
  Bitmap = EngCreateBitmap(sizl, v11, *((_DWORD *)a1 + 10), 1u, 0LL);
  v15 = EngLockSurface((HSURF)Bitmap);
  v16 = v15;
  if ( !v15 )
  {
LABEL_28:
    EngUnlockSurface(v16);
    EngDeleteSurface((HSURF)Bitmap);
    goto LABEL_29;
  }
  *((_QWORD *)a1 + 8) = v15;
  if ( G_fDoubleDpi && *((_DWORD *)a1 + 10) == 6 )
  {
    sizla.cy = v26 >> 1;
    sizla.cx = v11 >> 1;
    v17 = EngCreateBitmap(sizla, v11 >> 1, 6u, 1u, 0LL);
    v6 = EngLockSurface((HSURF)v17);
    if ( !v6 )
    {
LABEL_27:
      EngUnlockSurface(v6);
      EngDeleteSurface((HSURF)v17);
      goto LABEL_28;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v18 = (HDEV)*((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 10) = v6;
  if ( !EngAssociateSurface((HSURF)Bitmap, v18, 0) )
    goto LABEL_27;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
  if ( !v20 || !v22 || !v24 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    if ( v25 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    if ( v21 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    if ( v23 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    goto LABEL_27;
  }
  RGNOBJ::vSet((RGNOBJ *)&v22);
  RGNOBJ::vSet((RGNOBJ *)&v20);
  *((_QWORD *)a1 + 11) = v22;
  *((_QWORD *)a1 + 12) = v20;
  *((_QWORD *)a1 + 13) = v24;
  PanSynchronize(a1, 0LL);
  if ( v25 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  if ( v23 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
LABEL_33:
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v29);
  return DeviceSurface;
}
