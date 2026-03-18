/*
 * XREFs of PiCMValidateDeviceInstance @ 0x1404DBCC4
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14043EC3C (PiPnpRtlApplyMandatoryFilters.c)
 *     PiCMReleaseObjectInputData @ 0x140442B00 (PiCMReleaseObjectInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     _CmGetDeviceStatus @ 0x1404DCCB8 (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x1404DCF48 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1404DD148 (PiCMReturnBasicResultData.c)
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
  _BYTE v19[4]; // [rsp+60h] [rbp-21h] BYREF
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
    if ( v10 == 2 && PiAuDoesClientHaveAccess(2u) )
    {
LABEL_19:
      LODWORD(a6) = 4;
      if ( (int)PnpCtxRegQueryValue(v12, Handle, (__int64)L"Phantom", (__int64)&v16, (__int64)&v15, (__int64)&a6) < 0
        || v16 != 4
        || (_DWORD)a6 != 4
        || !v15 )
      {
        goto LABEL_14;
      }
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
