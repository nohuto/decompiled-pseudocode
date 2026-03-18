/*
 * XREFs of W32kCddClipRegion @ 0x1C0263A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddClipRegion(HRGN a1, HRGN a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct RGNOBJ *v4; // rdi
  _QWORD v7[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  v4 = (struct RGNOBJ *)(a3 + 56);
  if ( !a3 )
    v4 = 0LL;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a2, 1);
  if ( v8[0] && v7[0] )
    v3 = RGNOBJAPI::iCombine((RGNOBJAPI *)v8, (struct RGNOBJ *)v7, v4, 1);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
  return v3;
}
