/*
 * XREFs of ExpandedMonitorSpace @ 0x1C00AAD10
 * Callers:
 *     <none>
 * Callees:
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C004812C (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     MinimumMonitorDpi @ 0x1C0048C84 (MinimumMonitorDpi.c)
 */

struct tagPOINT __fastcall ExpandedMonitorSpace(struct tagPOINT *a1)
{
  unsigned __int16 v2; // si
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // ebx
  BOOL v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct tagPOINT result; // rax

  v2 = MinimumMonitorDpi();
  v5 = 1;
  v6 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x4000) == 0;
  *a1 = ExpandMonitorSpaceVertex(v6, v2, *(struct tagPOINT *)(gpDispInfo + 104));
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0 )
  {
    v5 = 0;
  }
  result = ExpandMonitorSpaceVertex(v5, v2, *(struct tagPOINT *)(gpDispInfo + 112));
  a1[1] = result;
  return result;
}
