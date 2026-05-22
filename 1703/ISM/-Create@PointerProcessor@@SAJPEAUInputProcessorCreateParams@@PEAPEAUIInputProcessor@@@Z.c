/*
 * XREFs of ?Create@PointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18005D940
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18005D78C (--0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@PointerProcessor@@IEAAJXZ @ 0x18005D9F8 (-Initialize@PointerProcessor@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall PointerProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  PointerProcessor *v4; // rax
  __int64 v5; // rcx
  PointerProcessor *v6; // rbx
  PointerProcessor *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v4 = (PointerProcessor *)malloc(0xA8uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0xA8uLL);
  if ( v6 )
    v7 = PointerProcessor::PointerProcessor(v6, *a1, a1[1]);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v9 = PointerProcessor::Initialize(v7);
    v8 = v9;
    if ( v9 >= 0 )
    {
      *a2 = v7;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 53, v9);
    }
  }
  else
  {
    v8 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 50, 14);
  }
  return v8;
}
