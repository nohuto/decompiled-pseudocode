/*
 * XREFs of GreRedrawSpriteOverlapPresent @ 0x14001B79C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??1?$SEMOBJEXORSHARED@$05@@QEAA@XZ @ 0x1400198F0 (--1-$SEMOBJEXORSHARED@$05@@QEAA@XZ.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x14001B8FC (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreRedrawSpriteOverlapPresent(__int64 a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  int v3; // ebp
  void (*v4)(HSEMAPHORE); // rcx
  __int64 v5; // rbx
  void (*v6)(HSEMAPHORE); // rcx
  __int64 v8; // rbx
  int v9; // eax
  void (*v10)(HSEMAPHORE); // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  bool v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = Gre::Base::Globals((Gre::Base *)a1);
  GreIncNonRBLockCount(*(_QWORD *)v2 + 1040LL);
  if ( *(_DWORD *)(a1 + 140) )
  {
    v8 = 0LL;
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v8);
      v9 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14);
      v10 = GreAcquireSemaphoreSharedInternal;
      v11 = *(_QWORD *)v2 + 1040LL;
      v12 = v11;
      v13 = v9 != 0;
      if ( !v9 )
        v10 = GreAcquireSemaphoreInternal;
      GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v10, v11);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(a1 + 144) + 8 * v8));
      SEMOBJEXORSHARED<6>::~SEMOBJEXORSHARED<6>((__int64)&v12);
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a1 + 140) );
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 80);
    v3 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v14);
    v4 = GreAcquireSemaphoreSharedInternal;
    v5 = *(_QWORD *)v2 + 1040LL;
    if ( !v3 )
      v4 = GreAcquireSemaphoreInternal;
    GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v4, *(_QWORD *)v2 + 1040LL);
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(a1 + 80));
    v6 = GreReleaseSemaphoreSharedInternal;
    if ( !v3 )
      v6 = GreReleaseSemaphoreExclusiveInternal;
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v6, v5);
  }
  return GreDecNonRBLockCount(*(_QWORD *)v2 + 1040LL);
}
