/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CA188
 * Callers:
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0059F48 (-vCleanupLCSPs@@YAXK@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C00CA310 (NtGdiDeleteColorSpace.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC9CC (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // r8d
  char v4; // r9
  struct OBJECT *v5; // rax

  v2 = 0;
  if ( a1 == (struct HOBJ__ *)ghStockColorSpace )
    return a2 != 3;
  if ( a2 )
  {
    if ( a2 != 3 )
    {
LABEL_8:
      EngSetLastError(0x57u);
      return v2;
    }
    v3 = 1;
    v4 = 2;
  }
  else
  {
    v3 = 0;
    v4 = 1;
  }
  v5 = HmgRemoveObjectImpl(a1, 0, v3, v4, 9, 0LL);
  if ( !v5 )
    goto LABEL_8;
  FreeObject((__int64)v5);
  return 1;
}
