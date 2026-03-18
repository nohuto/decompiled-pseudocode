/*
 * XREFs of ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C0020D78 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 *     bMapFile @ 0x1C00D48C4 (bMapFile.c)
 *     vUnmapFile @ 0x1C00D8F10 (vUnmapFile.c)
 *     FreeFileView @ 0x1C00D8F3C (FreeFileView.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00D8FD4 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     EngUnmapFile @ 0x1C027E600 (EngUnmapFile.c)
 *     GreMakeFontDir @ 0x1C02B2BF0 (GreMakeFontDir.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x1C00A4F4C (ZwWin32CreateSection.c)
 *     Win32DestroySection @ 0x1C01D3948 (Win32DestroySection.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C027DF54 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C027E3EC (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

void __fastcall vUnreferenceFileviewSection(struct _FILEVIEW *a1)
{
  void *v2; // rcx
  int v3; // edx
  void *v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  int v8; // [rsp+28h] [rbp-60h]
  void *v9; // [rsp+38h] [rbp-50h]
  int v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  __int128 v14; // [rsp+70h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  __int64 v16; // [rsp+98h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 10) & 2) != 0 )
  {
    v2 = (void *)*((_QWORD *)a1 + 7);
    if ( v2 )
    {
      if ( bUnreferenceNetworkedFontFileNode(v2) )
      {
        v4 = (void *)*((_QWORD *)a1 + 6);
        if ( v4 )
        {
          if ( (*((_DWORD *)a1 + 10) & 4) != 0 )
          {
            v5 = *((unsigned int *)a1 + 6);
            v11 = 0LL;
            v12 = 0LL;
            v14 = 0LL;
            v16 = v5;
            v10 = 48;
            v13 = 576;
            if ( (int)ZwWin32CreateSection((int)&Object, v3, (int)&v10, (int)&v16, 4u, v8, v4, v9) >= 0 )
            {
              bCopySection(Object, *((void **)a1 + 4), *((unsigned int *)a1 + 6));
              Win32DestroySection(Object);
            }
          }
        }
      }
    }
  }
  v6 = (void *)*((_QWORD *)a1 + 4);
  if ( v6 )
  {
    Win32DestroySection(v6);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v7 = (void *)*((_QWORD *)a1 + 6);
  if ( v7 )
  {
    ZwClose(v7);
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
