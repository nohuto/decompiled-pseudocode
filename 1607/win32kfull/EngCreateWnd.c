/*
 * XREFs of EngCreateWnd @ 0x1C027A060
 * Callers:
 *     VerifierEngCreateWnd @ 0x1C028F800 (VerifierEngCreateWnd.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     UserAssociateHwnd @ 0x1C01DEBC0 (UserAssociateHwnd.c)
 *     ??1WO_CLEANUP@@QEAA@XZ @ 0x1C0279968 (--1WO_CLEANUP@@QEAA@XZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0279E20 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 */

WNDOBJ *__stdcall EngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  __int64 v5; // rbx
  __int64 v9; // r14
  __int64 v10; // rdx
  TRACKOBJ *v11; // rdi
  TRACKOBJ *v12; // rax
  __int64 i; // rcx
  char *v14; // rax
  struct _RECTL *v15; // r13
  void *v16; // rax
  __int64 v17; // rsi
  struct REGION **v18; // rcx
  struct REGION *v19; // rdx
  void *v20; // rax
  __int64 v21; // rsi
  __int64 Semaphore; // rax
  FLONG v23; // r15d
  struct REGION *v24; // rdx
  __int64 v25; // rax
  struct REGION *v27; // [rsp+20h] [rbp-B1h] BYREF
  int v28; // [rsp+28h] [rbp-A9h]
  struct REGION *v29; // [rsp+30h] [rbp-A1h] BYREF
  int v30; // [rsp+38h] [rbp-99h]
  __int64 v31; // [rsp+40h] [rbp-91h] BYREF
  int v32; // [rsp+48h] [rbp-89h]
  __int64 v33; // [rsp+50h] [rbp-81h] BYREF
  __int64 v34; // [rsp+58h] [rbp-79h] BYREF
  int v35; // [rsp+60h] [rbp-71h] BYREF
  char *v36; // [rsp+68h] [rbp-69h]
  __int128 v37; // [rsp+70h] [rbp-61h]
  __int128 v38; // [rsp+80h] [rbp-51h]
  __int128 v39; // [rsp+90h] [rbp-41h]
  struct _RECTL v40; // [rsp+A0h] [rbp-31h] BYREF
  struct _RECTL v41; // [rsp+B0h] [rbp-21h] BYREF
  struct _RECTL v42; // [rsp+C0h] [rbp-11h] BYREF
  struct _RECTL v43; // [rsp+D0h] [rbp-1h] BYREF

  v5 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v9 = SURFOBJ_TO_SURFACE(pso);
  if ( (unsigned int)UserIsUserCritSecIn() && (fl & 0xF7FFFC00) == 0 )
  {
    v34 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v11 = gpto;
    v12 = gpto;
    if ( gpto )
    {
      while ( 2 )
      {
        for ( i = *((_QWORD *)v12 + 3); i; i = *(_QWORD *)(i + 160) )
        {
          if ( *(HWND *)(i + 176) == hwnd )
          {
            if ( *((WNDOBJCHANGEPROC *)v12 + 5) == pfn && *(_DWORD *)(i + 188) == iPixelFormat )
              v5 = -1LL;
            goto LABEL_44;
          }
        }
        v12 = (TRACKOBJ *)*((_QWORD *)v12 + 1);
        if ( v12 )
          continue;
        break;
      }
    }
    if ( !gpto )
      goto LABEL_48;
    do
    {
      if ( *((_QWORD *)v11 + 4) == v9 && *((WNDOBJCHANGEPROC *)v11 + 5) == pfn )
        break;
      v11 = (TRACKOBJ *)*((_QWORD *)v11 + 1);
    }
    while ( v11 );
    if ( !v11 )
    {
LABEL_48:
      v14 = (char *)PALLOCMEM2(0x48uLL, 1684961095LL, 1);
      v11 = (TRACKOBJ *)v14;
      if ( !v14 )
        goto LABEL_44;
      v36 = v14;
      v15 = (struct _RECTL *)(v14 + 52);
      *((_DWORD *)v14 + 13) = 0;
      *(_DWORD *)v14 = 1128354388;
      *((_QWORD *)v14 + 2) = 0LL;
      *((_QWORD *)v14 + 3) = 0LL;
      *((_QWORD *)v14 + 4) = v9;
      *((_QWORD *)v14 + 5) = pfn;
      *((_DWORD *)v14 + 12) = fl;
      *((_DWORD *)v14 + 14) = 0;
      *((_DWORD *)v14 + 15) = *(_DWORD *)(v9 + 56);
      *((_DWORD *)v14 + 16) = *(_DWORD *)(v9 + 60);
      if ( (fl & 0xC) != 0 )
      {
        v16 = PALLOCMEM2(0xD0uLL, 1684961095LL, 1);
        v17 = (__int64)v16;
        if ( !v16 )
          goto LABEL_44;
        *(_QWORD *)&v37 = v16;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27, 0, 1);
        if ( !v27 )
        {
          if ( v28 == 1 )
          {
            v18 = &v27;
LABEL_43:
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v18);
            goto LABEL_44;
          }
          goto LABEL_44;
        }
        *(_QWORD *)&v38 = v27;
        RGNOBJ::vSet((RGNOBJ *)&v27, v15);
        *(_QWORD *)(v17 + 168) = v11;
        v19 = v27;
        *((_DWORD *)v19 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        v40 = *v15;
        EWNDOBJ::vSetClip(v17, v27, &v40);
        *(_QWORD *)(v17 + 24) = 0LL;
        *(_QWORD *)(v17 + 48) = v9 + 24;
        *(_DWORD *)(v17 + 152) = 1145984837;
        *(_QWORD *)(v17 + 160) = 0LL;
        *(_DWORD *)(v17 + 184) = fl | 0x20000000;
        *(_QWORD *)(v17 + 176) = 0LL;
        *(_DWORD *)(v17 + 188) = 0;
        *((_QWORD *)v11 + 2) = v17;
        if ( v28 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
      }
    }
    if ( (*((_DWORD *)v11 + 12) & 0x87FFFFF) != fl )
      goto LABEL_44;
    v20 = PALLOCMEM2(0xD0uLL, 1684961095LL, 1);
    v21 = (__int64)v20;
    if ( !v20 )
      goto LABEL_44;
    *((_QWORD *)&v37 + 1) = v20;
    v43 = 0LL;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29, 0, 1);
    if ( !v29 )
    {
LABEL_41:
      if ( v30 == 1 )
      {
        v18 = &v29;
        goto LABEL_43;
      }
LABEL_44:
      SEMOBJ::vUnlock((SEMOBJ *)&v34);
      goto LABEL_45;
    }
    *((_QWORD *)&v38 + 1) = v29;
    RGNOBJ::vSet((RGNOBJ *)&v29, &v43);
    *(_QWORD *)&v42.left = 0LL;
    *(_QWORD *)&v42.right = 0LL;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31, 0, 1);
    if ( v31 )
    {
      *(_QWORD *)&v39 = v31;
      RGNOBJ::vSet((RGNOBJ *)&v31, &v42);
      Semaphore = GreCreateSemaphore();
      *(_QWORD *)(v21 + 200) = Semaphore;
      if ( Semaphore )
      {
        *(_QWORD *)(v21 + 168) = v11;
        v23 = fl | 0x10000000;
        v24 = v29;
        *((_QWORD *)&v39 + 1) = Semaphore;
        *((_DWORD *)v24 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        v41 = v43;
        EWNDOBJ::vSetClip(v21, v29, &v41);
        *(_QWORD *)(v21 + 192) = v31;
        v25 = 0LL;
        *(_QWORD *)(v21 + 24) = 0LL;
        if ( v9 )
          v25 = v9 + 24;
        *(_QWORD *)(v21 + 48) = v25;
        *(_DWORD *)(v21 + 188) = iPixelFormat;
        *(_DWORD *)(v21 + 152) = 1145984837;
        *(_QWORD *)(v21 + 176) = hwnd;
        *(_DWORD *)(v21 + 184) = v23;
        if ( hwnd )
        {
          if ( !(unsigned int)UserAssociateHwnd((__int64)hwnd, v21) )
            goto LABEL_39;
        }
        else
        {
          *(_QWORD *)(v9 + 128) = v21;
        }
        *(_QWORD *)(v21 + 160) = *((_QWORD *)v11 + 3);
        *((_QWORD *)v11 + 3) = v21;
        if ( v36 )
        {
          *((_QWORD *)v11 + 1) = gpto;
          gpto = v11;
        }
        gbWndobjUpdate = 1;
        *((_DWORD *)v11 + 12) |= 0x40000000u;
        *(_DWORD *)(v21 + 184) |= 0x40000000u;
        v33 = *(_QWORD *)(v9 + 48);
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v33);
        v35 = 1;
        v5 = v21;
      }
    }
LABEL_39:
    if ( v32 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
    goto LABEL_41;
  }
LABEL_45:
  WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v35, v10);
  return (WNDOBJ *)v5;
}
