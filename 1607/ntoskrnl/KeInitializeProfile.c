/*
 * XREFs of KeInitializeProfile @ 0x14064FD7C
 * Callers:
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeAndAffinityEx @ 0x14007DAF0 (KeAndAffinityEx.c)
 */

__int16 __fastcall KeInitializeProfile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int16 a8,
        __int16 *a9)
{
  int v10; // eax

  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 48) = a6 - 2;
  *(_DWORD *)(a1 + 64) = a7;
  *(_WORD *)(a1 + 240) = a8;
  *(_DWORD *)a1 = 16252951;
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a4 + a5;
  *(_BYTE *)(a1 + 242) = 0;
  if ( a9 )
    v10 = KeAndAffinityEx(a9, (__int16 *)KeActiveProcessors, (_BYTE *)(a1 + 72));
  else
    v10 = 0;
  if ( !v10 )
    LOWORD(v10) = KeCopyAffinityEx(a1 + 72, (unsigned __int16 *)KeActiveProcessors);
  return v10;
}
