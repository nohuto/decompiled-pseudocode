/*
 * XREFs of GetMonitorMaxArea @ 0x1C0085A80
 * Callers:
 *     CkptUpdate @ 0x1C0085D0C (CkptUpdate.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C0085B70 (_HungWindowFromGhostWindow.c)
 */

__int64 __fastcall GetMonitorMaxArea(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rbx
  int v10; // edx

  result = HungWindowFromGhostWindow();
  v7 = a1;
  if ( result )
    v7 = result;
  if ( (*(_BYTE *)(v7 + 54) & 1) != 0
    && (*(_BYTE *)(v7 + 40) & 8) != 0
    && (result = gpDispInfo, !*(_WORD *)(gpDispInfo + 208LL)) )
  {
    v10 = *(_DWORD *)(a1 + 344);
    if ( v10
      || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL), (*(_DWORD *)(result + 260) & 1) == 0) )
    {
      if ( v10 == 1
        && (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL), (*(_DWORD *)(result + 260) & 1) != 0) )
      {
        v9 = a2 + 108;
      }
      else
      {
        v9 = a2 + 76;
      }
    }
    else
    {
      v9 = a2 + 92;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 344);
    if ( v8
      || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL), (*(_DWORD *)(result + 260) & 1) == 0) )
    {
      if ( v8 == 1
        && (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL), (*(_DWORD *)(result + 260) & 1) != 0) )
      {
        v9 = a2 + 60;
      }
      else
      {
        v9 = a2 + 28;
      }
    }
    else
    {
      v9 = a2 + 44;
    }
  }
  *a3 = v9;
  return result;
}
