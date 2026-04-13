/*
 * XREFs of sub_180013D6C @ 0x180013D6C
 * Callers:
 *     sub_180013CE8 @ 0x180013CE8 (sub_180013CE8.c)
 *     sub_180014610 @ 0x180014610 (sub_180014610.c)
 * Callees:
 *     sub_1800144B0 @ 0x1800144B0 (sub_1800144B0.c)
 */

__int64 (__fastcall **__fastcall sub_180013D6C(__int64 a1))()
{
  bool v1; // zf
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // rcx

  v1 = (*(_BYTE *)(a1 + 112) & 1) == 0;
  *(_QWORD *)a1 = off_18002D078;
  if ( !v1 )
    operator delete(**(void ***)(a1 + 24));
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  **(_DWORD **)(a1 + 88) = 0;
  result = off_18002E358;
  *(_DWORD *)(a1 + 112) &= ~1u;
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = off_18002E358;
  if ( v4 )
    return (__int64 (__fastcall **)())sub_1800144B0(v4, 1LL);
  return result;
}
