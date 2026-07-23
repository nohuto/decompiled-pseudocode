/*
 * XREFs of PiCMOpenClassKey @ 0x1404C94B4
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404D9DAC (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DA9EC (_CmOpenInstallerClassRegKey.c)
 *     PiCMDuplicateRegistryHandle @ 0x1404DB940 (PiCMDuplicateRegistryHandle.c)
 *     PiCMReturnHandleResultData @ 0x1404DCA48 (PiCMReturnHandleResultData.c)
 *     PiCMReleaseRegistryInputData @ 0x1404DCD98 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1404E47FC (PiCMCaptureRegistryInputData.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1406D70C8 (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInstallerClass @ 0x1406D74EC (_CmCreateInstallerClass.c)
 *     _CmCreateInterfaceClass @ 0x1406D76F4 (_CmCreateInterfaceClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // ecx
  int v11; // edi
  int v12; // r8d
  int v13; // edi
  NTSTATUS inited; // ebx
  int v15; // r8d
  int v16; // r9d
  bool v17; // zf
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r9
  NTSTATUS InstallerClass; // eax
  bool v22; // sf
  HANDLE v24; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v26[4]; // [rsp+60h] [rbp-1h] BYREF
  int v27; // [rsp+64h] [rbp+3h]
  int v28; // [rsp+68h] [rbp+7h]
  PCWSTR SourceString; // [rsp+70h] [rbp+Fh]
  unsigned int v30; // [rsp+7Ch] [rbp+1Bh]
  int v31; // [rsp+80h] [rbp+1Fh]
  int v32; // [rsp+84h] [rbp+23h]
  unsigned int v33; // [rsp+88h] [rbp+27h]

  v6 = Handle;
  Handle = 0LL;
  v24 = 0LL;
  *v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = PiCMCaptureRegistryInputData(a1, a2, a5, v26);
  if ( v11 < 0 )
    goto LABEL_32;
  if ( v27 || v32 || !a3 || a4 < 0x10 || (v13 = v28, (unsigned int)(v28 - 2) > 1) )
  {
    inited = -1073741811;
    goto LABEL_26;
  }
  if ( !SourceString )
  {
    v18 = v30;
    inited = PnpCtxOpenContextBaseKey(v10, 8 - (unsigned int)(v28 != 3), v12, v30, (__int64)&Handle);
    v22 = inited < 0;
LABEL_23:
    if ( !v22 )
    {
      LOBYTE(v20) = PreviousMode;
      inited = PiCMDuplicateRegistryHandle(Handle, v19, v18, v20, &v24);
    }
    goto LABEL_26;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( inited < 0 )
    goto LABEL_26;
  inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  if ( inited < 0 )
    goto LABEL_26;
  v17 = v13 == 3;
  v18 = v30;
  if ( !v17 )
  {
    inited = CmOpenInstallerClassRegKey(PiPnpRtlCtx, (_DWORD)SourceString, v15, v16, v30, 0, (__int64)&Handle, 0LL);
    if ( inited != -1073741772 )
      goto LABEL_17;
    if ( v31 != 1 )
      goto LABEL_26;
    if ( !(unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
      goto LABEL_14;
    InstallerClass = CmCreateInstallerClass(PiPnpRtlCtx, (_DWORD)SourceString, v18, (unsigned int)&Handle, 0LL, 0);
    goto LABEL_16;
  }
  inited = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (_DWORD)SourceString, v15, v16, v30, 0, (__int64)&Handle, 0LL);
  if ( inited != -1073741772 )
  {
LABEL_17:
    v22 = inited < 0;
    goto LABEL_23;
  }
  if ( v31 == 1 )
  {
    if ( !(unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
LABEL_14:
      inited = -1073741790;
      goto LABEL_26;
    }
    InstallerClass = CmCreateInterfaceClass(PiPnpRtlCtx, (_DWORD)SourceString, v18, (unsigned int)&Handle, 0LL, 0);
LABEL_16:
    inited = InstallerClass;
    goto LABEL_17;
  }
LABEL_26:
  v11 = PiCMReturnHandleResultData((unsigned int)inited, v24, v33, a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v11 < 0 || inited < 0 )
  {
    if ( v24 )
      ObCloseHandle(v24, PreviousMode);
  }
LABEL_32:
  PiCMReleaseRegistryInputData(v26);
  return (unsigned int)v11;
}
