/*
 * XREFs of VslGetOnDemandDebugChallenge @ 0x1406208D4
 * Callers:
 *     PsIumGetOnDemandDebugChallenge @ 0x140682254 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslGetOnDemandDebugChallenge(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  NTSTATUS v9; // ebx
  unsigned int v10; // eax
  _QWORD v11[8]; // [rsp+40h] [rbp-10D8h] BYREF
  _BYTE v12[8]; // [rsp+80h] [rbp-1098h] BYREF
  __int64 v13; // [rsp+88h] [rbp-1090h]
  size_t Size; // [rsp+90h] [rbp-1088h]
  __int64 v15; // [rsp+98h] [rbp-1080h]
  _BYTE Src[4096]; // [rsp+F0h] [rbp-1028h] BYREF

  result = VslpLockPagesForTransfer((__int64)v11, (__int64)Src, 0x1000u, IoWriteAccess, 0);
  if ( (int)result >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 720);
    Size = v11[0];
    v15 = v11[7];
    v9 = VslpEnterIumSecureMode(1, 15LL, 0LL, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
    if ( v9 >= 0 )
    {
      v10 = Size;
      *a4 = Size;
      if ( v10 <= a3 )
      {
        if ( a2 )
          memmove(a2, Src, v10);
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
