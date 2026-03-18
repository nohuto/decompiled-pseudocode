/*
 * XREFs of ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C00095BC
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00E7048 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

void __fastcall XLATE::vCheckForICM(XLATE *this, void *a2, int a3)
{
  void *v3; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 18) = 0;
  v3 = a2;
  *((_QWORD *)this + 8) = 0LL;
  if ( (a3 & 7) != 0 )
  {
    if ( (a3 & 3) != 0 )
    {
      *((_DWORD *)this + 18) = a3;
      *((_QWORD *)this + 8) = a2;
      if ( (a3 & 2) != 0 )
      {
        LOBYTE(a2) = 14;
        v5 = HmgShareLockCheck(v3, a2);
        if ( v5 )
          *((_DWORD *)this + 1) |= 0x10u;
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
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
