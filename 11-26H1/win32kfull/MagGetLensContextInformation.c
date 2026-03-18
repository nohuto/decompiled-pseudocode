/*
 * XREFs of MagGetLensContextInformation @ 0x1401EA86C
 * Callers:
 *     NtUserMagGetContextInformation @ 0x1401EA3F0 (NtUserMagGetContextInformation.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x14014B8B0 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     MagpFindThreadContext @ 0x1401EBE3C (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1401EBE5C (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     _GetMagnificationInputTransform @ 0x14025171C (_GetMagnificationInputTransform.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        __int64 a1,
        __int64 a2,
        struct tagWND *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned int updated; // edi
  __int64 ThreadContext; // rax
  int v10; // r9d
  __int64 v11; // rbp
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  struct _MAG_LENS_CONTEXT *v21; // rax
  struct _MAG_LENS_CONTEXT *v22; // rax
  struct _MAG_LENS_CONTEXT *v23; // rax
  struct _MAG_LENS_CONTEXT *v24; // r14
  unsigned int v25; // eax
  _DWORD *v26; // r15
  int v27; // edi
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  void *v33; // r13
  void **Handle; // rbx
  void *v35; // rsi
  void *v36; // rcx
  unsigned int *v37; // rax
  unsigned int *v38; // r9
  _DWORD *v39; // r10
  int v40; // ecx
  __int64 v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  struct _MAG_LENS_CONTEXT *v47; // rax
  struct _MAG_LENS_CONTEXT *v48; // r8
  int v49; // edx
  int v50; // ecx
  int v51; // eax
  __int64 v52; // r9
  __int64 v53; // r11
  __int64 v54; // rdx
  struct _MAG_LENS_CONTEXT *v55; // rax
  int v56; // eax
  struct _MAG_LENS_CONTEXT *v57; // rax
  __int128 v58; // xmm1
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  _BYTE v60[8]; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+48h] [rbp-40h] BYREF

  updated = -1073741811;
  ThreadContext = MagpFindThreadContext();
  v11 = ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  v13 = v10 - 2;
  if ( !v13 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (LensContext = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*(_QWORD *)(ThreadContext + 16) + 488LL) + 232LL)) == 0LL )
    {
      LensContext = MagpFindLensContext((struct _MAG_THREAD_CONTEXT *)v11, a3);
      if ( !LensContext )
        return updated;
    }
    *(_OWORD *)a5 = *(_OWORD *)((char *)LensContext + 72);
    return 0;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v57 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*(_QWORD *)(ThreadContext + 16) + 488LL) + 232LL)) == 0LL )
    {
      v57 = MagpFindLensContext((struct _MAG_THREAD_CONTEXT *)v11, a3);
      if ( !v57 )
        return updated;
    }
    if ( (*((_DWORD *)v57 + 4) & 2) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v57 + 88);
      v58 = *(_OWORD *)((char *)v57 + 104);
    }
    else
    {
      *(_OWORD *)a5 = xmmword_14035E750;
      v58 = xmmword_14035E760;
    }
    *(_OWORD *)(a5 + 16) = v58;
    return 0;
  }
  v15 = v14 - 1;
  if ( !v15 )
    return (unsigned int)GetMagnificationInputTransform(a5) == 0 ? 0xC0000001 : 0;
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v55 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*(_QWORD *)(ThreadContext + 16) + 488LL) + 240LL)) == 0LL )
    {
      v55 = MagpFindLensContext((struct _MAG_THREAD_CONTEXT *)v11, a3);
      if ( !v55 )
        return updated;
    }
    if ( (*((_DWORD *)v55 + 4) & 4) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v55 + 120);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v55 + 136);
      *(_OWORD *)(a5 + 32) = *(_OWORD *)((char *)v55 + 152);
      *(_OWORD *)(a5 + 48) = *(_OWORD *)((char *)v55 + 168);
      *(_OWORD *)(a5 + 64) = *(_OWORD *)((char *)v55 + 184);
      *(_OWORD *)(a5 + 80) = *(_OWORD *)((char *)v55 + 200);
      v56 = *((_DWORD *)v55 + 54);
    }
    else
    {
      *(_OWORD *)a5 = xmmword_140367860;
      *(_OWORD *)(a5 + 16) = xmmword_140367870;
      *(_OWORD *)(a5 + 32) = xmmword_140367880;
      *(_OWORD *)(a5 + 48) = xmmword_140367890;
      *(_OWORD *)(a5 + 64) = xmmword_1403678A0;
      *(_OWORD *)(a5 + 80) = xmmword_1403678B0;
      v56 = 1065353216;
    }
    *(_DWORD *)(a5 + 96) = v56;
    return 0;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v47 = MagpFindLensContext((struct _MAG_THREAD_CONTEXT *)ThreadContext, a3);
    v48 = v47;
    if ( !v47 )
      return updated;
    v39 = a6;
    v49 = *a6;
    if ( *a6 >= 8u )
    {
      v50 = *((_DWORD *)v47 + 56);
      *(_DWORD *)a5 = v50;
      v51 = *((_DWORD *)v47 + 57);
      *(_DWORD *)(a5 + 4) = v51;
      v52 = (unsigned int)(v51 + v50);
      v53 = (unsigned int)v52;
      if ( (unsigned int)(v49 - 8) >= (unsigned __int64)(8 * v52) )
      {
        if ( (_DWORD)v52 )
        {
          v54 = 0LL;
          do
          {
            *(_QWORD *)(a5 + v54 + 8) = *(_QWORD *)(v54 + *((_QWORD *)v48 + 29));
            v54 += 8LL;
            --v53;
          }
          while ( v53 );
        }
        v46 = 8 * v52 + 8;
        goto LABEL_50;
      }
    }
    return (unsigned int)-1073741820;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v37 = (unsigned int *)MagpFindLensContext((struct _MAG_THREAD_CONTEXT *)ThreadContext, a3);
    v38 = v37;
    if ( !v37 )
      return updated;
    v39 = a6;
    v40 = *a6;
    if ( *a6 >= 0x10u )
    {
      v41 = v37[60];
      *(_DWORD *)a5 = v41;
      *(_DWORD *)(a5 + 4) = v37[61];
      *(_DWORD *)(a5 + 8) = v37[62];
      *(_DWORD *)(a5 + 12) = v37[63];
      if ( (unsigned int)(v40 - 16) >= (unsigned __int64)(24 * v41) )
      {
        v42 = 0;
        if ( (_DWORD)v41 )
        {
          do
          {
            v43 = v42++;
            v44 = 3 * v43;
            v45 = *((_QWORD *)v38 + 32);
            *(_OWORD *)(a5 + 8 * v44 + 16) = *(_OWORD *)(v45 + 8 * v44);
            *(_QWORD *)(a5 + 8 * v44 + 32) = *(_QWORD *)(v45 + 8 * v44 + 16);
            LODWORD(v41) = *(_DWORD *)a5;
          }
          while ( v42 < *(_DWORD *)a5 );
        }
        v46 = 24 * v41 + 16;
LABEL_50:
        *v39 = v46;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
        return updated;
      if ( !a3 )
        return updated;
      v21 = MagpFindLensContext((struct _MAG_THREAD_CONTEXT *)ThreadContext, a3);
      if ( !v21 )
        return updated;
      *(_DWORD *)a5 = *((_DWORD *)v21 + 66);
    }
    else
    {
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v22 = MagpFindLensContext((struct _MAG_THREAD_CONTEXT *)ThreadContext, a3);
      if ( !v22 )
        return updated;
      *(_DWORD *)a5 = 0;
      if ( (*((_DWORD *)v22 + 4) & 0x40) != 0 )
        *(_DWORD *)a5 = 1;
    }
    return 0;
  }
  if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v23 = MagpFindLensContext((struct _MAG_THREAD_CONTEXT *)ThreadContext, a3);
  v24 = v23;
  if ( !v23 )
    return updated;
  v25 = *((_DWORD *)v23 + 4);
  v26 = (_DWORD *)((char *)v24 + 240);
  v27 = (v25 >> 6) & 1;
  if ( (v25 & 0x20) != 0 || !*v26 )
  {
    *(_DWORD *)a5 = 0;
    *(_DWORD *)(a5 + 8) = 0;
    *(_QWORD *)(a5 + 40) = 0LL;
    *(_DWORD *)(a5 + 4) = *v26;
    *(_DWORD *)(a5 + 12) = *((_DWORD *)v24 + 61);
    *(_DWORD *)(a5 + 16) = *((_DWORD *)v24 + 62);
    *(_DWORD *)(a5 + 20) = *((_DWORD *)v24 + 63);
    return 0;
  }
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
    && !(unsigned __int8)Win32ProcessCapability::CheckAccess(*(_QWORD *)(a2 + 456), 2LL) )
  {
    return 0;
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a3);
  v28 = ReferenceDwmProcess();
  v31 = ReferenceDwmApiPort(v30, v29);
  LOBYTE(v32) = 1;
  v33 = (void *)v31;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v60, v32);
  if ( v33 && v28 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v33,
                v28,
                *(_QWORD *)a3,
                ***(_QWORD ***)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 488LL) + 8LL),
                (__int128 *)v24 + 2,
                *(_QWORD *)(a5 + 24),
                v27,
                (int *)a5);
  }
  else
  {
    DereferenceDwmApiPort(v33);
    updated = -1073741823;
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v60);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  DereferenceDwmProcess(v28);
  if ( (updated & 0x80000000) == 0 )
  {
    if ( *(int *)a5 < 0 )
      return *a6 < 0x30u ? 0xC0000004 : 0;
    if ( *(_DWORD *)(a5 + 4) != *v26
      || *(_DWORD *)(a5 + 12) != *((_DWORD *)v24 + 61)
      || *(_DWORD *)(a5 + 16) != *((_DWORD *)v24 + 62)
      || *(_DWORD *)(a5 + 20) != *((_DWORD *)v24 + 63) )
    {
      v36 = *(void **)(a5 + 40);
      if ( v36 )
      {
        ObfDereferenceObject(v36);
        *(_QWORD *)(a5 + 40) = 0LL;
      }
      return (unsigned int)-1073741811;
    }
    if ( !*(_DWORD *)(a5 + 8) )
      return *a6 < 0x30u ? 0xC0000004 : 0;
    Handle = (void **)(a5 + 40);
    v35 = *(void **)(a5 + 40);
    if ( !v35 )
      return *a6 < 0x30u ? 0xC0000004 : 0;
    *Handle = 0LL;
    updated = ObOpenObjectByPointer(v35, 0x80u, 0LL, 4u, MmSectionObjectType, 1, Handle);
    ObfDereferenceObject(v35);
    if ( (updated & 0x80000000) == 0 )
      return *a6 < 0x30u ? 0xC0000004 : 0;
  }
  return updated;
}
