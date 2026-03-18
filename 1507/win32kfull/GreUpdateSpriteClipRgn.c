/*
 * XREFs of GreUpdateSpriteClipRgn @ 0x1C000F7F4
 * Callers:
 *     SelectWindowRgn @ 0x1C000E814 (SelectWindowRgn.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C000BE74 (DwmAsyncUpdateSprite.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C000E98C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0010330 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0011B08 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteClipRgn(__int64 a1, struct PDEVOBJ *a2, HRGN a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  REGION *v12; // rcx
  bool v13; // al
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // ebx
  void *v18; // rax
  __int64 v19; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v20[4]; // [rsp+60h] [rbp-71h] BYREF
  int v21; // [rsp+64h] [rbp-6Dh] BYREF
  unsigned int v22; // [rsp+68h] [rbp-69h] BYREF
  struct _POINTL v23; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v24[8]; // [rsp+78h] [rbp-59h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v26; // [rsp+88h] [rbp-49h] BYREF
  int v27; // [rsp+90h] [rbp-41h]
  __int128 v28; // [rsp+98h] [rbp-39h]
  _BYTE v29[32]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-9h]
  _QWORD v31[7]; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v32; // [rsp+138h] [rbp+67h] BYREF

  v32 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v20, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v31, a3, 0, 0);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v29, (HWND)a2);
  v7 = v30;
  if ( !v30 )
    goto LABEL_29;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v25, (struct _EX_PUSH_LOCK *)(v30 + 120));
  v8 = *(_QWORD *)(v7 + 128);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v24, (struct _EX_PUSH_LOCK *)(v8 + 264));
  if ( !v31[0] || (LOBYTE(v9) = 1, (v10 = HMValidateHandleNoSecure(*(_QWORD *)(v7 + 40), v9)) == 0) )
  {
    v12 = *(REGION **)(v8 + 96);
    if ( !v12 )
      goto LABEL_18;
    REGION::vDeleteREGION(v12);
    goto LABEL_16;
  }
  v11 = *(_QWORD *)(v8 + 96) == 0LL;
  v28 = *(_OWORD *)(v10 + 112);
  if ( v11 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26);
    if ( v26 )
      *(_QWORD *)(v8 + 96) = v26;
    if ( v27 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
  }
  if ( !*(_QWORD *)(v8 + 96) )
    goto LABEL_18;
  v19 = *(_QWORD *)(v8 + 96);
  if ( !RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)v31) )
    goto LABEL_18;
  v23.x = -(int)v28;
  v23.y = -DWORD1(v28);
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v19, &v23) )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
LABEL_16:
    *(_QWORD *)(v8 + 96) = 0LL;
    goto LABEL_17;
  }
  *(_QWORD *)(v8 + 96) = v19;
LABEL_17:
  *(_DWORD *)(v8 + 256) |= 0x80u;
LABEL_18:
  v13 = *(_QWORD *)(v8 + 96) || (*(_DWORD *)(v8 + 256) & 8) != 0;
  if ( ((*(_DWORD *)(v8 + 256) >> 4) & 1) != v13 )
  {
    *(_DWORD *)(v8 + 256) ^= ((unsigned __int8)*(_DWORD *)(v8 + 256) ^ (unsigned __int8)(16 * v13)) & 0x10;
    SFMLOGICALSURFACE::GetRedirectionInfo(
      (SFMLOGICALSURFACE *)v8,
      (enum _HLSURF_REDIRECTIONSTYLE *)&v21,
      &v22,
      (unsigned int *)&v32,
      0LL,
      0LL);
    v14 = *(_QWORD *)v7;
    v15 = *(_QWORD *)v8;
    v16 = *(_DWORD *)(v8 + 256) & 4;
    v17 = v16 | *(_DWORD *)(v7 + 136) & 1 | (*(_DWORD *)(v8 + 256) >> 1) & 0x18 | (2
                                                                                 * (*(_DWORD *)(v8 + 256) & 1 | (8 * (*(_DWORD *)(v7 + 136) & 0xE))));
    v18 = (void *)UserReferenceDwmApiPort(v16);
    DwmAsyncUpdateSprite(v18, v14, v15, v17, (__int64 *)(v7 + 72), 0LL, v21, v22, v32);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v24);
  if ( (*(_DWORD *)(v8 + 256) & 1) == 0 || !a4 )
    vSpDwmFlushSpriteClipRgnChange((HSPRITE *)v8);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v25);
  if ( v30 )
    _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
LABEL_29:
  v30 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v29);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v31);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v20);
}
