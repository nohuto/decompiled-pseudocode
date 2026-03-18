/*
 * XREFs of CkptUpdate @ 0x1C0077428
 * Callers:
 *     _GetWindowPlacement @ 0x1C0076EB4 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C007734C (CkptRestore.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     GetMonitorMaxArea @ 0x1C00F40D4 (GetMonitorMaxArea.c)
 */

char __fastcall CkptUpdate(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v3; // al
  char v7; // cl
  __int128 v8; // xmm0
  int v9; // eax
  _DWORD *v10; // rdx
  _DWORD *v11; // r8
  __int64 v12; // rax
  _DWORD *v13; // rdx
  _DWORD *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 55);
  if ( (v3 & 0x20) != 0 )
  {
    *(_DWORD *)(a3 + 32) |= 8u;
    *(_DWORD *)(a3 + 16) = *a2;
    v9 = a2[1];
    *(_DWORD *)(a3 + 20) = v9;
  }
  else if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a3 + 32) |= 0x10u;
    if ( *(_QWORD *)(a1 + 88) == GetDesktopWindow(a1) )
    {
      if ( (*(_BYTE *)(a1 + 43) & 0x40) == 0 )
      {
        v12 = MonitorFromRect(a2, 1LL);
        LOBYTE(v9) = GetMonitorMaxArea(a1, v12, &v15);
        v13 = v15;
        *(_DWORD *)(a3 + 24) = *a2 - *v15;
        *(_DWORD *)(a3 + 28) = a2[1] - v13[1];
        return v9;
      }
      v11[8] &= ~0x10u;
      v9 = -1;
      v11[6] = -1;
    }
    else
    {
      v11[6] = *v10;
      v9 = v10[1];
    }
    v11[7] = v9;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 289);
    v8 = *(_OWORD *)a2;
    LOBYTE(v9) = v7 & 3;
    if ( (v7 & 3) == 3 || (v7 & 1) != 0 || (v7 & 2) != 0 )
      *(_OWORD *)(a3 + 36) = v8;
    else
      *(_OWORD *)a3 = v8;
  }
  return v9;
}
