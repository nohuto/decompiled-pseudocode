/*
 * XREFs of GreScaleWindowExtEx @ 0x1C02B3584
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C02A9660 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C013A07C (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r10
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // r8d
  int v14; // r10d
  int v15; // eax
  int v16; // r8d
  DC *v18[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v10 = v18[0];
  if ( v18[0] )
  {
    if ( a6 )
    {
      *a6 = *(_QWORD *)(*((_QWORD *)v18[0] + 10) + 328LL);
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 10) + 312LL) & 1) != 0 )
        *(_DWORD *)a6 = -*(_DWORD *)a6;
    }
    v11 = (_DWORD *)*((_QWORD *)v10 + 10);
    if ( v11[77] <= 6u )
      goto LABEL_15;
    v12 = a2 * v11[82];
    v13 = a4 * v11[83];
    if ( a3 && a5 && (v12 != 0x80000000 || a3 != -1) && (v13 != 0x80000000 || a5 != -1) )
    {
      v14 = v12 / a3;
      v15 = v13 / a5;
      v16 = v13 / a5;
      if ( v14 )
      {
        if ( v15 )
        {
          v11[82] = v14;
          *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 332LL) = v16;
          DC::MirrorWindowOrg(v18[0]);
          *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 352LL) |= 0x4090u;
LABEL_15:
          v9 = 1;
        }
      }
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v18);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v19);
  return v9;
}
