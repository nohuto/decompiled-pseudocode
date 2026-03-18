/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00C98FC
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0261A78 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0035564 (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C003C1BC (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041764 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00C9F18 (DwmSyncCaptureSurfaceBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     Win32DestroySection @ 0x1C01D3948 (Win32DestroySection.c)
 *     Win32OpenSectionByHandle @ 0x1C01D3950 (Win32OpenSectionByHandle.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall bSpDwmUpdateSurface(
        struct _SURFOBJ *a1,
        int a2,
        __int64 a3,
        struct XDCOBJ *a4,
        HSURF a5,
        float a6,
        int a7,
        int a8,
        struct ERECTL *a9,
        struct REGION *a10)
{
  unsigned int v10; // esi
  struct _SURFOBJ *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rcx
  void *v16; // rbx
  int v17; // r14d
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 CurrentProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rbx
  struct _SURFOBJ *v27; // rdx
  HSURF v28; // rdi
  _BYTE *v29; // rbx
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v31; // rdx
  __int64 v32; // rax
  DYNAMICMODECHANGESHARELOCK *v33; // rcx
  int v35; // [rsp+38h] [rbp-C8h]
  struct _SURFOBJ *v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  struct _SURFOBJ *v38; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[8]; // [rsp+78h] [rbp-88h] BYREF
  void *v40; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  char v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A4h] [rbp-5Ch]
  __int64 v45; // [rsp+A8h] [rbp-58h] BYREF
  HSURF v46; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v47[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v48; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v49[28]; // [rsp+CCh] [rbp-34h]
  struct ERECTL *v50; // [rsp+E8h] [rbp-18h]
  _BYTE v51[80]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v52[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v53[52]; // [rsp+144h] [rbp+44h] BYREF
  __int64 v54; // [rsp+178h] [rbp+78h]
  __int64 v55; // [rsp+190h] [rbp+90h]
  int v56; // [rsp+198h] [rbp+98h]
  int v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1D0h] [rbp+D0h]

  v10 = 0;
  v38 = a1;
  LODWORD(Handle[0]) = a2;
  v13 = 0LL;
  v46 = a5;
  *(_QWORD *)v49 = 0LL;
  *(_QWORD *)&v49[16] = 0LL;
  *(_DWORD *)v49 = *((_DWORD *)a9 + 2) - *(_DWORD *)a9;
  *(_OWORD *)&v49[4] = (unsigned int)(*((_DWORD *)a9 + 3) - *((_DWORD *)a9 + 1));
  v50 = a9;
  v47[0] = 0LL;
  v40 = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v48 = 0;
  *(_QWORD *)&v49[20] = 1LL;
  UserEnterUserCritSecShared();
  v14 = UserReferenceDwmProcess();
  v16 = (void *)UserReferenceDwmApiPort(v15);
  UserLeaveUserCritSec();
  LODWORD(v45) = 88;
  if ( v14 && v16 )
  {
    v17 = DwmSyncCaptureSurfaceBits(v16, a7, a8, *(int *)v49, *(int *)&v49[4], a3, (__int64)&v45, (__int64)v47);
  }
  else
  {
    v17 = -1073741823;
    UserDereferenceDwmApiPort(v16);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v39);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v51, a4, 0);
  if ( (v51[24] & 1) == 0 )
    v17 = -1073741823;
  if ( v17 >= 0 )
  {
    LOBYTE(v35) = 0;
    v17 = ObDuplicateObject(v14, v47[0], 0LL, Handle, 4, 512, 1, v35);
    if ( v17 >= 0 )
    {
      v17 = Win32OpenSectionByHandle(Handle[0], 4LL, v18, &v36);
      ZwClose(Handle[0]);
      v13 = v36;
    }
  }
  UserDereferenceDwmProcess(v14);
  if ( v17 >= 0 )
  {
    v36 = 0LL;
    v38 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v20, v19, v21, v22);
    v17 = MmMapViewOfSection(v13, CurrentProcess, &v40, 0LL, 0LL, &v36, &v38, 2, 0, 2);
    if ( v17 >= 0 )
    {
      v48 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v42, (struct _DEVBITMAPINFO *)&v48, v40, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v17 = -1073741823;
      if ( v17 >= 0 )
      {
        v37 = 0;
        v36 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v36, 8u, 0, 0LL, 0, 0, 0, 0x200u) )
        {
          v24 = v42;
          v37 = 1;
          v38 = *(struct _SURFOBJ **)(v42 + 120);
          if ( v38 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v38);
            v24 = v42;
          }
          *(_QWORD *)(v24 + 120) = v36;
          XEPALOBJ::vRefPalette((XEPALOBJ *)&v36);
        }
        else
        {
          v17 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v36);
        if ( v17 >= 0 )
        {
          LOBYTE(v19) = 5;
          v25 = HmgShareLockCheck(v46, v19);
          v36 = (struct _SURFOBJ *)v25;
          v26 = (_QWORD *)v25;
          if ( v25 && *(_DWORD *)(v25 + 96) == 6 )
          {
            v27 = 0LL;
            v28 = *(HSURF *)(*(_QWORD *)a4 + 48LL);
            v46 = v28;
            if ( v42 )
              v27 = (struct _SURFOBJ *)(v42 + 24);
            Handle[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)Handle, v27);
            v47[0] = 0LL;
            v38 = SURFREF::pSurfobj(&v36);
            SURFREFVIEW::bMap((SURFREFVIEW *)v47, v38);
            if ( Handle[0] && v47[0] && **(_QWORD **)(*(_QWORD *)a4 + 512LL) == *v26 )
            {
              v55 = 0LL;
              v29 = 0LL;
              v56 = 0;
              v57 = 1;
              v58 = 0LL;
              v54 = 0LL;
              if ( a10 )
              {
                XCLIPOBJ::vSetup((XCLIPOBJ *)v52, a10, v50, 0);
                v29 = v52;
              }
              if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v46) )
              {
                v30 = RedirCopyBits;
              }
              else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 512LL) + 112LL) & 0x400) != 0 )
              {
                v30 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v28 + 359);
              }
              else
              {
                v30 = EngCopyBits;
              }
              if ( !v29 || !(unsigned int)ERECTL::bEmpty((ERECTL *)v53) )
              {
                v31 = 0LL;
                if ( v42 )
                  v31 = v42 + 24;
                ((void (__fastcall *)(struct _SURFOBJ *, __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v30)(
                  v38,
                  v31,
                  v29,
                  0LL,
                  v50,
                  &gptlZero);
              }
            }
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v47);
            SURFREFVIEW::bUnMap((SURFREFVIEW *)Handle);
          }
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v36);
        }
      }
    }
  }
  if ( a10 )
    REGION::vDeleteREGION(a10);
  if ( v40 )
  {
    v32 = PsGetCurrentProcess(v20, v19, v21, v22);
    MmUnmapViewOfSection(v32, v40);
  }
  if ( v13 )
    Win32DestroySection(v13);
  LOBYTE(v10) = v17 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v51);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v33);
  SURFMEM::~SURFMEM((SURFMEM *)&v42);
  return v10;
}
