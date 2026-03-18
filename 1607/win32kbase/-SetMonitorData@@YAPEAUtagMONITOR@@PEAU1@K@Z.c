/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005834C
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0057E4C (DrvGetCurrentDpiInfoFromHDev.c)
 *     IntersectRect @ 0x1C005903C (IntersectRect.c)
 *     GreDeleteDC @ 0x1C005A4C0 (GreDeleteDC.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C005E32C (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v2; // esi
  __int64 v4; // rdi
  __int64 *v5; // r14
  __int16 v6; // r13
  int v7; // r15d
  __int64 v8; // rbp
  HDC DisplayDC; // rax
  HDC v10; // r12
  int CurrentDpiInfoFromHDev; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // r9d
  int v16; // ecx
  _OWORD *v17; // r8
  __int64 *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  _OWORD *v23; // r8
  _DWORD *v25; // rdx
  __int64 v26; // r10
  char v27[8]; // [rsp+20h] [rbp-88h] BYREF
  int v28; // [rsp+28h] [rbp-80h]
  int v29; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v30; // [rsp+B8h] [rbp+10h]

  v2 = 0;
  v4 = 4LL * a2;
  v5 = *(__int64 **)(gpDispInfo + 8);
  v6 = 96;
  v7 = 1;
  LOWORD(v30) = 96;
  v8 = v5[v4 + 4];
  DisplayDC = GreCreateDisplayDC(v8, 0, 0);
  v10 = DisplayDC;
  if ( !DisplayDC )
    goto LABEL_42;
  if ( (GreGetDeviceCaps(DisplayDC, 94) & 0x4000) != 0 )
  {
    v7 = 0;
  }
  else
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev((_OWORD *)v8, (__int64)v27);
    v12 = v28;
    if ( CurrentDpiInfoFromHDev < 0 )
      v12 = 100;
    v6 = (96 * v12 + 50) / 0x64u;
    v13 = DrvGetCurrentDpiInfoFromHDev((_OWORD *)v8, (__int64)v27);
    v16 = v29;
    if ( v13 < 0 )
      v16 = v15;
    v30 = (unsigned int)(((unsigned int)(96 * v16 + 50) * (unsigned __int64)v14) >> 32) >> 5;
  }
  GreDeleteDC(v10);
  if ( v7 )
  {
LABEL_42:
    if ( !HIDWORD(v5[v4 + 6]) && !LODWORD(v5[v4 + 6]) )
      v2 = 1;
  }
  if ( !Monitor )
  {
    if ( v2 )
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
  *((_WORD *)Monitor + 76) = v30;
  *((_WORD *)Monitor + 77) = v6;
  if ( v7 )
    *((_DWORD *)Monitor + 6) |= 1u;
  else
    *((_DWORD *)Monitor + 6) &= ~1u;
  v17 = (_OWORD *)((char *)Monitor + 28);
  v18 = &v5[v4];
  v19 = *(_QWORD *)((char *)Monitor + 28) - v5[v4 + 6];
  if ( !v19 )
    v19 = *(_QWORD *)((char *)Monitor + 36) - v18[7];
  if ( v19 )
  {
    v25 = (_DWORD *)((char *)Monitor + 76);
    v26 = 4LL;
    do
    {
      *v25 += *(_DWORD *)((char *)v5 + v4 * 8 - (_QWORD)Monitor + (_QWORD)v25 - 28) - *(v25 - 12);
      ++v25;
      --v26;
    }
    while ( v26 );
  }
  v20 = v8;
  *v17 = *((_OWORD *)v18 + 3);
  if ( !v7 )
    v20 = *v5;
  *((_QWORD *)Monitor + 20) = v20;
  v21 = *((_DWORD *)Monitor + 19);
  *((_QWORD *)Monitor + 21) = v8;
  if ( *((_DWORD *)Monitor + 21) < v21 )
    *((_DWORD *)Monitor + 21) = v21;
  v22 = *((_DWORD *)Monitor + 20);
  if ( *((_DWORD *)Monitor + 22) < v22 )
    *((_DWORD *)Monitor + 22) = v22;
  if ( !(unsigned int)IntersectRect((char *)Monitor + 76, (char *)Monitor + 76, v17) )
    *(_OWORD *)((char *)Monitor + 76) = *v23;
  if ( v2 )
    *(_QWORD *)(gpDispInfo + 88) = Monitor;
  *((_DWORD *)Monitor + 144) = *(_DWORD *)(v8 + 2668);
  return Monitor;
}
