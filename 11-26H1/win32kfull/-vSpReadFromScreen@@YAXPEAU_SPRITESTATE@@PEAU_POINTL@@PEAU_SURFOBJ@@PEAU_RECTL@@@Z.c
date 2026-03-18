/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140317190
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140316108 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1403179A8 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x140318B00 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x1401AB494 (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D7CF0 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140248BE4 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x140313D80 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1403159F4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  char *p_hdev; // r14
  __int64 v15; // rsi
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  bool v17; // zf
  __int64 v18; // r12
  HSURF v19; // rdx
  int (*v20)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rsi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  HDEV hdev; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  struct _XLATEOBJ *v39; // [rsp+60h] [rbp-A0h] BYREF
  struct _XLATEOBJ *v40; // [rsp+68h] [rbp-98h]
  struct _CLIPOBJ *v41; // [rsp+70h] [rbp-90h]
  struct _POINTL *v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v44; // [rsp+88h] [rbp-78h]
  struct _RECTL *v45; // [rsp+90h] [rbp-70h]
  struct _POINTL *v46; // [rsp+98h] [rbp-68h]
  _BYTE v47[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SURFOBJ *v48; // [rsp+C0h] [rbp-40h]
  _BYTE v49[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v50[52]; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int64 v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+128h] [rbp+28h]
  int v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+60h]
  int v56; // [rsp+168h] [rbp+68h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v45 = a4;
  v46 = a2;
  v52 = 0LL;
  v53 = 0;
  v54 = 1;
  v55 = 0LL;
  v51 = 0LL;
  v56 = 0;
  v41 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v49, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v50) )
      goto LABEL_63;
    v41 = (struct _CLIPOBJ *)v49;
  }
  v9 = *((_QWORD *)a1 + 4);
  v10 = 0LL;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 88);
    if ( ((v11 & 0x4000) != 0 || v11 < 0) && (v11 & 0x200) == 0 )
    {
      v10 = v9 - 24;
      GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v9 + 24));
    }
  }
  p_pvScan0 = 0LL;
  if ( a3 )
  {
    hsurf = (int)a3[1].hsurf;
    if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
    {
      p_pvScan0 = &a3[-1].pvScan0;
      GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
    }
  }
  p_hdev = (char *)*((_QWORD *)a1 + 4);
  v40 = 0LL;
  v39 = 0LL;
  v43 = 0LL;
  v42 = (struct _POINTL *)&v43;
  if ( ((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) == 0 )
    goto LABEL_59;
  v15 = *(_QWORD *)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x30);
  v16 = Gre::Base::Globals((Gre::Base *)(p_hdev - 24));
  v17 = (*(_DWORD *)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x70) & 0x80000) == 0;
  v44 = v16;
  if ( v17 || (v18 = *(_QWORD *)(v15 + 24), v15 == v18) )
  {
    if ( !_bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) && *((_QWORD *)p_hdev + 3) )
    {
      if ( *((_WORD *)p_hdev + 38) != 1 )
      {
LABEL_38:
        if ( _bittest((const signed __int32 *)p_hdev + 22, 0xAu) )
        {
          hdev = (HDEV)*((_QWORD *)p_hdev + 3);
LABEL_56:
          v20 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)hdev + 165);
          goto LABEL_58;
        }
        goto LABEL_57;
      }
      if ( !bAllowShareAccess((struct _SURFOBJ *)p_hdev)
        || !GreGetCurrentThread(v21)
        || !*((_QWORD *)GreGetCurrentThread(v22) + 34)
        || !*((_DWORD *)GreGetCurrentThread(v23) + 85) && !*((_DWORD *)GreGetCurrentThread(v24) + 86)
        || (v25 = *((_QWORD *)GreGetCurrentThread(v24) + 34), !_bittest((const signed __int32 *)(v25 + 20), 0xAu)) )
      {
        if ( *((_WORD *)p_hdev + 38) == 1
          && bAllowShareAccess((struct _SURFOBJ *)p_hdev)
          && GreGetCurrentThread(v26)
          && *((_QWORD *)GreGetCurrentThread(v27) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v28) + 85) || *((_DWORD *)GreGetCurrentThread(v29) + 86)) )
        {
          goto LABEL_57;
        }
        goto LABEL_38;
      }
LABEL_47:
      v20 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*((_QWORD *)GreGetCurrentThread(v25) + 34) + 80LL);
LABEL_58:
      OffCopyBitsInternal(v20, v46, a3, v42, (struct _SURFOBJ *)p_hdev, v41, v40, v45, (struct _POINTL *)v45);
      goto LABEL_59;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && GreGetCurrentThread(v31)
        && *((_QWORD *)GreGetCurrentThread(v32) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v33) + 85) || *((_DWORD *)GreGetCurrentThread(v34) + 86)) )
      {
        v25 = *((_QWORD *)GreGetCurrentThread(v34) + 34);
        if ( _bittest((const signed __int32 *)(v25 + 20), 0xAu) )
          goto LABEL_47;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && GreGetCurrentThread(v35)
        && *((_QWORD *)GreGetCurrentThread(v36) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v37) + 85) || *((_DWORD *)GreGetCurrentThread(v38) + 86)) )
      {
        goto LABEL_57;
      }
    }
    if ( _bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) )
    {
      hdev = a3->hdev;
      goto LABEL_56;
    }
LABEL_57:
    v20 = EngCopyBits;
    goto LABEL_58;
  }
  v19 = *(HSURF *)(((unsigned __int64)(p_hdev - 24) & -(__int64)(p_hdev != 0LL)) + 0x90);
  v42 = (struct _POINTL *)(v15 + 2576);
  SURFREF::SURFREF((SURFREF *)v47, v19, v16);
  if ( v48
    && (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v39,
                       0LL,
                       0,
                       *(_QWORD *)(v18 + 1792),
                       *(_QWORD *)(v15 + 1792),
                       *((_QWORD *)v44 + 484),
                       *((Gre::Base **)v44 + 484),
                       0,
                       0,
                       0,
                       0x2000) )
  {
    p_hdev = (char *)v48;
    v40 = v39;
    if ( v48 )
      p_hdev = (char *)&v48->hdev;
    v20 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v18 + 2832);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v47);
    goto LABEL_58;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v47);
LABEL_59:
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v39, (__int64)a2, (__int64)a3);
  if ( p_pvScan0 )
    GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
  if ( v10 )
    GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v10 + 48));
LABEL_63:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v49);
}
