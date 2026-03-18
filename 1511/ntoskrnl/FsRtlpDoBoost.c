/*
 * XREFs of FsRtlpDoBoost @ 0x1400C93A0
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeSetPriorityBoost @ 0x1401020B0 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, void *a5)
{
  bool v8; // bl
  unsigned __int8 v9; // cl
  int v10; // edx
  __int64 result; // rax

  v8 = 0;
  if ( (*(_DWORD *)(a1 + 1724) & 0xE00u) < 0x400 )
    v8 = (*a4 & 0x20) == 0;
  v9 = *(_BYTE *)(a2 + 195);
  v10 = v9;
  if ( v9 >= 0xFu )
    v10 = 15;
  result = (unsigned __int8)*a3;
  if ( (int)result <= v10 )
  {
    result = v9;
    if ( v9 >= 0xFu )
      result = 15LL;
  }
  *a3 = result;
  if ( (unsigned __int8)result > *(_BYTE *)(a1 + 195) || v8 )
  {
    if ( (unsigned __int8)result > *(_BYTE *)(a1 + 195) )
      result = KeSetPriorityBoost(a1, (unsigned __int8)result);
    if ( v8 )
    {
      PsBoostThreadIoEx(a1, 0, 1, a5);
      *(_DWORD *)a4 |= 0x20u;
      return IoBoostThreadIoPriority(a1, (*(_DWORD *)(a2 + 1724) >> 9) & 7);
    }
  }
  return result;
}
