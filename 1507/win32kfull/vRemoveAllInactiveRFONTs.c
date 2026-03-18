/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1C029BE5C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F444 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0125E48 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0126358 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0126370 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(__int64 a1)
{
  __int64 v2; // rsi
  struct RFONT *v3; // r14
  struct RFONT *v4; // rbx
  __int64 v5; // rbx
  struct RFONT *v6; // r11
  struct _FONTOBJ **v7; // rbx
  _QWORD *v8; // rdi
  struct _FONTOBJ *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _FONTOBJ *v13; // [rsp+28h] [rbp-E0h] BYREF
  struct RFONT *v14; // [rsp+30h] [rbp-D8h] BYREF
  struct RFONT *v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v18[5]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v19[66]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  v17 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v16 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v13 = (struct _FONTOBJ *)a1;
  v3 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v13);
  while ( v3 )
  {
    v19[v2] = v3;
    v4 = v3;
    v2 = (unsigned int)(v2 + 1);
    v3 = (struct RFONT *)*((_QWORD *)v3 + 63);
    v15 = v4;
    v14 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v13);
    RFONTOBJ::vRemove((__int64)&v15, &v14, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v13, v14);
    v5 = *((_QWORD *)v4 + 15);
    v14 = *(struct RFONT **)(v5 + 72);
    RFONTOBJ::vRemove((__int64)&v15, &v14, 0);
    v6 = v14;
    --*(_DWORD *)(v5 + 68);
    v15 = 0LL;
    *(_QWORD *)(v5 + 72) = v6;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 3544) + 1568LL) = 0;
  else
    *(_DWORD *)(a1 + 1568) = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  v19[v2] = 0LL;
  if ( (_DWORD)v2 )
  {
    v7 = (struct _FONTOBJ **)v19;
    v8 = v19;
    do
    {
      v9 = *v7;
      memset(v18, 0, 32);
      v13 = v9;
      PushThreadGuardedObject(v18, v8, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT(&v13, 0LL, 0LL, 1);
      PopThreadGuardedObject(v18, v10, v11, v12);
      v13 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
      ++v8;
      ++v7;
      --v2;
    }
    while ( v2 );
  }
}
