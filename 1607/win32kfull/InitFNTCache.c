/*
 * XREFs of InitFNTCache @ 0x1C00BBB20
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     QueryFontReg @ 0x1C00BBE2C (QueryFontReg.c)
 *     bSetFntCacheReg @ 0x1C00BBEE0 (bSetFntCacheReg.c)
 *     bFntCacheDisabled @ 0x1C00BC028 (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0x1C00BC858 (bServicingStackModifiedFonts.c)
 *     vGetLastBootTimeStatus @ 0x1C00BC8D0 (vGetLastBootTimeStatus.c)
 *     ComputeFileviewCheckSum @ 0x1C00BC940 (ComputeFileviewCheckSum.c)
 *     bMapFile @ 0x1C00BCB3C (bMapFile.c)
 *     vGetFontDriverLWT @ 0x1C00BD228 (vGetFontDriverLWT.c)
 *     vUnmapFontCacheFile @ 0x1C00EBBF4 (vUnmapFontCacheFile.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bInitCacheTable @ 0x1C01587D4 (bInitCacheTable.c)
 */

void InitFNTCache()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r15
  int FontReg; // eax
  int v5; // r13d
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // edx
  _DWORD *v12; // r12
  USHORT v13; // cx
  int v14; // eax
  char v15; // r10
  _DWORD *v16; // r9
  unsigned __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  int inited; // eax
  int v21; // ecx
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-28h]
  __int64 v25; // [rsp+58h] [rbp-20h]
  _QWORD v26[3]; // [rsp+60h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+C0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+C8h] [rbp+50h] BYREF
  _DWORD *v29; // [rsp+D0h] [rbp+58h]
  int v30; // [rsp+D8h] [rbp+60h]

  v0 = 0;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v26[0] = ghsemFntCache;
  v22 = 0LL;
  LODWORD(v29) = 0;
  v30 = 0;
  GreAcquireSemaphore(ghsemFntCache);
  dword_1C0328CC0 = 0;
  if ( (unsigned int)bFntCacheDisabled() )
    goto LABEL_29;
  qword_1C0328CC8 = (__int64)PALLOCMEM2(0xB0uLL, 1128682580LL, 1);
  v3 = qword_1C0328CC8;
  if ( !qword_1C0328CC8 )
    goto LABEL_18;
  if ( G_fConsole )
  {
    v18 = bSetFntCacheReg(L"DisableRemoteFontBootCache");
    v3 = qword_1C0328CC8;
    if ( !v18 )
      goto LABEL_18;
  }
  *(_QWORD *)v3 = 0LL;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_DWORD *)(v3 + 88) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  vGetFontDriverLWT(&v23, &v22);
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v5 = (int)v29;
  if ( FontReg )
  {
    v5 = (_DWORD)v29 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v0 = v30;
  }
  if ( (unsigned int)bServicingStackModifiedFonts()
    || !(unsigned int)bMapFile(L"\\SystemRoot\\system32\\FNTCACHE.DAT", qword_1C0328CC8 + 96, 0LL, 0LL) )
  {
    v3 = qword_1C0328CC8;
  }
  else
  {
    v3 = qword_1C0328CC8;
    *(_QWORD *)qword_1C0328CC8 = *(_QWORD *)(qword_1C0328CC8 + 104);
  }
  v6 = *(_DWORD **)v3;
  if ( !*(_QWORD *)v3 )
  {
    if ( !G_fConsole )
      goto LABEL_18;
    inited = bInitCacheTable(v5, v0, v25, v24, v23, v22, AnsiCodePage);
    v21 = dword_1C0328CC0;
    v1 = 2LL;
    if ( inited )
      v21 = 2;
    dword_1C0328CC0 = v21;
LABEL_29:
    v3 = qword_1C0328CC8;
    goto LABEL_18;
  }
  v7 = v25;
  v8 = v24;
  v9 = v23;
  v10 = v22;
  v29 = *(_DWORD **)&G_fConsole;
  if ( *v6
    && (v11 = *(_DWORD *)(v3 + 120), v11 == v6[6])
    && (v12 = v6, *v6 == (unsigned int)ComputeFileviewCheckSum(v6 + 1, (unsigned int)(v11 - 4)))
    && *((_QWORD *)v12 + 6) == v10 )
  {
    v13 = AnsiCodePage;
    v1 = (__int64)v29;
    if ( v12[3] == AnsiCodePage )
    {
      v14 = *(_DWORD *)(v3 + 12);
      if ( (v14 & 1) == 0
        && (!*v29
         || (v14 & 2) == 0 && *((_QWORD *)v12 + 5) == v9 && v7 == *((_QWORD *)v12 + 7) && v8 == *((_QWORD *)v12 + 8)) )
      {
        dword_1C0328CC0 = 1;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v13 = AnsiCodePage;
    v1 = (__int64)v29;
  }
  if ( *(_DWORD *)v1 )
  {
    v19 = bInitCacheTable(v5, v30, v7, v8, v9, v10, v13);
    v3 = qword_1C0328CC8;
    if ( v19 )
      dword_1C0328CC0 = 2;
  }
LABEL_18:
  v15 = dword_1C0328CC0;
  if ( (dword_1C0328CC0 & 3) != 0 )
  {
    v16 = *(_DWORD **)v3;
    v17 = *(_QWORD *)v3 + ((28LL * *(unsigned int *)(*(_QWORD *)v3 + 16LL) + 323) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v3 + 24) = v17;
    *(_QWORD *)(v3 + 32) = v17 + (unsigned int)v16[9];
    *(_QWORD *)(v3 + 40) = v17 + (unsigned int)v16[7] + (unsigned __int64)(unsigned int)v16[8];
    *(_DWORD *)(v3 + 8) = v16[5];
    if ( (v15 & 1) != 0 )
      bSetFntCacheReg(L"DisableRemoteFontBootCache");
    else
      *(_DWORD *)(v3 + 16) = 0;
  }
  else
  {
    dword_1C0328CC0 = 0;
    if ( v3 )
    {
      if ( *(_QWORD *)v3 )
      {
        vUnmapFontCacheFile();
        v3 = qword_1C0328CC8;
      }
      Win32FreePool(v3, v1, v2);
      qword_1C0328CC8 = 0LL;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v26);
}
