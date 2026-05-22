/*
 * XREFs of ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003B7E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18003B5A0 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18005A3F4 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HeatProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  NonPointerProcessor *v4; // rax
  __int64 v5; // rcx
  NonPointerProcessor *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx

  v4 = (NonPointerProcessor *)malloc(0x48uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x48uLL);
  if ( v6 )
  {
    NonPointerProcessor::NonPointerProcessor(v6, *a1, a1[1]);
    *(_QWORD *)v6 = &HeatProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v6 + 1) = &HeatProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    v8 = HeatProcessor::Initialize(v6, *a1, a1[1]);
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v6;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 103, v8);
    }
  }
  else
  {
    v7 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 100, 14);
  }
  return v7;
}
