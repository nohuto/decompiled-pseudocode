/*
 * XREFs of HMMarkObjectDestroy @ 0x1C00761C0
 * Callers:
 *     DestroyMonitor @ 0x1C00760A0 (DestroyMonitor.c)
 *     HMDestroyObject @ 0x1C0076190 (HMDestroyObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1)
{
  __int64 v1; // rax

  v1 = qword_1C011A128 + dword_1C011A130 * (unsigned int)(unsigned __int16)*a1;
  *(_BYTE *)(v1 + 17) |= 1u;
  if ( !a1[2] )
    return 1LL;
  *(_BYTE *)(v1 + 17) &= ~2u;
  return 0LL;
}
