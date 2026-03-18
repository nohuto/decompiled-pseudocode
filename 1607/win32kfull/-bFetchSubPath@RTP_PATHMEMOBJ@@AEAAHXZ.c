/*
 * XREFs of ?bFetchSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02BB8E8
 * Callers:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02BB550 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RTP_PATHMEMOBJ::bFetchSubPath(RTP_PATHMEMOBJ *this)
{
  unsigned int v1; // ebx
  struct _PATHDATA *v3; // rsi
  int v4; // eax
  _QWORD *v5; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 32) )
  {
    v3 = (struct _PATHDATA *)((char *)this + 136);
    while ( 1 )
    {
      v4 = EPATHOBJ::bEnum(this, v3);
      *((_DWORD *)this + 32) = v4;
      if ( *((_DWORD *)this + 35) )
        break;
      if ( !v4 )
      {
        if ( !*((_DWORD *)this + 35) )
          return v1;
        break;
      }
    }
    if ( (v3->flags & 1) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 18);
      if ( v5 )
      {
        v1 = 1;
        *((_QWORD *)this + 19) = *v5;
      }
    }
  }
  return v1;
}
