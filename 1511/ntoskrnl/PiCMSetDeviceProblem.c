/*
 * XREFs of PiCMSetDeviceProblem @ 0x140613F24
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _CmValidateDeviceName @ 0x14043BC80 (_CmValidateDeviceName.c)
 *     PiCMReturnBasicResultData @ 0x14045BD10 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x140606AEC (PiAuDoesClientHavePrivilege.c)
 *     PiCMCaptureProblemInputData @ 0x1406119C0 (PiCMCaptureProblemInputData.c)
 *     PiCMSetProblem @ 0x140614004 (PiCMSetProblem.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(_OWORD *a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // eax
  _OWORD v11[25]; // [rsp+30h] [rbp-1D8h] BYREF
  int v12; // [rsp+1CCh] [rbp-3Ch]

  *a6 = 0;
  result = PiCMCaptureProblemInputData(a1, a2, (__int64)a3, v11);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( WORD4(v11[0]) && a3 && a4 >= 8 && (unsigned int)(DWORD1(v11[0]) - 1) <= 1 )
      {
        v10 = CmValidateDeviceName(v9, (const wchar_t *)v11 + 4);
        if ( v10 >= 0 )
          v10 = PiCMSetProblem((PCWSTR)v11 + 4);
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
    return PiCMReturnBasicResultData(v10, v12, a3, a4, a6);
  }
  return result;
}
