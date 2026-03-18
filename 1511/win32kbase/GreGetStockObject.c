/*
 * XREFs of GreGetStockObject @ 0x1C006C0A0
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 *     bInitICM @ 0x1C013A470 (bInitICM.c)
 * Callees:
 *     <none>
 */

void * near *__fastcall GreGetStockObject(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v4; // edi
  int v5; // eax
  void * near *result; // rax

  v1 = (int)a1;
  v2 = -1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
  {
    v4 = *(_DWORD *)(CurrentProcessWin32Process + 776);
    if ( (v4 & 0x4000) != 0 )
      v2 = 2;
    else
      v2 = (v4 >> 13) & 1;
  }
  if ( (unsigned int)v1 > 0x11 || (v5 = 205824, !_bittest(&v5, v1)) || v2 || (result = (&gahStockObjects96)[v1]) == 0LL )
  {
    if ( (unsigned int)v1 > 0x15 )
      return 0LL;
    else
      return (&gahStockObjects)[v1];
  }
  return result;
}
