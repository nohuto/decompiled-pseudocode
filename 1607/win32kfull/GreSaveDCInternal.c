/*
 * XREFs of GreSaveDCInternal @ 0x1C0291390
 * Callers:
 *     GreSaveDC @ 0x1C0049A00 (GreSaveDC.c)
 *     NtGdiSaveDC @ 0x1C004A0F0 (NtGdiSaveDC.c)
 * Callees:
 *     ??0SAVEOBJ@@QEAA@AEAVDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z @ 0x1C0049A0C (--0SAVEOBJ@@QEAA@AEAVDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSaveDCInternal(HDC a1, int a2)
{
  DC *v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // rbx
  int v8; // r13d
  DC **v9; // r12
  __int64 v10; // rdi
  int v11; // r14d
  int v12; // esi
  __int64 v13; // rdi
  int v14; // eax
  DC *v15; // rcx
  __int64 v16; // rdx
  DC *v18[6]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-29h] BYREF
  int v20; // [rsp+70h] [rbp-19h]
  unsigned int v21; // [rsp+78h] [rbp-11h] BYREF
  int v22; // [rsp+7Ch] [rbp-Dh]
  __int64 v23; // [rsp+80h] [rbp-9h]
  void (__fastcall *v24)(__int64, _QWORD); // [rsp+88h] [rbp-1h]
  unsigned int v25; // [rsp+90h] [rbp+7h] BYREF
  int v26; // [rsp+94h] [rbp+Bh]
  __int64 v27; // [rsp+98h] [rbp+Fh]
  void (__fastcall *v28)(__int64, _QWORD); // [rsp+A0h] [rbp+17h]
  __int64 v29; // [rsp+100h] [rbp+77h]
  __int64 v30; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v3 = v18[0];
  v4 = 0;
  if ( !v18[0] )
    goto LABEL_39;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v18[0]) + 8) & 0xFFFFFFFE) != 0 )
    {
      v3 = v18[0];
      goto LABEL_5;
    }
LABEL_39:
    EngSetLastError(6u);
    goto LABEL_40;
  }
LABEL_5:
  v5 = *((_QWORD *)v3 + 10);
  v6 = *(_DWORD *)(v5 + 8);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_QWORD *)(v5 + 16));
    v3 = v18[0];
  }
  if ( (v6 & 0x2000) != 0 )
  {
    GreDCSelectPen(v3, *(_QWORD *)(*((_QWORD *)v3 + 10) + 24LL));
    v3 = v18[0];
  }
  v7 = *((_QWORD *)v3 + 6);
  if ( (*(_DWORD *)(v7 + 56) & 1) != 0 )
    GreLockVisRgn(v7);
  v30 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v8 = *((_DWORD *)v18[0] + 9) & 0x800;
  if ( v8 )
    DC::bMakeInfoDC(v18[0], 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v19, (struct DCOBJ *)v18);
  if ( v19[0] )
  {
    v9 = v18;
    v10 = *((_QWORD *)v18[0] + 16);
    *((_QWORD *)v18[0] + 16) = *(_QWORD *)v19[0];
    v29 = v10;
    SAVEOBJ::SAVEOBJ(
      (SAVEOBJ *)&v25,
      (struct DCOBJ *)v18,
      *(_DWORD *)(v19[0] + 116LL),
      (int (*)(struct DCOBJ *, int))bSavePath,
      (void (*)(struct DCOBJ *, int))vRestorePath);
    v11 = v26;
    if ( !v26 )
      goto LABEL_33;
    SAVEOBJ::SAVEOBJ(
      (SAVEOBJ *)&v21,
      (struct DCOBJ *)v18,
      *(_DWORD *)(v19[0] + 116LL),
      (int (*)(struct DCOBJ *, int))bSaveRegion,
      vRestoreRegion);
    v12 = v22;
    if ( v22 )
    {
      if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)v19[0], 2147483666LL, 0LL, 1LL) )
      {
        v12 = 0;
        v11 = 0;
        v20 = 1;
        v9 = 0LL;
        v22 = 0;
        v26 = 0;
        if ( (*((_DWORD *)v18[0] + 9) & 0x4000) != 0 )
          *(_DWORD *)(v19[0] + 36LL) |= 0x4000u;
        v13 = *(_QWORD *)(v19[0] + 512LL);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 + 112);
          if ( (v14 & 0x800) != 0 )
          {
            INC_SHARE_REF_CNT(*(_QWORD *)(v19[0] + 512LL));
          }
          else if ( v14 >= 0 )
          {
            INC_SHARE_REF_CNT(*(_QWORD *)(v19[0] + 512LL));
            ++*(_DWORD *)(v13 + 160);
          }
        }
        INC_SHARE_REF_CNT(*((_QWORD *)v18[0] + 18));
        INC_SHARE_REF_CNT(*((_QWORD *)v18[0] + 19));
        INC_SHARE_REF_CNT(*((_QWORD *)v18[0] + 20));
        INC_SHARE_REF_CNT(*((_QWORD *)v18[0] + 13));
        v15 = v18[0];
        v16 = *((_QWORD *)v18[0] + 12);
        if ( (struct PALETTE *)v16 != ppalDefault )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 56));
          v15 = v18[0];
          v11 = v26;
          v12 = v22;
        }
        v4 = *((_DWORD *)v15 + 29);
        v10 = v29;
        *((_DWORD *)v15 + 29) = v4 + 1;
      }
      if ( v12 )
        v24(v23, v21);
    }
    if ( v11 )
      v28(v27, v25);
    if ( v9 )
LABEL_33:
      *((_QWORD *)*v9 + 16) = v10;
  }
  else
  {
    EngSetLastError(8u);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v19);
  if ( v8 )
    DC::bMakeInfoDC(v18[0], 1);
  if ( (*(_DWORD *)(v7 + 56) & 1) != 0 )
    GreUnlockVisRgn(v7);
  SEMOBJ::vUnlock((SEMOBJ *)&v30);
LABEL_40:
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  return v4;
}
