/*
 * XREFs of ClipPointToDesktop @ 0x1C0238B70
 * Callers:
 *     BoundCursor @ 0x1C00407FC (BoundCursor.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 */

__int64 __fastcall ClipPointToDesktop(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  _QWORD *v7; // r11
  _DWORD *v8; // r8
  int v9; // r10d
  int v10; // esi
  unsigned __int8 v11; // bp
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx

  if ( gpMonitorMouse )
  {
    result = PtInRect((_DWORD *)(gpMonitorMouse + 28LL), *(_QWORD *)a1);
    if ( (_DWORD)result )
      return result;
  }
  v6 = MonitorFromPoint(*(_QWORD *)a1, 34LL, a3);
  v7 = (_QWORD *)gpMonitorMouse;
  v8 = (_DWORD *)v6;
  if ( gpMonitorMouse )
  {
    if ( v6 != gpMonitorMouse && a2 )
    {
      v9 = *(_DWORD *)(a1 + 4);
      v10 = (a2 & 2) != 0 ? 6 : 0;
      v11 = (a2 & 1) != 0 ? 6 : 0;
      if ( v9 < v10 + *(_DWORD *)(gpMonitorMouse + 32LL)
        || v9 >= *(_DWORD *)(gpMonitorMouse + 40LL) - v10
        || (int)abs32(*(_DWORD *)a1 - *(_DWORD *)(gpMonitorMouse + 28LL)) < v11
        || (int)abs32(*(_DWORD *)a1 - *(_DWORD *)(gpMonitorMouse + 36LL)) < v11 )
      {
        v12 = *(_DWORD *)(gpMonitorMouse + 28LL);
        v13 = v12;
        if ( *(_DWORD *)a1 > v12 )
          v13 = *(_DWORD *)a1;
        if ( v13 >= *(_DWORD *)(gpMonitorMouse + 36LL) - 1 )
        {
          v12 = *(_DWORD *)(gpMonitorMouse + 36LL) - 1;
        }
        else if ( *(_DWORD *)a1 > v12 )
        {
          v12 = *(_DWORD *)a1;
        }
        *(_DWORD *)a1 = v12;
      }
      if ( *(_DWORD *)a1 < v10 + *(_DWORD *)(gpMonitorMouse + 28LL)
        || *(_DWORD *)a1 >= *(_DWORD *)(gpMonitorMouse + 36LL) - v10
        || (int)abs32(v9 - *(_DWORD *)(gpMonitorMouse + 32LL)) < v11
        || (int)abs32(v9 - *(_DWORD *)(gpMonitorMouse + 40LL)) < v11 )
      {
        v14 = *(_DWORD *)(gpMonitorMouse + 32LL);
        v15 = v14;
        if ( v9 > v14 )
          v15 = v9;
        if ( v15 >= *(_DWORD *)(gpMonitorMouse + 40LL) - 1 )
        {
          v14 = *(_DWORD *)(gpMonitorMouse + 40LL) - 1;
        }
        else if ( v9 > v14 )
        {
          v14 = v9;
        }
        *(_DWORD *)(a1 + 4) = v14;
      }
      result = PtInRect((_DWORD *)(gpMonitorMouse + 28LL), *(_QWORD *)a1);
      if ( (_DWORD)result )
        return result;
    }
  }
  *v7 = v8;
  v16 = v8[7];
  if ( *(_DWORD *)a1 < v16 )
    goto LABEL_34;
  v17 = v8[9];
  if ( *(_DWORD *)a1 >= v17 )
  {
    v16 = v17 - 1;
LABEL_34:
    *(_DWORD *)a1 = v16;
  }
  v18 = *(_DWORD *)(a1 + 4);
  result = (unsigned int)v8[8];
  if ( v18 >= (int)result )
  {
    result = (unsigned int)v8[10];
    if ( v18 < (int)result )
      return result;
    result = (unsigned int)(result - 1);
  }
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
