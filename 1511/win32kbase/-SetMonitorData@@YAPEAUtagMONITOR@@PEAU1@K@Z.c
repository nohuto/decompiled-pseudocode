/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006BB98
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     IntersectRect @ 0x1C00446B8 (IntersectRect.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0047008 (DrvGetCurrentDpiInfoFromHDev.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 *     GreDeleteDC @ 0x1C006BEA0 (GreDeleteDC.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D720 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
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
  HDC v10; // r12
  int CurrentDpiInfoFromHDev; // eax
  int v12; // ecx
  int *v13; // r8
  __int64 *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  _OWORD *v19; // r8
  _DWORD *v21; // rdx
  __int64 v22; // r10
  char v23[8]; // [rsp+20h] [rbp-88h] BYREF
  int v24; // [rsp+28h] [rbp-80h]

  v3 = 1;
  v4 = 4LL * a2;
  v5 = 0;
  v6 = *(__int64 **)(gpDispInfo + 8);
  v7 = 96;
  v8 = v6[v4 + 4];
  DisplayDC = GreCreateDisplayDC(v8, 0, 0LL);
  v10 = DisplayDC;
  if ( !DisplayDC )
    goto LABEL_40;
  if ( (GreGetDeviceCaps((int)DisplayDC, 94) & 0x4000) != 0 )
  {
    v3 = 0;
  }
  else
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev((_OWORD *)v8, (__int64)v23);
    v12 = v24;
    if ( CurrentDpiInfoFromHDev < 0 )
      v12 = 100;
    v7 = (96 * v12 + 50) / 0x64u;
  }
  GreDeleteDC(v10);
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
      Monitor = CreateMonitor();
    }
    if ( !Monitor )
      return 0LL;
  }
  *((_WORD *)Monitor + 76) = v7;
  if ( v3 )
    *((_DWORD *)Monitor + 6) |= 1u;
  else
    *((_DWORD *)Monitor + 6) &= ~1u;
  v13 = (int *)((char *)Monitor + 28);
  v14 = &v6[v4];
  v15 = *(_QWORD *)((char *)Monitor + 28) - v6[v4 + 6];
  if ( !v15 )
    v15 = *(_QWORD *)((char *)Monitor + 36) - v14[7];
  if ( v15 )
  {
    v21 = (_DWORD *)((char *)Monitor + 76);
    v22 = 4LL;
    do
    {
      *v21 += *(_DWORD *)((char *)v6 + v4 * 8 - (_QWORD)Monitor + (_QWORD)v21 - 28) - *(v21 - 12);
      ++v21;
      --v22;
    }
    while ( v22 );
  }
  v16 = v8;
  *(_OWORD *)v13 = *((_OWORD *)v14 + 3);
  if ( !v3 )
    v16 = *v6;
  *((_QWORD *)Monitor + 20) = v16;
  v17 = *((_DWORD *)Monitor + 19);
  *((_QWORD *)Monitor + 21) = v8;
  if ( *((_DWORD *)Monitor + 21) < v17 )
    *((_DWORD *)Monitor + 21) = v17;
  v18 = *((_DWORD *)Monitor + 20);
  if ( *((_DWORD *)Monitor + 22) < v18 )
    *((_DWORD *)Monitor + 22) = v18;
  if ( !(unsigned int)IntersectRect((_DWORD *)Monitor + 19, (int *)Monitor + 19, v13) )
    *(_OWORD *)((char *)Monitor + 76) = *v19;
  if ( v5 )
    *(_QWORD *)(gpDispInfo + 88) = Monitor;
  *((_DWORD *)Monitor + 144) = *(_DWORD *)(v8 + 2668);
  return Monitor;
}
