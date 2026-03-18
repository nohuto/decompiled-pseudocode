/*
 * XREFs of GreRedrawSpriteOverlapPresent @ 0x1C00684F0
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0068580 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00685BC (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreRedrawSpriteOverlapPresent(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  GreIncNonRBLockCount(ghsemSprite);
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 164) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v2);
      v5 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v7, ghsemSprite, v5);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(a1 + 168) + 8 * v2));
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v7);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 164) );
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 96);
    v3 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6);
    SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v7, ghsemSprite, v3);
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(a1 + 96));
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v7);
  }
  return GreDecNonRBLockCount(ghsemSprite);
}
