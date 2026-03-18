/*
 * XREFs of ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C001900C
 * Callers:
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0018C50 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 * Callees:
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

__int64 __fastcall EPOINTFL::bToPOINTL(EPOINTFL *this, struct _POINTL *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r11d
  int v7; // r8d

  v2 = bFToL(this, a2, 6LL);
  v6 = 0;
  if ( v2 && (unsigned int)bFToL(v4, v3 + 4, v5) )
    return (unsigned int)(v7 - 5);
  return v6;
}
