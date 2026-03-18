/*
 * XREFs of GrepUnmapSessionView @ 0x14031D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

void __fastcall GrepUnmapSessionView(__int64 a1)
{
  _QWORD v1[4]; // [rsp+20h] [rbp-38h] BYREF
  int v2; // [rsp+40h] [rbp-18h]

  v1[2] = a1;
  v1[1] = 0LL;
  v1[3] = 0LL;
  v1[0] = 0LL;
  v2 = 3;
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v1);
}
