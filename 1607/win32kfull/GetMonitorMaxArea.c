/*
 * XREFs of GetMonitorMaxArea @ 0x1C01153F0
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     CkptUpdate @ 0x1C00AFE40 (CkptUpdate.c)
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C01154F8 (_HungWindowFromGhostWindow.c)
 */

__int64 __fastcall GetMonitorMaxArea(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx

  result = HungWindowFromGhostWindow();
  v7 = a1;
  if ( result )
    v7 = result;
  if ( (*(_BYTE *)(v7 + 54) & 1) != 0
    && (*(_BYTE *)(v7 + 40) & 8) != 0
    && (result = gpDispInfo, !*(_WORD *)(gpDispInfo + 208LL)) )
  {
    if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
      && (result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (result = *(_QWORD *)(result + 8), (*(_DWORD *)(result + 244) & 1) != 0) )
    {
      v8 = a2 + 92;
    }
    else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 1
           && (result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (result = *(_QWORD *)(result + 8), (*(_DWORD *)(result + 244) & 1) != 0) )
    {
      v8 = a2 + 108;
    }
    else
    {
      v8 = a2 + 76;
    }
  }
  else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
         && (result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (result = *(_QWORD *)(result + 8), (*(_DWORD *)(result + 244) & 1) != 0) )
  {
    v8 = a2 + 44;
  }
  else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 1
         && (result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (result = *(_QWORD *)(result + 8), (*(_DWORD *)(result + 244) & 1) != 0) )
  {
    v8 = a2 + 60;
  }
  else
  {
    v8 = a2 + 28;
  }
  *a3 = v8;
  return result;
}
