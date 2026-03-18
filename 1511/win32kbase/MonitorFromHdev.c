/*
 * XREFs of MonitorFromHdev @ 0x1C0044694
 * Callers:
 *     UserGetMonitorDC @ 0x1C0043940 (UserGetMonitorDC.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFromHdev(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(gpDispInfo + 96); result && *(_QWORD *)(result + 160) != a1; result = *(_QWORD *)(result + 16) )
    ;
  return result;
}
