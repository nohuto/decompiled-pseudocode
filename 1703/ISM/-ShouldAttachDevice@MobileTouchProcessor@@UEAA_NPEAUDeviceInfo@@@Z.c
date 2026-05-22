/*
 * XREFs of ?ShouldAttachDevice@MobileTouchProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180057A20
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002C8B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?IsMobileTouchDevice@MobileTouchProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x1800579A0 (-IsMobileTouchDevice@MobileTouchProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 */

char __fastcall MobileTouchProcessor::ShouldAttachDevice(MobileTouchProcessor *this, struct DeviceInfo *a2)
{
  __int64 v5; // rax
  int ChildInputProcessor; // eax
  __int64 v7; // rcx
  _QWORD v8[4]; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  char v10; // [rsp+54h] [rbp-14h]

  if ( (unsigned int)MobileTouchProcessor::IsMobileTouchDevice(a2) )
  {
    if ( (*((_BYTE *)a2 + 4) & 8) != 0 && !*((_QWORD *)this + 22) )
    {
      *((_QWORD *)this + 22) = a2;
      return 1;
    }
    if ( *((char *)a2 + 4) < 0 && !*((_QWORD *)this + 23) )
    {
      *((_QWORD *)this + 23) = a2;
      *((_DWORD *)a2 + 1) |= 8u;
      v5 = *((_QWORD *)this + 23);
      v8[3] = 0LL;
      v9 = -1;
      v8[0] = v5;
      v8[1] = *((_QWORD *)this + 3);
      v10 = 1;
      v8[2] = this;
      ChildInputProcessor = CreateChildInputProcessor(128, (__int64)v8, (__int64)this + 168);
      if ( ChildInputProcessor >= 0 )
        return 1;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 179, ChildInputProcessor);
    }
  }
  return 0;
}
