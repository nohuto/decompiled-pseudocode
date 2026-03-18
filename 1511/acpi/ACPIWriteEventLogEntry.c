/*
 * XREFs of ACPIWriteEventLogEntry @ 0x1C003AFD4
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C0008D90 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000B8E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000BD60 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000BF10 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000D540 (ACPIBuildProcessDevicePhasePrw.c)
 *     LinkNodeCrackPrt @ 0x1C00172D4 (LinkNodeCrackPrt.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001F350 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C003C340 (ACPIGpeInstallRemoveIndexErrorWorker.c)
 *     LogInErrorLog @ 0x1C0046158 (LogInErrorLog.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIWriteEventLogEntry(int a1, __int16 **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int16 **v5; // r14
  int v7; // ebp
  PCWSTR *v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // ebp
  _WORD *ErrorLogEntry; // rax
  _WORD *v12; // rdi
  _WORD *v13; // rcx
  __int64 v14; // r8
  __int16 *v15; // rdx
  __int16 v16; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  if ( a3 )
  {
    v8 = (PCWSTR *)a2;
    v9 = a3;
    do
    {
      RtlInitUnicodeString(&DestinationString, *v8++);
      v7 += DestinationString.Length + 2;
      --v9;
    }
    while ( v9 );
  }
  v10 = v7 + 48;
  if ( v10 > 0xF0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(AcpiDriverObject, v10);
    v12 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      memset(ErrorLogEntry, 0, v10);
      v12[1] = 0;
      v12[2] = v4;
      *((_DWORD *)v12 + 3) = a1;
      if ( (_DWORD)v4 )
        v12[3] = 48;
      v13 = (_WORD *)((char *)v12 + (unsigned __int16)v12[3]);
      if ( (_DWORD)v4 )
      {
        v14 = v4;
        do
        {
          v15 = *v5;
          do
          {
            v16 = *v15++;
            *v13++ = v16;
          }
          while ( v16 );
          ++v5;
          --v14;
        }
        while ( v14 );
      }
      IoWriteErrorLogEntry(v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
