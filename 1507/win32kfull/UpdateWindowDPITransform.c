/*
 * XREFs of UpdateWindowDPITransform @ 0x1C0058AD0
 * Callers:
 *     UpdateWindowMonitor @ 0x1C005C120 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 */

_OWORD *__fastcall UpdateWindowDPITransform(__int64 a1, __int64 a2)
{
  _OWORD *result; // rax
  int v5; // eax
  _OWORD *v6; // rbx

  result = (_OWORD *)IsTopLevelWindow(a1);
  if ( (_DWORD)result )
  {
    v5 = *(_DWORD *)(a1 + 344);
    if ( v5 == 2 )
    {
      v6 = 0LL;
    }
    else if ( v5 == 1 )
    {
      v6 = *(_OWORD **)(a2 + 568);
    }
    else
    {
      v6 = *(_OWORD **)(a2 + 560);
    }
    result = *(_OWORD **)(a1 + 272);
    if ( result )
    {
      if ( !v6 )
      {
        result = (_OWORD *)Win32FreePool(*(_QWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 272) = 0LL;
        return result;
      }
    }
    else if ( !v6 )
    {
      return result;
    }
    if ( !result )
      *(_QWORD *)(a1 + 272) = Win32AllocPoolWithQuota(64LL, 2020438869LL);
    result = *(_OWORD **)(a1 + 272);
    if ( result )
    {
      *result = *v6;
      result[1] = v6[1];
      result[2] = v6[2];
      result[3] = v6[3];
    }
  }
  return result;
}
