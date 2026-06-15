/*
 * XREFs of s_winmmGetPnpInfo @ 0x180037A80
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 */

__int64 __fastcall s_winmmGetPnpInfo(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rax
  void *v7; // rbx
  unsigned int v8; // ebx

  RtlAcquireResourceShared(&PnpInfoResource, 1u);
  v4 = *(unsigned int *)g_pPnpInfoActual;
  if ( v4 <= 0x40000
    && (ProcessHeap = GetProcessHeap(), v6 = HeapAlloc(ProcessHeap, 0, (unsigned int)v4), (v7 = v6) != 0LL) )
  {
    memcpy_0(v6, g_pPnpInfoActual, *(unsigned int *)g_pPnpInfoActual);
    *a1 = *(_DWORD *)g_pPnpInfoActual;
    *a2 = v7;
    v8 = 0;
  }
  else
  {
    *a1 = 0;
    *a2 = 0LL;
    v8 = 14;
  }
  RtlReleaseResource(&PnpInfoResource);
  return v8;
}
