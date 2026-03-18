/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010
 * Callers:
 *     GreCreateBitmap @ 0x1C00227F0 (GreCreateBitmap.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005D854 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C007467C (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0012130 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00121B0 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0035AB4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngAllocUserMemEx @ 0x1C0083FF0 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C00841F0 (EngFreeUserMem.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     Win32CreateSection @ 0x1C00AFD74 (Win32CreateSection.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00B2E2C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00B4E04 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00B4EA8 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00B5874 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        volatile signed __int32 *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // r14d
  int v14; // r13d
  int v15; // r15d
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // eax
  int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // edi
  unsigned int v24; // edi
  unsigned __int64 v26; // rcx
  __int64 v27; // r15
  int v28; // eax
  int v29; // eax
  int v30; // eax
  PVOID v31; // rcx
  PVOID v32; // rax
  __int64 v33; // r8
  int v34; // eax
  char v35; // r15
  unsigned __int64 v36; // rcx
  __int16 v37; // r15
  void *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  volatile signed __int32 *v41; // r15
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  PVOID v46; // rbx
  __int64 v47; // rax
  PVOID v48; // rcx
  __int64 v49; // rcx
  HPALETTE v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  unsigned __int64 CurrentProcess; // rax
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  signed __int32 v64; // ecx
  __int64 v65; // rax
  char v66; // r9
  int v67; // eax
  __int128 v68; // xmm0
  __int64 v69; // rax
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-91h]
  PVOID Object; // [rsp+50h] [rbp-61h] BYREF
  int v74; // [rsp+58h] [rbp-59h]
  void *v75; // [rsp+60h] [rbp-51h] BYREF
  _DWORD v76[2]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v77; // [rsp+70h] [rbp-41h] BYREF
  __int64 v78; // [rsp+78h] [rbp-39h] BYREF
  _OWORD v79[7]; // [rsp+80h] [rbp-31h] BYREF
  volatile signed __int32 *v80; // [rsp+100h] [rbp+4Fh] BYREF
  PEPROCESS Process; // [rsp+108h] [rbp+57h] BYREF
  PVOID pv; // [rsp+110h] [rbp+5Fh] BYREF
  void *v83; // [rsp+118h] [rbp+67h]

  v83 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  v12 = 1;
  LOWORD(v14) = 0;
  v15 = 0;
  v16 = 0;
  *(_QWORD *)this = 0LL;
  v17 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v24 = *((_DWORD *)a2 + 1);
    if ( v24 >= 0xFFFFFFE0 )
      return 0LL;
    v16 = ((v24 + 31) >> 3) & 0x1FFFFFFC;
    goto LABEL_25;
  }
  switch ( v17 )
  {
    case 2:
      v23 = *((_DWORD *)a2 + 1);
      if ( v23 >= 0xFFFFFFF8 )
        return 0LL;
      v16 = ((v23 + 7) >> 1) & 0x7FFFFFFC;
      break;
    case 3:
      v22 = *((_DWORD *)a2 + 1);
      if ( v22 >= 0xFFFFFFFC )
        return 0LL;
      v20 = v22 + 3;
      goto LABEL_19;
    case 4:
      v21 = *((_DWORD *)a2 + 1);
      if ( v21 >= 0xFFFFFFFE || v21 + 1 >= 0x7FFFFFFF )
        return 0LL;
      v20 = 2 * v21 + 2;
LABEL_19:
      v16 = v20 & 0xFFFFFFFC;
      break;
    case 5:
      v19 = *((_DWORD *)a2 + 1);
      if ( v19 >= 0x55555554 )
        return 0LL;
      v20 = 3 * (v19 + 1);
      goto LABEL_19;
    case 6:
      v18 = *((_DWORD *)a2 + 1);
      if ( v18 >= 0x3FFFFFFF )
        return 0LL;
      v16 = 4 * v18;
      break;
    default:
      if ( (unsigned int)(v17 - 7) > 3 )
        return 0LL;
      v15 = 1;
      break;
  }
LABEL_25:
  LOWORD(v80) = 4;
  Object = 0LL;
  memset(v79, 0, 48);
  LODWORD(Process) = SURFACE::tSize;
  v74 = 0;
  v75 = 0LL;
  if ( pv )
  {
    if ( !a9
      || (!v15 ? (v36 = v16 * (unsigned __int64)*((unsigned int *)a2 + 2)) : (v36 = *((unsigned int *)a2 + 3)),
          v36 <= 0x7FFFFFFF) )
    {
      if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
        goto LABEL_61;
      W32PIDLOCK::vInit((W32PIDLOCK *)v79);
      if ( *((_QWORD *)&v79[2] + 1) )
      {
        LOWORD(v14) = 2048;
        v74 = 1;
        goto LABEL_61;
      }
    }
    return 0LL;
  }
  if ( v15 )
    v26 = *((unsigned int *)a2 + 3);
  else
    v26 = v16 * (unsigned __int64)*((unsigned int *)a2 + 2);
  v27 = v26 + (unsigned int)SURFACE::tSize;
  if ( v27 < v26 || (unsigned __int64)v27 > 0x7FFFFFFF )
    return 0LL;
  v28 = *((_DWORD *)a2 + 6);
  if ( (v28 & 0x40000) != 0 && v27 > 4096 )
    *((_DWORD *)a2 + 6) = v28 | 8;
  v29 = *((_DWORD *)a2 + 6);
  if ( (v29 & 8) != 0 )
  {
    if ( (v29 & 0x80u) == 0 )
      v30 = EngAllocUserMemEx((int)v27, 0, &pv);
    else
      v30 = AllocateSharedSection(v27, 0LL, &Object, &v75, &pv);
    if ( v30 >= 0 )
    {
      v31 = pv;
      v32 = Object;
LABEL_49:
      if ( v31 || v32 )
        goto LABEL_61;
      goto LABEL_51;
    }
    return 0LL;
  }
  if ( (v29 & 0x810) != 0 )
  {
    if ( (v29 & 0x800) != 0 )
    {
      W32PIDLOCK::vInit((W32PIDLOCK *)v79);
      if ( !*((_QWORD *)&v79[2] + 1) )
        return 0LL;
      Object = 0LL;
      v76[1] = 0;
      v76[0] = v27 - (_DWORD)Process;
      Win32CreateSection(&Object, 6LL, v33, (__int64)v76, BugCheckParameter4, 138412032);
      v32 = Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v79);
        return 0LL;
      }
    }
    else
    {
      AllocateKernelSection(v27, 0LL, &pv);
      v32 = Object;
    }
    v31 = pv;
    if ( pv || v32 )
    {
      v14 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
      goto LABEL_49;
    }
  }
LABEL_51:
  v34 = *((_DWORD *)a2 + 6);
  LODWORD(Process) = v27;
  if ( (v34 & 2) == 0 )
  {
    v35 = 0;
    goto LABEL_62;
  }
LABEL_61:
  v35 = (char)v80;
LABEL_62:
  v37 = v35 & 4;
  v38 = (void *)AllocateObject((unsigned int)Process, 5u, v37 == 0);
  v40 = 0LL;
  *(_QWORD *)this = v38;
  if ( !v38 )
  {
    v41 = 0LL;
    v12 = 0;
    goto LABEL_64;
  }
  if ( v37 )
    memset(v38, 0, SURFACE::tSize);
  v49 = *(_QWORD *)this;
  v80 = *(volatile signed __int32 **)((char *)a2 + 4);
  *(_QWORD *)(v49 + 56) = v80;
  *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 216LL) = 0LL;
  v50 = (HPALETTE)*((_QWORD *)a2 + 2);
  if ( v50 && (EPALOBJ::EPALOBJ((EPALOBJ *)&v78, v50), v78) )
    *(_QWORD *)(*(_QWORD *)this + 120LL) = v78;
  else
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
  v51 = *(_QWORD *)this;
  v52 = *(_DWORD *)a2;
  v41 = a6;
  v80 = 0LL;
  *(_DWORD *)(v51 + 96) = v52;
  *(_WORD *)(*(_QWORD *)this + 102LL) = v14 | *((_WORD *)a2 + 12) & 0x89;
  *(_QWORD *)(*(_QWORD *)this + 176LL) = v83;
  *(_DWORD *)(*(_QWORD *)this + 192LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v41;
  *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
  *(_DWORD *)(*(_QWORD *)this + 208LL) = a10;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 144LL) = v80;
  *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 160LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 168LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v50, 0LL);
  if ( ThreadWin32Thread )
    *(_QWORD *)(ThreadWin32Thread + 304) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 240LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 584LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 592LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 496LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 488LL) = 0LL;
  v55 = (_QWORD *)(*(_QWORD *)this + 224LL);
  v55[1] = v55;
  *v55 = v55;
  *(_DWORD *)(*(_QWORD *)this + 312LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 316LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
  CurrentProcess = PsGetCurrentProcess(0LL, v54);
  SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess);
  v58 = (_QWORD *)(*(_QWORD *)this + 440LL);
  v58[1] = v58;
  *v58 = v58;
  *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
  if ( v74 )
    *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
  if ( v41 )
  {
    v41 = 0LL;
    if ( !a10 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
  }
  if ( pv || Object != v41 )
    *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
  else
    *(_QWORD *)(*(_QWORD *)this + 72LL) = *(_QWORD *)this + SURFACE::tSize;
  v59 = *(_QWORD *)this;
  if ( (unsigned int)(*(_DWORD *)a2 - 7) > 3 )
  {
    *(_DWORD *)(v59 + 64) = v16 * *((_DWORD *)a2 + 2);
    v60 = *(_QWORD *)this;
    if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
    {
      *(_DWORD *)(v60 + 88) = -v16;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                          + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                          - v16;
      goto LABEL_97;
    }
    *(_DWORD *)(v60 + 88) = v16;
    goto LABEL_95;
  }
  *(_WORD *)(v59 + 102) &= ~0x800u;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = (_DWORD)v41;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(*(_DWORD *)a2 - 9) > 1 )
  {
LABEL_95:
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    goto LABEL_97;
  }
  *(_QWORD *)(*(_QWORD *)this + 80LL) = v41;
LABEL_97:
  if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 520LL) = Object;
    *(_QWORD *)(*(_QWORD *)this + 528LL) = v75;
    v61 = *(_QWORD *)this;
    *(_QWORD *)(v61 + 536) = (char *)v75 + *(_QWORD *)(*(_QWORD *)this + 80LL) - *(_QWORD *)(*(_QWORD *)this + 72LL);
    *(_DWORD *)(*(_QWORD *)this + 544LL) = 1;
    v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v57);
    if ( v62 && (v63 = *(_QWORD *)(v62 + 72)) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 548LL) = *(_DWORD *)(v63 + 8);
      *(_DWORD *)(*(_QWORD *)this + 552LL) = 1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 548LL) = (_DWORD)v41;
      *(_DWORD *)(*(_QWORD *)this + 552LL) = (_DWORD)v41;
    }
  }
  v64 = _InterlockedExchangeAdd((volatile signed __int32 *)&_ulGlobalSurfaceUnique, 1u);
  v65 = *(_QWORD *)this;
  v80 = v41;
  v66 = a8 != (_DWORD)v41;
  *(_DWORD *)(v65 + 92) = v64 + 1;
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v80, *(struct OBJECT **)this, 1, v66, 5u) )
  {
    v67 = a11;
    *((_DWORD *)this + 3) = a11;
    if ( v67 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
    *(_QWORD *)(*(_QWORD *)this + 32LL) = **(_QWORD **)this;
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 120LL) )
    {
      v77 = *(_QWORD *)(*(_QWORD *)this + 120LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v77);
      *(_QWORD *)(*(_QWORD *)this + 120LL) = v41;
    }
    FreeObject(*(_QWORD *)this);
    *(_QWORD *)this = v41;
    v12 = (unsigned int)v41;
  }
  if ( v80 )
    _InterlockedDecrement(v80 + 3);
  if ( v12 )
  {
    if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0 && *((volatile signed __int32 **)&v79[2] + 1) != v41 )
    {
      v68 = v79[0];
      *(_QWORD *)(*(_QWORD *)this + 240LL) = Object;
      v69 = *(_QWORD *)this;
      v70 = v79[1];
      *(_OWORD *)(v69 + 264) = v68;
      v71 = v79[2];
      *(_OWORD *)(v69 + 280) = v70;
      *(_OWORD *)(v69 + 296) = v71;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v41;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = v41;
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
    }
    return v12;
  }
LABEL_64:
  if ( !pv && Object == v41 )
    return v12;
  v42 = *((_DWORD *)a2 + 6);
  if ( (v42 & 8) != 0 )
  {
    if ( (v42 & 0x80u) == 0 )
    {
      EngFreeUserMem(pv);
    }
    else
    {
      v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40);
      if ( *(volatile signed __int32 **)(v45 + 72) != v41 )
      {
        v46 = pv;
        v47 = PsGetCurrentProcess(v44, v43);
        MmUnmapViewOfSection(v47, v46);
        if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(v45 + 72) + 8LL), &Process) >= 0 )
        {
          MmUnmapViewOfSection(Process, v75);
          ObfDereferenceObject(Process);
        }
        v48 = Object;
        if ( !Object )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)v41);
LABEL_120:
        ObfDereferenceObject(v48);
      }
    }
  }
  else
  {
    if ( (v14 & 0x800) == 0 )
    {
      if ( (v14 & 0x10) != 0 )
        vFreeKernelSection(pv);
      return v12;
    }
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)v79);
    if ( v74 == (_DWORD)v41 )
    {
      v48 = Object;
      if ( !Object )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)v41);
      goto LABEL_120;
    }
  }
  return v12;
}
