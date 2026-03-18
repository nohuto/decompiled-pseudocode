/*
 * XREFs of NtGdiGetPixel @ 0x1400BB9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1400BBED4 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiGetPixel(Gre::Base *a1, int a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  struct REGION *v13; // rax
  int v14; // ecx
  int v15; // esi
  Gre::Base *v16; // rcx
  __int64 v17; // rbx
  struct Gre::Base::SESSION_GLOBALS *v18; // r9
  int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h]
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  char v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+6Ch] [rbp-94h]
  DC *v29; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+78h] [rbp-88h]
  struct Gre::Base::SESSION_GLOBALS *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  _OWORD v33[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v34[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v35; // [rsp+D0h] [rbp-30h]
  _DWORD v36[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int64 v40; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v41[160]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v42; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v43[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v44[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v45; // [rsp+1D4h] [rbp+D4h]
  int v46; // [rsp+1D8h] [rbp+D8h]
  int v47; // [rsp+1DCh] [rbp+DCh]
  int v48; // [rsp+1E0h] [rbp+E0h]
  __int64 v49; // [rsp+208h] [rbp+108h]
  __int64 v50; // [rsp+220h] [rbp+120h]
  int v51; // [rsp+228h] [rbp+128h]
  int v52; // [rsp+250h] [rbp+150h]
  __int64 v53; // [rsp+260h] [rbp+160h]

  v23 = -1;
  v31 = Gre::Base::Globals(a1);
  memset(v33, 0, sizeof(v33));
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0;
  PushThreadGuardedObject(
    v33,
    &v29,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v6) = 1;
  v7 = HmgLock(v31, a1, v6, 0LL);
  v29 = (DC *)v7;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 12));
      v29 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(v8) != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v29 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v29) )
    {
      if ( (*((_DWORD *)v29 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v29);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v29 + 6);
      v29 = 0LL;
    }
  }
  memset(v34, 0, sizeof(v34));
  PushThreadGuardedObject(v34, &v29, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v35 = 1;
  if ( v29 )
  {
    if ( *((_WORD *)v29 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    if ( *((_WORD *)v29 + 6) != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v29);
    if ( v29 )
    {
      bSpDwmValidateSurface((struct XDCOBJ *)&v29, a2, a3, 1, 1);
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v41);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v41, (struct XDCOBJ *)&v29, 0) )
      {
        v11 = *((_QWORD *)v29 + 62);
        if ( v11 )
        {
          if ( (unsigned int)SrcSurfaceAccessCheck(*((struct SURFACE **)v29 + 62)) )
          {
            DC::QuickInitXform(v29, &v40, 516LL);
            v24 = a2;
            v25 = a3;
            if ( (*(_BYTE *)(v40 + 32) & 0x43) != 0x43 )
            {
              bCvtPts1(v40, (__int64)&v24, 1LL);
              a3 = v25;
              a2 = v24;
            }
            v12 = *((_DWORD *)v29 + 10) & 1LL;
            v43[0] = a2 + *((_DWORD *)v29 + 2 * v12 + 254);
            v43[2] = a2 + *((_DWORD *)v29 + 2 * v12 + 254) + 1;
            v43[1] = a3 + *((_DWORD *)v29 + 2 * v12 + 255);
            v43[3] = a3 + *((_DWORD *)v29 + 2 * v12 + 255) + 1;
            v13 = XDCOBJ::prgnEffRao(&v29);
            v49 = 0LL;
            v50 = 0LL;
            v51 = 0;
            v52 = 1;
            v53 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)v44, v13, (const struct ERECTL *)v43, 0);
            if ( v45 != v47 && v46 != v48 )
            {
              v14 = *((_DWORD *)v29 + 30);
              if ( (v14 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)v29 + 122) + 248LL) || (v15 = 1, (v14 & 0x10000000) == 0) )
                v15 = 0;
              v23 = 0;
              v36[0] = *(_DWORD *)(v11 + 96);
              v37 = 1LL;
              v39 = 1LL;
              v36[1] = 1;
              v38 = 0LL;
              v42 = 0LL;
              if ( v36[0] == 1 )
              {
                LODWORD(v42) = 7;
                DWORD2(v42) = 8;
              }
              else if ( v36[0] == 2 )
              {
                LODWORD(v42) = 1;
                DWORD2(v42) = 2;
              }
              else
              {
                DWORD2(v42) = 1;
              }
              v26 = 0LL;
              v27 = 0;
              v28 = 0;
              if ( SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)v36, &v23, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
              {
                v17 = *(_QWORD *)(v11 + 48);
                DWORD1(v42) = 0;
                HIDWORD(v42) = 1;
                v18 = Gre::Base::Globals(v16);
                if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
                  v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int128 *, _DWORD *))(v17 + 2832))(
                          (v26 + 24) & -(__int64)(v26 != 0),
                          v11 + 24,
                          0LL,
                          (__int64)v18 + 4664,
                          &v42,
                          v43);
                else
                  v19 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *, __int128 *, _DWORD *))EngCopyBits)(
                          (v26 + 24) & -(__int64)(v26 != 0),
                          v11 + 24,
                          0LL,
                          (char *)v18 + 4664,
                          &v42,
                          v43);
                if ( v19 && !v15 )
                  v23 = ulIndexToRGB(*(_QWORD *)(v11 + 128), *((_QWORD *)v29 + 11), v23, v20);
              }
              SURFMEM::~SURFMEM((SURFMEM *)&v26);
            }
          }
        }
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v41);
    }
  }
  v21 = v23;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v29);
  return v21;
}
