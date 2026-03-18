/*
 * XREFs of NtGdiScaleViewportExtEx @ 0x1C02B1820
 * Callers:
 *     <none>
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0106160 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiScaleViewportExtEx(HDC a1, int a2, int a3, int a4, int a5, unsigned __int64 a6)
{
  unsigned int v9; // ebx
  DC *v10; // rcx
  _BYTE *v11; // rdx
  _DWORD *v12; // rcx
  int v13; // edi
  int v14; // r8d
  int v15; // eax
  int v16; // r8d
  DC *v18[10]; // [rsp+28h] [rbp-50h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v10 = v18[0];
  if ( v18[0] )
  {
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (_BYTE *)a6;
      if ( a6 >= W32UserProbeAddress )
        v11 = (_BYTE *)W32UserProbeAddress;
      *v11 = *v11;
      v11[7] = v11[7];
      v10 = v18[0];
      *(_QWORD *)a6 = *(_QWORD *)(*((_QWORD *)v18[0] + 10) + 344LL);
    }
    v12 = (_DWORD *)*((_QWORD *)v10 + 10);
    if ( v12[77] <= 6u )
      goto LABEL_18;
    v13 = v12[86] * a2;
    v14 = a4 * v12[87];
    if ( a3 && a5 && (v13 != 0x80000000 || a3 != -1) && (v14 != 0x80000000 || a5 != -1) )
    {
      v15 = v14 / a5;
      v16 = v14 / a5;
      if ( v13 / a3 )
      {
        if ( v15 )
        {
          v12[86] = v13 / a3;
          *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 348LL) = v16;
          DC::MirrorWindowOrg(v18[0]);
          *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 352LL) |= 0x4090u;
LABEL_18:
          v9 = 1;
        }
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  return v9;
}
