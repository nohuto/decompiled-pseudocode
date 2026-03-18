/*
 * XREFs of ?LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x1C02848A4
 * Callers:
 *     NtGdiEngLockSurface @ 0x1C02AE3B0 (NtGdiEngLockSurface.c)
 * Callees:
 *     ?IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z @ 0x1C0284828 (-IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z.c)
 */

struct _SURFOBJ *__fastcall UMPDOBJ::LockSurface(struct DHPDEV__ *this, HSURF a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  SURFOBJ *v5; // rax
  SURFOBJ *v6; // rsi
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  struct DHPDEV__ *dhpdev; // rax
  __int128 v13; // [rsp+30h] [rbp-58h]
  struct DHPDEV__ *v14; // [rsp+90h] [rbp+8h] BYREF
  PVOID pv; // [rsp+98h] [rbp+10h]
  SURFOBJ *v16; // [rsp+A0h] [rbp+18h]

  v14 = this;
  v3 = 0LL;
  v4 = 0LL;
  if ( !a2 )
    return 0LL;
  v5 = EngLockSurface(a2);
  v6 = v5;
  v16 = v5;
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)IsSurfaceLockable(v5, &v14) )
  {
    v4 = EngAllocUserMem(0x60uLL, 0x706D7547u);
    pv = v4;
    if ( v4 )
    {
      v7 = *(_OWORD *)&v6->dhsurf;
      v13 = *(_OWORD *)&v6->dhpdev;
      v8 = *(_OWORD *)&v6->sizlBitmap.cx;
      v9 = *(_OWORD *)&v6->pvBits;
      v10 = *(_OWORD *)&v6->lDelta;
      dhpdev = v6->dhpdev;
      if ( v14 )
        dhpdev = v14;
      *(_QWORD *)&v13 = dhpdev;
      *v4 = 1431130959;
      *((_QWORD *)v4 + 1) = a2;
      *((_OWORD *)v4 + 1) = v7;
      *((_OWORD *)v4 + 2) = v13;
      *((_OWORD *)v4 + 3) = v8;
      *((_OWORD *)v4 + 4) = v9;
      *((_OWORD *)v4 + 5) = v10;
    }
  }
  EngUnlockSurface(v6);
  if ( v4 )
    return (struct _SURFOBJ *)(v4 + 4);
  return (struct _SURFOBJ *)v3;
}
