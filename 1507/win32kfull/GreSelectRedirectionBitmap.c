/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C00168E0
 * Callers:
 *     UpdateRedirectedDCE @ 0x1C000B310 (UpdateRedirectedDCE.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 *     InvalidateDCE @ 0x1C005E7C8 (InvalidateDCE.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0016C2C (--1DCOBJA@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025FF4C (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?vUnlock@SURFREF@@QEAAXXZ @ 0x1C0290E54 (-vUnlock@SURFREF@@QEAAXXZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0296A68 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, HBITMAP BitmapForDisplayDevice)
{
  unsigned int v2; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  HDEV v10; // rbx
  __int64 v11; // rdx
  HDEV v12; // rcx
  SFMALTLOGICALSURFACEREF *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  HSURF v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD v21[2]; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v22[32]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v23[32]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+70h] [rbp-19h]
  _BYTE v25[32]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v26; // [rsp+98h] [rbp+Fh]
  _BYTE v27[32]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+37h]

  v2 = 0;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v21[0] = 0LL;
    v21[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v22);
    LOBYTE(v7) = 1;
    v8 = HmgShareLock(v5, v7);
    v21[0] = v8;
    v9 = v8;
    if ( !v8 )
      goto LABEL_46;
    v10 = *(HDEV *)(v8 + 48);
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
      break;
    if ( BitmapForDisplayDevice && a1 == v5 )
    {
      SURFREF::SURFREF((SURFREF *)v25);
      v12 = (HDEV)*((_QWORD *)v10 + 5);
      if ( v10 != v12 )
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v12, v10, BitmapForDisplayDevice);
      LOBYTE(v11) = 5;
      v26 = HmgShareLockCheck(BitmapForDisplayDevice, v11);
      v6 = v26;
      v13 = (SFMALTLOGICALSURFACEREF *)v25;
      if ( !v26 )
        goto LABEL_44;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v25);
      v9 = v21[0];
    }
    if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
    {
      v14 = *(_QWORD *)(v9 + 512);
      if ( v14 )
      {
        SURFREF::SURFREF((SURFREF *)v23, *(HSURF *)(v14 + 32));
        SURFREF::vUnlock((SURFREF *)v23);
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v23);
        v9 = v21[0];
      }
    }
    if ( BitmapForDisplayDevice )
    {
      SURFREF::SURFREF((SURFREF *)v23, (HSURF)BitmapForDisplayDevice);
      if ( v24 )
        INC_SHARE_REF_CNT(v24, v15);
      *(_DWORD *)(v21[0] + 36LL) |= 0x4000u;
      v16 = *(_DWORD *)(v6 + 112);
      if ( (v16 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v16 | 0x800;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v23);
    }
    else
    {
      v6 = *((_QWORD *)v10 + 322);
      *(_DWORD *)(v9 + 36) &= ~0x4000u;
    }
    if ( (*(_DWORD *)(v6 + 112) & 0x200) != 0 )
      *(_DWORD *)(v21[0] + 36LL) |= 0x8000u;
    else
      *(_DWORD *)(v21[0] + 36LL) &= ~0x8000u;
    *(_QWORD *)(v21[0] + 512LL) = v6;
    *(_QWORD *)(v21[0] + 528LL) = *(_QWORD *)(v6 + 56);
    *(_DWORD *)(v21[0] + 332LL) |= 0xFu;
    if ( *(int *)(v21[0] + 116LL) <= 1 )
      v5 = 0LL;
    else
      v5 = *(_QWORD *)(v21[0] + 128LL);
    DCOBJA::~DCOBJA((DCOBJA *)v21);
    if ( !v5 )
      return 1LL;
  }
  v18 = *(HSURF *)(v8 + 520);
  if ( (*(_DWORD *)(v8 + 36) & 0x4000) != 0 )
  {
    if ( !v18 )
      v18 = **(HSURF **)(v8 + 512);
    SURFREF::SURFREF((SURFREF *)v23, v18);
    if ( v24 )
    {
      if ( !BitmapForDisplayDevice )
      {
        v19 = v21[0];
        if ( (*(_DWORD *)(v21[0] + 36LL) & 0x40000) == 0 )
        {
          INC_SHARE_REF_CNT(v24, v21[0]);
          v19 = v21[0];
        }
        *(_DWORD *)(v19 + 36) |= 0x40000u;
        *(_QWORD *)(v21[0] + 2536LL) = 0LL;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v23);
        DCOBJA::~DCOBJA((DCOBJA *)v21);
        return 1LL;
      }
      SURFREF::SURFREF((SURFREF *)v27, (HSURF)BitmapForDisplayDevice);
      if ( v28 )
      {
        if ( v24 != v28 )
        {
          v20 = v21[0];
          if ( (*(_DWORD *)(v21[0] + 36LL) & 0x40000) == 0 )
          {
            INC_SHARE_REF_CNT(v24, v21[0]);
            v20 = v21[0];
          }
          *(_DWORD *)(v20 + 36) |= 0x40000u;
          *(_QWORD *)(v21[0] + 2536LL) = BitmapForDisplayDevice;
        }
        v2 = 1;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v27);
    }
    v13 = (SFMALTLOGICALSURFACEREF *)v23;
LABEL_44:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF(v13);
    DCOBJA::~DCOBJA((DCOBJA *)v21);
    return v2;
  }
  *(_DWORD *)(v8 + 36) |= 0x40000u;
  v2 = 1;
  *(_QWORD *)(v21[0] + 2536LL) = BitmapForDisplayDevice;
LABEL_46:
  DCOBJA::~DCOBJA((DCOBJA *)v21);
  return v2;
}
