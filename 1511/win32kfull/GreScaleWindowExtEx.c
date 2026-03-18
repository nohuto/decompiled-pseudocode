/*
 * XREFs of GreScaleWindowExtEx @ 0x1C02B0990
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C02A7BE0 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C01306B8 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r10
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // r9d
  __int64 v14; // r10
  DC *v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v10 = v16[0];
  if ( v16[0] )
  {
    if ( a6 )
    {
      *a6 = *(_QWORD *)(*((_QWORD *)v16[0] + 10) + 328LL);
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 10) + 312LL) & 1) != 0 )
        *(_DWORD *)a6 = -*(_DWORD *)a6;
    }
    v11 = (_DWORD *)*((_QWORD *)v10 + 10);
    if ( v11[77] <= 6u )
      goto LABEL_15;
    v12 = a2 * v11[82];
    v13 = a4 * v11[83];
    if ( a3 && a5 && (v12 != 0x80000000 || a3 != -1) && (v13 != 0x80000000 || a5 != -1) && v12 / a3 && v13 / a5 )
    {
      v11[82] = v12 / a3;
      *(_DWORD *)(*((_QWORD *)v10 + 10) + 332LL) = v13 / a5;
      DC::MirrorWindowOrg(v10);
      *(_DWORD *)(*(_QWORD *)(v14 + 80) + 352LL) |= 0x4090u;
LABEL_15:
      v9 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v16);
  return v9;
}
