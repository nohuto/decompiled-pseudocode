/*
 * XREFs of xxxCallIAMGetArrangementRectangleHandler @ 0x1C01D7B60
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C0207C40 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?GetModifiersStateForShell@@YAIPEBUtagTHREADINFO@@@Z @ 0x1C01D65FC (-GetModifiersStateForShell@@YAIPEBUtagTHREADINFO@@@Z.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01D716C (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallIAMGetArrangementRectangleHandler(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // ecx
  __int64 result; // rax
  __int128 v10; // xmm1
  _OWORD v11[4]; // [rsp+20h] [rbp-58h] BYREF

  *a3 = 0LL;
  a3[1] = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  memset(v11, 0, sizeof(v11));
  DWORD2(v11[0]) = 0;
  *(_QWORD *)&v11[0] = a1;
  *(_QWORD *)((char *)v11 + 12) = a2;
  v8 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL);
  if ( (v8 & 0x800000) != 0 )
    DWORD2(v11[1]) = 2;
  else
    DWORD2(v11[1]) = HIBYTE(v8) & 1;
  HIDWORD(v11[1]) = *(_DWORD *)(gptiCurrent + 1076LL);
  DWORD1(v11[1]) = GetModifiersStateForShell(gptiCurrent);
  result = xxxCallIAMWindowManagementHandler((const struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *const)v11);
  if ( (_DWORD)result )
  {
    v10 = v11[3];
    *(_OWORD *)a3 = v11[2];
    *(_OWORD *)a4 = v10;
  }
  return result;
}
