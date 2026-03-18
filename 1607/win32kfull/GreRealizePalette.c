/*
 * XREFs of GreRealizePalette @ 0x1C01458E0
 * Callers:
 *     xxxRealizePalette @ 0x1C0145890 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025B574 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C003A910 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0048F10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A69E8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B7258 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  HPALETTE v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  _DWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  HDC v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 matched; // rax
  HDC v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  _DWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  HDC v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  HDC v29; // rbx
  void (__fastcall *v30)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int *v31; // r8
  DYNAMICMODECHANGESHARELOCK *v32; // rcx
  unsigned int v33; // ebx
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  _BYTE v39[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v41[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v45[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v46[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v47[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v48[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v49[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v50[112]; // [rsp+120h] [rbp+20h] BYREF
  char v51; // [rsp+1A8h] [rbp+A8h] BYREF
  int v52; // [rsp+1B0h] [rbp+B0h] BYREF
  int v53; // [rsp+1B8h] [rbp+B8h] BYREF

  v1 = 0;
  v53 = 0;
  v52 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v47, a1);
  if ( !v47[0] )
    goto LABEL_77;
  v36 = *(_QWORD *)(v47[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v51);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v44, (struct PDEVOBJ *)&v36);
  v43 = *(_QWORD *)(v36 + 72);
  GreAcquireSemaphore(v43);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v49, (struct PDEVOBJ *)&v36);
  v2 = v36;
  v3 = *(_QWORD *)(v36 + 1832);
  v35 = v3;
  v4 = *(_QWORD *)(v47[0] + 96LL);
  v5 = *(HPALETTE *)v4;
  if ( (*(_DWORD *)(v36 + 2196) & 0x100) != 0 )
  {
    v42 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v5 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v47[0] + 80LL) + 68LL) == 1
      && (v6 = (unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000,
          v7 = (unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000,
          (_DWORD)v7 == (_DWORD)v6)
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v7, v6) )
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_64;
      v20 = *(_QWORD *)(v4 + 72);
      if ( v20 )
      {
        if ( v20 == *(_QWORD *)(v4 + 80) )
        {
          v21 = XEPALOBJ::ulTime((XEPALOBJ *)&v35);
          if ( *v22 == v21 )
            goto LABEL_64;
        }
      }
      GreAcquireHmgrSemaphore();
      v25 = *(HDC *)(v4 + 40);
      while ( v25 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v41, v25);
        v26 = v41[0];
        if ( !v41[0] )
        {
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v41);
          goto LABEL_60;
        }
        *(_DWORD *)(*(_QWORD *)(v41[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v47[0] + 80LL) + 8LL) | 0xF;
        v25 = *(HDC *)(v26 + 1376);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v41);
        v41[0] = 0LL;
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v41);
      }
      v27 = *(_QWORD *)(v4 + 88);
      if ( v27 )
      {
        if ( v27 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v27, v23, v24);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v28 = *(_DWORD **)(v4 + 72);
      if ( v28 && !*v28 )
      {
        if ( *(_DWORD **)(v4 + 80) != v28 )
          Win32FreePool(v28, v23, v24);
        *(_QWORD *)(v4 + 72) = 0LL;
      }
      if ( *(_QWORD *)(v4 + 72) )
        vMatchAPal(v47[0], v35, v4, &v52, &v53);
      else
        *(_QWORD *)(v4 + 72) = ptransMatchAPal(v28, v35, v4, 1LL, &v52, &v53);
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
LABEL_60:
      v29 = *(HDC *)(v4 + 40);
      while ( v29 != v25 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v46, v29);
        _InterlockedDecrement((volatile signed __int32 *)(v46[0] + 12LL));
        v29 = *(HDC *)(v46[0] + 1376LL);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v46);
      }
    }
    else
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_64;
      if ( *(_QWORD *)(v4 + 80) )
      {
        v8 = XEPALOBJ::ulTime((XEPALOBJ *)&v35);
        if ( *v9 == v8 )
          goto LABEL_64;
      }
      GreAcquireHmgrSemaphore();
      v12 = *(HDC *)(v4 + 40);
      while ( v12 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v40, v12);
        v13 = v40[0];
        if ( !v40[0] )
        {
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v40);
          goto LABEL_34;
        }
        *(_DWORD *)(*(_QWORD *)(v40[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v47[0] + 80LL) + 8LL) | 0xF;
        v12 = *(HDC *)(v13 + 1376);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v40);
        v40[0] = 0LL;
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v40);
      }
      v14 = *(_QWORD *)(v4 + 88);
      if ( v14 )
      {
        if ( v14 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v14, v10, v11);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v15 = *(_DWORD **)(v4 + 72);
      if ( v15 && !*v15 )
      {
        if ( *(_DWORD **)(v4 + 80) != v15 )
          Win32FreePool(v15, v10, v11);
        *(_QWORD *)(v4 + 72) = 0LL;
      }
      if ( !*(_QWORD *)(v4 + 72) )
      {
        v38 = 0;
        v37 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v37, 1u, *(_DWORD *)(v35 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v16 = *(_DWORD *)(v37 + 28);
          if ( *(_DWORD *)(v35 + 28) < v16 )
            v16 = *(_DWORD *)(v35 + 28);
          memmove(*(void **)(v37 + 120), *(const void **)(v35 + 120), 4LL * v16);
          *(_DWORD *)(v37 + 60) = *(_DWORD *)(v35 + 60);
          *(_DWORD *)(v37 + 24) = *(_DWORD *)(v35 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v37);
          *(_QWORD *)(v4 + 72) = ptransMatchAPal(v17, v37, v4, 1LL, v39, v39);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v37);
      }
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      if ( *(_QWORD *)(v4 + 72) )
      {
        matched = ptransMatchAPal(v15, v35, v4, 0LL, &v52, &v53);
        *(_QWORD *)(v4 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
      }
      else
      {
        *(_QWORD *)(v4 + 80) = 0LL;
      }
LABEL_34:
      v19 = *(HDC *)(v4 + 40);
      while ( v19 != v12 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v45, v19);
        _InterlockedDecrement((volatile signed __int32 *)(v45[0] + 12LL));
        v19 = *(HDC *)(v45[0] + 1376LL);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v45);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_64:
    SEMOBJ::vUnlock((SEMOBJ *)&v42);
    v2 = v36;
    v3 = v35;
  }
  if ( v52 )
  {
    if ( (*(_DWORD *)(v2 + 56) & 0x400) == 0 )
    {
      v30 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v2 + 1792);
      if ( v30 )
      {
        v30(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 1824LL), &v35, 0LL, 0LL, *(_DWORD *)(v3 + 28));
        v3 = v35;
      }
    }
    if ( *(_DWORD *)(v3 + 28) == 256 )
    {
      v31 = aPalHalftone;
      do
      {
        if ( ((*v31 ^ *(unsigned int *)((char *)v31 + *(_QWORD *)(v3 + 120) - (_QWORD)aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v1;
        ++v31;
      }
      while ( v1 < 0x100 );
      if ( v1 == 256 )
        *(_DWORD *)(v3 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v3 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v49);
  DCOBJ::~DCOBJ((DCOBJ *)v50);
  SEMOBJ::vUnlock((SEMOBJ *)&v43);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v44);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v32);
LABEL_77:
  v33 = v53 | (v52 << 16);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v47);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v48);
  return v33;
}
