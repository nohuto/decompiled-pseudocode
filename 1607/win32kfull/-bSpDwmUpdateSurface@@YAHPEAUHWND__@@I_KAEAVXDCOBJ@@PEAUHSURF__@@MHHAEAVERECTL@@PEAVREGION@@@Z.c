/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B39E8
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025F3CC (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003A954 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0053714 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00B3F48 (DwmSyncCaptureSurfaceBits.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
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
  HANDLE v13; // r13
  __int64 v14; // r14
  __int64 v15; // rcx
  void *v16; // rbx
  int v17; // eax
  int v18; // esi
  NTSTATUS v19; // eax
  PVOID v20; // rbx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  __int64 v23; // rcx
  struct _SURFOBJ *v24; // rdx
  HSURF v25; // rbx
  struct _SURFOBJ *v26; // rdx
  struct ERECTL *v27; // r13
  _BYTE *v28; // r14
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  DYNAMICMODECHANGESHARELOCK *v33; // rcx
  int v35; // [rsp+38h] [rbp-C8h]
  _BYTE v36[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v40[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v41; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  char v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A4h] [rbp-5Ch]
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  HSURF v46; // [rsp+B0h] [rbp-50h] BYREF
  int v47; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v48[28]; // [rsp+BCh] [rbp-44h]
  struct ERECTL *v49; // [rsp+D8h] [rbp-28h]
  PVOID v50; // [rsp+E0h] [rbp-20h]
  _BYTE v51[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v52; // [rsp+108h] [rbp+8h]
  _BYTE v53[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v54[80]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v55[4]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v56[52]; // [rsp+184h] [rbp+84h] BYREF
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  __int64 v58; // [rsp+1D0h] [rbp+D0h]
  int v59; // [rsp+1D8h] [rbp+D8h]
  int v60; // [rsp+200h] [rbp+100h]
  __int64 v61; // [rsp+210h] [rbp+110h]

  v10 = 0;
  Object = a1;
  LODWORD(v40[0]) = a2;
  v13 = 0LL;
  v46 = a5;
  *(_QWORD *)v48 = 0LL;
  *(_QWORD *)&v48[16] = 0LL;
  *(_DWORD *)v48 = *((_DWORD *)a9 + 2) - *(_DWORD *)a9;
  *(_OWORD *)&v48[4] = (unsigned int)(*((_DWORD *)a9 + 3) - *((_DWORD *)a9 + 1));
  v49 = a9;
  Handle = 0LL;
  v41 = 0LL;
  v50 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  *(_QWORD *)&v48[20] = 1LL;
  UserEnterUserCritSecShared();
  v14 = UserReferenceDwmProcess();
  v16 = (void *)UserReferenceDwmApiPort(v15);
  UserLeaveUserCritSec();
  LODWORD(v37) = 88;
  if ( v14 && v16 )
  {
    v17 = DwmSyncCaptureSurfaceBits(v16, a7, a8, *(int *)v48, *(int *)&v48[4], a3, (__int64)&v37, (__int64)&Handle);
    v13 = Handle;
    v18 = v17;
  }
  else
  {
    v18 = -1073741823;
    UserDereferenceDwmApiPort(v16);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v53, a4, 0);
  if ( (v53[24] & 1) == 0 )
    v18 = -1073741823;
  if ( v18 < 0 || (LOBYTE(v35) = 0, v18 = ObDuplicateObject(v14, v13, 0LL, &Handle, 4, 512, 1, v35), v18 < 0) )
  {
    v20 = 0LL;
  }
  else
  {
    v19 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
    v20 = Object;
    v18 = v19;
    v50 = Object;
    ZwClose(Handle);
  }
  UserDereferenceDwmProcess(v14);
  if ( v18 >= 0 )
  {
    v40[0] = 0LL;
    v37 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v21);
    v18 = MmMapViewOfSection(v20, CurrentProcess, &v41, 0LL, 0LL, v40, &v37, 2, 0, 2);
    if ( v18 >= 0 )
    {
      v47 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v42, (struct _DEVBITMAPINFO *)&v47, v41, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v18 = -1073741823;
      if ( v18 >= 0 )
      {
        v38 = 0;
        v37 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v37, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v23 = v42;
          v38 = 1;
          v40[0] = *(_QWORD *)(v42 + 120);
          if ( v40[0] )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)v40);
            v23 = v42;
          }
          *(_QWORD *)(v23 + 120) = v37;
          XEPALOBJ::vRefPalette((XEPALOBJ *)&v37);
        }
        else
        {
          v18 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v37);
        if ( v18 >= 0 )
        {
          SURFREF::SURFREF((SURFREF *)v51, v46);
          if ( v52 && *(_DWORD *)(v52 + 96) == 6 )
          {
            v24 = 0LL;
            v25 = *(HSURF *)(*(_QWORD *)a4 + 48LL);
            v46 = v25;
            if ( v42 )
              v24 = (struct _SURFOBJ *)(v42 + 24);
            v37 = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)&v37, v24);
            if ( v52 )
              v26 = (struct _SURFOBJ *)(v52 + 24);
            else
              v26 = 0LL;
            v40[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v40, v26);
            if ( v37 && v40[0] && **(_QWORD **)(*(_QWORD *)a4 + 512LL) == *(_QWORD *)v52 )
            {
              v27 = v49;
              v60 = 1;
              v28 = 0LL;
              v58 = 0LL;
              v59 = 0;
              v61 = 0LL;
              v57 = 0LL;
              if ( a10 )
              {
                XCLIPOBJ::vSetup((XCLIPOBJ *)v55, a10, v49, 0);
                v28 = v55;
              }
              if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v46) )
              {
                v29 = RedirCopyBits;
              }
              else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 512LL) + 112LL) & 0x400) != 0 )
              {
                v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v25 + 358);
              }
              else
              {
                v29 = EngCopyBits;
              }
              if ( !v28 || !ERECTL::bEmpty((ERECTL *)v56) )
              {
                v30 = 0LL;
                if ( v42 )
                  v30 = v42 + 24;
                v31 = 0LL;
                if ( v52 )
                  v31 = v52 + 24;
                ((void (__fastcall *)(__int64, __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v29)(
                  v31,
                  v30,
                  v28,
                  0LL,
                  v27,
                  &gptlZero);
              }
            }
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v40);
            SURFREFVIEW::bUnMap((SURFREFVIEW *)&v37);
            v20 = v50;
          }
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v51);
        }
      }
    }
  }
  if ( a10 )
    REGION::vDeleteREGION(a10);
  if ( v41 )
  {
    v32 = PsGetCurrentProcess(v21);
    MmUnmapViewOfSection(v32, v41);
  }
  if ( v20 )
    ObfDereferenceObject(v20);
  LOBYTE(v10) = v18 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v53);
  DCOBJ::~DCOBJ((DCOBJ *)v54);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v33);
  SURFMEM::~SURFMEM((SURFMEM *)&v42);
  return v10;
}
