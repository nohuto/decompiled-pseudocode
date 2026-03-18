/*
 * XREFs of xxxCallIAMGetArrangementRectangleHandler @ 0x1C01D6040
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C02078FC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01D55C4 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallIAMGetArrangementRectangleHandler(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // ecx
  int v9; // edx
  __int64 result; // rax
  __int128 v11; // xmm1
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  *a3 = 0LL;
  a3[1] = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  memset(v12, 0, sizeof(v12));
  DWORD2(v12[0]) = 0;
  *(_QWORD *)&v12[0] = a1;
  *(_QWORD *)((char *)v12 + 12) = a2;
  v8 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL);
  if ( (v8 & 0x800000) != 0 )
    DWORD2(v12[1]) = 2;
  else
    DWORD2(v12[1]) = HIBYTE(v8) & 1;
  v9 = DWORD1(v12[1]);
  HIDWORD(v12[1]) = *(_DWORD *)(gptiCurrent + 1084LL);
  if ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 392LL) + 188LL) & 1) != 0 )
  {
    v9 = DWORD1(v12[1]) | 4;
    DWORD1(v12[1]) |= 4u;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 392LL) + 188LL) & 0x10) != 0 )
  {
    v9 |= 1u;
    DWORD1(v12[1]) = v9;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 392LL) + 188LL) & 4) != 0 )
    DWORD1(v12[1]) = v9 | 2;
  result = xxxCallIAMWindowManagementHandler((struct _LARGE_STRING *)v12);
  if ( (_DWORD)result )
  {
    v11 = v12[3];
    *(_OWORD *)a3 = v12[2];
    *(_OWORD *)a4 = v11;
  }
  return result;
}
