/*
 * XREFs of W32kCddClipRegion @ 0x1C0265210
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0263458 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C026348C (--1EngModeState@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddClipRegion(HRGN a1, HRGN a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct RGNOBJ *v7; // rdi
  _QWORD v9[7]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v10[7]; // [rsp+58h] [rbp-40h] BYREF
  char v11; // [rsp+B0h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v11);
  v6 = 0;
  if ( a3 )
    v7 = (struct RGNOBJ *)(a3 + 56);
  else
    v7 = 0LL;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a1, 0, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a2, 1, 0);
  if ( v10[0] && v9[0] )
    v6 = RGNOBJAPI::iCombine((RGNOBJAPI *)v10, (struct RGNOBJ *)v9, v7, 1);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
  EngModeState::~EngModeState((EngModeState *)&v11);
  return v6;
}
