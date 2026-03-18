/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005C034 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C005D0D0 (GreCreateBitmap.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CB068 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C000D6A8 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C000D728 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Win32CreateSection @ 0x1C0053C4C (Win32CreateSection.c)
 *     EngAllocUserMemEx @ 0x1C00857B0 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C0085980 (EngFreeUserMem.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCF98 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCFD8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00BD0A8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00BF93C (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00BF9E0 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00BFB6C (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00BFBD4 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ULongLongToLong @ 0x1C00BFC54 (ULongLongToLong.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  void *v11; // rbx
  unsigned int v12; // eax
  unsigned int v15; // esi
  ULONGLONG v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // r10d
  __int64 v20; // r11
  char v21; // r13
  unsigned int v22; // r15d
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  PVOID v28; // rcx
  PVOID v29; // rax
  int v30; // r8d
  __int16 v32; // r12
  unsigned __int64 v33; // rcx
  __int16 v34; // r13
  void *v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rax
  PVOID v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int CurrentProcessId; // eax
  int v45; // r15d
  void *v46; // rbx
  __int64 v47; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  LONG v53; // r8d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  int v59; // edx
  __int64 v60; // rcx
  int v61; // r8d
  __int64 CurrentProcess; // r15
  __int64 ProcessWin32Process; // rax
  struct _ERESOURCE *v64; // rbx
  const wchar_t *v65; // rcx
  PVOID DeferredContext; // r12
  int v67; // eax
  unsigned int v68; // esi
  unsigned int v69; // ebx
  __int64 v70; // r13
  __int64 v71; // rcx
  __int128 v72; // xmm0
  _OWORD *v73; // rax
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  PVOID Object; // [rsp+50h] [rbp-A1h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp-99h] BYREF
  int v78; // [rsp+60h] [rbp-91h]
  __int64 v79; // [rsp+68h] [rbp-89h] BYREF
  void *v80; // [rsp+70h] [rbp-81h] BYREF
  __int128 v81; // [rsp+78h] [rbp-79h] BYREF
  __int128 v82; // [rsp+88h] [rbp-69h]
  __int128 v83; // [rsp+98h] [rbp-59h]
  __int64 v84; // [rsp+A8h] [rbp-49h] BYREF
  _BYTE v85[56]; // [rsp+B0h] [rbp-41h] BYREF
  int v86; // [rsp+130h] [rbp+3Fh]
  LONG plResult; // [rsp+138h] [rbp+47h] BYREF
  PVOID pv; // [rsp+140h] [rbp+4Fh] BYREF
  void *v89; // [rsp+148h] [rbp+57h]

  v89 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v11 = a4;
  v12 = *((_DWORD *)a2 + 1);
  LOWORD(v86) = 0;
  plResult = 0;
  v15 = 1;
  if ( v12 <= 0x7FFFFFFF && *((_DWORD *)a2 + 2) <= 0x7FFFFFFFu )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v16 = (((unsigned __int64)v12 + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL;
        break;
      case 2:
        v16 = (((unsigned __int64)v12 + 7) >> 1) & 0x7FFFFFFFFFFFFFFCLL;
        break;
      case 3:
        v16 = (v12 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL;
        break;
      case 4:
        v16 = (2LL * v12 + 2) & 0xFFFFFFFFFFFFFFFCuLL;
        break;
      case 5:
        v16 = (3 * (v12 + 1LL)) & 0xFFFFFFFFFFFFFFFCuLL;
        break;
      case 6:
        v16 = 4LL * v12;
        break;
      case 7:
      case 8:
      case 9:
      case 0xA:
        v16 = 0LL;
        break;
      default:
        return 0LL;
    }
    if ( ULongLongToLong(v16, &plResult) >= 0 )
    {
      v21 = 4;
      v22 = SURFACE::tSize;
      Object = 0LL;
      v81 = 0uLL;
      v82 = 0uLL;
      v83 = 0uLL;
      v78 = 0;
      v80 = 0LL;
      if ( v20 )
      {
        if ( !a9 || (!v19 ? (v33 = (unsigned int)plResult * v18) : (v33 = *((unsigned int *)a2 + 3)), v33 <= 0x7FFFFFFF) )
        {
          v32 = 2048;
          if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
            goto LABEL_50;
          W32PIDLOCK::vInit((W32PIDLOCK *)&v81);
          if ( *((_QWORD *)&v83 + 1) )
          {
            LOWORD(v86) = 2048;
            v78 = 1;
            goto LABEL_51;
          }
        }
      }
      else
      {
        if ( v19 )
          v23 = *((unsigned int *)a2 + 3);
        else
          v23 = (unsigned int)plResult * v18;
        v24 = v23 + (unsigned int)SURFACE::tSize;
        if ( v24 < v23 || (unsigned __int64)v24 > 0x7FFFFFFF )
          return 0LL;
        v25 = *((_DWORD *)a2 + 6);
        if ( (v25 & 0x40000) != 0 && v24 > 4096 )
          *((_DWORD *)a2 + 6) = v25 | 8;
        v26 = *((_DWORD *)a2 + 6);
        if ( (v26 & 8) == 0 )
        {
          if ( (v26 & 0x810) == 0 )
            goto LABEL_39;
          if ( (v26 & 0x800) != 0 )
          {
            W32PIDLOCK::vInit((W32PIDLOCK *)&v81);
            if ( !*((_QWORD *)&v83 + 1) )
              return 0LL;
            Object = 0LL;
            v79 = (unsigned int)v24 - v22;
            Win32CreateSection((unsigned int)&Object, 6, v30, (unsigned int)&v79);
            v29 = Object;
            if ( !Object )
            {
              W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v81);
              return 0LL;
            }
          }
          else
          {
            AllocateKernelSection(v24, v17, &pv);
            v29 = Object;
          }
          v28 = pv;
          if ( !pv && !v29 )
          {
LABEL_39:
            v22 = v24;
            v32 = v86;
            v11 = v89;
            if ( (*((_DWORD *)a2 + 6) & 2) == 0 )
              v21 = 0;
LABEL_51:
            v34 = v21 & 4;
            v35 = (void *)AllocateObject(v22, 5u, v34 == 0);
            *(_QWORD *)this = v35;
            if ( v35 )
            {
              if ( v34 )
                memset(v35, 0, SURFACE::tSize);
              v41 = *(_QWORD *)this;
              Process = *(PEPROCESS *)((char *)a2 + 4);
              *(_QWORD *)(v41 + 56) = Process;
              *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
              *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
              v42 = *((_QWORD *)a2 + 2);
              if ( v42 && (v43 = HmgShareLockCheck(v42, 8)) != 0 )
                *(_QWORD *)(*(_QWORD *)this + 120LL) = v43;
              else
                *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
              *(_BYTE *)(*(_QWORD *)this + 592LL) = 0;
              *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
              *(_WORD *)(*(_QWORD *)this + 102LL) = v32 | *((_WORD *)a2 + 12) & 0x89;
              CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
              v45 = a10;
              *(_DWORD *)(*(_QWORD *)this + 176LL) = CurrentProcessId & 0xFFFFFFFC;
              *(_QWORD *)(*(_QWORD *)this + 184LL) = v11;
              v46 = a6;
              *(_DWORD *)(*(_QWORD *)this + 200LL) = a5;
              *(_QWORD *)(*(_QWORD *)this + 192LL) = v46;
              *(_QWORD *)(*(_QWORD *)this + 208LL) = a7;
              *(_DWORD *)(*(_QWORD *)this + 216LL) = v45;
              *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
              *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
              if ( (*((_DWORD *)a2 + 6) & 0x4000000) != 0 )
                *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x4000000u;
              v47 = *(_QWORD *)this;
              Process = 0LL;
              *(_QWORD *)(v47 + 128) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
              *(_DWORD *)(*(_QWORD *)this + 160LL) = 0;
              *(_QWORD *)(*(_QWORD *)this + 168LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( ThreadWin32Thread )
              {
                v49 = *ThreadWin32Thread;
                if ( v49 )
                  *(_QWORD *)(v49 + 304) = 0LL;
              }
              *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 600LL) = 0LL;
              *(_DWORD *)(*(_QWORD *)this + 608LL) = 0;
              *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
              *(_QWORD *)(*(_QWORD *)this + 504LL) = 0LL;
              *(_QWORD *)(*(_QWORD *)this + 496LL) = 0LL;
              v50 = (_QWORD *)(*(_QWORD *)this + 232LL);
              v50[1] = v50;
              *v50 = v50;
              *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
              *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
              *(_QWORD *)(*(_QWORD *)this + 576LL) = 0LL;
              v51 = (_QWORD *)(*(_QWORD *)this + 448LL);
              v51[1] = v51;
              *v51 = v51;
              *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
              if ( v78 )
                *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
              if ( v46 && !v45 )
                *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
              if ( pv || Object )
                *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
              else
                *(_QWORD *)(*(_QWORD *)this + 72LL) = *(_QWORD *)this + SURFACE::tSize;
              v52 = *(_QWORD *)this;
              if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
              {
                *(_WORD *)(v52 + 102) &= ~0x800u;
                *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
                *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
                if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
                  *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
                else
                  *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
              }
              else
              {
                v53 = plResult;
                *(_DWORD *)(v52 + 64) = plResult * *((_DWORD *)a2 + 2);
                v54 = *(_QWORD *)this;
                if ( (*((_DWORD *)a2 + 6) & 1) != 0 )
                {
                  *(_DWORD *)(v54 + 88) = v53;
                  *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
                }
                else
                {
                  *(_DWORD *)(v54 + 88) = -v53;
                  *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                                      + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 64LL) - v53);
                }
              }
              if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
              {
                *(_QWORD *)(*(_QWORD *)this + 528LL) = Object;
                *(_QWORD *)(*(_QWORD *)this + 536LL) = v80;
                *(_QWORD *)(*(_QWORD *)this + 544LL) = (char *)v80
                                                     + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                                     - *(_QWORD *)(*(_QWORD *)this + 72LL);
                *(_DWORD *)(*(_QWORD *)this + 552LL) = 1;
                v55 = W32GetThreadWin32Thread(KeGetCurrentThread());
                if ( v55 && (v56 = *(_QWORD *)(v55 + 72)) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)this + 556LL) = *(_DWORD *)(v56 + 8);
                  *(_DWORD *)(*(_QWORD *)this + 560LL) = 1;
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)this + 556LL) = 0;
                  *(_DWORD *)(*(_QWORD *)this + 560LL) = 0;
                }
              }
              *(_DWORD *)(*(_QWORD *)this + 92LL) = _InterlockedIncrement((volatile signed __int32 *)&_ulGlobalSurfaceUnique);
              HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v85);
              if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v85, *(struct OBJECT **)this, 1, a8 != 0, 5u) )
              {
                v57 = a11;
                *((_DWORD *)this + 3) = a11;
                if ( v57 )
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
                v58 = *(_QWORD *)this;
                *(_QWORD *)(v58 + 32) = **(_QWORD **)this;
                CurrentProcess = PsGetCurrentProcess(v58);
                v79 = *(_QWORD *)this;
                if ( CurrentProcess )
                {
                  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
                  if ( !ProcessWin32Process
                    || !*(_DWORD *)(ProcessWin32Process + 828)
                    || (v60 = *(unsigned int *)(ProcessWin32Process + 768),
                        (*(_DWORD *)(ProcessWin32Process + 768) & 0x30) != 0x10)
                    || (v60 & 0x200) != 0 )
                  {
                    CurrentProcess = 0LL;
                  }
                }
                v64 = ghsemHmgr;
                if ( ghsemHmgr )
                {
                  PsEnterPriorityRegion(v60);
                  ExEnterCriticalRegionAndAcquireResourceExclusive(v64);
                  LODWORD(v64) = (_DWORD)ghsemHmgr;
                }
                v65 = L"ghsemHmgr";
                if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                  Template_pqz((unsigned int)L"ghsemHmgr", v59, v61, (_DWORD)v64, 16, (__int64)L"ghsemHmgr");
                if ( !CurrentProcess )
                {
                  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
                  v67 = (unsigned __int16)*(_DWORD *)v79;
                  v68 = v67 | (*(_DWORD *)v79 >> 8) & 0xFF0000;
                  if ( v68 >= 0x10000 )
                  {
                    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                    {
                      v69 = (unsigned __int16)v67;
                      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                                  (unsigned __int16)v67,
                                                  1)
                           + 13) == HIWORD(v68) )
                        v68 = v69;
                    }
                    else
                    {
                      v68 = (unsigned __int16)v67;
                    }
                  }
                  v70 = *((_QWORD *)DeferredContext + 2);
                  if ( v68 >= 0x10000 && *(_DWORD *)DeferredContext > 0x10000u )
                    GdiHandleEntryDirectory::GetEntry(
                      *((GdiHandleEntryDirectory **)DeferredContext + 2),
                      (unsigned __int16)v68,
                      1);
                  v65 = (const wchar_t *)*(unsigned int *)(v70 + 2056);
                  v32 = v86;
                  v15 = 1;
                }
                *(_QWORD *)(v79 + 584) = CurrentProcess;
                if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                  Template_pz(v65, &LockRelease);
                if ( ghsemHmgr )
                {
                  ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
                  PsLeavePriorityRegion(v71);
                }
              }
              else
              {
                if ( *(_QWORD *)(*(_QWORD *)this + 120LL) )
                {
                  v84 = *(_QWORD *)(*(_QWORD *)this + 120LL);
                  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v84);
                  *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
                }
                SURFACE::Free(*(struct SURFACE **)this);
                *(_QWORD *)this = 0LL;
                v15 = 0;
              }
              HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v85);
              if ( v15 )
              {
                if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((_QWORD *)&v83 + 1) )
                {
                  v72 = v81;
                  *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
                  v73 = *(_OWORD **)this;
                  v74 = v82;
                  v73[17] = v72;
                  v75 = v83;
                  v73[18] = v74;
                  v73[19] = v75;
                  *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
                  *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
                  *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
                  return v15;
                }
                return v15;
              }
            }
            else
            {
              v15 = 0;
            }
            if ( pv || Object )
            {
              v36 = *((_DWORD *)a2 + 6);
              if ( (v36 & 8) != 0 )
              {
                if ( (v36 & 0x80u) == 0 )
                {
                  EngFreeUserMem(pv);
                  return v15;
                }
                v38 = W32GetThreadWin32Thread(KeGetCurrentThread());
                if ( *(_QWORD *)(v38 + 72) )
                {
                  v39 = PsGetCurrentProcess(v37);
                  MmUnmapViewOfSection(v39);
                  if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(v38 + 72) + 8LL), &Process) >= 0 )
                  {
                    MmUnmapViewOfSection(Process);
                    ObfDereferenceObject(Process);
                  }
                  v40 = Object;
                  if ( !Object )
                    KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
LABEL_135:
                  ObfDereferenceObject(v40);
                  return v15;
                }
              }
              else if ( (v32 & 0x800) != 0 )
              {
                W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v81);
                if ( !v78 )
                {
                  v40 = Object;
                  if ( !Object )
                    KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
                  goto LABEL_135;
                }
              }
              else if ( (v32 & 0x10) != 0 )
              {
                vFreeKernelSection(pv);
              }
            }
            return v15;
          }
          v86 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
          goto LABEL_37;
        }
        if ( (v26 & 0x80u) == 0 )
          v27 = EngAllocUserMemEx((int)v24, v17, &pv);
        else
          v27 = AllocateSharedSection(v24, v17, &Object, &v80, &pv);
        if ( v27 >= 0 )
        {
          v28 = pv;
          v29 = Object;
LABEL_37:
          if ( !v28 && !v29 )
            goto LABEL_39;
          v11 = v89;
LABEL_50:
          v32 = v86;
          goto LABEL_51;
        }
      }
      return 0LL;
    }
  }
  return 0LL;
}
