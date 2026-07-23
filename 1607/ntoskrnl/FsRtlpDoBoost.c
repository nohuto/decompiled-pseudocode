/*
 * XREFs of FsRtlpDoBoost @ 0x140091014
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x14007B748 (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     KeSetPriorityBoost @ 0x14009110C (KeSetPriorityBoost.c)
 */

void __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, void *a5)
{
  bool v8; // bl
  unsigned __int8 v9; // cl
  int v10; // edx
  int v11; // eax

  v8 = 0;
  if ( (*(_DWORD *)(a1 + 1728) & 0xE00u) < 0x400 )
    v8 = (*a4 & 0x20) == 0;
  v9 = *(_BYTE *)(a2 + 195);
  v10 = v9;
  if ( v9 >= 0xFu )
    v10 = 15;
  v11 = (unsigned __int8)*a3;
  if ( v11 <= v10 )
  {
    LOBYTE(v11) = v9;
    if ( v9 >= 0xFu )
      LOBYTE(v11) = 15;
  }
  *a3 = v11;
  if ( (unsigned __int8)v11 > *(_BYTE *)(a1 + 195) || v8 )
  {
    if ( (unsigned __int8)v11 > *(_BYTE *)(a1 + 195) )
      KeSetPriorityBoost(a1, (unsigned __int8)v11);
    if ( v8 )
    {
      PsBoostThreadIoEx(a1, 0, 1, a5);
      *(_DWORD *)a4 |= 0x20u;
      IoBoostThreadIoPriority((KSPIN_LOCK *)a1, (*(_DWORD *)(a2 + 1728) >> 9) & 7, 0);
    }
  }
}
