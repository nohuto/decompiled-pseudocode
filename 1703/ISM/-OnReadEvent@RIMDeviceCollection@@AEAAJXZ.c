/*
 * XREFs of ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800725A4
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x1800722F0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180071E48 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180072088 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180072514 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?FindDeviceHandle@RIMDeviceCollection@@AEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180072D24 (-FindDeviceHandle@RIMDeviceCollection@@AEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::OnReadEvent(RIMDeviceCollection *this)
{
  int v1; // ebx
  char v2; // bp
  int v4; // eax
  int v5; // r9d
  int DeviceHandle; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned int *v9; // rcx
  int Buffer; // eax
  __int64 v11; // rcx
  int InputReportFromRIM; // eax
  struct RIMDevice *v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  v14 = 0LL;
  v4 = *((_DWORD *)this + 680);
  if ( v4 == -1073741528 )
  {
    RIMDeviceCollection::Close(this);
    return (unsigned int)v1;
  }
  if ( v4 >= 0 )
  {
    DeviceHandle = RIMDeviceCollection::FindDeviceHandle(this, *((void **)this + 338), &v14, 0LL);
    v1 = DeviceHandle;
    if ( DeviceHandle < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 2, 653, DeviceHandle);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v8 = *((unsigned __int16 *)this + 1364);
    v9 = (unsigned int *)*((_QWORD *)v14 + 4);
    if ( (v9[1] & 0xFFFFFEFF) != 0 )
      (*(void (__fastcall **)(RIMDeviceCollection *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(
        this,
        *v9,
        *((_QWORD *)this + 337),
        *((unsigned __int16 *)this + 1364));
    if ( *((_QWORD *)this + 337) != *((_QWORD *)this + 335) )
    {
      v2 = 1;
      RIMFreeInputBuffer(*((_QWORD *)this + 10));
      *((_QWORD *)this + 337) = 0LL;
      Buffer = RIMDeviceCollection::CreateReadBuffer(this, v8);
      v1 = Buffer;
      if ( Buffer < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v11, &MinInput_Warning_CheckResult, 2, 693, Buffer);
        goto LABEL_24;
      }
    }
    if ( *((_BYTE *)this + 2736) )
    {
      SetEvent(*((HANDLE *)this + 7));
    }
    else
    {
      InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM(this);
      if ( InputReportFromRIM < 0 )
      {
        v1 = InputReportFromRIM | 0x10000000;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v5 = 713;
          goto LABEL_23;
        }
      }
    }
  }
  else
  {
    v1 = v4 | 0x10000000;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 641;
LABEL_23:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 2, v5, v1);
    }
  }
LABEL_24:
  if ( v1 < 0 && v2 && *((_QWORD *)this + 337) )
  {
    RIMFreeInputBuffer(*((_QWORD *)this + 10));
    *((_QWORD *)this + 337) = 0LL;
  }
  return (unsigned int)v1;
}
