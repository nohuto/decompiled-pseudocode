/*
 * XREFs of PiCMValidateDeviceInstance @ 0x1404F6E90
 * Callers:
 *     PiCMHandleIoctl @ 0x1404FC77C (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     PiAuDoesClientHaveAccess @ 0x1404F6100 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404F7090 (PiCMReturnBasicResultData.c)
 *     _CmGetDeviceStatus @ 0x1404F78AC (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x1404F8E1C (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404F921C (PiCMReleaseObjectInputData.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404F9F88 (PiPnpRtlApplyMandatoryFilters.c)
 *     _PnpOpenObjectRegKey @ 0x1404FC340 (_PnpOpenObjectRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x140504098 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
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
  char v19; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v20[4]; // [rsp+68h] [rbp-19h] BYREF
  int v21; // [rsp+6Ch] [rbp-15h]
  int v22; // [rsp+70h] [rbp-11h]
  int v23[3]; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+84h] [rbp+3h]
  unsigned int v25; // [rsp+88h] [rbp+7h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  Handle = 0LL;
  LOBYTE(a6) = 1;
  *v6 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v20);
  if ( v9 < 0 )
    goto LABEL_17;
  if ( !*(_QWORD *)v23 || (v10 = v21, (unsigned int)(v21 - 1) > 1) || v22 != 1 || v24 || !a3 || a4 < 8 )
  {
    v11 = -1073741811;
    goto LABEL_14;
  }
  v11 = PnpOpenObjectRegKey(PiPnpRtlCtx, v23[0], 1, 1, 0, (__int64)&Handle, 0LL, 0);
  if ( v11 >= 0 )
  {
    if ( v10 == 2 && PiAuDoesClientHaveAccess(2u) )
    {
LABEL_19:
      LODWORD(a6) = 4;
      if ( (int)PnpCtxRegQueryValue(v12, Handle, L"Phantom", &v15, &v16, &a6) < 0 || v15 != 4 || (_DWORD)a6 != 4 || !v16 )
        goto LABEL_14;
      goto LABEL_21;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v11 = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, v23[0], 1, (int)Handle, (BOOLEAN)&SubjectContext, (__int64)&a6);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 >= 0 )
    {
      if ( !(_BYTE)a6 )
        goto LABEL_21;
      if ( v10 == 2 )
        goto LABEL_19;
      if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v23[0], (_DWORD)Handle, (unsigned int)&v19, (__int64)v18, (__int64)v17) < 0 )
LABEL_21:
        v11 = -1073741810;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData((unsigned int)v11, v25, a3, a4, v6);
LABEL_17:
  PiCMReleaseObjectInputData(v20);
  return (unsigned int)v9;
}
