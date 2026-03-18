/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C00BF6D0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x1C00B35E0 (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF174 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF254 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF368 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF450 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF530 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1, __int64 a2, int a3)
{
  __int64 i; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 30;
  for ( i = 0LL; ; i = v5 )
  {
    v4 = HmgNextGarbageCollectible(i, &v6, a3);
    v5 = v4;
    if ( !v4 )
      break;
    switch ( v6 )
    {
      case 5:
        vGarbageCollectObject<SURFREF>(v4);
        break;
      case 7:
        vGarbageCollectObject<EPATHOBJGC>(v4);
        break;
      case 8:
        vGarbageCollectObject<XEPALOBJ2>(v4);
        break;
      case 9:
        vGarbageCollectObject<COLORSPACEGC>(v4);
        break;
      case 16:
        vGarbageCollectObject<BRUSHSELOBJGC>(v4);
        break;
    }
  }
}
