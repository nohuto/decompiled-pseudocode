/*
 * XREFs of ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x18007C3CC
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectionBorderManager::_FindProjectionVisualByRect(
        CProjectionBorderManager *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  struct tagRECT rcDst; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1;
  v3 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( !IntersectRect(&rcDst, a2, (const RECT *)(48 * v3 + *((_QWORD *)this + 1) + 8LL)) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 8) )
        return v2;
    }
    return (unsigned int)v3;
  }
  return v2;
}
