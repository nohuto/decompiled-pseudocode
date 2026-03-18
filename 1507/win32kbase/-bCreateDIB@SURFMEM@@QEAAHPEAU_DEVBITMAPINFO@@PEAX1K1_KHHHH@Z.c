/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C000CB80 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C0044870 (GreCreateBitmap.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B38BC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00241AC (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002422C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0039980 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     PopThreadGuardedObject @ 0x1C004C300 (PopThreadGuardedObject.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005AB10 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngAllocUserMemEx @ 0x1C0069740 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C0069890 (EngFreeUserMem.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00A68A4 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Win32CreateSection @ 0x1C00AB874 (Win32CreateSection.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00AF044 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00B1BC4 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00B1C68 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00B1DD0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00B2798 (-vFreeKernelSection@@YAXPEAX@Z.c)
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
  unsigned int v13; // r14d
  int v14; // r15d
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  bool v18; // zf
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // edi
  int v28; // ecx
  unsigned int v29; // r13d
  unsigned __int64 v30; // rcx
  __int64 v31; // r15
  int v32; // eax
  int v33; // eax
  int v34; // eax
  PVOID v35; // rcx
  PVOID v36; // rax
  __int64 v37; // r8
  char v38; // r15
  unsigned __int64 v39; // rcx
  __int16 v40; // r15
  void *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  PVOID v46; // rbx
  __int64 v47; // rax
  PVOID v48; // rcx
  __int64 v49; // rcx
  HPALETTE v50; // rdx
  unsigned int CurrentProcessId; // eax
  void *v52; // r15
  int v53; // r13d
  __int64 v54; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rax
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v59; // r8
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  struct OBJECT *v65; // rdx
  int v66; // eax
  __int128 v67; // xmm0
  __int64 v68; // rax
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-C1h]
  PVOID Object; // [rsp+50h] [rbp-91h] BYREF
  int v73; // [rsp+58h] [rbp-89h]
  void *v74; // [rsp+60h] [rbp-81h] BYREF
  _DWORD v75[2]; // [rsp+68h] [rbp-79h] BYREF
  __int64 v76; // [rsp+70h] [rbp-71h] BYREF
  _OWORD v77[3]; // [rsp+78h] [rbp-69h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v79[4]; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v80; // [rsp+D0h] [rbp-11h]
  PEPROCESS Process; // [rsp+130h] [rbp+4Fh] BYREF
  int v82; // [rsp+138h] [rbp+57h]
  PVOID pv; // [rsp+140h] [rbp+5Fh] BYREF
  void *v84; // [rsp+148h] [rbp+67h]

  v84 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v13 = 1;
  v82 = 0;
  v14 = 0;
  LODWORD(v15) = 0;
  if ( *((_DWORD *)a2 + 1) > 0x7FFFFFFFu || *((_DWORD *)a2 + 2) > 0x7FFFFFFFu )
    return 0LL;
  LOBYTE(v16) = EvaluateCurrentState((int **)&g_Feature_2283591992_57301372_FeatureDescriptorDetails);
  v18 = v16 == 0;
  v19 = *(_DWORD *)a2;
  if ( !v18 )
  {
    v20 = *((unsigned int *)a2 + 1);
    if ( v19 == 1 )
    {
      v22 = 0x1FFFFFFFFFFFFFFCLL;
      v23 = (unsigned __int64)(v20 + 31) >> 3;
    }
    else
    {
      if ( v19 != 2 )
      {
        if ( v19 != 3 )
        {
          if ( v19 == 4 )
          {
            v21 = 2 * v20 + 2;
            goto LABEL_15;
          }
          if ( v19 != 5 )
          {
            if ( v19 != 6 )
            {
              if ( (unsigned int)(v19 - 7) > 3 )
                return 0LL;
              LODWORD(v15) = 0;
              goto LABEL_29;
            }
            v15 = 4 * v20;
            goto LABEL_20;
          }
          v20 *= 3LL;
        }
        v21 = v20 + 3;
LABEL_15:
        v15 = v21 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_20;
      }
      v22 = 0x7FFFFFFFFFFFFFFCLL;
      v23 = (unsigned __int64)(v20 + 7) >> 1;
    }
    v15 = v22 & v23;
LABEL_20:
    if ( v15 > 0x7FFFFFFF )
      return 0LL;
    goto LABEL_40;
  }
  switch ( v19 )
  {
    case 1:
      LODWORD(v15) = ((unsigned int)(*((_DWORD *)a2 + 1) + 31) >> 3) & 0x1FFFFFFC;
      goto LABEL_40;
    case 2:
      LODWORD(v15) = ((unsigned int)(*((_DWORD *)a2 + 1) + 7) >> 1) & 0x7FFFFFFC;
      goto LABEL_40;
    case 3:
      v27 = *((_DWORD *)a2 + 1) + 3;
LABEL_37:
      LODWORD(v15) = v27 & 0xFFFFFFFC;
      goto LABEL_40;
    case 4:
      v28 = *((_DWORD *)a2 + 1);
      if ( (unsigned int)(v28 + 1) >= 0x7FFFFFFF )
        return 0LL;
      v27 = 2 * v28 + 2;
      goto LABEL_37;
    case 5:
      v26 = *((_DWORD *)a2 + 1);
      if ( v26 >= 0x55555554 )
        return 0LL;
      v27 = 3 * (v26 + 1);
      goto LABEL_37;
  }
  if ( v19 != 6 )
  {
    if ( (unsigned int)(v19 - 7) > 3 )
      return 0LL;
LABEL_29:
    v14 = 1;
    goto LABEL_40;
  }
  v25 = *((_DWORD *)a2 + 1);
  if ( v25 >= 0x3FFFFFFF )
    return 0LL;
  LODWORD(v15) = 4 * v25;
LABEL_40:
  v29 = SURFACE::tSize;
  LOWORD(Process) = 4;
  Object = 0LL;
  memset(v77, 0, sizeof(v77));
  v73 = 0;
  v74 = 0LL;
  if ( pv )
  {
    if ( !a9
      || (!v14
        ? (v39 = (unsigned int)v15 * (unsigned __int64)*((unsigned int *)a2 + 2))
        : (v39 = *((unsigned int *)a2 + 3)),
          v39 <= 0x7FFFFFFF) )
    {
      if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
        goto LABEL_76;
      W32PIDLOCK::vInit((W32PIDLOCK *)v77);
      if ( *((_QWORD *)&v77[2] + 1) )
      {
        v82 = 2048;
        v73 = 1;
        goto LABEL_76;
      }
    }
    return 0LL;
  }
  if ( v14 )
    v30 = *((unsigned int *)a2 + 3);
  else
    v30 = (unsigned int)v15 * (unsigned __int64)*((unsigned int *)a2 + 2);
  v31 = v30 + (unsigned int)SURFACE::tSize;
  if ( v31 < v30 || (unsigned __int64)v31 > 0x7FFFFFFF )
    return 0LL;
  v32 = *((_DWORD *)a2 + 6);
  if ( (v32 & 0x40000) != 0 && v31 > 4096 )
    *((_DWORD *)a2 + 6) = v32 | 8;
  v33 = *((_DWORD *)a2 + 6);
  if ( (v33 & 8) != 0 )
  {
    if ( (v33 & 0x80u) == 0 )
      v34 = EngAllocUserMemEx((int)v31, v17, &pv);
    else
      v34 = AllocateSharedSection(v31, v17, &Object, &v74, &pv);
    if ( v34 >= 0 )
    {
      v35 = pv;
      v36 = Object;
LABEL_64:
      if ( v35 || v36 )
        goto LABEL_76;
      goto LABEL_66;
    }
    return 0LL;
  }
  if ( (v33 & 0x810) != 0 )
  {
    if ( (v33 & 0x800) != 0 )
    {
      W32PIDLOCK::vInit((W32PIDLOCK *)v77);
      if ( !*((_QWORD *)&v77[2] + 1) )
        return 0LL;
      Object = 0LL;
      v75[1] = 0;
      v75[0] = v31 - v29;
      Win32CreateSection(&Object, 6LL, v37, (__int64)v75, BugCheckParameter4, 138412032);
      v36 = Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v77);
        return 0LL;
      }
    }
    else
    {
      AllocateKernelSection(v31, v17, &pv);
      v36 = Object;
    }
    v35 = pv;
    if ( pv || v36 )
    {
      v82 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
      goto LABEL_64;
    }
  }
LABEL_66:
  v29 = v31;
  if ( (*((_DWORD *)a2 + 6) & 2) == 0 )
  {
    v38 = 0;
    goto LABEL_77;
  }
LABEL_76:
  v38 = (char)Process;
LABEL_77:
  v40 = v38 & 4;
  v41 = (void *)AllocateObject(v29, 5u, v40 == 0);
  *(_QWORD *)this = v41;
  if ( !v41 )
  {
    v13 = 0;
    goto LABEL_79;
  }
  if ( v40 )
    memset(v41, 0, SURFACE::tSize);
  v49 = *(_QWORD *)this;
  Process = *(PEPROCESS *)((char *)a2 + 4);
  *(_QWORD *)(v49 + 56) = Process;
  *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 216LL) = 0LL;
  v50 = (HPALETTE)*((_QWORD *)a2 + 2);
  if ( v50 && (EPALOBJ::EPALOBJ((EPALOBJ *)&v78, v50), v78) )
    *(_QWORD *)(*(_QWORD *)this + 120LL) = v78;
  else
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
  *(_BYTE *)(*(_QWORD *)this + 584LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
  *(_WORD *)(*(_QWORD *)this + 102LL) = v82 | *((_WORD *)a2 + 12) & 0x89;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v52 = a6;
  v53 = a10;
  *(_DWORD *)(*(_QWORD *)this + 208LL) = CurrentProcessId & 0xFFFFFFFC;
  *(_QWORD *)(*(_QWORD *)this + 176LL) = v84;
  *(_DWORD *)(*(_QWORD *)this + 192LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v52;
  *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
  *(_DWORD *)(*(_QWORD *)this + 212LL) = v53;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
  if ( (*((_DWORD *)a2 + 6) & 0x4000000) != 0 )
    *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x4000000u;
  v54 = *(_QWORD *)this;
  Process = 0LL;
  *(_QWORD *)(v54 + 128) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 160LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 168LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_QWORD *)(ThreadWin32Thread + 304) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 240LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 592LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 600LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 496LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 488LL) = 0LL;
  v57 = (_QWORD *)(*(_QWORD *)this + 224LL);
  v57[1] = v57;
  *v57 = v57;
  *(_DWORD *)(*(_QWORD *)this + 312LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 316LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(0LL, v56);
  SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess, v59);
  v60 = (_QWORD *)(*(_QWORD *)this + 440LL);
  v60[1] = v60;
  *v60 = v60;
  *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
  if ( v73 )
    *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
  if ( v52 && !v53 )
    *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
  if ( pv || Object )
    *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
  else
    *(_QWORD *)(*(_QWORD *)this + 72LL) = *(_QWORD *)this + SURFACE::tSize;
  v61 = *(_QWORD *)this;
  if ( (unsigned int)(*(_DWORD *)a2 - 7) > 3 )
  {
    *(_DWORD *)(v61 + 64) = v15 * *((_DWORD *)a2 + 2);
    v62 = *(_QWORD *)this;
    if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
    {
      *(_DWORD *)(v62 + 88) = -(int)v15;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                          + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 64LL) - v15);
      goto LABEL_114;
    }
    *(_DWORD *)(v62 + 88) = v15;
    goto LABEL_112;
  }
  *(_WORD *)(v61 + 102) &= ~0x800u;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(*(_DWORD *)a2 - 9) > 1 )
  {
LABEL_112:
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    goto LABEL_114;
  }
  *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
LABEL_114:
  if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 520LL) = Object;
    *(_QWORD *)(*(_QWORD *)this + 528LL) = v74;
    *(_QWORD *)(*(_QWORD *)this + 536LL) = (char *)v74
                                         + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                         - *(_QWORD *)(*(_QWORD *)this + 72LL);
    *(_DWORD *)(*(_QWORD *)this + 544LL) = 1;
    v63 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v63 && (v64 = *(_QWORD *)(v63 + 72)) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 548LL) = *(_DWORD *)(v64 + 8);
      *(_DWORD *)(*(_QWORD *)this + 552LL) = 1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 548LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 552LL) = 0;
    }
  }
  *(_DWORD *)(*(_QWORD *)this + 92LL) = _InterlockedIncrement((volatile signed __int32 *)&_ulGlobalSurfaceUnique);
  memset(v79, 0, sizeof(v79));
  PushThreadGuardedObject(
    v79,
    (__int64)v79,
    (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v65 = *(struct OBJECT **)this;
  v80 = 0LL;
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v79, v65, 1, a8 != 0, 5u) )
  {
    v66 = a11;
    *((_DWORD *)this + 3) = a11;
    if ( v66 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
    *(_QWORD *)(*(_QWORD *)this + 32LL) = **(_QWORD **)this;
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 120LL) )
    {
      v76 = *(_QWORD *)(*(_QWORD *)this + 120LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v76);
      *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
    }
    SURFACE::Free(*(struct SURFACE **)this);
    *(_QWORD *)this = 0LL;
    v13 = 0;
  }
  if ( v80 )
    _InterlockedDecrement((volatile signed __int32 *)(v80 + 12));
  PopThreadGuardedObject(v79);
  if ( v13 )
  {
    if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((_QWORD *)&v77[2] + 1) )
    {
      v67 = v77[0];
      *(_QWORD *)(*(_QWORD *)this + 240LL) = Object;
      v68 = *(_QWORD *)this;
      v69 = v77[1];
      *(_OWORD *)(v68 + 264) = v67;
      v70 = v77[2];
      *(_OWORD *)(v68 + 280) = v69;
      *(_OWORD *)(v68 + 296) = v70;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
    }
    return v13;
  }
LABEL_79:
  if ( !pv && !Object )
    return v13;
  v42 = *((_DWORD *)a2 + 6);
  if ( (v42 & 8) != 0 )
  {
    if ( (v42 & 0x80u) == 0 )
    {
      EngFreeUserMem(pv);
    }
    else
    {
      v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( *(_QWORD *)(v45 + 72) )
      {
        v46 = pv;
        v47 = PsGetCurrentProcess(v44, v43);
        MmUnmapViewOfSection(v47, v46);
        if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(v45 + 72) + 8LL), &Process) >= 0 )
        {
          MmUnmapViewOfSection(Process, v74);
          ObfDereferenceObject(Process);
        }
        v48 = Object;
        if ( !Object )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
LABEL_137:
        ObfDereferenceObject(v48);
      }
    }
  }
  else
  {
    if ( (v82 & 0x800) == 0 )
    {
      if ( (v82 & 0x10) != 0 )
        vFreeKernelSection(pv);
      return v13;
    }
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)v77);
    if ( !v73 )
    {
      v48 = Object;
      if ( !Object )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      goto LABEL_137;
    }
  }
  return v13;
}
