/*
 * XREFs of ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180042A08
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800488C4 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180042AF4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateGlyphsFromAtlas(void *const a1)
{
  unsigned int v1; // ebp
  int v2; // edi
  __int64 i; // rsi
  unsigned int v5; // r15d
  _DWORD *v6; // rbx
  int v7; // r12d
  __int64 v8; // r14
  int BitmapsFromAtlasImageStrip; // eax

  v1 = 0;
  v2 = 0;
  for ( i = 0LL; !*(_QWORD *)(i + CTopLevelWindow::s_rgpwfWindowFrames); i += 8LL )
  {
LABEL_11:
    if ( (unsigned int)++v2 >= 6 )
      return v1;
  }
  v5 = 0;
  v6 = &unk_1800A7824;
  while ( 1 )
  {
    v7 = (unsigned int)(v2 - 4) <= 1 ? *v6 : *(v6 - 1);
    if ( v7 )
      break;
LABEL_10:
    ++v5;
    v6 += 3;
    if ( v5 >= 0xA )
      goto LABEL_11;
  }
  v8 = 0LL;
  while ( 1 )
  {
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   a1,
                                   (int)v8 + v7,
                                   4u,
                                   0LL,
                                   320 * v8
                                 + *(_QWORD *)(i + CTopLevelWindow::s_rgpwfWindowFrames)
                                 + 216LL
                                 + (unsigned int)v6[1]);
    v1 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      break;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= 4 )
      goto LABEL_10;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x151u);
  return v1;
}
