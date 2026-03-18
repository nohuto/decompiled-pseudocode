/*
 * XREFs of NtGdiSetColorSpace @ 0x1C02B3230
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02B1CCC (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, HCOLORSPACE a2)
{
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v6; // [rsp+40h] [rbp-48h]
  _QWORD v7[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a2 == *(HCOLORSPACE *)(*(_QWORD *)(v7[0] + 80LL) + 120LL) )
    {
      v3 = 1;
    }
    else
    {
      COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v5, a2);
      if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v5) )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v7[0] + 104LL));
        *(_QWORD *)(*(_QWORD *)(v7[0] + 80LL) + 120LL) = a2;
        *(_QWORD *)(v7[0] + 104LL) = v6;
        INC_SHARE_REF_CNT(v6);
        v3 = 1;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v3;
}
