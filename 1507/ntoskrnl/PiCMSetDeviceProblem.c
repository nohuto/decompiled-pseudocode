/*
 * XREFs of PiCMSetDeviceProblem @ 0x1406936F4
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _CmValidateDeviceName @ 0x14043D110 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DD148 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHavePrivilege @ 0x14058B044 (PiAuDoesClientHavePrivilege.c)
 *     PiCMSetProblem @ 0x14058B0D8 (PiCMSetProblem.c)
 *     PiCMCaptureProblemInputData @ 0x140691784 (PiCMCaptureProblemInputData.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(_OWORD *a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ebx
  _OWORD v12[25]; // [rsp+30h] [rbp-1D8h] BYREF
  int v13; // [rsp+1C8h] [rbp-40h]
  int v14; // [rsp+1CCh] [rbp-3Ch]

  *a6 = 0;
  result = PiCMCaptureProblemInputData(a1, a2, (__int64)a3, v12);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( WORD4(v12[0]) && a3 && a4 >= 8 && (v11 = DWORD1(v12[0]), (unsigned int)(DWORD1(v12[0]) - 1) <= 1) )
      {
        v10 = CmValidateDeviceName(v9, (const wchar_t *)v12 + 4);
        if ( v10 >= 0 )
          v10 = PiCMSetProblem((PCWSTR)v12 + 4, v13, v11);
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    return PiCMReturnBasicResultData(v10, v14, a3, a4, a6);
  }
  return result;
}
