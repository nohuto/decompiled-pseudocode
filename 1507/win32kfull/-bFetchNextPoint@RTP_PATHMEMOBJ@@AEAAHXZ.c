/*
 * XREFs of ?bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02B90E0
 * Callers:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02B8EAC (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RTP_PATHMEMOBJ::bFetchNextPoint(RTP_PATHMEMOBJ *this)
{
  __int64 v1; // rbp
  char v3; // di
  _DWORD *v4; // rsi
  int v5; // eax
  bool v6; // zf

  v1 = *((int *)this + 49);
  v3 = 1;
  *((_DWORD *)this + 49) = v1 + 1;
  if ( (int)v1 + 1 > 2 )
    *((_DWORD *)this + 49) = v1 - 2;
  if ( !*((_DWORD *)this + 35) )
  {
    v4 = (_DWORD *)((char *)this + 136);
    if ( (*((_DWORD *)this + 34) & 2) != 0 )
    {
      *((_DWORD *)this + v1 + 50) = 0;
      v3 = 3;
      *(_QWORD *)((char *)this + 8 * v1 + 212) = *((_QWORD *)this + 19);
      --*((_DWORD *)this + 35);
    }
    else
    {
      v5 = EPATHOBJ::bEnum(this, (struct _PATHDATA *)((char *)this + 136));
      v6 = *((_DWORD *)this + 35) == 0;
      *((_DWORD *)this + 32) = v5;
      if ( v6 || (*v4 & 1) != 0 || !*((_QWORD *)this + 18) )
        v3 = 2;
    }
  }
  if ( (v3 & 2) == 0 && *((int *)this + 35) > 0 )
  {
    *(_QWORD *)((char *)this + 8 * v1 + 212) = **((_QWORD **)this + 18);
    *((_DWORD *)this + v1 + 50) = *((_DWORD *)this + 35) == 1 && (*((_DWORD *)this + 34) & 2) != 0;
    *((_QWORD *)this + 18) += 8LL;
    --*((_DWORD *)this + 35);
  }
  return v3 & 1;
}
