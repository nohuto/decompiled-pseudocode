/*
 * XREFs of GreGetNearestColor @ 0x1C005B330
 * Callers:
 *     SetSysColor @ 0x1C005B1F4 (SetSysColor.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002F3B0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002F964 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0076F80 (ulGetNearestIndexFromColorref.c)
 *     ulIndexToRGB @ 0x1C00804E0 (ulIndexToRGB.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  SURFACE *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v9[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v12[80]; // [rsp+70h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v11, (struct XDCOBJ *)v9);
    v3 = *(SURFACE **)(v9[0] + 512LL);
    v4 = *(_QWORD *)(v9[0] + 96LL);
    if ( !v3 )
      v3 = SURFACE::pdibDefault;
    if ( (*(_DWORD *)(v9[0] + 32LL) & 0xFFFFFFFD) != 0 )
      v5 = *((_QWORD *)v3 + 15);
    else
      v5 = *(_QWORD *)(*(_QWORD *)(v9[0] + 48LL) + 1832LL);
    v6 = *(_DWORD *)(v9[0] + 112LL);
    if ( (v6 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v9[0] + 80LL) + 112LL) || (v6 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v5 || *(_DWORD *)(v5 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v5, *(_QWORD *)(v9[0] + 96LL), a2, 1LL);
        a2 = ulIndexToRGB(v5, v4, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
    DCOBJ::~DCOBJ((DCOBJ *)v12);
  }
  else
  {
    a2 = -1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v10);
  return a2;
}
