/*
 * XREFs of PiCMOpenClassKey @ 0x1404BE4F4
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PiCMReleaseRegistryInputData @ 0x140442DCC (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x140442DFC (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x140442E78 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x140443F00 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     RtlUpcaseUnicodeString @ 0x1404D6BE0 (RtlUpcaseUnicodeString.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404DDC6C (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DE0A0 (_CmOpenInstallerClassRegKey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140515D70 (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInterfaceClass @ 0x140517C80 (_CmCreateInterfaceClass.c)
 *     _CmCreateInstallerClass @ 0x140692890 (_CmCreateInstallerClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(_DWORD *a1, unsigned int a2, _OWORD *a3, unsigned int a4, int a5, _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // ecx
  int v11; // edi
  int v12; // r8d
  int v13; // edi
  int inited; // ebx
  int v15; // r8d
  int v16; // r9d
  bool v17; // zf
  ACCESS_MASK v18; // edi
  __int64 v19; // rdx
  int InstallerClass; // eax
  bool v21; // sf
  HANDLE v23; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  char v25[4]; // [rsp+60h] [rbp-1h] BYREF
  int v26; // [rsp+64h] [rbp+3h]
  int v27; // [rsp+68h] [rbp+7h]
  PCWSTR SourceString; // [rsp+70h] [rbp+Fh]
  ACCESS_MASK v29; // [rsp+7Ch] [rbp+1Bh]
  int v30; // [rsp+80h] [rbp+1Fh]
  int v31; // [rsp+84h] [rbp+23h]
  int v32; // [rsp+88h] [rbp+27h]

  v6 = Handle;
  Handle = 0LL;
  v23 = 0LL;
  *v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = PiCMCaptureRegistryInputData(a1, a2, a5, v25);
  if ( v11 < 0 )
    goto LABEL_32;
  if ( v26 || v31 || !a3 || a4 < 0x10 || (v13 = v27, (unsigned int)(v27 - 2) > 1) )
  {
    inited = -1073741811;
    goto LABEL_26;
  }
  if ( !SourceString )
  {
    v18 = v29;
    inited = PnpCtxOpenContextBaseKey(v10, 8 - (unsigned int)(v27 != 3), v12, v29, (__int64)&Handle);
    v21 = inited < 0;
LABEL_23:
    if ( !v21 )
      inited = PiCMDuplicateRegistryHandle(Handle, v19, v18, PreviousMode, &v23);
    goto LABEL_26;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( inited < 0 )
    goto LABEL_26;
  inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  if ( inited < 0 )
    goto LABEL_26;
  v17 = v13 == 3;
  v18 = v29;
  if ( !v17 )
  {
    inited = CmOpenInstallerClassRegKey(PiPnpRtlCtx, (_DWORD)SourceString, v15, v16, v29, 0, (__int64)&Handle, 0LL);
    if ( inited != -1073741772 )
      goto LABEL_17;
    if ( v30 != 1 )
      goto LABEL_26;
    if ( !PiAuDoesClientHaveAccess(2u) )
      goto LABEL_14;
    InstallerClass = CmCreateInstallerClass(PiPnpRtlCtx, (_DWORD)SourceString, v18, (unsigned int)&Handle, 0LL, 0);
    goto LABEL_16;
  }
  inited = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (_DWORD)SourceString, v15, v16, v29, 0, (__int64)&Handle, 0LL);
  if ( inited != -1073741772 )
  {
LABEL_17:
    v21 = inited < 0;
    goto LABEL_23;
  }
  if ( v30 == 1 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
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
  v11 = PiCMReturnHandleResultData(inited, (__int64)v23, v32, a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v11 < 0 || inited < 0 )
  {
    if ( v23 )
      ObCloseHandle(v23, PreviousMode);
  }
LABEL_32:
  PiCMReleaseRegistryInputData((__int64)v25);
  return (unsigned int)v11;
}
