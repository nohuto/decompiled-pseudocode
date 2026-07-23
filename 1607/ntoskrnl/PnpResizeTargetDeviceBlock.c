/*
 * XREFs of PnpResizeTargetDeviceBlock @ 0x140485388
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpAllocateCriticalMemory @ 0x140485EEC (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpResizeTargetDeviceBlock(const void **a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebp
  void *CriticalMemory; // rax
  void *v9; // rsi
  const void *v10; // rbx

  v2 = 0;
  v4 = *((_DWORD *)*a1 + 35) + 104;
  v5 = -1LL;
  do
    ++v5;
  while ( *((_WORD *)*a1 + v5 + 76) );
  v6 = 2 * v5 + 2;
  if ( v6 == 2 )
    v6 = 0;
  v7 = v4 - v6 + 400;
  if ( v7 > v4 )
  {
    CriticalMemory = (void *)PnpAllocateCriticalMemory(a2, 1LL, v7, 1265659472LL);
    v9 = CriticalMemory;
    if ( CriticalMemory )
    {
      memset(CriticalMemory, 0, v7);
      v10 = *a1;
      memmove(v9, *a1, v4);
      *((_DWORD *)v9 + 16) = 1;
      *((_DWORD *)v9 + 35) = v7 - 104;
      *((_QWORD *)v9 + 10) = v10;
      *a1 = v9;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
