/*
 * XREFs of ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0001D84
 * Callers:
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0001D2C (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C000F10C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C000F208 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C028AA00 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0001D2C (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C001E568 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C001E62C (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall bComputeQuickLookup(struct _QUICKLOOKUP *a1, struct PFE *a2, int a3)
{
  ULONG v3; // ebx
  struct _QUICKLOOKUP *v5; // rdi
  unsigned __int16 v6; // r14
  unsigned __int16 v7; // bp
  struct _FD_GLYPHSET *v8; // rax
  struct _FD_GLYPHSET *v9; // r13
  ULONG cRuns; // eax
  USHORT *p_cGlyphs; // rdx
  __int64 v12; // r9
  int v13; // r8d
  int v14; // r10d
  bool v15; // zf
  void **v16; // r15
  int cGlyphs; // r11d
  int v18; // edi
  __int64 v19; // r10
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r10
  unsigned int v23; // edi
  unsigned int v24; // r8d
  unsigned int v25; // eax
  _DWORD *v26; // rdi
  unsigned __int64 i; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct PFE *v31; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v31 = a2;
  v5 = a1;
  v6 = 0;
  v7 = -1;
  if ( a2 )
  {
    if ( !a1 )
      v5 = PFEOBJ::pql(&v31);
    if ( a3 || !*((_QWORD *)v5 + 1) )
    {
      v8 = PFEOBJ::pfdg((PFEOBJ *)&v31);
      v9 = v8;
      if ( v8 )
      {
        cRuns = v8->cRuns;
        if ( cRuns )
        {
          p_cGlyphs = &v9->awcrun[0].cGlyphs;
          v12 = cRuns;
          do
          {
            v13 = *(p_cGlyphs - 1);
            v14 = *p_cGlyphs;
            if ( v7 > (unsigned __int16)v13 )
              v7 = *(p_cGlyphs - 1);
            if ( v6 < v14 + v13 )
              v6 = v14 + v13 - 1;
            p_cGlyphs += 8;
            --v12;
          }
          while ( v12 );
        }
        v15 = a3 == 0;
        *(_WORD *)v5 = v7;
        v16 = (void **)((char *)v5 + 8);
        *((_WORD *)v5 + 1) = v6;
        if ( v15 )
        {
          *v16 = (void *)PALLOCMEM2((unsigned int)(4 * ((v6 - v7 + 32) / 32)));
        }
        else
        {
          if ( *v16 )
            memset(*v16, 0, 0x2000uLL);
          else
            *v16 = (void *)PALLOCMEM2(0x2000uLL);
          v7 = 0;
        }
        if ( *v16 )
        {
          if ( v9->cRuns )
          {
            do
            {
              cGlyphs = v9->awcrun[v3].cGlyphs;
              v18 = v9->awcrun[v3].wcLow - v7;
              v19 = (unsigned int)(v18 / 32);
              v20 = (v18 + cGlyphs - 1) / 32;
              v21 = v20;
              if ( (_DWORD)v19 == v20 )
              {
                *((_DWORD *)*v16 + v19) |= (unsigned int)(-1 << (32 - cGlyphs)) >> (v18 % 32);
              }
              else
              {
                *((_DWORD *)*v16 + v19) |= 0xFFFFFFFF >> (v18 % 32);
                v22 = (unsigned int)(v19 + 1);
                v23 = v20 - v22;
                v24 = v22;
                if ( (unsigned int)v22 < v20
                  && v23 >= 4
                  && ((char *)*v16 + 4 * v22 > (char *)v16 || (char *)*v16 + 4 * v20 - 4 < (char *)v16) )
                {
                  v25 = v20 - (v23 & 3);
                  do
                    v24 += 4;
                  while ( v24 < v25 );
                  v26 = (char *)*v16 + 4 * v22;
                  for ( i = (16 * ((unsigned __int64)(v25 - (unsigned int)v22 + 3) >> 2)) >> 2; i; --i )
                    *v26++ = -1;
                }
                if ( v24 < (unsigned int)v21 )
                {
                  v28 = 4LL * v24;
                  v29 = (unsigned int)v21 - v24;
                  do
                  {
                    *(_DWORD *)((char *)*v16 + v28) = -1;
                    v28 += 4LL;
                    --v29;
                  }
                  while ( v29 );
                }
                *((_DWORD *)*v16 + v21) |= -1 << (31 - (v9->awcrun[v3].wcLow - v7 + v9->awcrun[v3].cGlyphs - 1) % 32);
              }
              ++v3;
            }
            while ( v3 < v9->cRuns );
          }
          PFEOBJ::vFreepfdg((PFEOBJ *)&v31);
          return 1;
        }
        else
        {
          PFEOBJ::vFreepfdg((PFEOBJ *)&v31);
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return v3;
}
