/*
 * XREFs of GreGetNearestColor @ 0x1C0046DA0
 * Callers:
 *     SetSysColor @ 0x1C0049E44 (SetSysColor.c)
 * Callees:
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002B8A0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C05C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00729D0 (ulGetNearestIndexFromColorref.c)
 *     ulIndexToRGB @ 0x1C007BE90 (ulIndexToRGB.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  __int64 v3; // rbp
  struct SURFACE *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // ecx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v3 = v10[0];
  if ( v10[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v11, (struct XDCOBJ *)v10);
    v4 = *(struct SURFACE **)(v3 + 512);
    v5 = *(_QWORD *)(v3 + 96);
    if ( !v4 )
      v4 = SURFACE::pdibDefault;
    if ( (*(_DWORD *)(v3 + 32) & 0xFFFFFFFD) != 0 )
      v6 = *((_QWORD *)v4 + 15);
    else
      v6 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 1832LL);
    v7 = *(_DWORD *)(v3 + 112);
    if ( (v7 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v3 + 80) + 112LL) || (v7 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v6 || *(_DWORD *)(v6 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v6, *(_QWORD *)(v3 + 96), a2);
        a2 = ulIndexToRGB(v6, v5, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
  }
  else
  {
    a2 = -1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return a2;
}
