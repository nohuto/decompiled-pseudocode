/*
 * XREFs of HMMarkObjectDestroy @ 0x1C000D470
 * Callers:
 *     HMDestroyObject @ 0x1C000D440 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C006D4B0 (DestroyMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1)
{
  __int64 v1; // rax

  v1 = qword_1C01003E8 + dword_1C01003F0 * (unsigned int)(unsigned __int16)*a1;
  *(_BYTE *)(v1 + 17) |= 1u;
  if ( !a1[2] )
    return 1LL;
  *(_BYTE *)(v1 + 17) &= ~2u;
  return 0LL;
}
