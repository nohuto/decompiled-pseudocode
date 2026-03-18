/*
 * XREFs of GrepFontSubSystemInitialize @ 0x140323A20
 * Callers:
 *     <none>
 * Callees:
 *     bQueryFntCacheReg @ 0x140184E10 (bQueryFntCacheReg.c)
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x1401C1238 (-UmfdSessionInitialize@@YAJXZ.c)
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 *     ?GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z @ 0x1401C6450 (-GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1402489EC (-GetLanguageID@@YAGXZ.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x140252A60 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?bInitializeEUDC@@YAHXZ @ 0x1402657C0 (-bInitializeEUDC@@YAHXZ.c)
 *     InitializeDefaultFamilyFonts @ 0x1403FB3A8 (InitializeDefaultFamilyFonts.c)
 *     vInitFontSubTable @ 0x1403FB77C (vInitFontSubTable.c)
 *     bInitStockFontsInternal @ 0x1403FBDC8 (bInitStockFontsInternal.c)
 *     vInitFontMapperFamilyFallbackTable @ 0x1403FC2B0 (vInitFontMapperFamilyFallbackTable.c)
 *     bInitFontTables @ 0x1403FC394 (bInitFontTables.c)
 *     InitializeFontSignatures @ 0x1403FC640 (InitializeFontSignatures.c)
 */

__int64 __fastcall GrepFontSubSystemInitialize(int a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 Semaphore; // rax
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  Gre::Base *v7; // rcx
  unsigned int i; // edx
  BOOL v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  __int64 SessionState; // rax
  __int64 v18; // rdx
  int v19; // ecx
  int v21; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  Semaphore = GreCreateSemaphore();
  v4 = 0;
  *(_QWORD *)(v2 + 20312) = Semaphore;
  if ( !Semaphore )
    return 0LL;
  v5 = GreCreateSemaphore();
  *(_QWORD *)(v2 + 20320) = v5;
  if ( !v5 )
    return 0LL;
  v6 = GreCreateSemaphore();
  *(_QWORD *)(v2 + 20328) = v6;
  if ( !v6 )
    return 0LL;
  *(_WORD *)(v2 + 20336) = GetLanguageID();
  RtlGetDefaultCodePage((PUSHORT)(v2 + 18944), (PUSHORT)(v2 + 18946));
  v7 = (Gre::Base *)*(unsigned __int16 *)(v2 + 18944);
  *(_BYTE *)(v2 + 20352) = 0;
  *(_DWORD *)(v2 + 20356) = 1;
  for ( i = 0; i < 0x11; ++i )
  {
    if ( codepages[i] == (_DWORD)v7 )
    {
      *(_DWORD *)(v2 + 20356) = dword_140372610[i];
      *(_BYTE *)(v2 + 20352) = charsets[i];
      break;
    }
  }
  if ( (_WORD)v7 == 936 || (unsigned __int16)((_WORD)v7 - 949) <= 1u )
    *(_DWORD *)(v2 + 18940) = 3;
  v9 = (_WORD)v7 == 932 || (_WORD)v7 == 949 || (_WORD)v7 == 950 || (_WORD)v7 == 936;
  *(_DWORD *)(v2 + 20340) = v9;
  FNTCachepInit(v7);
  vCheckIsSetupRunning(v11, v10);
  Handle = 0LL;
  v21 = 0;
  if ( (int)GrepGetRegKey(&Handle, 0x80000000, 1) >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle, L"Jpn98FixPitch", &v21) )
    {
      SessionState = W32GetSessionState(v16, v15);
      *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 19600LL) = v21 != 0;
    }
    ZwClose(Handle);
  }
  if ( (int)UmfdSessionInitialize(v13, v12, v14) < 0
    || !(unsigned int)bInitFontTables()
    || !(unsigned int)bInitStockFontsInternal() )
  {
    return 0LL;
  }
  vInitFontSubTable();
  vInitFontMapperFamilyFallbackTable();
  InitializeFontSignatures();
  InitializeDefaultFamilyFonts();
  LOBYTE(v4) = (unsigned int)bInitializeEUDC(v19, v18) != 0;
  return v4;
}
