/*
 * XREFs of SetTiledRect @ 0x1400320E0
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     InternalGetRealClientRect @ 0x1401E675C (InternalGetRealClientRect.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  int DesktopWindow; // eax
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebp
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // ebp
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  int v19; // r14d
  int v20; // ebx
  int v21; // r11d
  int v22; // r9d
  int v23; // r10d
  int v24; // ecx
  int v25; // r8d
  int v26; // ecx
  int v27; // ecx
  int v28; // r8d
  __int64 result; // rax
  __int128 v30; // [rsp+30h] [rbp-28h] BYREF

  v30 = 0LL;
  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (unsigned int)&v30, 2, v6, 0);
  ++*(_WORD *)(a3 + 74);
  DpiForSystem = GetDpiForSystem(v7);
  DpiDependentMetric = GetDpiDependentMetric(14, DpiForSystem);
  v11 = GetDpiForSystem(v10);
  v12 = GetDpiDependentMetric(12, v11) + DpiDependentMetric;
  v14 = GetDpiForSystem(v13);
  v15 = GetDpiDependentMetric(15, v14);
  v17 = GetDpiForSystem(v16);
  v18 = GetDpiDependentMetric(13, v17);
  v19 = v30;
  v20 = v18 + v15;
  v21 = DWORD2(v30) - v30;
  v22 = HIDWORD(v30);
  v23 = DWORD1(v30);
  v24 = *(__int16 *)(a3 + 74);
  v25 = v20 * v24;
  v26 = v12 * v24;
  if ( v26 > (DWORD2(v30) - (int)v30) / 4 || v25 > (HIDWORD(v30) - DWORD1(v30)) / 4 )
  {
    *(_WORD *)(a3 + 74) = 0;
    v26 = v12;
    v25 = v20;
  }
  v27 = v19 + v26;
  *a2 = v27;
  a2[2] = v27 + (v21 + 2 * (v21 + 1)) / 4;
  v28 = v23 + v25;
  a2[1] = v28;
  result = (unsigned int)(v28 + (v22 - v23 + 2 * (v22 - v23 + 1)) / 4);
  a2[3] = result;
  return result;
}
