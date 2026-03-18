/*
 * XREFs of W32kCddClipRegion @ 0x1C02615B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C025F5AC (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C025F5E0 (--1EngModeState@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddClipRegion(HRGN a1, HRGN a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  struct RGNOBJ *v8; // rdi
  _QWORD v10[7]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v11[7]; // [rsp+58h] [rbp-40h] BYREF
  char v12; // [rsp+B0h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v12, (__int64)a2, a3, a4);
  v7 = 0;
  if ( a3 )
    v8 = (struct RGNOBJ *)(a3 + 56);
  else
    v8 = 0LL;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a1, 0, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a2, 1, 0);
  if ( v11[0] && v10[0] )
    v7 = RGNOBJAPI::iCombine((RGNOBJAPI *)v11, (struct RGNOBJ *)v10, v8, 1);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
  EngModeState::~EngModeState((EngModeState *)&v12);
  return v7;
}
