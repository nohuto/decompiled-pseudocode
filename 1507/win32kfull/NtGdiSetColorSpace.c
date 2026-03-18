/*
 * XREFs of NtGdiSetColorSpace @ 0x1C02B1510
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0010394 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02B00E0 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, HCOLORSPACE a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _BYTE v6[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]
  _QWORD v8[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    if ( a2 == *(HCOLORSPACE *)(*(_QWORD *)(v8[0] + 80LL) + 120LL) )
    {
      v3 = 1;
    }
    else
    {
      COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v6, a2);
      if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v6) )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v8[0] + 104LL));
        *(_QWORD *)(*(_QWORD *)(v8[0] + 80LL) + 120LL) = a2;
        *(_QWORD *)(v8[0] + 104LL) = v7;
        INC_SHARE_REF_CNT(v7, v4);
        v3 = 1;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v6);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v3;
}
