/*
 * XREFs of InitFNTCache @ 0x1C00D4190
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     QueryFontReg @ 0x1C00D449C (QueryFontReg.c)
 *     bSetFntCacheReg @ 0x1C00D4550 (bSetFntCacheReg.c)
 *     bFntCacheDisabled @ 0x1C00D4698 (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0x1C00D47E0 (bServicingStackModifiedFonts.c)
 *     vGetLastBootTimeStatus @ 0x1C00D4858 (vGetLastBootTimeStatus.c)
 *     bMapFile @ 0x1C00D48C4 (bMapFile.c)
 *     vGetFontDriverLWT @ 0x1C00D4958 (vGetFontDriverLWT.c)
 *     vUnmapFontCacheFile @ 0x1C00D8EC8 (vUnmapFontCacheFile.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ComputeFileviewCheckSum @ 0x1C0118220 (ComputeFileviewCheckSum.c)
 *     bInitCacheTable @ 0x1C0150CDC (bInitCacheTable.c)
 */

void InitFNTCache()
{
  int v0; // ebx
  __int64 v1; // r15
  int FontReg; // eax
  int v3; // r13d
  _DWORD *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // edx
  _DWORD *v10; // r12
  USHORT v11; // cx
  _DWORD *v12; // rdx
  int v13; // eax
  char v14; // r10
  _DWORD *v15; // r9
  unsigned __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  int inited; // eax
  int v20; // ecx
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]
  __int64 v24; // [rsp+58h] [rbp-20h]
  _QWORD v25[3]; // [rsp+60h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+C0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+C8h] [rbp+50h] BYREF
  _DWORD *v28; // [rsp+D0h] [rbp+58h]
  int v29; // [rsp+D8h] [rbp+60h]

  v0 = 0;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v25[0] = ghsemFntCache;
  v21 = 0LL;
  LODWORD(v28) = 0;
  v29 = 0;
  GreAcquireSemaphore(ghsemFntCache);
  dword_1C0323620 = 0;
  if ( (unsigned int)bFntCacheDisabled() )
    goto LABEL_29;
  qword_1C0323628 = (__int64)PALLOCMEM2(0xB0uLL, 1128682580LL, 1);
  v1 = qword_1C0323628;
  if ( !qword_1C0323628 )
    goto LABEL_18;
  if ( G_fConsole )
  {
    v17 = bSetFntCacheReg(L"DisableRemoteFontBootCache");
    v1 = qword_1C0323628;
    if ( !v17 )
      goto LABEL_18;
  }
  *(_QWORD *)v1 = 0LL;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_DWORD *)(v1 + 88) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  vGetFontDriverLWT(&v22, &v21);
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v3 = (int)v28;
  if ( FontReg )
  {
    v3 = (_DWORD)v28 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v0 = v29;
  }
  if ( (unsigned int)bServicingStackModifiedFonts()
    || !(unsigned int)bMapFile(L"\\SystemRoot\\system32\\FNTCACHE.DAT", qword_1C0323628 + 96, 0LL, 0LL) )
  {
    v1 = qword_1C0323628;
  }
  else
  {
    v1 = qword_1C0323628;
    *(_QWORD *)qword_1C0323628 = *(_QWORD *)(qword_1C0323628 + 104);
  }
  v4 = *(_DWORD **)v1;
  if ( !*(_QWORD *)v1 )
  {
    if ( !G_fConsole )
      goto LABEL_18;
    inited = bInitCacheTable(v3, v0, v24, v23, v22, v21, AnsiCodePage);
    v20 = dword_1C0323620;
    if ( inited )
      v20 = 2;
    dword_1C0323620 = v20;
LABEL_29:
    v1 = qword_1C0323628;
    goto LABEL_18;
  }
  v5 = v24;
  v6 = v23;
  v7 = v22;
  v8 = v21;
  v28 = *(_DWORD **)&G_fConsole;
  if ( *v4
    && (v9 = *(_DWORD *)(v1 + 120), v9 == v4[6])
    && (v10 = v4, *v4 == (unsigned int)ComputeFileviewCheckSum(v4 + 1, (unsigned int)(v9 - 4)))
    && *((_QWORD *)v10 + 6) == v8 )
  {
    v11 = AnsiCodePage;
    v12 = v28;
    if ( v10[3] == AnsiCodePage )
    {
      v13 = *(_DWORD *)(v1 + 12);
      if ( (v13 & 1) == 0
        && (!*v28
         || (v13 & 2) == 0 && *((_QWORD *)v10 + 5) == v7 && v5 == *((_QWORD *)v10 + 7) && v6 == *((_QWORD *)v10 + 8)) )
      {
        dword_1C0323620 = 1;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v11 = AnsiCodePage;
    v12 = v28;
  }
  if ( *v12 )
  {
    v18 = bInitCacheTable(v3, v29, v5, v6, v7, v8, v11);
    v1 = qword_1C0323628;
    if ( v18 )
      dword_1C0323620 = 2;
  }
LABEL_18:
  v14 = dword_1C0323620;
  if ( (dword_1C0323620 & 3) != 0 )
  {
    v15 = *(_DWORD **)v1;
    v16 = *(_QWORD *)v1 + ((28LL * *(unsigned int *)(*(_QWORD *)v1 + 16LL) + 323) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v1 + 24) = v16;
    *(_QWORD *)(v1 + 32) = v16 + (unsigned int)v15[9];
    *(_QWORD *)(v1 + 40) = v16 + (unsigned int)v15[7] + (unsigned __int64)(unsigned int)v15[8];
    *(_DWORD *)(v1 + 8) = v15[5];
    if ( (v14 & 1) != 0 )
      bSetFntCacheReg(L"DisableRemoteFontBootCache");
    else
      *(_DWORD *)(v1 + 16) = 0;
  }
  else
  {
    dword_1C0323620 = 0;
    if ( v1 )
    {
      if ( *(_QWORD *)v1 )
      {
        vUnmapFontCacheFile();
        v1 = qword_1C0323628;
      }
      Win32FreePool(v1);
      qword_1C0323628 = 0LL;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v25);
}
