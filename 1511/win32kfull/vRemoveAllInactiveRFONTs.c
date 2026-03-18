/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1C029B7CC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C001C53C (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C001D0B4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0027200 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00272FC (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  struct _FONTOBJ *v10; // [rsp+28h] [rbp-E0h] BYREF
  struct RFONT *v11; // [rsp+30h] [rbp-D8h] BYREF
  struct RFONT *v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[5]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v16[66]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  v14 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v13 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v10 = (struct _FONTOBJ *)a1;
  v3 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v10);
  while ( v3 )
  {
    v16[v2] = v3;
    v4 = v3;
    v2 = (unsigned int)(v2 + 1);
    v3 = (struct RFONT *)*((_QWORD *)v3 + 63);
    v12 = v4;
    v11 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v10);
    RFONTOBJ::vRemove((__int64)&v12, &v11, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v10, v11);
    v5 = *((_QWORD *)v4 + 15);
    v11 = *(struct RFONT **)(v5 + 72);
    RFONTOBJ::vRemove((__int64)&v12, &v11, 0);
    v6 = v11;
    --*(_DWORD *)(v5 + 68);
    v12 = 0LL;
    *(_QWORD *)(v5 + 72) = v6;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 3544) + 1568LL) = 0;
  else
    *(_DWORD *)(a1 + 1568) = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  v16[v2] = 0LL;
  if ( (_DWORD)v2 )
  {
    v7 = (struct _FONTOBJ **)v16;
    v8 = v16;
    do
    {
      v9 = *v7;
      memset(v15, 0, 32);
      v10 = v9;
      PushThreadGuardedObject(v15, v8, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT(&v10, 0LL, 0LL, 1);
      PopThreadGuardedObject(v15);
      v10 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
      ++v8;
      ++v7;
      --v2;
    }
    while ( v2 );
  }
}
