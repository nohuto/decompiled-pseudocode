/*
 * XREFs of GreRealizePalette @ 0x1C013C7E0
 * Callers:
 *     xxxRealizePalette @ 0x1C013C790 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0041720 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02B10A4 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B40F8 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  unsigned int v8; // ebx
  struct _W32PROCESS *v10; // rcx
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v12; // rdx
  int v13; // eax
  HDC v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 matched; // rax
  HDC v21; // rbx
  _DWORD *v22; // rdx
  int v23; // eax
  HDC v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rcx
  HDC v28; // rbx
  void (__fastcall *v29)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int *v30; // r8
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  _BYTE v35[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v44[112]; // [rsp+D0h] [rbp-30h] BYREF
  char v45; // [rsp+158h] [rbp+58h] BYREF
  int v46; // [rsp+160h] [rbp+60h] BYREF
  int v47; // [rsp+168h] [rbp+68h] BYREF

  v1 = 0;
  v47 = 0;
  v46 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v43, a1);
  v2 = v43[0];
  if ( !v43[0] )
    goto LABEL_5;
  v32 = *(_QWORD *)(v43[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v45);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v41, (struct PDEVOBJ *)&v32);
  v39 = *(_QWORD *)(v32 + 72);
  GreAcquireSemaphore(v39);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v44, (struct PDEVOBJ *)&v32);
  v3 = v32;
  v4 = *(_QWORD *)(v32 + 1832);
  v31 = v4;
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)v5;
  if ( (*(_DWORD *)(v32 + 2196) & 0x100) != 0 )
  {
    v42 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v10 = (struct _W32PROCESS *)hForePalette;
    if ( (HPALETTE)v6 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v2 + 80) + 68LL) == 1
      && (v10 = (struct _W32PROCESS *)(v6 ^ (unsigned __int64)hForePalette),
          (unsigned __int16)v6 == (unsigned __int16)hForePalette)
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v10),
          v10 = hForePID,
          hForePID == CurrentProcessWin32Process) )
    {
      if ( (struct PALETTE *)v5 == ppalDefault )
        goto LABEL_69;
      v22 = *(_DWORD **)(v5 + 72);
      if ( v22 )
      {
        if ( v22 == *(_DWORD **)(v5 + 80) )
        {
          v23 = XEPALOBJ::ulTime((XEPALOBJ *)&v31);
          if ( *v22 == v23 )
            goto LABEL_69;
        }
      }
      GreAcquireHmgrSemaphore(v10, v22);
      v24 = *(HDC *)(v5 + 40);
      while ( v24 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v37, v24);
        v25 = v37[0];
        if ( !v37[0] )
        {
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v37);
          goto LABEL_65;
        }
        *(_DWORD *)(*(_QWORD *)(v37[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) | 0xF;
        v24 = *(HDC *)(v25 + 1376);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v37);
        v37[0] = 0LL;
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v37);
      }
      v26 = *(_QWORD *)(v5 + 88);
      if ( v26 )
      {
        if ( v26 != *(_QWORD *)(v5 + 72) )
          Win32FreePool(v26);
        *(_QWORD *)(v5 + 88) = 0LL;
      }
      v27 = *(_DWORD **)(v5 + 72);
      if ( v27 && !*v27 )
      {
        if ( *(_DWORD **)(v5 + 80) != v27 )
          Win32FreePool(v27);
        *(_QWORD *)(v5 + 72) = 0LL;
      }
      if ( *(_QWORD *)(v5 + 72) )
        vMatchAPal(v2, v31, v5, &v46, &v47);
      else
        *(_QWORD *)(v5 + 72) = ptransMatchAPal(v27, v31, v5, 1LL, &v46, &v47);
      *(_QWORD *)(v5 + 88) = *(_QWORD *)(v5 + 80);
      *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 72);
LABEL_65:
      v28 = *(HDC *)(v5 + 40);
      while ( v28 != v24 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v40, v28);
        _InterlockedDecrement((volatile signed __int32 *)(v40[0] + 12LL));
        v28 = *(HDC *)(v40[0] + 1376LL);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v40);
      }
    }
    else
    {
      if ( (struct PALETTE *)v5 == ppalDefault )
        goto LABEL_69;
      v12 = *(_DWORD **)(v5 + 80);
      if ( v12 )
      {
        v13 = XEPALOBJ::ulTime((XEPALOBJ *)&v31);
        if ( *v12 == v13 )
          goto LABEL_69;
      }
      GreAcquireHmgrSemaphore(v10, v12);
      v14 = *(HDC *)(v5 + 40);
      while ( v14 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v36, v14);
        v15 = v36[0];
        if ( !v36[0] )
        {
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v36);
          goto LABEL_38;
        }
        *(_DWORD *)(*(_QWORD *)(v36[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) | 0xF;
        v14 = *(HDC *)(v15 + 1376);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v36);
        v36[0] = 0LL;
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v36);
      }
      v16 = *(_QWORD *)(v5 + 88);
      if ( v16 )
      {
        if ( v16 != *(_QWORD *)(v5 + 72) )
          Win32FreePool(v16);
        *(_QWORD *)(v5 + 88) = 0LL;
      }
      v17 = *(_DWORD **)(v5 + 72);
      if ( v17 && !*v17 )
      {
        if ( *(_DWORD **)(v5 + 80) != v17 )
          Win32FreePool(v17);
        *(_QWORD *)(v5 + 72) = 0LL;
      }
      if ( !*(_QWORD *)(v5 + 72) )
      {
        v34 = 0;
        v33 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v33, 1u, *(_DWORD *)(v31 + 28), 0LL, 0, 0, 0, 0x800u) )
        {
          v18 = *(_DWORD *)(v33 + 28);
          if ( *(_DWORD *)(v31 + 28) < v18 )
            v18 = *(_DWORD *)(v31 + 28);
          memmove(*(void **)(v33 + 128), *(const void **)(v31 + 128), 4LL * v18);
          *(_DWORD *)(v33 + 60) = *(_DWORD *)(v31 + 60);
          *(_DWORD *)(v33 + 24) = *(_DWORD *)(v31 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v33);
          *(_QWORD *)(v5 + 72) = ptransMatchAPal(v19, v33, v5, 1LL, v35, v35);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v33);
      }
      *(_QWORD *)(v5 + 88) = *(_QWORD *)(v5 + 80);
      if ( *(_QWORD *)(v5 + 72) )
      {
        matched = ptransMatchAPal(v17, v31, v5, 0LL, &v46, &v47);
        *(_QWORD *)(v5 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 72);
      }
      else
      {
        *(_QWORD *)(v5 + 80) = 0LL;
      }
LABEL_38:
      v21 = *(HDC *)(v5 + 40);
      while ( v21 != v14 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v38, v21);
        _InterlockedDecrement((volatile signed __int32 *)(v38[0] + 12LL));
        v21 = *(HDC *)(v38[0] + 1376LL);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_69:
    SEMOBJ::vUnlock((SEMOBJ *)&v42);
    v3 = v32;
    v4 = v31;
  }
  if ( v46 )
  {
    if ( (*(_DWORD *)(v3 + 56) & 0x400) == 0 )
    {
      v29 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v3 + 1792);
      if ( v29 )
      {
        v29(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 1824LL), &v31, 0LL, 0LL, *(_DWORD *)(v4 + 28));
        v4 = v31;
      }
    }
    if ( *(_DWORD *)(v4 + 28) == 256 )
    {
      v30 = aPalHalftone;
      do
      {
        if ( ((*v30 ^ *(unsigned int *)((char *)v30 + *(_QWORD *)(v4 + 128) - (_QWORD)aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v1;
        ++v30;
      }
      while ( v1 < 0x100 );
      if ( v1 == 256 )
        *(_DWORD *)(v4 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v4 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v44);
  SEMOBJ::vUnlock((SEMOBJ *)&v39);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v41);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
LABEL_5:
  v8 = v47 | (v46 << 16);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v43);
  return v8;
}
