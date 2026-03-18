/*
 * XREFs of GreUpdateSpriteClipRgn @ 0x1C007AC30
 * Callers:
 *     SelectWindowRgn @ 0x1C007AAB8 (SelectWindowRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF34 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C007B460 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C007C138 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     UserGetWindowRect @ 0x1C007C258 (UserGetWindowRect.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E94AC (DwmAsyncUpdateSprite.c)
 */

void __fastcall GreUpdateSpriteClipRgn(__int64 a1, struct PDEVOBJ *a2, HRGN a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  char v9; // al
  REGION *v10; // rcx
  void *v11; // rax
  __int64 v12; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v13[4]; // [rsp+60h] [rbp-31h] BYREF
  int v14; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned int v15; // [rsp+68h] [rbp-29h] BYREF
  struct _POINTL v16; // [rsp+70h] [rbp-21h] BYREF
  __int64 v17; // [rsp+78h] [rbp-19h] BYREF
  __int64 v18; // [rsp+80h] [rbp-11h] BYREF
  int v19; // [rsp+88h] [rbp-9h]
  _BYTE v20[8]; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v21[8]; // [rsp+98h] [rbp+7h] BYREF
  _DWORD v22[4]; // [rsp+A0h] [rbp+Fh] BYREF
  _QWORD v23[3]; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+F8h] [rbp+67h] BYREF

  v24 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v13, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, a3, 0);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v17, (HWND)a2);
  v7 = v17;
  if ( !v17 )
    goto LABEL_17;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v21, (struct _EX_PUSH_LOCK *)(v17 + 120));
  v8 = *(_QWORD *)(v7 + 128);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v20, (struct _EX_PUSH_LOCK *)(v8 + 264));
  if ( v23[0] && (unsigned int)UserGetWindowRect(*(_QWORD *)(v7 + 40), v22) )
  {
    if ( !*(_QWORD *)(v8 + 96) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
      if ( v18 )
        *(_QWORD *)(v8 + 96) = v18;
      if ( v19 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    }
    if ( !*(_QWORD *)(v8 + 96) )
      goto LABEL_10;
    v12 = *(_QWORD *)(v8 + 96);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v12, (struct RGNOBJ *)v23) )
      goto LABEL_10;
    v16.x = -v22[0];
    v16.y = -v22[1];
    if ( RGNOBJ::bOffset((RGNOBJ *)&v12, &v16) )
    {
      *(_QWORD *)(v8 + 96) = v12;
LABEL_9:
      *(_DWORD *)(v8 + 256) |= 0x80u;
      goto LABEL_10;
    }
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
LABEL_24:
    *(_QWORD *)(v8 + 96) = 0LL;
    goto LABEL_9;
  }
  v10 = *(REGION **)(v8 + 96);
  if ( v10 )
  {
    REGION::vDeleteREGION(v10);
    goto LABEL_24;
  }
LABEL_10:
  if ( *(_QWORD *)(v8 + 96) || (v9 = 0, (*(_DWORD *)(v8 + 256) & 8) != 0) )
    v9 = 1;
  if ( ((*(_DWORD *)(v8 + 256) >> 4) & 1) != v9 )
  {
    *(_DWORD *)(v8 + 256) ^= ((unsigned __int8)*(_DWORD *)(v8 + 256) ^ (unsigned __int8)(16 * v9)) & 0x10;
    SFMLOGICALSURFACE::GetRedirectionInfo(
      (SFMLOGICALSURFACE *)v8,
      (enum _HLSURF_REDIRECTIONSTYLE *)&v14,
      &v15,
      (unsigned int *)&v24,
      0LL,
      0LL);
    v11 = (void *)UserReferenceDwmApiPort(*(_DWORD *)(v8 + 256) & 4);
    DwmAsyncUpdateSprite(v11, v7 + 72, 0LL, v14, v15, v24);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
  if ( (*(_DWORD *)(v8 + 256) & 1) == 0 || !a4 )
    vSpDwmFlushSpriteClipRgnChange((struct SFMLOGICALSURFACE *)v8);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v21);
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
LABEL_17:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v13);
}
