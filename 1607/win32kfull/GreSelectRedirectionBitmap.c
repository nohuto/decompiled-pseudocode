/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C0049680
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     InvalidateDCE @ 0x1C00726E8 (InvalidateDCE.c)
 *     UpdateRedirectedDCE @ 0x1C011D160 (UpdateRedirectedDCE.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0049624 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025CEBC (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0295D18 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
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
  int v15; // eax
  HSURF v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD v20[2]; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v21[32]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v22[32]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v23; // [rsp+70h] [rbp-19h]
  _BYTE v24[32]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v25; // [rsp+98h] [rbp+Fh]
  _BYTE v26[32]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v27; // [rsp+C0h] [rbp+37h]

  v2 = 0;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v20[0] = 0LL;
    v20[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v21);
    LOBYTE(v7) = 1;
    v8 = HmgShareLock(v5, v7);
    v20[0] = v8;
    v9 = v8;
    if ( !v8 )
      goto LABEL_48;
    v10 = *(HDEV *)(v8 + 48);
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
      break;
    if ( BitmapForDisplayDevice && a1 == v5 )
    {
      SURFREF::SURFREF((SURFREF *)v24);
      v12 = (HDEV)*((_QWORD *)v10 + 5);
      if ( v10 != v12 )
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v12, v10, BitmapForDisplayDevice);
      LOBYTE(v11) = 5;
      v25 = HmgShareLockCheck(BitmapForDisplayDevice, v11);
      v6 = v25;
      v13 = (SFMALTLOGICALSURFACEREF *)v24;
      if ( !v25 )
        goto LABEL_46;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v24);
      v9 = v20[0];
    }
    if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
    {
      v14 = *(_QWORD *)(v9 + 512);
      if ( v14 )
      {
        SURFREF::SURFREF((SURFREF *)v22, *(HSURF *)(v14 + 32));
        if ( v23 )
          DEC_SHARE_REF_CNT(v23);
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v22);
        v9 = v20[0];
      }
    }
    if ( BitmapForDisplayDevice )
    {
      SURFREF::SURFREF((SURFREF *)v22, (HSURF)BitmapForDisplayDevice);
      if ( v23 )
        INC_SHARE_REF_CNT(v23);
      *(_DWORD *)(v20[0] + 36LL) |= 0x4000u;
      v15 = *(_DWORD *)(v6 + 112);
      if ( (v15 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v15 | 0x800;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v22);
    }
    else
    {
      v6 = *((_QWORD *)v10 + 322);
      *(_DWORD *)(v9 + 36) &= ~0x4000u;
    }
    if ( (*(_DWORD *)(v6 + 112) & 0x200) != 0 )
      *(_DWORD *)(v20[0] + 36LL) |= 0x8000u;
    else
      *(_DWORD *)(v20[0] + 36LL) &= ~0x8000u;
    *(_QWORD *)(v20[0] + 512LL) = v6;
    *(_QWORD *)(v20[0] + 528LL) = *(_QWORD *)(v6 + 56);
    *(_DWORD *)(v20[0] + 332LL) |= 0xFu;
    if ( *(int *)(v20[0] + 116LL) <= 1 )
      v5 = 0LL;
    else
      v5 = *(_QWORD *)(v20[0] + 128LL);
    DCOBJA::~DCOBJA((DCOBJA *)v20);
    if ( !v5 )
      return 1LL;
  }
  v17 = *(HSURF *)(v8 + 520);
  if ( (*(_DWORD *)(v8 + 36) & 0x4000) != 0 )
  {
    if ( !v17 )
      v17 = **(HSURF **)(v8 + 512);
    SURFREF::SURFREF((SURFREF *)v22, v17);
    if ( v23 )
    {
      if ( !BitmapForDisplayDevice )
      {
        v18 = v20[0];
        if ( (*(_DWORD *)(v20[0] + 36LL) & 0x40000) == 0 )
        {
          INC_SHARE_REF_CNT(v23);
          v18 = v20[0];
        }
        *(_DWORD *)(v18 + 36) |= 0x40000u;
        *(_QWORD *)(v20[0] + 2536LL) = 0LL;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v22);
        DCOBJA::~DCOBJA((DCOBJA *)v20);
        return 1LL;
      }
      SURFREF::SURFREF((SURFREF *)v26, (HSURF)BitmapForDisplayDevice);
      if ( v27 )
      {
        if ( v23 != v27 )
        {
          v19 = v20[0];
          if ( (*(_DWORD *)(v20[0] + 36LL) & 0x40000) == 0 )
          {
            INC_SHARE_REF_CNT(v23);
            v19 = v20[0];
          }
          *(_DWORD *)(v19 + 36) |= 0x40000u;
          *(_QWORD *)(v20[0] + 2536LL) = BitmapForDisplayDevice;
        }
        v2 = 1;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v26);
    }
    v13 = (SFMALTLOGICALSURFACEREF *)v22;
LABEL_46:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF(v13);
    DCOBJA::~DCOBJA((DCOBJA *)v20);
    return v2;
  }
  *(_DWORD *)(v8 + 36) |= 0x40000u;
  v2 = 1;
  *(_QWORD *)(v20[0] + 2536LL) = BitmapForDisplayDevice;
LABEL_48:
  DCOBJA::~DCOBJA((DCOBJA *)v20);
  return v2;
}
