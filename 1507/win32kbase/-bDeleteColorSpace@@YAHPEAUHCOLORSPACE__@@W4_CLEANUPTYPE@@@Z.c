/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00BCDD8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C00BCF60 (NtGdiDeleteColorSpace.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF254 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // r8d
  char v4; // r9
  _QWORD *v5; // rax

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
