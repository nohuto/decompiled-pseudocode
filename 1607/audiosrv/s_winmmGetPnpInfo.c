/*
 * XREFs of s_winmmGetPnpInfo @ 0x18002D380
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 */

__int64 __fastcall s_winmmGetPnpInfo(_DWORD *a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rbp
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  void *v8; // rbp

  v4 = 0;
  if ( !(unsigned int)IsWinmmGetPnpInfoSupported() )
    return 1LL;
  RtlAcquireResourceShared(&PnpInfoResource, 1u);
  v5 = *(unsigned int *)g_pPnpInfoActual;
  if ( v5 <= 0x40000
    && (ProcessHeap = GetProcessHeap(), v7 = HeapAlloc(ProcessHeap, 0, (unsigned int)v5), (v8 = v7) != 0LL) )
  {
    memcpy_0(v7, g_pPnpInfoActual, *(unsigned int *)g_pPnpInfoActual);
    *a1 = *(_DWORD *)g_pPnpInfoActual;
    *a2 = v8;
  }
  else
  {
    *a1 = 0;
    *a2 = 0LL;
    v4 = 14;
  }
  RtlReleaseResource(&PnpInfoResource);
  return v4;
}
