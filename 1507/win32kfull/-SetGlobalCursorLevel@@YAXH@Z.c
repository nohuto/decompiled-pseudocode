/*
 * XREFs of ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C0146144
 * Callers:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C01357F4 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C01459D0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01ED628 (-MKShowMouseCursor@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGlobalCursorLevel(int a1)
{
  __int64 i; // rdx
  __int64 *j; // rcx
  __int64 k; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( grpdeskRitInput )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 16LL); i; i = *(_QWORD *)(i + 16) )
    {
      for ( j = *(__int64 **)(i + 160); j != (__int64 *)(i + 160); j = (__int64 *)*j )
      {
        v5 = *(j - 34);
        *((_DWORD *)j + 4) = a1;
        *(_DWORD *)(v5 + 328) = a1;
      }
    }
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 296); k; k = *(_QWORD *)(k + 592) )
  {
    v6 = *(_QWORD *)(k + 392);
    *(_DWORD *)(k + 680) = a1;
    *(_DWORD *)(v6 + 328) = a1;
  }
}
