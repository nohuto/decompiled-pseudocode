/*
 * XREFs of ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C0005974
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF43C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C025AC30 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

void __fastcall XLATE::vCheckForICM(XLATE *this, void *a2, int a3)
{
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 8) = 0LL;
  if ( (a3 & 7) != 0 )
  {
    if ( (a3 & 3) != 0 )
    {
      *((_DWORD *)this + 18) = a3;
      *((_QWORD *)this + 8) = a2;
      if ( (a3 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v4, a2);
        if ( v5 )
          *((_DWORD *)this + 1) |= 0x10u;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
      }
      else if ( (a3 & 1) != 0 )
      {
        *((_DWORD *)this + 1) |= 0x20u;
        if ( (a3 & 0x10000000) != 0 )
        {
          if ( a2 )
            *((_DWORD *)this + 1) |= 8u;
        }
      }
    }
    else if ( (a3 & 4) != 0 )
    {
      *((_QWORD *)this + 8) = 0LL;
      *((_DWORD *)this + 1) |= 0x20u;
      *((_DWORD *)this + 18) = a3;
    }
  }
}
