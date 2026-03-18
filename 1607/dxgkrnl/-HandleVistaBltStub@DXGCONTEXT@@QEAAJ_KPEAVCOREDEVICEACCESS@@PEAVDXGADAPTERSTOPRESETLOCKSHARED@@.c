/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0170E20
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00A6890 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1C0175270 (DxgkRender.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0009FD8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C001C950 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C01447A0 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0144830 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C014499C (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C9C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01718FC (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5)
{
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rax
  HWND v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // r15d
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  int v16; // ebx
  int v17; // r12d
  int v19; // eax
  unsigned int v20; // r12d
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  void *v32; // [rsp+50h] [rbp-B0h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v33[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT **v34; // [rsp+68h] [rbp-98h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  _OWORD v42[95]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v43; // [rsp+6B0h] [rbp+5B0h] BYREF
  void *v44; // [rsp+6C0h] [rbp+5C0h] BYREF
  int v45; // [rsp+6C8h] [rbp+5C8h]
  int v46; // [rsp+6CCh] [rbp+5CCh]
  __int128 v47; // [rsp+6D0h] [rbp+5D0h] BYREF

  v34 = a5;
  v35 = a4;
  if ( a2 < 0 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 2);
    v9 = (unsigned int)a2;
    v10 = (HWND)HIDWORD(a2);
    v32 = 0LL;
    v43 = 0LL;
    v29 = 0LL;
    LODWORD(v10) = HIDWORD(a2) & 0x7FFFFFFF;
    v47 = 0LL;
    v11 = v8[357];
    v12 = 0;
    v44 = (void *)v9;
    v30 = 0;
    v31 = 0;
    if ( !v11 )
      v11 = *(_QWORD *)(v8[2] + 16LL);
    v38 = *(_QWORD *)(v8[5] + 72LL);
    v36 = 0LL;
    v37 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = v11;
    CurrentProcess = PsGetCurrentProcess(v38);
    v15 = *(_QWORD *)(PsGetProcessDxgProcess(CurrentProcess, v14) + 72);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
    COREDEVICEACCESS::Release(a3);
    v16 = CWin32kLocks::Lock((CWin32kLocks *)&v36, v10, 1, 1, 0);
    if ( v16 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v15 + 232))(v36, &v32);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v15 + 72))(v36, &v43) )
        v16 = -1073741811;
      if ( v16 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, __int128 *))(v15 + 376))(v10, &v47) )
          v16 = -1073741811;
        if ( v16 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v15 + 328))(v36, &v29) )
          v16 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((DXGADAPTER **)&v36);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
    v17 = COREDEVICEACCESS::AcquireShared(a3);
    if ( v17 < 0 )
    {
      CWin32kLocks::~CWin32kLocks((DXGADAPTER **)&v36);
      return (unsigned int)v17;
    }
    if ( v16 >= 0 )
    {
      v19 = DXGCONTEXT::OpenResourceFromSharedHandle(this, v44, a3, &v30);
      v20 = v30;
      v21 = v19;
      if ( v19 >= 0 )
      {
        if ( v32 )
        {
          v22 = DXGCONTEXT::OpenResourceFromSharedHandle(this, v32, a3, &v31);
          v12 = v31;
          v21 = v22;
        }
        if ( v21 >= 0 )
        {
          LODWORD(v42[0]) = 0;
          memset((char *)v42 + 8, 0, 0x5E8uLL);
          v23 = *((_QWORD *)this + 2);
          v33[0] = 0LL;
          v33[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v23 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v33);
          v24 = v33[0];
          if ( !v33[0] )
            v21 = -1073741801;
          if ( v21 >= 0 )
          {
            LODWORD(v44) = v29 + v43 - v47;
            HIDWORD(v44) = HIDWORD(v29) + DWORD1(v43) - DWORD1(v47);
            v45 = v29 + DWORD2(v43) - v47;
            v46 = HIDWORD(v29) + HIDWORD(v43) - DWORD1(v47);
            LODWORD(v42[0]) = *((_DWORD *)this + 6);
            *((_QWORD *)&v42[4] + 1) = &v44;
            DWORD2(v43) += v29;
            HIDWORD(v43) += HIDWORD(v29);
            DWORD2(v42[5]) = DWORD2(v42[5]) & 0xFFFEEFFE | 0x10001;
            v25 = (unsigned int)(DWORD2(v43) - (v29 + v43));
            v42[24] = (unsigned __int64)v32;
            LODWORD(v43) = v29 + v43;
            DWORD1(v43) += HIDWORD(v29);
            *((_QWORD *)&v42[0] + 1) = v10;
            LODWORD(v42[1]) = 0;
            *(_QWORD *)((char *)&v42[1] + 4) = __PAIR64__(v12, v20);
            *(_QWORD *)&v42[2] = 0LL;
            DWORD2(v42[2]) = DWORD2(v43) - v43;
            HIDWORD(v42[2]) = HIDWORD(v43) - DWORD1(v43);
            LODWORD(v42[4]) = 1;
            *(_QWORD *)&v42[5] = 0LL;
            DWORD2(v42[22]) = 3;
            *((_QWORD *)&v42[93] + 1) = 0LL;
            LOBYTE(v42[94]) = 1;
            v26 = PsGetCurrentProcess(v25);
            ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v26, v27);
            DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v42, ProcessDxgProcess);
            DXGCONTEXT::Present(
              this,
              (struct _D3DKMT_PRESENT *)v42,
              (DXGADAPTER **)a3,
              v35,
              (struct CWin32kLocks *)&v36,
              v34,
              v24);
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v33);
        }
      }
      if ( v20 )
        DXGCONTEXT::DestroyAllocation(this, v20, (DXGADAPTER **)a3);
      if ( v12 )
        DXGCONTEXT::DestroyAllocation(this, v12, (DXGADAPTER **)a3);
    }
    CWin32kLocks::~CWin32kLocks((DXGADAPTER **)&v36);
  }
  return 0LL;
}
