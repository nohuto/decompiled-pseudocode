/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C003A450
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60 (-vClearRendering@DC@@QEAAXXZ.c)
 *     InvalidateDCE @ 0x1C004C4E8 (InvalidateDCE.c)
 *     UpdateRedirectedDCE @ 0x1C00FBE70 (UpdateRedirectedDCE.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C003A728 (--1DCOBJA@@QEAA@XZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0296568 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, HBITMAP a2)
{
  unsigned int v2; // esi
  HBITMAP BitmapForDisplayDevice; // r15
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  HDEV v10; // rbx
  HDEV v11; // rcx
  EPALOBJ *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  BitmapForDisplayDevice = a2;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    v23[1] = 0LL;
    v7 = HmgShareLock(v5, a2);
    v23[0] = v7;
    v9 = v7;
    if ( !v7 )
      break;
    v10 = *(HDEV *)(v7 + 48);
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
    {
      v18 = *(_QWORD *)(v7 + 520);
      if ( (*(_DWORD *)(v7 + 36) & 0x4000) == 0 )
      {
        *(_DWORD *)(v7 + 36) |= 0x40000u;
        *(_QWORD *)(v7 + 2512) = BitmapForDisplayDevice;
        DCOBJA::~DCOBJA((DCOBJA *)v23);
        return 1LL;
      }
      if ( !v18 )
        v18 = **(_QWORD **)(v7 + 512);
      LOBYTE(v8) = 5;
      v19 = HmgShareLockCheck(v18, v8);
      v25 = v19;
      v21 = v19;
      if ( v19 )
      {
        if ( BitmapForDisplayDevice )
        {
          LOBYTE(v20) = 5;
          v22 = HmgShareLockCheck(BitmapForDisplayDevice, v20);
          v24 = v22;
          if ( v22 )
          {
            if ( v21 != v22 )
            {
              if ( (*(_DWORD *)(v9 + 36) & 0x40000) == 0 )
                INC_SHARE_REF_CNT(v21);
              *(_DWORD *)(v9 + 36) |= 0x40000u;
              *(_QWORD *)(v9 + 2512) = BitmapForDisplayDevice;
            }
            v2 = 1;
          }
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
        }
        else
        {
          if ( (*(_DWORD *)(v9 + 36) & 0x40000) == 0 )
            INC_SHARE_REF_CNT(v19);
          *(_DWORD *)(v9 + 36) |= 0x40000u;
          *(_QWORD *)(v9 + 2512) = 0LL;
          v2 = 1;
        }
      }
      v12 = (EPALOBJ *)&v25;
LABEL_47:
      EPALOBJ::~EPALOBJ(v12);
      break;
    }
    if ( BitmapForDisplayDevice && a1 == v5 )
    {
      v11 = (HDEV)*((_QWORD *)v10 + 5);
      if ( v10 != v11 )
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v11, v10, BitmapForDisplayDevice);
      LOBYTE(v8) = 5;
      v24 = HmgShareLockCheck(BitmapForDisplayDevice, v8);
      v6 = v24;
      v12 = (EPALOBJ *)&v24;
      if ( !v24 )
        goto LABEL_47;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
    }
    if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
    {
      v13 = *(_QWORD *)(v9 + 512);
      if ( v13 )
      {
        LOBYTE(v8) = 5;
        v14 = HmgShareLockCheck(*(_QWORD *)(v13 + 32), v8);
        v24 = v14;
        if ( v14 )
          DEC_SHARE_REF_CNT(v14);
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
      }
    }
    if ( BitmapForDisplayDevice )
    {
      LOBYTE(v8) = 5;
      v15 = HmgShareLockCheck(BitmapForDisplayDevice, v8);
      v24 = v15;
      if ( v15 )
        INC_SHARE_REF_CNT(v15);
      *(_DWORD *)(v9 + 36) |= 0x4000u;
      v16 = *(_DWORD *)(v6 + 112);
      if ( (v16 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v16 | 0x800;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
    }
    else
    {
      v6 = *((_QWORD *)v10 + 322);
      *(_DWORD *)(v9 + 36) &= ~0x4000u;
    }
    if ( (*(_DWORD *)(v6 + 112) & 0x200) != 0 )
      *(_DWORD *)(v9 + 36) |= 0x8000u;
    else
      *(_DWORD *)(v9 + 36) &= ~0x8000u;
    *(_QWORD *)(v9 + 512) = v6;
    *(_QWORD *)(v9 + 528) = *(_QWORD *)(v6 + 56);
    *(_DWORD *)(v9 + 332) |= 0xFu;
    if ( *(int *)(v9 + 116) <= 1 )
      v5 = 0LL;
    else
      v5 = *(_QWORD *)(v9 + 128);
    DCOBJA::~DCOBJA((DCOBJA *)v23);
    if ( !v5 )
      return 1LL;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v23);
  return v2;
}
