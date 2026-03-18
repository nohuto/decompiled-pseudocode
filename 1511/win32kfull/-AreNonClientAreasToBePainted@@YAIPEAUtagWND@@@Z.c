/*
 * XREFs of ?AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z @ 0x1C00CBE8C
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AreNonClientAreasToBePainted(struct tagWND *a1)
{
  unsigned __int16 v1; // r8

  v1 = 0;
  if ( *(_DWORD *)(gpsi + 3576LL) != *(_DWORD *)(gpsi + 3580LL)
    || *(_DWORD *)(gpsi + 3604LL) != *(_DWORD *)(gpsi + 3644LL) )
  {
    v1 = 4108;
  }
  if ( (*((_BYTE *)a1 + 55) & 0x20) == 0
    && (*((_BYTE *)a1 + 54) & 4) != 0
    && *(_DWORD *)(gpsi + 3608LL) != *(_DWORD *)(gpsi + 3612LL) )
  {
    v1 |= 0x8000u;
  }
  return v1;
}
