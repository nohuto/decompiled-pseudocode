/*
 * XREFs of EngCreateWnd @ 0x140319940
 * Callers:
 *     VerifierEngCreateWnd @ 0x140349960 (VerifierEngCreateWnd.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140288CE4 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserAssociateHwnd @ 0x1402A483C (UserAssociateHwnd.c)
 *     ??1WO_CLEANUP@@QEAA@XZ @ 0x140318FA0 (--1WO_CLEANUP@@QEAA@XZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x14031963C (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

WNDOBJ *__stdcall EngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  Gre::Base *v11; // rcx
  HWND v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  __int64 SessionState; // rax
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 i; // rcx
  HSEMAPHORE v19; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v21; // rax
  __int64 v22; // rax
  SURFOBJ *v23; // rcx
  bool v24; // zf
  __int64 p_sizlBitmap; // rax
  __int64 p_cy; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  HSEMAPHORE v29; // rbx
  const wchar_t *v30; // rax
  struct _GRETHREAD *v31; // rax
  __int64 Semaphore; // rax
  HSEMAPHORE v34; // rbx
  const wchar_t *v35; // rax
  struct _GRETHREAD *v36; // rax
  FLONG v37; // r12d
  unsigned __int64 v38; // rax
  SURFOBJ *v39; // rcx
  __int64 p_hdev; // rax
  HSEMAPHORE v41; // rbx
  const wchar_t *v42; // rax
  struct _GRETHREAD *v43; // rax
  struct Gre::Base::SESSION_GLOBALS *v44; // [rsp+20h] [rbp-A1h]
  HSEMAPHORE v45; // [rsp+28h] [rbp-99h] BYREF
  REGION *v46; // [rsp+30h] [rbp-91h] BYREF
  REGION *v47; // [rsp+38h] [rbp-89h] BYREF
  __int64 v48; // [rsp+40h] [rbp-81h] BYREF
  HWND v49; // [rsp+48h] [rbp-79h]
  SURFOBJ *v50; // [rsp+50h] [rbp-71h]
  __int64 v51; // [rsp+58h] [rbp-69h] BYREF
  struct _RECTL v52; // [rsp+60h] [rbp-61h] BYREF
  int v53; // [rsp+70h] [rbp-51h] BYREF
  __int64 v54; // [rsp+78h] [rbp-49h]
  __int128 v55; // [rsp+80h] [rbp-41h]
  __int128 v56; // [rsp+90h] [rbp-31h]
  __int128 v57; // [rsp+A0h] [rbp-21h]
  struct _RECTL v58; // [rsp+B0h] [rbp-11h] BYREF
  struct _RECTL v59; // [rsp+C0h] [rbp-1h] BYREF

  v5 = 0LL;
  v50 = pso;
  v49 = hwnd;
  v53 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  v6 = (unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL);
  v9 = 0LL;
  if ( (unsigned int)UserIsUserCritSecIn() && (fl & 0xF7FFFC00) == 0 )
  {
    v44 = Gre::Base::Globals(v11);
    SEMOBJ<33>::SEMOBJ<33>(&v45, v44);
    SessionState = W32GetSessionState(v14, v13);
    v12 = v49;
    v16 = *(_QWORD *)(SessionState + 96);
    v17 = *(_QWORD *)(v16 + 4816);
    v10 = v17;
LABEL_4:
    if ( v10 )
    {
      for ( i = *(_QWORD *)(v10 + 24); ; i = *(_QWORD *)(i + 160) )
      {
        if ( !i )
        {
          v10 = *(_QWORD *)(v10 + 8);
          goto LABEL_4;
        }
        if ( *(HWND *)(i + 176) == v49 )
          break;
      }
      if ( *(WNDOBJCHANGEPROC *)(v10 + 40) == pfn && *(_DWORD *)(i + 188) == iPixelFormat )
      {
        v19 = v45;
        if ( v45 )
        {
          GlobalLockName = GrepGetGlobalLockName(33);
          EtwTraceGreLockReleaseSemaphore(GlobalLockName, v19);
          v21 = GreGetCurrentThreadCrossSessionCheck();
          if ( v21 )
          {
            v24 = (*(_QWORD *)v21 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
            *(_QWORD *)v21 &= ~0x200000000uLL;
            if ( v24 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v19);
        }
        v5 = -1LL;
LABEL_36:
        WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v53, v10, (__int64)v12);
        return (WNDOBJ *)v5;
      }
      goto LABEL_43;
    }
    if ( !v17 )
      goto LABEL_23;
    do
    {
      if ( *(_QWORD *)(v17 + 32) == v6 && *(WNDOBJCHANGEPROC *)(v17 + 40) == pfn )
        break;
      v17 = *(_QWORD *)(v17 + 8);
    }
    while ( v17 );
    if ( !v17 )
    {
LABEL_23:
      v22 = Win32AllocPoolZInit(72LL, 1684961095LL);
      v9 = v22;
      v17 = v22;
      if ( !v22 )
        goto LABEL_43;
      v23 = v50;
      v54 = v22;
      v24 = v50 == 0LL;
      *(_DWORD *)v22 = 1128354388;
      *(_QWORD *)(v22 + 16) = 0LL;
      *(_QWORD *)(v22 + 24) = 0LL;
      *(_QWORD *)(v22 + 32) = v6;
      *(_QWORD *)(v22 + 40) = pfn;
      *(_DWORD *)(v22 + 48) = fl;
      *(_QWORD *)(v22 + 52) = 0LL;
      p_sizlBitmap = (__int64)&v23->sizlBitmap;
      if ( v24 )
        p_sizlBitmap = 56LL;
      v10 = 60LL;
      *(_DWORD *)(v17 + 60) = *(_DWORD *)p_sizlBitmap;
      p_cy = (__int64)&v23->sizlBitmap.cy;
      if ( v24 )
        p_cy = 60LL;
      *(_DWORD *)(v17 + 64) = *(_DWORD *)p_cy;
      if ( (fl & 0xC) != 0 )
      {
        v27 = Win32AllocPoolZInit(208LL, 1684961095LL);
        v28 = v27;
        if ( !v27 || (*(_QWORD *)&v55 = v27, RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v46), !v46) )
        {
          v29 = v45;
          if ( v45 )
          {
            v30 = GrepGetGlobalLockName(33);
            EtwTraceGreLockReleaseSemaphore(v30, v29);
            v31 = GreGetCurrentThreadCrossSessionCheck();
            if ( v31 )
            {
              v24 = (*(_QWORD *)v31 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
              *(_QWORD *)v31 &= ~0x200000000uLL;
              if ( v24 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v29);
          }
          goto LABEL_36;
        }
        *(_QWORD *)&v56 = v46;
        RGNOBJ::vSet((RGNOBJ *)&v46, (const struct _RECTL *const)(v9 + 52));
        *(_QWORD *)(v28 + 168) = v9;
        REGION::vStamp(v46);
        v52 = *(struct _RECTL *)(v9 + 52);
        EWNDOBJ::vSetClip(v28, v46, &v52);
        *(_QWORD *)(v28 + 24) = 0LL;
        *(_DWORD *)(v28 + 152) = 1145984837;
        v10 = v6 + 24;
        *(_QWORD *)(v28 + 160) = 0LL;
        *(_QWORD *)(v28 + 176) = 0LL;
        *(_DWORD *)(v28 + 188) = 0;
        *(_QWORD *)(v28 + 48) = (v6 + 24) & -(__int64)(v6 != 0);
        *(_DWORD *)(v28 + 184) = fl | 0x20000000;
        *(_QWORD *)(v9 + 16) = v28;
      }
    }
    if ( (*(_DWORD *)(v17 + 48) & 0x87FFFFF) != fl )
      goto LABEL_43;
    if ( Win32AllocPoolZInit(208LL, 1684961095LL) )
      goto LABEL_43;
    v58 = 0LL;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v47);
    if ( !v47 )
      goto LABEL_43;
    *((_QWORD *)&v56 + 1) = v47;
    RGNOBJ::vSet((RGNOBJ *)&v47, &v58);
    v59 = 0LL;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v48);
    if ( !v48
      || (*(_QWORD *)&v57 = v48,
          RGNOBJ::vSet((RGNOBJ *)&v48, &v59),
          Semaphore = GreCreateSemaphore(),
          (MEMORY[0xC8] = Semaphore) == 0LL) )
    {
LABEL_43:
      v34 = v45;
      if ( v45 )
      {
        v35 = GrepGetGlobalLockName(33);
        EtwTraceGreLockReleaseSemaphore(v35, v34);
        v36 = GreGetCurrentThreadCrossSessionCheck();
        if ( v36 )
        {
          v24 = (*(_QWORD *)v36 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
          *(_QWORD *)v36 &= ~0x200000000uLL;
          if ( v24 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v34);
      }
      goto LABEL_64;
    }
    MEMORY[0xA8] = v17;
    v37 = fl | 0x10000000;
    *((_QWORD *)&v57 + 1) = Semaphore;
    REGION::vStamp(v47);
    v52 = v58;
    EWNDOBJ::vSetClip(0LL, v47, &v52);
    MEMORY[0xC0] = v48;
    v38 = v6 + 24;
    MEMORY[0x18] = 0LL;
    if ( !v6 )
      v38 = 0LL;
    MEMORY[0x30] = v38;
    MEMORY[0x98] = 1145984837;
    MEMORY[0xB0] = v49;
    MEMORY[0xB8] = v37;
    MEMORY[0xBC] = iPixelFormat;
    if ( v49 )
    {
      if ( !(unsigned int)UserAssociateHwnd((__int64)v49, 0LL) )
        goto LABEL_43;
    }
    else
    {
      *(_QWORD *)(v6 + 136) = 0LL;
    }
    MEMORY[0xA0] = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(v17 + 24) = 0LL;
    if ( v9 )
    {
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v16 + 4816);
      *(_QWORD *)(v16 + 4816) = v17;
    }
    v39 = v50;
    *(_DWORD *)(v17 + 48) |= 0x40000000u;
    MEMORY[0xB8] |= 0x40000000u;
    *(_DWORD *)(v16 + 4808) = 1;
    p_hdev = (__int64)&v39->hdev;
    if ( !v39 )
      p_hdev = 48LL;
    v51 = *(_QWORD *)p_hdev;
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v51, v44);
    v53 = 1;
    v41 = v45;
    if ( v45 )
    {
      v42 = GrepGetGlobalLockName(33);
      EtwTraceGreLockReleaseSemaphore(v42, v41);
      v43 = GreGetCurrentThreadCrossSessionCheck();
      if ( v43 )
      {
        v24 = (*(_QWORD *)v43 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
        *(_QWORD *)v43 &= ~0x200000000uLL;
        if ( v24 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v41);
    }
  }
LABEL_64:
  WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v53, v10, (__int64)v12);
  return 0LL;
}
