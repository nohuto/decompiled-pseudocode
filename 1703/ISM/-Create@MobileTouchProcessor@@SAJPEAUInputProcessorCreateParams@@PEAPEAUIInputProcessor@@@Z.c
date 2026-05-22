/*
 * XREFs of ?Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180057C30
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0MobileTouchProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800577CC (--0MobileTouchProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x180057D04 (-Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileTouchProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  MobileTouchProcessor *v4; // rax
  __int64 v5; // rcx
  MobileTouchProcessor *v6; // rbx
  MobileTouchProcessor *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v4 = (MobileTouchProcessor *)malloc(0x110uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x110uLL);
  if ( v6 )
    v7 = MobileTouchProcessor::MobileTouchProcessor(v6, *a1, a1[1]);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v9 = MobileTouchProcessor::Initialize(v7, (struct InputProcessorCreateParams *)a1);
    v8 = v9;
    if ( v9 >= 0 )
    {
      *a2 = v7;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 317, v9);
    }
  }
  else
  {
    v8 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 314, 14);
  }
  return v8;
}
