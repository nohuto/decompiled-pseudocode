/*
 * XREFs of EngCreatePath @ 0x1C027C150
 * Callers:
 *     EngLineTo @ 0x1C01166A0 (EngLineTo.c)
 *     VerifierEngCreatePath @ 0x1C0290C60 (VerifierEngCreatePath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C0005FE0 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 */

PATHOBJ *EngCreatePath(void)
{
  EPATHOBJ *v0; // rbx
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v2);
  if ( v3 && (v0 = (EPATHOBJ *)PALLOCMEM2(0x58uLL, 1952542791LL, 1)) != 0LL )
  {
    *(_QWORD *)(v3 + 320) = v0;
    EPATHOBJ::vLock(v0, *(struct HPATH__ **)v3);
  }
  else
  {
    v0 = 0LL;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v2);
  return (PATHOBJ *)v0;
}
