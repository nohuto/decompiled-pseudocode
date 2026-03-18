/*
 * XREFs of ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02B8E5C
 * Callers:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C025B200 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 * Callees:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02B8EAC (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bFetchSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02B91F4 (-bFetchSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 */

__int64 __fastcall RTP_PATHMEMOBJ::bDiagonalizePath(RTP_PATHMEMOBJ *this, struct EPATHOBJ *a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  *(_DWORD *)this &= ~8u;
  *((_QWORD *)this + 20) = a2;
  v3 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 32) = 1;
  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 32);
  while ( (unsigned int)RTP_PATHMEMOBJ::bFetchSubPath(this) )
  {
    result = RTP_PATHMEMOBJ::bDiagonalizeSubPath(this);
    if ( !(_DWORD)result )
      return result;
  }
  return 1LL;
}
