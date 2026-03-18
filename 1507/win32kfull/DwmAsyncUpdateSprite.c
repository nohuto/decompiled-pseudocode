/*
 * XREFs of DwmAsyncUpdateSprite @ 0x1C000BE74
 * Callers:
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C000A6E8 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C000F7F4 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 *     GreProtectSpriteContent @ 0x1C0262FA8 (GreProtectSpriteContent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncUpdateSprite(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int128 *a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v13; // esi
  __int64 v14; // xmm0_8
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  _QWORD v19[18]; // [rsp+20h] [rbp-A1h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    memset((char *)v19 + 2, 0, 0x82uLL);
    v14 = *a5;
    WORD2(v19[0]) = 0x8000;
    HIDWORD(v19[13]) = *((_DWORD *)a5 + 2);
    LODWORD(v19[0]) = 8650844;
    LODWORD(v19[5]) = 1073741830;
    *(_QWORD *)((char *)&v19[5] + 4) = a2;
    v19[14] = a3;
    HIDWORD(v19[6]) = a4;
    *(_QWORD *)((char *)&v19[12] + 4) = v14;
    if ( a6 )
    {
      v15 = *a6;
      HIDWORD(v19[11]) = *((_DWORD *)a6 + 8);
      v16 = a6[1];
      v17 = *((_DWORD *)a6 + 9);
      *(_OWORD *)((char *)&v19[7] + 4) = v15;
      LODWORD(v19[7]) = 1;
      *(_OWORD *)((char *)&v19[9] + 4) = v16;
      LODWORD(v19[12]) = v17;
    }
    v19[15] = __PAIR64__(a8, a7);
    LODWORD(v19[16]) = a9;
    EtwUpdateEvent(a2);
    v13 = LpcRequestPort(Object, v19);
    ObfDereferenceObject(Object);
  }
  return v13;
}
