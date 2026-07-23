/*
 * XREFs of PiCMGetDeviceInterfaceAlias @ 0x140528EE0
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140529544 (PiCMCaptureInterfaceAliasInputData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceAlias(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _WORD *PoolWithTag; // rdi
  unsigned __int64 v9; // r14
  NTSTATUS inited; // ebx
  unsigned int v11; // esi
  NTSTATUS v12; // eax
  UNICODE_STRING AliasSymbolicLinkName; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v16[4]; // [rsp+70h] [rbp-29h] BYREF
  int v17; // [rsp+74h] [rbp-25h]
  GUID AliasInterfaceClassGuid; // [rsp+78h] [rbp-21h] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+94h] [rbp-5h]

  PoolWithTag = 0LL;
  LODWORD(v9) = 0;
  *a6 = 0;
  inited = PiCMCaptureInterfaceAliasInputData(a1, a2, a5, v16);
  if ( inited < 0 )
    goto LABEL_23;
  if ( !SourceString || v17 )
  {
    inited = -1073741811;
  }
  else
  {
    if ( !a3 || a4 < 0x14 )
    {
      inited = -1073741811;
      goto LABEL_29;
    }
    v11 = a4 - 20;
    if ( a4 - 20 < 2 )
      v11 = 0;
    if ( v11 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x34706E50u);
      if ( !PoolWithTag )
        inited = -1073741670;
    }
    if ( inited < 0 )
      goto LABEL_29;
    if ( v11 >= 2 )
      *PoolWithTag = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( inited < 0 )
      goto LABEL_29;
    inited = IoGetDeviceInterfaceAlias(&DestinationString, &AliasInterfaceClassGuid, &AliasSymbolicLinkName);
    if ( inited < 0 )
      goto LABEL_29;
    v9 = ((unsigned __int64)AliasSymbolicLinkName.Length + 2) >> 1;
    if ( 2 * (unsigned __int64)(unsigned int)v9 > v11 )
    {
      inited = -1073741789;
    }
    else
    {
      memmove(PoolWithTag, AliasSymbolicLinkName.Buffer, AliasSymbolicLinkName.Length);
      PoolWithTag[(unsigned int)(v9 - 1)] = 0;
    }
    ExFreePoolWithTag(AliasSymbolicLinkName.Buffer, 0);
  }
  if ( inited >= 0 )
  {
    v12 = PiCMReturnBufferResultData(inited, 2 * (int)v9, 0, PoolWithTag, 2 * (int)v9, v20, a3, a4, a6);
    goto LABEL_21;
  }
LABEL_29:
  v12 = PiCMReturnBufferResultData(inited, 2 * (int)v9, 0, 0LL, 0, v20, a3, a4, a6);
LABEL_21:
  inited = v12;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_23:
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString);
  return (unsigned int)inited;
}
