/*
 * XREFs of ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B1FAC
 * Callers:
 *     NtGdiDeleteColorTransform @ 0x1C02B2E40 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C0257CB0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C02856C4 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreDeleteColorTransform(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v6; // [rsp+40h] [rbp-48h]
  _QWORD v7[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( (*(_DWORD *)(v7[0] + 36LL) & 0x5000) == 0x1000 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v5, a2);
      if ( v6 )
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v5, (struct XDCOBJ *)v7, 0);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v3;
}
