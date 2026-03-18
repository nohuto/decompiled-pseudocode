/*
 * XREFs of ClipPointToDesktop @ 0x1C0238F84
 * Callers:
 *     BoundCursor @ 0x1C00885BC (BoundCursor.c)
 * Callees:
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 */

__int64 __fastcall ClipPointToDesktop(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  _QWORD *v6; // r11
  _DWORD *v7; // r8
  int v8; // r10d
  int v9; // esi
  unsigned __int8 v10; // bp
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx

  if ( gpMonitorMouse )
  {
    result = PtInRect((_DWORD *)(gpMonitorMouse + 28LL), *(_QWORD *)a1);
    if ( (_DWORD)result )
      return result;
  }
  v5 = MonitorFromPoint(*(_QWORD *)a1, 0x22u);
  v6 = (_QWORD *)gpMonitorMouse;
  v7 = (_DWORD *)v5;
  if ( gpMonitorMouse )
  {
    if ( v5 != gpMonitorMouse && a2 )
    {
      v8 = *(_DWORD *)(a1 + 4);
      v9 = (a2 & 2) != 0 ? 6 : 0;
      v10 = (a2 & 1) != 0 ? 6 : 0;
      if ( v8 < v9 + *(_DWORD *)(gpMonitorMouse + 32LL)
        || v8 >= *(_DWORD *)(gpMonitorMouse + 40LL) - v9
        || (int)abs32(*(_DWORD *)a1 - *(_DWORD *)(gpMonitorMouse + 28LL)) < v10
        || (int)abs32(*(_DWORD *)a1 - *(_DWORD *)(gpMonitorMouse + 36LL)) < v10 )
      {
        v11 = *(_DWORD *)(gpMonitorMouse + 28LL);
        v12 = v11;
        if ( *(_DWORD *)a1 > v11 )
          v12 = *(_DWORD *)a1;
        if ( v12 >= *(_DWORD *)(gpMonitorMouse + 36LL) - 1 )
        {
          v11 = *(_DWORD *)(gpMonitorMouse + 36LL) - 1;
        }
        else if ( *(_DWORD *)a1 > v11 )
        {
          v11 = *(_DWORD *)a1;
        }
        *(_DWORD *)a1 = v11;
      }
      if ( *(_DWORD *)a1 < v9 + *(_DWORD *)(gpMonitorMouse + 28LL)
        || *(_DWORD *)a1 >= *(_DWORD *)(gpMonitorMouse + 36LL) - v9
        || (int)abs32(v8 - *(_DWORD *)(gpMonitorMouse + 32LL)) < v10
        || (int)abs32(v8 - *(_DWORD *)(gpMonitorMouse + 40LL)) < v10 )
      {
        v13 = *(_DWORD *)(gpMonitorMouse + 32LL);
        v14 = v13;
        if ( v8 > v13 )
          v14 = v8;
        if ( v14 >= *(_DWORD *)(gpMonitorMouse + 40LL) - 1 )
        {
          v13 = *(_DWORD *)(gpMonitorMouse + 40LL) - 1;
        }
        else if ( v8 > v13 )
        {
          v13 = v8;
        }
        *(_DWORD *)(a1 + 4) = v13;
      }
      result = PtInRect((_DWORD *)(gpMonitorMouse + 28LL), *(_QWORD *)a1);
      if ( (_DWORD)result )
        return result;
    }
  }
  *v6 = v7;
  v15 = v7[7];
  if ( *(_DWORD *)a1 < v15 )
    goto LABEL_34;
  v16 = v7[9];
  if ( *(_DWORD *)a1 >= v16 )
  {
    v15 = v16 - 1;
LABEL_34:
    *(_DWORD *)a1 = v15;
  }
  v17 = *(_DWORD *)(a1 + 4);
  result = (unsigned int)v7[8];
  if ( v17 >= (int)result )
  {
    result = (unsigned int)v7[10];
    if ( v17 < (int)result )
      return result;
    result = (unsigned int)(result - 1);
  }
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
