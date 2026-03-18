/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005A4BC
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C000DA00 (DrvGetCurrentDpiInfoFromHDev.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AAB8 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     IntersectRect @ 0x1C00553DC (IntersectRect.c)
 *     GreGetDeviceCaps @ 0x1C0056DB0 (GreGetDeviceCaps.c)
 *     GreDeleteDC @ 0x1C005B5C0 (GreDeleteDC.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v3; // ebp
  __int64 v4; // rdi
  int v5; // esi
  __int64 *v6; // r14
  __int16 v7; // r13
  __int64 v8; // r15
  HDC DisplayDC; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  HDC v13; // r12
  int CurrentDpiInfoFromHDev; // eax
  int v15; // ecx
  int *v16; // r8
  __int64 *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  _OWORD *v22; // r8
  _DWORD *v24; // rdx
  __int64 v25; // r10
  char v26[8]; // [rsp+20h] [rbp-88h] BYREF
  int v27; // [rsp+28h] [rbp-80h]

  v3 = 1;
  v4 = 4LL * a2;
  v5 = 0;
  v6 = *(__int64 **)(gpDispInfo + 8);
  v7 = 96;
  v8 = v6[v4 + 4];
  DisplayDC = GreCreateDisplayDC(v8, 0, 0LL);
  v13 = DisplayDC;
  if ( !DisplayDC )
    goto LABEL_40;
  if ( (GreGetDeviceCaps(DisplayDC, 94) & 0x4000) != 0 )
  {
    v3 = 0;
  }
  else
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev((_OWORD *)v8, (__int64)v26);
    v15 = v27;
    if ( CurrentDpiInfoFromHDev < 0 )
      v15 = 100;
    v7 = (96 * v15 + 50) / 0x64u;
  }
  GreDeleteDC(v13);
  if ( v3 )
  {
LABEL_40:
    if ( !HIDWORD(v6[v4 + 6]) && !LODWORD(v6[v4 + 6]) )
      v5 = 1;
  }
  if ( !Monitor )
  {
    if ( v5 )
    {
      Monitor = (struct tagMONITOR *)gpMonitorCached;
      gpMonitorCached = 0LL;
    }
    else
    {
      Monitor = CreateMonitor(v11, v10, v12);
    }
    if ( !Monitor )
      return 0LL;
  }
  *((_WORD *)Monitor + 76) = v7;
  if ( v3 )
    *((_DWORD *)Monitor + 6) |= 1u;
  else
    *((_DWORD *)Monitor + 6) &= ~1u;
  v16 = (int *)((char *)Monitor + 28);
  v17 = &v6[v4];
  v18 = *(_QWORD *)((char *)Monitor + 28) - v6[v4 + 6];
  if ( !v18 )
    v18 = *(_QWORD *)((char *)Monitor + 36) - v17[7];
  if ( v18 )
  {
    v24 = (_DWORD *)((char *)Monitor + 76);
    v25 = 4LL;
    do
    {
      *v24 += *(_DWORD *)((char *)v6 + v4 * 8 - (_QWORD)Monitor + (_QWORD)v24 - 28) - *(v24 - 12);
      ++v24;
      --v25;
    }
    while ( v25 );
  }
  v19 = v8;
  *(_OWORD *)v16 = *((_OWORD *)v17 + 3);
  if ( !v3 )
    v19 = *v6;
  *((_QWORD *)Monitor + 20) = v19;
  v20 = *((_DWORD *)Monitor + 19);
  *((_QWORD *)Monitor + 21) = v8;
  if ( *((_DWORD *)Monitor + 21) < v20 )
    *((_DWORD *)Monitor + 21) = v20;
  v21 = *((_DWORD *)Monitor + 20);
  if ( *((_DWORD *)Monitor + 22) < v21 )
    *((_DWORD *)Monitor + 22) = v21;
  if ( !(unsigned int)IntersectRect((_DWORD *)Monitor + 19, (int *)Monitor + 19, v16) )
    *(_OWORD *)((char *)Monitor + 76) = *v22;
  if ( v5 )
    *(_QWORD *)(gpDispInfo + 88) = Monitor;
  *((_DWORD *)Monitor + 144) = *(_DWORD *)(v8 + 2668);
  return Monitor;
}
