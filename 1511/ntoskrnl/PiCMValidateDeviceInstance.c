/*
 * XREFs of PiCMValidateDeviceInstance @ 0x14045BB10
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140440730 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiCMReleaseObjectInputData @ 0x140443254 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140443494 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14045BD10 (PiCMReturnBasicResultData.c)
 *     _CmGetDeviceStatus @ 0x14045BF1C (_CmGetDeviceStatus.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        ULONG64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-39h] BYREF
  int v15; // [rsp+50h] [rbp-31h] BYREF
  int v16; // [rsp+54h] [rbp-2Dh] BYREF
  _BYTE v17[4]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v18[4]; // [rsp+5Ch] [rbp-25h] BYREF
  char v19[4]; // [rsp+60h] [rbp-21h] BYREF
  int v20; // [rsp+64h] [rbp-1Dh]
  int v21; // [rsp+68h] [rbp-19h]
  int v22[2]; // [rsp+70h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-5h]
  unsigned int v24; // [rsp+80h] [rbp-1h]
  char v25; // [rsp+88h] [rbp+7h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  Handle = 0LL;
  LOBYTE(a6) = 1;
  *v6 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v19);
  if ( v9 < 0 )
    goto LABEL_17;
  if ( !*(_QWORD *)v22 || (v10 = v20, (unsigned int)(v20 - 1) > 1) || v21 != 1 || v23 || !a3 || a4 < 8 )
  {
    v11 = -1073741811;
    goto LABEL_14;
  }
  v11 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, *(__int64 *)v22, 1u, 1, 0, (__int64)&Handle, 0LL, 0);
  if ( v11 >= 0 )
  {
    if ( v10 == 2 && (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
LABEL_19:
      LODWORD(a6) = 4;
      if ( (int)PnpCtxRegQueryValue(v12, Handle, L"Phantom", &v16, &v15, &a6) < 0 || v16 != 4 || (_DWORD)a6 != 4 || !v15 )
        goto LABEL_14;
      goto LABEL_21;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v11 = PiPnpRtlApplyMandatoryFilters(
            *(__int64 *)&PiPnpRtlCtx,
            *(__int64 *)v22,
            1,
            (__int64)Handle,
            &SubjectContext,
            &a6);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 >= 0 )
    {
      if ( !(_BYTE)a6 )
        goto LABEL_21;
      if ( v10 == 2 )
        goto LABEL_19;
      if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v22[0], (_DWORD)Handle, (unsigned int)&v25, (__int64)v17, (__int64)v18) < 0 )
LABEL_21:
        v11 = -1073741810;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData((unsigned int)v11, v24, a3, a4, v6);
LABEL_17:
  PiCMReleaseObjectInputData((__int64)v19);
  return (unsigned int)v9;
}
