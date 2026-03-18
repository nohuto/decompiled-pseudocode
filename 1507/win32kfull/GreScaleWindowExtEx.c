/*
 * XREFs of GreScaleWindowExtEx @ 0x1C02B16F0
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C02A83D0 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0106160 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r10
  int v11; // r11d
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // r8d
  int v15; // r10d
  int v16; // eax
  int v17; // r8d
  DC *v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  v10 = v19[0];
  if ( v19[0] )
  {
    v11 = 1;
    if ( a6 )
    {
      *a6 = *(_QWORD *)(*((_QWORD *)v19[0] + 10) + 328LL);
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 10) + 312LL) & 1) != 0 )
        *(_DWORD *)a6 = -*(_DWORD *)a6;
    }
    v12 = (_DWORD *)*((_QWORD *)v10 + 10);
    if ( v12[77] <= 6u )
      goto LABEL_15;
    v13 = a2 * v12[82];
    v14 = a4 * v12[83];
    if ( a3 && a5 && (v13 != 0x80000000 || a3 != -1) && (v14 != 0x80000000 || a5 != -1) )
    {
      v15 = v13 / a3;
      v16 = v14 / a5;
      v17 = v14 / a5;
      if ( v15 )
      {
        if ( v16 )
        {
          v12[82] = v15;
          *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 332LL) = v17;
          DC::MirrorWindowOrg(v19[0]);
          *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 352LL) |= 0x4090u;
LABEL_15:
          v9 = v11;
        }
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return v9;
}
