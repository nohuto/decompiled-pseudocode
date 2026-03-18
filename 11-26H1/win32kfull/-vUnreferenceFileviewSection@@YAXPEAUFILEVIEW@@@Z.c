/*
 * XREFs of ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0
 * Callers:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CF7D0 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     FreeFileView @ 0x1400D3C10 (FreeFileView.c)
 *     ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x1400D3D14 (-vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140265250 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x14031D48C (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     EngUnmapFile @ 0x14031D660 (EngUnmapFile.c)
 * Callees:
 *     ?UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x14031D1F8 (-UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x14031D284 (-bCopySection@@YAHPEAX0_K@Z.c)
 */

void __fastcall vUnreferenceFileviewSection(struct FILEVIEW *a1, struct NETWORKED_FONT_FILE_NODE *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rdx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  union _LARGE_INTEGER v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 10) & 2) != 0 )
  {
    v4 = (void *)*((_QWORD *)a1 + 7);
    if ( v4 )
    {
      if ( NetworkedFontFileTable::UnreferenceNetworkedFontFileNode(v4, a2) )
      {
        v5 = (void *)*((_QWORD *)a1 + 6);
        if ( v5 )
        {
          if ( (*((_DWORD *)a1 + 10) & 4) != 0 )
          {
            v7.QuadPart = *((unsigned int *)a1 + 6);
            Gre::SectionObj::SectionObj((Gre::SectionObj *)&v6, v5, &v7, 1, 0LL);
            if ( v6 )
              bCopySection(v6, *((void **)a1 + 4), *((unsigned int *)a1 + 6));
            Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v6);
          }
        }
      }
    }
  }
  if ( *((_QWORD *)a1 + 4) )
  {
    v6 = (void *)*((_QWORD *)a1 + 4);
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v6);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 6);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
