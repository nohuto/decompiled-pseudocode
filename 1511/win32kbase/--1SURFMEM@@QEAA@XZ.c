/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30
 * Callers:
 *     GreCreateBitmap @ 0x1C00227F0 (GreCreateBitmap.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005D854 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C007467C (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00121B0 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x1C00841F0 (EngFreeUserMem.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00B5874 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

void __fastcall SURFMEM::~SURFMEM(__int64 **this, __int64 a2, int a3)
{
  __int64 *v3; // r12
  char v5; // al
  _BYTE *SystemArgument2; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  signed __int32 v10; // eax
  __int64 v11; // rsi
  __int16 v12; // r13
  __int64 v13; // rdi
  struct _ERESOURCE *v14; // rbx
  struct _ENTRY *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // rsi
  __int64 v20; // rax
  PEPROCESS v21; // rdi
  char *v22; // rdi
  int v23; // ebx
  __int64 *v24; // rax
  __int16 v25; // cx
  void *v26; // rdi
  void *v27; // rbx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 ThreadWin32Thread; // rsi
  PVOID v35; // r12
  int v36; // r13d
  PVOID v37; // rbx
  __int64 CurrentProcess; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // [rsp+38h] [rbp-79h] BYREF
  int v45; // [rsp+40h] [rbp-71h]
  unsigned int v46; // [rsp+44h] [rbp-6Dh]
  unsigned int v47; // [rsp+4Ch] [rbp-65h]
  unsigned int v48; // [rsp+5Ch] [rbp-55h]
  int v49; // [rsp+60h] [rbp-51h]
  PVOID Object[2]; // [rsp+68h] [rbp-49h]
  __int128 v51; // [rsp+78h] [rbp-39h]
  _OWORD v52[3]; // [rsp+90h] [rbp-21h] BYREF
  PEPROCESS Process; // [rsp+118h] [rbp+67h] BYREF
  __int64 v54; // [rsp+120h] [rbp+6Fh] BYREF
  __int64 v55; // [rsp+128h] [rbp+77h] BYREF
  char v56; // [rsp+130h] [rbp+7Fh] BYREF

  v3 = *this;
  if ( *this )
  {
    v5 = *((_BYTE *)this + 8);
    if ( (v5 & 1) != 0 )
    {
      SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
      v7 = (unsigned __int16)*(_DWORD *)v3;
      v8 = 3 * v7;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v56);
      _m_prefetchw(&SystemArgument2[24 * v7 + 8]);
      v9 = (SystemArgument2[24 * v7 + 15] & 0x20) == 0;
      v10 = *(_DWORD *)&SystemArgument2[24 * v7 + 8];
      v48 = v10;
      if ( !v9 )
        goto LABEL_11;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (SystemArgument2[24 * v7 + 15] & 0x40) != 0 )
          {
            v11 = 8 * v7;
            ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v11, 0LL);
            if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v3 + 14) == 5
              && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
              && gpentHmgrAltStacks )
            {
              RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v3);
            }
            --*((_DWORD *)v3 + 2);
            if ( (SystemArgument2[8 * v8 + 15] & 0x40) != 0 )
            {
              ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v11);
              KeLeaveCriticalRegion();
              return;
            }
            _m_prefetchw(&SystemArgument2[8 * v8 + 8]);
            _InterlockedExchange(
              (volatile __int32 *)&SystemArgument2[8 * v8 + 8],
              *(_DWORD *)&SystemArgument2[8 * v8 + 8] & 0xFFFFFFFE);
LABEL_11:
            KeLeaveCriticalRegion();
            return;
          }
          if ( (v10 & 1) == 0 )
            break;
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_10:
          _m_prefetchw(&SystemArgument2[24 * v7 + 8]);
          v9 = (SystemArgument2[24 * v7 + 15] & 0x20) == 0;
          v10 = *(_DWORD *)&SystemArgument2[24 * v7 + 8];
          v48 = v10;
          if ( !v9 )
            goto LABEL_11;
        }
        v49 = v10 | 1;
        if ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)&SystemArgument2[24 * v7 + 8], v10 | 1, v10)
          || (SystemArgument2[24 * v7 + 15] & 0x40) != 0 )
        {
          goto LABEL_10;
        }
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v7) = 0LL;
        SystemArgument2[24 * v7 + 15] |= 0x40u;
        _m_prefetchw(&SystemArgument2[24 * v7 + 8]);
        v48 = *(_DWORD *)&SystemArgument2[24 * v7 + 8] & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)&SystemArgument2[24 * v7 + 8], v48);
        v10 = v48;
      }
    }
    if ( (v5 & 8) != 0 && v3[15] )
    {
      v54 = v3[15];
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v54);
    }
    v12 = *((_DWORD *)this + 3) != 0;
    v13 = **this;
    if ( (unsigned __int16)v13 < (unsigned int)gcMaxHmgr )
    {
      v14 = ghsemHmgr;
      if ( ghsemHmgr )
      {
        PsEnterPriorityRegion(this, a2);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v14);
        LODWORD(v14) = (_DWORD)ghsemHmgr;
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pqz((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)v14, 16, (__int64)L"ghsemHmgr");
      v55 = (unsigned __int16)v13;
      v15 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v13);
      Process = (PEPROCESS)(24LL * (unsigned __int16)v13);
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v44, v15, 1, (unsigned __int16)v13, 0);
      v18 = v45;
      v19 = v44;
      if ( v45 && v44 )
      {
        if ( *((_BYTE *)v15 + 14) == 5 && *((_WORD *)v15 + 6) == WORD1(v13) )
        {
          v20 = *(_QWORD *)v15;
          if ( *(_WORD *)(*(_QWORD *)v15 + 12LL) == v12 && *(_DWORD *)(v20 + 8) == 1 )
          {
            v21 = Process;
            *(_QWORD *)v20 = 0LL;
            v22 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + (unsigned __int64)v21;
            v23 = *((_DWORD *)v22 + 2);
            HmgDecProcessHandleCount(v23 & 0xFFFFFFFE);
            *(_QWORD *)v22 = ghFreeHmgr;
            ghFreeHmgr = v55;
            *((_WORD *)v15 + 6) += 256;
            --gcCurHmgr;
            *((_BYTE *)v15 + 14) = 0;
            *((_QWORD *)v15 + 2) = 0LL;
            *((_DWORD *)v22 + 2) = v23 & 1;
          }
        }
        if ( (*(_BYTE *)(v19 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v47);
        }
        else
        {
          _m_prefetchw((const void *)(v19 + 8));
          v46 = *(_DWORD *)(v19 + 8) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)(v19 + 8), v46);
        }
        v18 = 0;
        v44 = 0LL;
        v45 = 0;
        v19 = 0LL;
        KeLeaveCriticalRegion();
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v16, &LockRelease, v17, ghsemHmgr, L"ghsemHmgr");
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion();
      }
      if ( v18 )
      {
        if ( v19 )
        {
          if ( (*(_BYTE *)(v19 + 15) & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v47);
          }
          else
          {
            _m_prefetchw((const void *)(v19 + 8));
            v46 = *(_DWORD *)(v19 + 8) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)(v19 + 8), v46);
          }
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)*this + 3);
    v24 = *this;
    v25 = *((_WORD *)*this + 51);
    v26 = (void *)(*this)[9];
    v27 = (void *)(*this)[30];
    v28 = *(_OWORD *)(*this + 35);
    v52[0] = *(_OWORD *)(*this + 33);
    v29 = *(_OWORD *)(v24 + 37);
    v52[1] = v28;
    v30 = *(_OWORD *)(v24 + 67);
    v52[2] = v29;
    v31 = *(_OWORD *)(v24 + 65);
    v51 = v30;
    *(_OWORD *)Object = v31;
    if ( (v25 & 8) != 0 )
    {
      if ( (v24[14] & 0x40000) != 0 && v26 )
      {
        if ( (v25 & 0x80u) == 0 )
        {
          EngFreeUserMem(v26);
        }
        else
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
          {
            v35 = Object[1];
            v36 = DWORD2(v51);
            v37 = Object[1];
            if ( DWORD2(v51) )
              v37 = v26;
            CurrentProcess = PsGetCurrentProcess(v33, v32);
            MmUnmapViewOfSection(CurrentProcess, v37);
            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process) >= 0 )
            {
              if ( v36 )
                v26 = v35;
              MmUnmapViewOfSection(Process, v26);
              ObfDereferenceObject(Process);
            }
          }
          if ( !Object[0] )
            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    else if ( (v25 & 0x800) != 0 )
    {
      v55 = (__int64)ghsemMapRot;
      EngAcquireSemaphore(ghsemMapRot);
      v40 = (_QWORD *)(*this)[32];
      if ( v40 )
      {
        PsGetCurrentProcessWin32Process(v39);
        v41 = (__int64)(*this + 55);
        if ( *(_QWORD *)v41 != v41 )
        {
          v42 = *(_QWORD *)v41;
          v43 = (_QWORD *)(*this)[56];
          if ( *(_QWORD *)(*(_QWORD *)v41 + 8LL) != v41 || *v43 != v41 )
            __fastfail(3u);
          *v43 = v42;
          *(_QWORD *)(v42 + 8) = v43;
        }
        if ( v26 && v27 )
          MmUnmapViewOfSection(*v40, v26);
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)v52);
      if ( v27 )
        ObfDereferenceObject(v27);
      SEMOBJ::vUnlock((SEMOBJ *)&v55);
    }
    else if ( (v25 & 0x10) != 0 )
    {
      vFreeKernelSection(v26);
    }
    if ( *((__int16 *)*this + 7) >= 0 )
    {
      if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
        Win32FreePoolImpl_0();
    }
    else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
    {
      Win32FreeToPagedLookasideListImpl_0();
    }
  }
}
