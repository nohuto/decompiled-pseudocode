/*
 * XREFs of GreUpdateSpriteClipRgn @ 0x1C0061C18
 * Callers:
 *     SelectWindowRgn @ 0x1C0061AA0 (SelectWindowRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C0051ED0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00523D8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0053FF8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0063028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0063A6C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     UserGetWindowRect @ 0x1C0063B6C (UserGetWindowRect.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteClipRgn(__int64 a1, struct PDEVOBJ *a2, HRGN a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // r15
  REGION *v9; // rcx
  bool v10; // al
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // ebx
  void *v15; // rax
  __int64 v16; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-71h] BYREF
  int v18; // [rsp+64h] [rbp-6Dh] BYREF
  _BYTE v19[8]; // [rsp+68h] [rbp-69h] BYREF
  struct _POINTL v20; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v21[8]; // [rsp+78h] [rbp-59h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v23; // [rsp+88h] [rbp-49h] BYREF
  int v24; // [rsp+90h] [rbp-41h]
  _DWORD v25[4]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v26[32]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-9h]
  _QWORD v28[7]; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v29; // [rsp+138h] [rbp+67h] BYREF

  v29 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v19, a2, 0LL, 0LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v28, a3, 0, 0);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v26, (HWND)a2);
  v7 = v27;
  if ( !v27 )
    goto LABEL_29;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v22, (struct _EX_PUSH_LOCK *)(v27 + 120));
  v8 = *(_QWORD *)(v7 + 128);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v21, (struct _EX_PUSH_LOCK *)(v8 + 264));
  if ( !v28[0] || !(unsigned int)UserGetWindowRect(*(_QWORD *)(v7 + 40), v25) )
  {
    v9 = *(REGION **)(v8 + 96);
    if ( !v9 )
      goto LABEL_18;
    REGION::vDeleteREGION(v9);
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(v8 + 96) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23);
    if ( v23 )
      *(_QWORD *)(v8 + 96) = v23;
    if ( v24 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
  }
  if ( !*(_QWORD *)(v8 + 96) )
    goto LABEL_18;
  v16 = *(_QWORD *)(v8 + 96);
  if ( !RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)v28) )
    goto LABEL_18;
  v20.x = -v25[0];
  v20.y = -v25[1];
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v16, &v20) )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
LABEL_16:
    *(_QWORD *)(v8 + 96) = 0LL;
    goto LABEL_17;
  }
  *(_QWORD *)(v8 + 96) = v16;
LABEL_17:
  *(_DWORD *)(v8 + 256) |= 0x80u;
LABEL_18:
  v10 = *(_QWORD *)(v8 + 96) || (*(_DWORD *)(v8 + 256) & 8) != 0;
  if ( ((*(_DWORD *)(v8 + 256) >> 4) & 1) != v10 )
  {
    *(_DWORD *)(v8 + 256) ^= ((unsigned __int8)*(_DWORD *)(v8 + 256) ^ (unsigned __int8)(16 * v10)) & 0x10;
    SFMLOGICALSURFACE::GetRedirectionInfo(
      (SFMLOGICALSURFACE *)v8,
      (enum _HLSURF_REDIRECTIONSTYLE *)&v18,
      &v17,
      (unsigned int *)&v29,
      0LL,
      0LL);
    v11 = *(_QWORD *)v7;
    v12 = *(_QWORD *)v8;
    v13 = *(_DWORD *)(v8 + 256) & 4;
    v14 = v13 | *(_DWORD *)(v7 + 136) & 1 | (*(_DWORD *)(v8 + 256) >> 1) & 0x18 | (2
                                                                                 * (*(_DWORD *)(v8 + 256) & 1 | (8 * (*(_DWORD *)(v7 + 136) & 0xE))));
    v15 = (void *)UserReferenceDwmApiPort(v13);
    DwmAsyncUpdateSprite(v15, v11, v12, v14, (__int64 *)(v7 + 72), 0LL, v18, v17, v29);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v21);
  if ( (*(_DWORD *)(v8 + 256) & 1) == 0 || !a4 )
    vSpDwmFlushSpriteClipRgnChange((struct SFMLOGICALSURFACE *)v8);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v22);
  if ( v27 )
    _InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
LABEL_29:
  v27 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v26);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v28);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v19);
}
