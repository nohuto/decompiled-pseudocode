/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x180072764
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x180071F60 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18007DC14 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180072088 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180072514 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int Buffer; // eax
  __int64 v10; // rcx
  int v11; // r9d
  HANDLE v12; // rcx

  CurrentProcess = GetCurrentProcess();
  if ( !DuplicateHandle(CurrentProcess, this[5], CurrentProcess, lpTargetHandle, 0, 0, 2u) )
  {
    v8 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( (v8 & 0x80000000) != 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 2, 757, v8);
      goto LABEL_15;
    }
  }
  Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, a2);
  v8 = Buffer;
  if ( Buffer < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_15;
    v11 = 765;
    goto LABEL_14;
  }
  Buffer = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
  v8 = Buffer;
  if ( Buffer >= 0 )
    return v8;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 767;
LABEL_14:
    Template_qqq(v10, &MinInput_Warning_CheckResult, 2, v11, Buffer);
  }
LABEL_15:
  v12 = this[10];
  if ( v12 )
  {
    CloseHandle(v12);
    this[10] = 0LL;
  }
  return v8;
}
