/*
 * XREFs of InitFNTCache @ 0x1C013D3F0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnmapFontCacheFile @ 0x1C013C5D4 (vUnmapFontCacheFile.c)
 *     vGetFontDriverLWT @ 0x1C013C9E4 (vGetFontDriverLWT.c)
 *     bMapFile @ 0x1C013CA40 (bMapFile.c)
 *     ComputeFileviewCheckSum @ 0x1C013CAE0 (ComputeFileviewCheckSum.c)
 *     vGetLastBootTimeStatus @ 0x1C013CC68 (vGetLastBootTimeStatus.c)
 *     bServicingStackModifiedFonts @ 0x1C013CCD4 (bServicingStackModifiedFonts.c)
 *     bFntCacheDisabled @ 0x1C013D2A8 (bFntCacheDisabled.c)
 *     QueryFontReg @ 0x1C013D6D4 (QueryFontReg.c)
 *     bSetFntCacheReg @ 0x1C013D788 (bSetFntCacheReg.c)
 *     bInitCacheTable @ 0x1C015B4F8 (bInitCacheTable.c)
 */

void InitFNTCache()
{
  int v0; // ebx
  __int64 v1; // r15
  int v2; // eax
  int FontReg; // eax
  int v4; // r13d
  _DWORD *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // edx
  _DWORD *v11; // r12
  USHORT v12; // cx
  _DWORD *v13; // rdx
  int v14; // eax
  int v15; // eax
  char v16; // r10
  _DWORD *v17; // r9
  unsigned __int64 v18; // r8
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
  dword_1C03234B8 = 0;
  if ( bFntCacheDisabled() )
    goto LABEL_29;
  qword_1C0323DF0 = (__int64)PALLOCMEM2(0xB0uLL, 1128682580LL, 1);
  v1 = qword_1C0323DF0;
  if ( !qword_1C0323DF0 )
    goto LABEL_23;
  if ( G_fConsole )
  {
    v2 = bSetFntCacheReg(L"DisableRemoteFontBootCache");
    v1 = qword_1C0323DF0;
    if ( !v2 )
      goto LABEL_23;
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
  v4 = (int)v28;
  if ( FontReg )
  {
    v4 = (_DWORD)v28 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v0 = v29;
  }
  if ( (unsigned int)bServicingStackModifiedFonts()
    || !(unsigned int)bMapFile(L"\\SystemRoot\\system32\\FNTCACHE.DAT", (_OWORD *)(qword_1C0323DF0 + 96), 0, 0LL) )
  {
    v1 = qword_1C0323DF0;
  }
  else
  {
    v1 = qword_1C0323DF0;
    *(_QWORD *)qword_1C0323DF0 = *(_QWORD *)(qword_1C0323DF0 + 104);
  }
  v5 = *(_DWORD **)v1;
  if ( !*(_QWORD *)v1 )
  {
    if ( !G_fConsole )
      goto LABEL_23;
    inited = bInitCacheTable(v4, v0, v24, v23, v22, v21, AnsiCodePage);
    v20 = dword_1C03234B8;
    if ( inited )
      v20 = 2;
    dword_1C03234B8 = v20;
LABEL_29:
    v1 = qword_1C0323DF0;
    goto LABEL_23;
  }
  v6 = v24;
  v7 = v23;
  v8 = v22;
  v9 = v21;
  v28 = *(_DWORD **)&G_fConsole;
  if ( *v5
    && (v10 = *(_DWORD *)(v1 + 120), v10 == v5[6])
    && (v11 = v5, *v5 == (unsigned int)ComputeFileviewCheckSum(v5 + 1, v10 - 4))
    && *((_QWORD *)v11 + 6) == v9 )
  {
    v12 = AnsiCodePage;
    v13 = v28;
    if ( v11[3] == AnsiCodePage )
    {
      v14 = *(_DWORD *)(v1 + 12);
      if ( (v14 & 1) == 0
        && (!*v28
         || (v14 & 2) == 0 && *((_QWORD *)v11 + 5) == v8 && v6 == *((_QWORD *)v11 + 7) && v7 == *((_QWORD *)v11 + 8)) )
      {
        dword_1C03234B8 = 1;
        goto LABEL_23;
      }
    }
  }
  else
  {
    v12 = AnsiCodePage;
    v13 = v28;
  }
  if ( *v13 )
  {
    v15 = bInitCacheTable(v4, v29, v6, v7, v8, v9, v12);
    v1 = qword_1C0323DF0;
    if ( v15 )
      dword_1C03234B8 = 2;
  }
LABEL_23:
  v16 = dword_1C03234B8;
  if ( (dword_1C03234B8 & 3) != 0 )
  {
    v17 = *(_DWORD **)v1;
    v18 = *(_QWORD *)v1 + ((28LL * *(unsigned int *)(*(_QWORD *)v1 + 16LL) + 323) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v1 + 24) = v18;
    *(_QWORD *)(v1 + 32) = v18 + (unsigned int)v17[9];
    *(_QWORD *)(v1 + 40) = v18 + (unsigned int)v17[7] + (unsigned __int64)(unsigned int)v17[8];
    *(_DWORD *)(v1 + 8) = v17[5];
    if ( (v16 & 1) != 0 )
      bSetFntCacheReg(L"DisableRemoteFontBootCache");
    else
      *(_DWORD *)(v1 + 16) = 0;
  }
  else
  {
    dword_1C03234B8 = 0;
    if ( v1 )
    {
      if ( *(_QWORD *)v1 )
      {
        vUnmapFontCacheFile();
        v1 = qword_1C0323DF0;
      }
      Win32FreePool(v1);
      qword_1C0323DF0 = 0LL;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v25);
}
