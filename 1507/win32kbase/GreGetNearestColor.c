/*
 * XREFs of GreGetNearestColor @ 0x1C0025760
 * Callers:
 *     SetSysColor @ 0x1C0025420 (SetSysColor.c)
 * Callees:
 *     ulGetNearestIndexFromColorref @ 0x1C0010300 (ulGetNearestIndexFromColorref.c)
 *     ulIndexToRGB @ 0x1C0017BD0 (ulIndexToRGB.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0027050 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00277F0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00278E8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  SURFACE *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  tagPALETTEENTRY NearestIndexFromColorref; // eax
  _QWORD v9[6]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v11[80]; // [rsp+70h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v10, (struct XDCOBJ *)v9);
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
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v5, *(_QWORD *)(v9[0] + 96LL), (tagPALETTEENTRY)a2, 1u);
        a2 = ulIndexToRGB(v5, v4, *(_DWORD *)&NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v10);
    DCOBJ::~DCOBJ((DCOBJ *)v11);
  }
  else
  {
    a2 = -1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return a2;
}
