/*
 * XREFs of KiAbThreadClearAcquiredLockEntry @ 0x140013730
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140013520 (ExReleaseCacheAwarePushLockSharedEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbThreadClearAcquiredLockEntry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // r11
  unsigned int v5; // r10d
  bool v6; // zf
  __int64 result; // rax

  v3 = a2 & 0x7FFFFFFFFFFFFFFCLL;
  v4 = a1;
  v5 = (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) ^ 0x3F;
  v6 = !_BitScanReverse((unsigned int *)&a1, v5);
  if ( v6 )
    return 0LL;
  while ( 1 )
  {
    v5 &= ~(1 << a1);
    result = 96 * a1 + v4 + 800;
    if ( (*(_BYTE *)(result + 26) & 1) != 0
      && (*(_DWORD *)(result + 32) & 1) == 0
      && (*(_QWORD *)(result + 32) & 0x7FFFFFFFFFFFFFFCLL) == v3
      && *(_DWORD *)(result + 40) == a3 )
    {
      *(_BYTE *)(result + 26) &= ~1u;
      if ( *(_QWORD *)(result + 32) )
        break;
    }
    v6 = !_BitScanReverse((unsigned int *)&a1, v5);
    if ( v6 )
      return 0LL;
  }
  return result;
}
