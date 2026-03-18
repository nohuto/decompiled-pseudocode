/*
 * XREFs of GreMakeFontDir @ 0x1C02B5C2C
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C02A8E00 (NtGdiMakeFontDir.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00214C8 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0021514 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00294D0 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C002A210 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C002A2A8 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C002A324 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00C2280 (EngUnmapFontFileFD.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C025A298 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02A4F38 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     GreFillFontDir @ 0x1C02B582C (GreFillFontDir.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z @ 0x1C02BBEA0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z.c)
 */

__int64 __fastcall GreMakeFontDir(int a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  struct _IFIMETRICS *v11; // rax
  struct _IFIMETRICS *v12; // r14
  __int64 v13; // rcx
  __int64 v15; // [rsp+48h] [rbp-79h] BYREF
  int v16; // [rsp+50h] [rbp-71h] BYREF
  struct _FONTFILEVIEW *v17; // [rsp+58h] [rbp-69h] BYREF
  void *v18; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-51h] BYREF
  ULONG_PTR iFile[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = qword_1C0334780;
  v4 = 0;
  v8 = 0;
  if ( !qword_1C0334780 || !UmfdHostLifeTimeManager::EnsureUmfdHost(0) )
    return 0LL;
  v15 = v3;
  memset(iFile, 0, 0x78uLL);
  LODWORD(iFile[5]) |= 0x20u;
  v17 = (struct _FONTFILEVIEW *)iFile;
  iFile[10] = a3;
  if ( (unsigned int)EngMapFontFileFDInternal((struct _FILEVIEW *)iFile, &v18, &v22, 0) )
  {
    if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v17, 1u) )
    {
      v9 = PDEVOBJ::LoadFontFile((PDEVOBJ *)&v15, 1u, (unsigned __int64 *)&v17, &v18, &v22, 0LL, gusLanguageID, 0);
      v10 = v9;
      if ( v9 )
      {
        if ( v9 != 0xFFFFFFFFLL )
        {
          v11 = PDEVOBJ::QueryFont((PDEVOBJ *)&v15, 0LL, v9, 1u, &v19);
          v12 = v11;
          if ( v11 )
          {
            v8 = GreFillFontDir((__int64)v11, a1, a2);
            if ( *(_QWORD *)(v15 + 3048) )
              PDEVOBJ::Free((PDEVOBJ *)&v15, v12, v19);
          }
        }
        if ( v10 != 0xFFFFFFFFLL )
          v8 &= -((unsigned int)PDEVOBJ::UnloadFontFile((PDEVOBJ *)&v15, v10) != 0);
      }
    }
    if ( LODWORD(iFile[8]) )
    {
      AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)v20);
      if ( UmfdFileviewLookup )
      {
        v16 = iFile[8];
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v13, &v16);
        LODWORD(iFile[8]) = 0;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
    }
    EngUnmapFontFileFD((ULONG_PTR)iFile);
    vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
    return v8;
  }
  return v4;
}
