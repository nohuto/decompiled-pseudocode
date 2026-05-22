/*
 * XREFs of ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180032330
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180031838 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180031DA8 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  unsigned int v4; // ebx
  int v5; // r9d
  ControllerProcessor *v6; // rax
  ControllerProcessor *v7; // rbx
  ControllerProcessor *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  if ( *a1 && (*((_BYTE *)*a1 + 4) & 0x3B) != 0 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 336;
LABEL_5:
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 12, v5, v4);
    }
  }
  else
  {
    v6 = (ControllerProcessor *)malloc(0x5F0uLL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x5F0uLL);
    if ( v7 )
      v8 = ControllerProcessor::ControllerProcessor(v7, *a1, a1[1]);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v9 = ControllerProcessor::Initialize(v8);
      v4 = v9;
      if ( v9 >= 0 )
      {
        *a2 = v8;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v10, &MinInput_Warning_CheckResult, 12, 346, v9);
      }
    }
    else
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 343;
        goto LABEL_5;
      }
    }
  }
  return v4;
}
