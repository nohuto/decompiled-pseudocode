/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0263280 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00111C4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0013D4C (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0016C1C (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00402A8 (DwmSyncCaptureSurfaceBits.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     Win32DestroySection @ 0x1C01D1EF8 (Win32DestroySection.c)
 *     Win32OpenSectionByHandle @ 0x1C01D1F00 (Win32OpenSectionByHandle.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall bSpDwmUpdateSurface(
        HWND a1,
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
  unsigned int v10; // edi
  void *v13; // r13
  __int64 v14; // r14
  __int64 v15; // rcx
  void *v16; // rbx
  int v17; // esi
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _SURFOBJ *v22; // rdx
  struct _SURFOBJ *v23; // rax
  _BYTE *v24; // r14
  struct _SURFOBJ *v25; // rax
  __int64 v26; // rdx
  void (__fastcall *v27)(struct _SURFOBJ *, __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *); // r10
  __int64 v28; // rax
  DYNAMICMODECHANGESHARELOCK *v29; // rcx
  int v31; // [rsp+38h] [rbp-C8h]
  void *v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+68h] [rbp-98h]
  _BYTE v34[8]; // [rsp+70h] [rbp-90h] BYREF
  void *v35; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v37[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h] BYREF
  char v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A4h] [rbp-5Ch]
  __int64 v41; // [rsp+A8h] [rbp-58h] BYREF
  HSURF v42; // [rsp+B0h] [rbp-50h] BYREF
  int v43; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v44[28]; // [rsp+BCh] [rbp-44h]
  struct ERECTL *v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v47[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v48; // [rsp+108h] [rbp+8h]
  _BYTE v49[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v50[80]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v51[4]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v52[52]; // [rsp+184h] [rbp+84h] BYREF
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  __int64 v54; // [rsp+1D0h] [rbp+D0h]
  int v55; // [rsp+1D8h] [rbp+D8h]
  int v56; // [rsp+200h] [rbp+100h]
  __int64 v57; // [rsp+210h] [rbp+110h]

  v10 = 0;
  v37[0] = a1;
  LODWORD(Handle) = a2;
  v13 = 0LL;
  v42 = a5;
  *(_QWORD *)v44 = 0LL;
  *(_QWORD *)&v44[16] = 0LL;
  *(_DWORD *)v44 = *((_DWORD *)a9 + 2) - *(_DWORD *)a9;
  *(_OWORD *)&v44[4] = (unsigned int)(*((_DWORD *)a9 + 3) - *((_DWORD *)a9 + 1));
  v45 = a9;
  v46 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v40 = 0;
  v43 = 0;
  *(_QWORD *)&v44[20] = 1LL;
  UserEnterUserCritSecShared();
  v14 = UserReferenceDwmProcess();
  v16 = (void *)UserReferenceDwmApiPort(v15);
  UserLeaveUserCritSec();
  LODWORD(v41) = 88;
  if ( v14 && v16 )
  {
    v17 = DwmSyncCaptureSurfaceBits(v16, a7, a8, *(int *)v44, *(int *)&v44[4], a3, (__int64)&v41, (__int64)&v46);
  }
  else
  {
    v17 = -1073741823;
    UserDereferenceDwmApiPort(v16);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v34);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v49, a4, 0);
  if ( (v49[24] & 1) == 0 )
    v17 = -1073741823;
  if ( v17 >= 0 )
  {
    LOBYTE(v31) = 0;
    v17 = ObDuplicateObject(v14, v46, 0LL, &Handle, 4, 512, 1, v31);
    if ( v17 >= 0 )
    {
      v17 = Win32OpenSectionByHandle(Handle, 4LL, v18, &v32);
      ZwClose(Handle);
      v13 = v32;
    }
  }
  UserDereferenceDwmProcess(v14);
  if ( v17 >= 0 )
  {
    v32 = 0LL;
    v37[0] = 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v17 = MmMapViewOfSection(v13, CurrentProcess, &v35, 0LL, 0LL, &v32, v37, 2, 0, 2);
    if ( v17 >= 0 )
    {
      v43 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v38, (struct _DEVBITMAPINFO *)&v43, v35, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v17 = -1073741823;
      if ( v17 >= 0 )
      {
        v33 = 0;
        v32 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v32, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v21 = v38;
          v33 = 1;
          v37[0] = *(_QWORD *)(v38 + 120);
          if ( v37[0] )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)v37);
            v21 = v38;
          }
          *(_QWORD *)(v21 + 120) = v32;
          XEPALOBJ::vRefPalette((XEPALOBJ *)&v32, v20);
        }
        else
        {
          v17 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v32);
        if ( v17 >= 0 )
        {
          SURFREF::SURFREF((SURFREF *)v47, v42);
          if ( v48 && *(_DWORD *)(v48 + 96) == 6 )
          {
            v22 = 0LL;
            v42 = *(HSURF *)(*(_QWORD *)a4 + 48LL);
            if ( v38 )
              v22 = (struct _SURFOBJ *)(v38 + 24);
            v32 = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)&v32, v22);
            v37[0] = 0LL;
            v23 = SURFREF::pSurfobj((SURFREF *)v47);
            SURFREFVIEW::bMap((SURFREFVIEW *)v37, v23);
            if ( v32 && v37[0] && **(_QWORD **)(*(_QWORD *)a4 + 512LL) == *(_QWORD *)v48 )
            {
              v54 = 0LL;
              v24 = 0LL;
              v55 = 0;
              v56 = 1;
              v57 = 0LL;
              v53 = 0LL;
              if ( a10 )
              {
                XCLIPOBJ::vSetup((XCLIPOBJ *)v51, a10, v45, 0);
                v24 = v51;
              }
              bNeedRenderHint((struct PDEVOBJ *)&v42);
              if ( !v24 || !(unsigned int)ERECTL::bEmpty((ERECTL *)v52) )
              {
                v25 = SURFREF::pSurfobj((SURFREF *)v47);
                v27(v25, v26, v24, 0LL, v45, &gptlZero);
              }
            }
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v37);
            SURFREFVIEW::bUnMap((SURFREFVIEW *)&v32);
          }
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v47);
        }
      }
    }
  }
  if ( a10 )
    REGION::vDeleteREGION(a10);
  if ( v35 )
  {
    v28 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v28, v35);
  }
  if ( v13 )
    Win32DestroySection(v13);
  LOBYTE(v10) = v17 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v49);
  DCOBJ::~DCOBJ((DCOBJ *)v50);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v29);
  SURFMEM::~SURFMEM((SURFMEM *)&v38);
  return v10;
}
