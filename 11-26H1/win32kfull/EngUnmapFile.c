/*
 * XREFs of EngUnmapFile @ 0x14031D660
 * Callers:
 *     ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14034D5C4 (--1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

BOOL __stdcall EngUnmapFile(ULONG_PTR iFile)
{
  BOOL v2; // ebx
  struct NETWORKED_FONT_FILE_NODE *v3; // rdx
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  if ( !iFile )
    return 0;
  v5[0] = 0LL;
  v5[1] = 0LL;
  v5[2] = *(_QWORD *)(iFile + 8);
  v5[3] = 0LL;
  v6 = 3;
  v2 = Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v5);
  vUnreferenceFileviewSection((struct FILEVIEW *)iFile, v3);
  Win32FreePool((void *)iFile);
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v5);
  return v2;
}
