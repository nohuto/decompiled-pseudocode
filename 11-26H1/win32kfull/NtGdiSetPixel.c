/*
 * XREFs of NtGdiSetPixel @ 0x1400B0250
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1400D3558 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiSetPixel(Gre::Base *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DC *v13; // rcx
  int v14; // eax
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  DC *v16; // rdx
  int v17; // esi
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // r8
  LONG v22; // r11d
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // r10
  XCLIPOBJ *v27; // rbx
  struct REGION *v28; // r10
  int v29; // eax
  int v30; // eax
  int v31; // r10d
  __int64 v32; // rax
  LONG v33; // r9d
  int right; // ecx
  int top; // r8d
  LONG v36; // esi
  int *v37; // r10
  int v38; // eax
  LONG *v39; // rdi
  LONG v40; // ebx
  int *v41; // r11
  __int64 v42; // rdi
  __int64 v43; // rbx
  Gre::Base *v44; // rcx
  struct Gre::Base::SESSION_GLOBALS *v45; // r12
  int v46; // edx
  int (*v47)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v48; // edx
  __int64 v49; // r9
  __int64 v50; // r10
  __int64 v51; // r9
  ULONG v52; // ecx
  struct Gre::Base::SESSION_GLOBALS *v54; // rax
  int v55; // eax
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  DC *v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h]
  struct Gre::Base::SESSION_GLOBALS *v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  _OWORD v64[2]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v65[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int NearestIndexFromColorref; // [rsp+100h] [rbp+0h] BYREF
  __int64 v69; // [rsp+108h] [rbp+8h]
  int v70; // [rsp+110h] [rbp+10h]
  unsigned int v71; // [rsp+118h] [rbp+18h]
  int v72; // [rsp+11Ch] [rbp+1Ch]
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int128 v76; // [rsp+160h] [rbp+60h]
  int v77; // [rsp+178h] [rbp+78h]
  __int128 v78; // [rsp+190h] [rbp+90h] BYREF
  __int64 v79; // [rsp+1A0h] [rbp+A0h]
  int v80; // [rsp+1A8h] [rbp+A8h]
  __int64 v81; // [rsp+1B0h] [rbp+B0h] BYREF
  int v82; // [rsp+1B8h] [rbp+B8h]
  struct Gre::Base::SESSION_GLOBALS *v83; // [rsp+1C0h] [rbp+C0h]
  __int64 v84; // [rsp+1C8h] [rbp+C8h]
  _OWORD v85[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  _OWORD v86[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v87; // [rsp+210h] [rbp+110h]
  __int64 v88; // [rsp+218h] [rbp+118h]
  __int64 v89; // [rsp+220h] [rbp+120h]
  __int64 v90; // [rsp+228h] [rbp+128h]
  struct _RECTL v91; // [rsp+230h] [rbp+130h] BYREF
  struct _RECTL v92; // [rsp+240h] [rbp+140h] BYREF

  v8 = -1;
  v62 = Gre::Base::Globals(a1);
  memset(v64, 0, sizeof(v64));
  v63 = 0LL;
  v60 = 0LL;
  v61 = 0;
  PushThreadGuardedObject(
    v64,
    &v60,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v9) = 1;
  v10 = HmgLock(v62, a1, v9, 0LL);
  v60 = (DC *)v10;
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 12));
      v60 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v60 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v60) )
    {
      if ( (*((_DWORD *)v60 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v60);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v60 + 6);
      v60 = 0LL;
    }
  }
  memset(v65, 0, sizeof(v65));
  PushThreadGuardedObject(v65, &v60, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v66 = 1;
  if ( v60 )
  {
    if ( *((_WORD *)v60 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    if ( *((_WORD *)v60 + 6) != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v60);
    if ( v60 && (*((_DWORD *)v60 + 9) & 0x10000) == 0 )
    {
      v58 = __PAIR64__(a3, a2);
      DC::QuickInitXform(v60, &v67, 516LL);
      if ( (*(_BYTE *)(v67 + 32) & 0x43) != 0x43 )
        bCvtPts1(v67, (__int64)&v58, 1LL);
      *(_QWORD *)&v91.left = v58;
      v91.right = v58 + 1;
      v13 = v60;
      v91.bottom = HIDWORD(v58) + 1;
      v14 = *((_DWORD *)v60 + 9);
      if ( (v14 & 0xE0) != 0 )
      {
        if ( (v14 & 0x20) != 0 )
        {
          if ( (int)v58 < *((_DWORD *)v60 + 266) )
            *((_DWORD *)v60 + 266) = v58;
          if ( v91.top < *((_DWORD *)v13 + 267) )
            *((_DWORD *)v13 + 267) = v91.top;
          if ( v91.right > *((_DWORD *)v13 + 268) )
            *((_DWORD *)v13 + 268) = v91.right;
          if ( v91.bottom > *((_DWORD *)v13 + 269) )
            *((_DWORD *)v13 + 269) = v91.bottom;
        }
        v13 = v60;
        if ( (*((_DWORD *)v60 + 9) & 0x80u) != 0 )
        {
          if ( v91.left < *((_DWORD *)v60 + 274) )
            *((_DWORD *)v60 + 274) = v91.left;
          if ( v91.top < *((_DWORD *)v13 + 275) )
            *((_DWORD *)v13 + 275) = v91.top;
          if ( v91.right > *((_DWORD *)v13 + 276) )
            *((_DWORD *)v13 + 276) = v91.right;
          if ( v91.bottom > *((_DWORD *)v13 + 277) )
            *((_DWORD *)v13 + 277) = v91.bottom;
        }
      }
      if ( *((_QWORD *)v60 + 62) )
      {
        v15 = Gre::Base::Globals(v13);
        v84 = 0LL;
        v83 = v15;
        v81 = 0LL;
        v82 = 0;
        memset(v85, 0, sizeof(v85));
        PushThreadGuardedObject(
          v85,
          &v81,
          UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
        memset(v86, 0, sizeof(v86));
        PushThreadGuardedObject(
          v86,
          &v81,
          UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
        v87 = 256;
        v78 = 0LL;
        v79 = 0LL;
        v80 = 0;
        v81 = 0LL;
        v90 = 0LL;
        v89 = 0LL;
        v88 = 0LL;
        if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v78, (struct XDCOBJ *)&v60, 0) )
        {
LABEL_90:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v78);
          goto LABEL_91;
        }
        v16 = v60;
        v17 = 1;
        v18 = *((_QWORD *)v60 + 62);
        v19 = *((_DWORD *)v60 + 10) & 1LL;
        v20 = *((int *)v60 + 2 * v19 + 254);
        if ( (unsigned __int64)(v20 + v91.left + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_88;
        if ( (unsigned __int64)(v20 + v91.right + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_88;
        v21 = *((int *)v60 + 2 * v19 + 255);
        if ( (unsigned __int64)(v21 + v91.top + 0x80000000LL) > 0xFFFFFFFF
          || (unsigned __int64)(v21 + v91.bottom + 0x80000000LL) > 0xFFFFFFFF
          || (v22 = v91.left + v20,
              v91.left = v22,
              v23 = v91.right + *((_DWORD *)v60 + 2 * v19 + 254),
              v24 = v91.top + *((_DWORD *)v60 + 2 * v19 + 255),
              *(_QWORD *)&v91.top = __PAIR64__(v23, v24),
              v25 = (unsigned int)(v91.bottom + *((_DWORD *)v60 + 2 * v19 + 255)),
              v91.bottom = v25,
              (unsigned int)(v22 + 134217726) > 0xFFFFFFC)
          || (unsigned int)(v23 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v24 + 134217726) > 0xFFFFFFC
          || (unsigned int)(v25 + 134217726) > 0xFFFFFFC )
        {
LABEL_88:
          v52 = 87;
LABEL_89:
          EngSetLastError(v52);
          goto LABEL_90;
        }
        if ( v22 >= *((_DWORD *)v60 + 250)
          && v23 <= *((_DWORD *)v60 + 252)
          && v24 >= *((_DWORD *)v60 + 251)
          && (int)v25 <= *((_DWORD *)v60 + 253) )
        {
LABEL_57:
          if ( ((*(_DWORD *)(v18 + 116) & 8) != 0 || *(_QWORD *)(v18 + 224))
            && _bittest16((const signed __int16 *)(v18 + 102), 9u) )
          {
            goto LABEL_103;
          }
          v29 = *(_DWORD *)(v18 + 112);
          if ( (v29 & 0x800) != 0 )
          {
            v30 = UserSurfaceAccessCheck(*(_QWORD *)(v18 + 648));
          }
          else
          {
            if ( (v29 & 0x10000000) == 0 )
              goto LABEL_64;
            v30 = UserScreenAccessCheck(v25, v16);
          }
          if ( !v30 )
          {
LABEL_103:
            v52 = 5;
            goto LABEL_89;
          }
          v16 = v60;
LABEL_64:
          v31 = *((_DWORD *)v16 + 9);
          if ( (v31 & 0xE0) == 0 )
            goto LABEL_79;
          v92 = v91;
          v32 = *((_DWORD *)v16 + 10) & 1LL;
          v33 = v91.left - *((_DWORD *)v16 + 2 * v32 + 254);
          v92.left = v33;
          right = v91.right - *((_DWORD *)v16 + 2 * v32 + 254);
          v92.right = right;
          top = v91.top - *((_DWORD *)v16 + 2 * v32 + 255);
          v92.top = top;
          v92.bottom = v91.bottom - *((_DWORD *)v16 + 2 * v32 + 255);
          if ( (v31 & 0x40) == 0 )
          {
LABEL_79:
            v42 = *((_QWORD *)v16 + 11);
            v43 = *(_QWORD *)(v18 + 128);
            v76 = 0LL;
            v75 = 0LL;
            v69 = 0LL;
            v70 = 0;
            v72 = -1;
            v73 = 0LL;
            v74 = 0LL;
            v77 = 0;
            v44 = (Gre::Base *)*((unsigned int *)v16 + 30);
            if ( ((unsigned __int8)v44 & 1) != 0
              && *(_QWORD *)(*((_QWORD *)v16 + 122) + 248LL)
              && ((unsigned int)v44 & 0x10000000) != 0 )
            {
              v54 = Gre::Base::Globals(v44);
              NearestIndexFromColorref = a4;
              v70 = 6;
              if ( *((_DWORD *)v54 + 788) )
              {
                v71 = a4;
                v72 = a4;
              }
            }
            else
            {
              v17 = 0;
              v45 = Gre::Base::Globals(v44);
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v43, v42, a4, 1LL);
              v46 = *((_DWORD *)v60 + 30);
              if ( (v46 & 5) != 0 )
              {
                v70 = 2;
              }
              else
              {
                v55 = v70;
                if ( (v46 & 2) != 0 )
                  v55 = 1;
                v70 = v55;
              }
              if ( *((_DWORD *)v45 + 788) )
              {
                v71 = a4;
                v72 = rgbFromColorref(v43, v42, a4);
              }
            }
            ++*(_DWORD *)(v18 + 92);
            v47 = SURFACE::pfnBitBlt((SURFACE *)v18);
            if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, struct _RECTL *, _QWORD, _QWORD, unsigned int *, __int64, int))v47)(
                   v50 & -(__int64)(v18 != 0),
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   &v91,
                   0LL,
                   0LL,
                   &NearestIndexFromColorref,
                   v49 + 1192,
                   v48 | (v48 << 8)) )
            {
              if ( v17 )
                v8 = NearestIndexFromColorref;
              else
                v8 = ulIndexToRGB(v43, v42, NearestIndexFromColorref, v51);
            }
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
            goto LABEL_90;
          }
          v36 = *((_DWORD *)v16 + 270);
          v37 = (int *)((char *)v16 + 1088);
          v38 = *((_DWORD *)v16 + 272);
          if ( v36 == v38
            || (v39 = (LONG *)((char *)v16 + 1092),
                v40 = *((_DWORD *)v16 + 273),
                v41 = (int *)((char *)v16 + 1084),
                *((_DWORD *)v16 + 271) == v40) )
          {
            *(struct _RECTL *)((char *)v16 + 1080) = v92;
          }
          else
          {
            if ( v33 < v36 )
            {
              v38 = *v37;
              v40 = *v39;
              *((_DWORD *)v16 + 270) = v33;
              v16 = v60;
              right = v92.right;
              top = v92.top;
            }
            if ( top < *v41 )
            {
              *v41 = top;
              v16 = v60;
              right = v92.right;
            }
            if ( right > v38 )
            {
              *v37 = right;
              v16 = v60;
            }
            if ( v92.bottom <= v40 )
              goto LABEL_77;
            *v39 = v92.bottom;
          }
          v16 = v60;
LABEL_77:
          v59 = *((_QWORD *)v16 + 148);
          if ( v59 )
          {
            v57 = 0LL;
            RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v57, 0x70u);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v57);
            v56 = 0LL;
            RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v56, 0x70u);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v56);
            if ( v57 )
            {
              if ( v56 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v56, &v92);
                if ( RGNOBJ::bMerge((RGNOBJ *)&v57, (struct RGNOBJ *)&v59, (struct RGNOBJ *)&v56, 0xEu) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)&v59, (struct RGNOBJ *)&v57);
                  *((_QWORD *)v60 + 148) = v59;
                }
              }
            }
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v56);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v56);
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v57);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v57);
            v16 = v60;
          }
          v17 = 1;
          goto LABEL_79;
        }
        v26 = *((_QWORD *)v60 + 146);
        v27 = (DC *)((char *)v60 + 1768);
        if ( !v26 || (*((_DWORD *)v60 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v60) )
        {
          if ( !*((_QWORD *)v16 + 144) )
          {
            if ( !*((_QWORD *)v16 + 145)
              || (*((_DWORD *)v16 + 10) & 2) == 0
              || !(unsigned int)DC::bDpiScaledSurface(v16) )
            {
              v28 = (struct REGION *)*((_QWORD *)v16 + 143);
            }
            goto LABEL_54;
          }
          if ( !v26 )
            goto LABEL_53;
        }
        if ( (*((_DWORD *)v16 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v16) )
LABEL_53:
          v28 = (struct REGION *)*((_QWORD *)v16 + 144);
LABEL_54:
        XCLIPOBJ::vSetup(v27, v28, (const struct ERECTL *)&v91, 2);
        if ( *((_DWORD *)v27 + 1) == *((_DWORD *)v27 + 3) || *((_DWORD *)v27 + 2) == *((_DWORD *)v27 + 4) )
          goto LABEL_90;
        v16 = v60;
        goto LABEL_57;
      }
    }
  }
LABEL_91:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v60);
  return v8;
}
