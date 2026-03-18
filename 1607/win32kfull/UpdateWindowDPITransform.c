/*
 * XREFs of UpdateWindowDPITransform @ 0x1C0111C18
 * Callers:
 *     UpdateWindowMonitor @ 0x1C0072260 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 */

_OWORD *__fastcall UpdateWindowDPITransform(__int64 a1, __int64 a2)
{
  _OWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  _OWORD *v8; // rbx

  result = (_OWORD *)IsTopLevelWindow(a1);
  if ( (_DWORD)result )
  {
    v7 = *(_DWORD *)(a1 + 352) & 0xF;
    if ( v7 == 2 )
    {
      v8 = 0LL;
    }
    else if ( v7 == 1 )
    {
      v8 = *(_OWORD **)(a2 + 568);
    }
    else
    {
      v8 = *(_OWORD **)(a2 + 560);
    }
    result = *(_OWORD **)(a1 + 272);
    if ( result )
    {
      if ( !v8 )
      {
        result = (_OWORD *)Win32FreePool(*(_QWORD *)(a1 + 272), v5, v6);
        *(_QWORD *)(a1 + 272) = 0LL;
        return result;
      }
    }
    else if ( !v8 )
    {
      return result;
    }
    if ( !result )
      *(_QWORD *)(a1 + 272) = Win32AllocPoolWithQuota(64LL, 2020438869LL);
    result = *(_OWORD **)(a1 + 272);
    if ( result )
    {
      *result = *v8;
      result[1] = v8[1];
      result[2] = v8[2];
      result[3] = v8[3];
    }
  }
  return result;
}
