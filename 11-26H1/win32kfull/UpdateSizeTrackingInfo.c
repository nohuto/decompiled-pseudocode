/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1402C8430
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1402C0AF0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(const struct tagWND *a1, int *a2, int *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __m128i v14; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
  v6 = *(_QWORD *)(v5 + 240);
  if ( *(_QWORD *)(v5 + 224) != v6 )
    return 0LL;
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&v14, v6, a1);
  v8 = MonitorWorkRectForWindow->m128i_i64[1];
  if ( *a2 > (int)(v8 - *(_OWORD *)MonitorWorkRectForWindow)
    || a2[1] > (int)(HIDWORD(v8) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0])) )
  {
    return 0LL;
  }
  v9 = *(_DWORD *)(v5 + 112);
  if ( v9 >= *a2 )
    v9 = *a2;
  *(_DWORD *)(v5 + 112) = v9;
  v10 = *(_DWORD *)(v5 + 116);
  if ( v10 >= a2[1] )
    v10 = a2[1];
  *(_DWORD *)(v5 + 116) = v10;
  v11 = *(_DWORD *)(v5 + 104);
  if ( v11 <= *a3 )
    v11 = *a3;
  *(_DWORD *)(v5 + 104) = v11;
  v12 = *(_DWORD *)(v5 + 108);
  if ( v12 <= a3[1] )
    v12 = a3[1];
  *(_DWORD *)(v5 + 108) = v12;
  return 1LL;
}
