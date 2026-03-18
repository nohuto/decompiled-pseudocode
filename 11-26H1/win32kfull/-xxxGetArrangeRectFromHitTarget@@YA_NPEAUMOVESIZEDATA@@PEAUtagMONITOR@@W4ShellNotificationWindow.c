/*
 * XREFs of ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x14019CCF0
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x14019FD9C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 */

char __fastcall xxxGetArrangeRectFromHitTarget(__int64 a1, __int64 a2, __int64 a3, int a4, int *a5)
{
  int v9; // r8d
  int v10; // eax
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // r9d
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  int v19; // ecx
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)xxxGetArrangeRectFromShell(a1, a2, a3, a5) )
    return 1;
  if ( !a4 )
  {
    *(_OWORD *)a5 = *(_OWORD *)GetMonitorWorkRectForWindow(v20, a2, *(_QWORD *)(a1 + 16));
    v9 = *(_DWORD *)(a1 + 116);
    v10 = v9;
    v11 = a5[1];
    v12 = a5[3] - v11;
    v13 = *(_DWORD *)(a1 + 108);
    if ( v9 >= v12 )
      v10 = a5[3] - v11;
    if ( v13 <= v10 )
    {
      v13 = a5[3] - v11;
      if ( v9 < v12 )
        v13 = *(_DWORD *)(a1 + 116);
    }
    v14 = v11 + v13;
    v15 = *a5;
    v16 = a5[2] - *a5;
    a5[3] = v14;
    v17 = *(_DWORD *)(a1 + 112);
    v18 = v17;
    v19 = *(_DWORD *)(a1 + 104);
    if ( v17 >= v16 )
      v18 = v16;
    if ( v19 <= v18 )
    {
      v19 = v16;
      if ( v17 < v16 )
        v19 = *(_DWORD *)(a1 + 112);
    }
    a5[2] = v15 + v19;
    return 1;
  }
  return 0;
}
