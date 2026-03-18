/*
 * XREFs of GreRealizePalette @ 0x1C0111C40
 * Callers:
 *     xxxRealizePalette @ 0x1C0111BF0 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025E60C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0019FD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025E5E8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A5DC8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B5158 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  HPALETTE v5; // rsi
  struct _W32PROCESS *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v10; // rdx
  int v11; // eax
  HDC v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 matched; // rax
  HDC v19; // rbx
  _DWORD *v20; // rdx
  int v21; // eax
  HDC v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  HDC v26; // rbx
  void (__fastcall *v27)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int *v28; // r8
  DYNAMICMODECHANGESHARELOCK *v29; // rcx
  unsigned int v30; // ebx
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  _BYTE v36[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v39[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v41[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v44[6]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v45[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v46[112]; // [rsp+120h] [rbp+20h] BYREF
  char v47; // [rsp+1A8h] [rbp+A8h] BYREF
  int v48; // [rsp+1B0h] [rbp+B0h] BYREF
  int v49; // [rsp+1B8h] [rbp+B8h] BYREF

  v1 = 0;
  v49 = 0;
  v48 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v44, a1);
  if ( !v44[0] )
    goto LABEL_77;
  v33 = *(_QWORD *)(v44[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v47);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v42, (struct PDEVOBJ *)&v33);
  v40 = *(_QWORD *)(v33 + 72);
  GreAcquireSemaphore(v40);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v45, (struct PDEVOBJ *)&v33);
  v2 = v33;
  v3 = *(_QWORD *)(v33 + 1832);
  v32 = v3;
  v4 = *(_QWORD *)(v44[0] + 96LL);
  v5 = *(HPALETTE *)v4;
  if ( (*(_DWORD *)(v33 + 2196) & 0x100) != 0 )
  {
    v43 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v5 == hForePalette
      || (v6 = *(struct _W32PROCESS **)(v44[0] + 80LL), *((_DWORD *)v6 + 17) == 1)
      && (unsigned __int16)v5 == (unsigned __int16)hForePalette
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v6),
          v6 = hForePID,
          hForePID == CurrentProcessWin32Process) )
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_64;
      v20 = *(_DWORD **)(v4 + 72);
      if ( v20 )
      {
        if ( v20 == *(_DWORD **)(v4 + 80) )
        {
          v21 = XEPALOBJ::ulTime((XEPALOBJ *)&v32);
          if ( *v20 == v21 )
            goto LABEL_64;
        }
      }
      GreAcquireHmgrSemaphore(v6, v20, v7, v8);
      v22 = *(HDC *)(v4 + 40);
      while ( v22 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v38, v22);
        v23 = v38[0];
        if ( !v38[0] )
        {
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
          goto LABEL_60;
        }
        *(_DWORD *)(*(_QWORD *)(v38[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v44[0] + 80LL) + 8LL) | 0xF;
        v22 = *(HDC *)(v23 + 1376);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v38);
        v38[0] = 0LL;
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
      }
      v24 = *(_QWORD *)(v4 + 88);
      if ( v24 )
      {
        if ( v24 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v24);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v25 = *(_DWORD **)(v4 + 72);
      if ( v25 && !*v25 )
      {
        if ( *(_DWORD **)(v4 + 80) != v25 )
          Win32FreePool(v25);
        *(_QWORD *)(v4 + 72) = 0LL;
      }
      if ( *(_QWORD *)(v4 + 72) )
        vMatchAPal(v44[0], v32, v4, &v48, &v49);
      else
        *(_QWORD *)(v4 + 72) = ptransMatchAPal(v25, v32, v4, 1LL, &v48, &v49);
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
LABEL_60:
      v26 = *(HDC *)(v4 + 40);
      while ( v26 != v22 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v41, v26);
        _InterlockedDecrement((volatile signed __int32 *)(v41[0] + 12LL));
        v26 = *(HDC *)(v41[0] + 1376LL);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v41);
      }
    }
    else
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_64;
      v10 = *(_DWORD **)(v4 + 80);
      if ( v10 )
      {
        v11 = XEPALOBJ::ulTime((XEPALOBJ *)&v32);
        if ( *v10 == v11 )
          goto LABEL_64;
      }
      GreAcquireHmgrSemaphore(v6, v10, v7, v8);
      v12 = *(HDC *)(v4 + 40);
      while ( v12 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v37, v12);
        v13 = v37[0];
        if ( !v37[0] )
        {
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v37);
          goto LABEL_34;
        }
        *(_DWORD *)(*(_QWORD *)(v37[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v44[0] + 80LL) + 8LL) | 0xF;
        v12 = *(HDC *)(v13 + 1376);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v37);
        v37[0] = 0LL;
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v37);
      }
      v14 = *(_QWORD *)(v4 + 88);
      if ( v14 )
      {
        if ( v14 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v14);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v15 = *(_DWORD **)(v4 + 72);
      if ( v15 && !*v15 )
      {
        if ( *(_DWORD **)(v4 + 80) != v15 )
          Win32FreePool(v15);
        *(_QWORD *)(v4 + 72) = 0LL;
      }
      if ( !*(_QWORD *)(v4 + 72) )
      {
        v35 = 0;
        v34 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v34, 1u, *(_DWORD *)(v32 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v16 = *(_DWORD *)(v34 + 28);
          if ( *(_DWORD *)(v32 + 28) < v16 )
            v16 = *(_DWORD *)(v32 + 28);
          memmove(*(void **)(v34 + 128), *(const void **)(v32 + 128), 4LL * v16);
          *(_DWORD *)(v34 + 60) = *(_DWORD *)(v32 + 60);
          *(_DWORD *)(v34 + 24) = *(_DWORD *)(v32 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v34);
          *(_QWORD *)(v4 + 72) = ptransMatchAPal(v17, v34, v4, 1LL, v36, v36);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v34);
      }
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      if ( *(_QWORD *)(v4 + 72) )
      {
        matched = ptransMatchAPal(v15, v32, v4, 0LL, &v48, &v49);
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
        MDCOBJ::MDCOBJ((MDCOBJ *)v39, v19);
        _InterlockedDecrement((volatile signed __int32 *)(v39[0] + 12LL));
        v19 = *(HDC *)(v39[0] + 1376LL);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v39);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_64:
    SEMOBJ::vUnlock((SEMOBJ *)&v43);
    v2 = v33;
    v3 = v32;
  }
  if ( v48 )
  {
    if ( (*(_DWORD *)(v2 + 56) & 0x400) == 0 )
    {
      v27 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v2 + 1792);
      if ( v27 )
      {
        v27(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 1824LL), &v32, 0LL, 0LL, *(_DWORD *)(v3 + 28));
        v3 = v32;
      }
    }
    if ( *(_DWORD *)(v3 + 28) == 256 )
    {
      v28 = aPalHalftone;
      do
      {
        if ( ((*v28 ^ *(unsigned int *)((char *)v28 + *(_QWORD *)(v3 + 128) - (_QWORD)aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v1;
        ++v28;
      }
      while ( v1 < 0x100 );
      if ( v1 == 256 )
        *(_DWORD *)(v3 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v3 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v45);
  DCOBJ::~DCOBJ((DCOBJ *)v46);
  SEMOBJ::vUnlock((SEMOBJ *)&v40);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v42);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v29);
LABEL_77:
  v30 = v49 | (v48 << 16);
  DCOBJ::~DCOBJ((DCOBJ *)v44);
  return v30;
}
