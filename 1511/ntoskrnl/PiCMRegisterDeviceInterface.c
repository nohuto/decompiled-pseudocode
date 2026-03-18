/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x140613C84
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14043AC34 (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x14043BC80 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140611ABC (PiCMCaptureRegisterInterfaceInputData.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(
        ULONG64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  unsigned int v9; // ebx
  _WORD *v10; // rdi
  int v11; // esi
  __int64 v12; // rcx
  signed int v13; // r10d
  PVOID v14; // rsi
  PVOID v15; // r14
  int v16; // eax
  char PreviousMode; // bl
  int v19; // eax
  __int64 v20; // rbx
  _WORD *v21; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v22; // [rsp+58h] [rbp-31h]
  char v23[4]; // [rsp+60h] [rbp-29h] BYREF
  int v24; // [rsp+64h] [rbp-25h]
  int v25[4]; // [rsp+68h] [rbp-21h] BYREF
  PVOID P; // [rsp+78h] [rbp-11h]
  PVOID v27; // [rsp+88h] [rbp-1h]
  unsigned int v28; // [rsp+90h] [rbp+7h]
  int v29; // [rsp+94h] [rbp+Bh]

  v6 = a6;
  v22 = a6;
  v21 = 0LL;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = PiCMCaptureRegisterInterfaceInputData(a1, a2, a5, v23);
  if ( v11 < 0 )
    goto LABEL_16;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    v13 = -1073741790;
LABEL_13:
    v16 = PiCMReturnBufferResultData(v13, 2 * v9, 0, 0LL, 0, v29, a3, a4, v22);
    goto LABEL_14;
  }
  v14 = P;
  if ( !P || v24 )
  {
    v13 = -1073741811;
  }
  else
  {
    v15 = v27;
    if ( v27 && v28 < 2 || !a3 || a4 < 0x14 )
    {
      v13 = -1073741811;
      goto LABEL_13;
    }
    if ( a4 - 20 < 2 )
    {
      v13 = -1073741811;
      goto LABEL_13;
    }
    v13 = CmValidateDeviceName(v12, (const wchar_t *)P);
    if ( v13 < 0 )
      goto LABEL_13;
    v19 = IopRegisterDeviceInterface((__int64)v14, v25, (__int64)v15, 1, (PVOID *)&v21, 0LL);
    v10 = v21;
    v13 = v19;
    if ( v19 < 0 )
      goto LABEL_13;
    v20 = -1LL;
    do
      ++v20;
    while ( v21[v20] );
    v9 = v20 + 1;
    if ( 2 * (unsigned __int64)v9 > a4 - 20 )
    {
      v13 = -1073741789;
      goto LABEL_13;
    }
    v6 = v22;
  }
  if ( v13 < 0 )
    goto LABEL_13;
  v16 = PiCMReturnBufferResultData(v13, 2 * v9, 0, v10, 2 * v9, v29, a3, a4, v6);
LABEL_14:
  v11 = v16;
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_16:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( P && PreviousMode )
    ExFreePoolWithTag(P, 0);
  if ( v27 && PreviousMode )
    ExFreePoolWithTag(v27, 0);
  return (unsigned int)v11;
}
