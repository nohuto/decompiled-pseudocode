/*
 * XREFs of GreSaveDCInternal @ 0x1C0292874
 * Callers:
 *     NtGdiSaveDC @ 0x1C00167C0 (NtGdiSaveDC.c)
 *     GreSaveDC @ 0x1C00167D0 (GreSaveDC.c)
 * Callees:
 *     ??0SAVEOBJ@@QEAA@AEAVDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z @ 0x1C00167DC (--0SAVEOBJ@@QEAA@AEAVDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  DC *v19; // rcx
  __int64 v20; // rdx
  DC *v22[6]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-29h] BYREF
  int v24; // [rsp+70h] [rbp-19h]
  unsigned int v25; // [rsp+78h] [rbp-11h] BYREF
  int v26; // [rsp+7Ch] [rbp-Dh]
  __int64 v27; // [rsp+80h] [rbp-9h]
  void (__fastcall *v28)(__int64, _QWORD); // [rsp+88h] [rbp-1h]
  unsigned int v29; // [rsp+90h] [rbp+7h] BYREF
  int v30; // [rsp+94h] [rbp+Bh]
  __int64 v31; // [rsp+98h] [rbp+Fh]
  void (__fastcall *v32)(__int64, _QWORD); // [rsp+A0h] [rbp+17h]
  __int64 v33; // [rsp+100h] [rbp+77h]
  __int64 v34; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v3 = v22[0];
  v4 = 0;
  if ( v22[0] && (a2 || (*(_DWORD *)(gpentHmgr + 24LL * (unsigned __int16)*(_DWORD *)v22[0] + 8) & 0xFFFFFFFE) != 0) )
  {
    v5 = *((_QWORD *)v22[0] + 10);
    v6 = *(_DWORD *)(v5 + 8);
    if ( (v6 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v22[0], *(_QWORD *)(v5 + 16));
      v3 = v22[0];
    }
    if ( (v6 & 0x2000) != 0 )
    {
      GreDCSelectPen(v3, *(_QWORD *)(*((_QWORD *)v3 + 10) + 24LL));
      v3 = v22[0];
    }
    v7 = *((_QWORD *)v3 + 6);
    if ( (*(_DWORD *)(v7 + 56) & 1) != 0 )
      GreLockVisRgn(v7);
    v34 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v8 = *((_DWORD *)v22[0] + 9) & 0x800;
    if ( v8 )
      DC::bMakeInfoDC(v22[0], 0);
    DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v23, (struct DCOBJ *)v22);
    if ( v23[0] )
    {
      v9 = v22;
      v10 = *((_QWORD *)v22[0] + 16);
      *((_QWORD *)v22[0] + 16) = *(_QWORD *)v23[0];
      v33 = v10;
      SAVEOBJ::SAVEOBJ(
        (SAVEOBJ *)&v29,
        (struct DCOBJ *)v22,
        *(_DWORD *)(v23[0] + 116LL),
        (int (*)(struct DCOBJ *, int))bSavePath,
        (void (*)(struct DCOBJ *, int))vRestorePath);
      v11 = v30;
      if ( !v30 )
        goto LABEL_32;
      SAVEOBJ::SAVEOBJ(
        (SAVEOBJ *)&v25,
        (struct DCOBJ *)v22,
        *(_DWORD *)(v23[0] + 116LL),
        (int (*)(struct DCOBJ *, int))bSaveRegion,
        vRestoreRegion);
      v12 = v26;
      if ( v26 )
      {
        if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)v23[0], 2147483666LL, 0LL, 1LL) )
        {
          v12 = 0;
          v11 = 0;
          v24 = 1;
          v9 = 0LL;
          v26 = 0;
          v13 = 0x4000LL;
          v30 = 0;
          if ( (*((_DWORD *)v22[0] + 9) & 0x4000) != 0 )
            *(_DWORD *)(v23[0] + 36LL) |= 0x4000u;
          v14 = *(_QWORD *)(v23[0] + 512LL);
          if ( v14 )
          {
            v15 = *(_DWORD *)(v14 + 112);
            if ( (v15 & 0x800) != 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v23[0] + 512LL), 0x4000LL);
            }
            else if ( v15 >= 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v23[0] + 512LL), 0x4000LL);
              ++*(_DWORD *)(v14 + 160);
            }
          }
          INC_SHARE_REF_CNT(*((_QWORD *)v22[0] + 18), v13);
          INC_SHARE_REF_CNT(*((_QWORD *)v22[0] + 19), v16);
          INC_SHARE_REF_CNT(*((_QWORD *)v22[0] + 20), v17);
          INC_SHARE_REF_CNT(*((_QWORD *)v22[0] + 13), v18);
          v19 = v22[0];
          v20 = *((_QWORD *)v22[0] + 12);
          if ( (struct PALETTE *)v20 != ppalDefault )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 56));
            v19 = v22[0];
            v11 = v30;
            v12 = v26;
          }
          v4 = *((_DWORD *)v19 + 29);
          v10 = v33;
          *((_DWORD *)v19 + 29) = v4 + 1;
        }
        if ( v12 )
          v28(v27, v25);
      }
      if ( v11 )
        v32(v31, v29);
      if ( v9 )
LABEL_32:
        *((_QWORD *)*v9 + 16) = v10;
    }
    else
    {
      EngSetLastError(8u);
    }
    DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v23);
    if ( v8 )
      DC::bMakeInfoDC(v22[0], 1);
    if ( (*(_DWORD *)(v7 + 56) & 1) != 0 )
      GreUnlockVisRgn(v7);
    SEMOBJ::vUnlock((SEMOBJ *)&v34);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v4;
}
