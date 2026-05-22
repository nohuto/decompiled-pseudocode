/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003C490
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003BD50 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18005A3F4 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardProcessor::Create(struct DeviceInfo **a1, struct KeyboardModifierState ***a2)
{
  struct KeyboardModifierState **v4; // rax
  __int64 v5; // rcx
  struct KeyboardModifierState **v6; // rbx
  int v7; // edi
  int v8; // r9d
  char v9; // al

  v4 = (struct KeyboardModifierState **)malloc(0x48uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x48uLL);
  if ( v6 )
  {
    NonPointerProcessor::NonPointerProcessor((NonPointerProcessor *)v6, *a1, a1[1]);
    *v6 = (struct KeyboardModifierState *)&KeyboardProcessor::`vftable'{for `IInputProcessor'};
    v6[1] = (struct KeyboardModifierState *)&KeyboardProcessor::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v6 + 13) = 300;
    *((_DWORD *)v6 + 12) = 0;
    v6[7] = 0LL;
    v6[7] = 0LL;
    *((_DWORD *)v6 + 16) = 0;
    v7 = KeyboardModifierState::Create(v6 + 7);
    if ( v7 < 0 )
    {
      v9 = Microsoft_OneCore_MinInputEnableBits;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_12;
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 50, v7);
    }
    v9 = Microsoft_OneCore_MinInputEnableBits;
LABEL_12:
    if ( v7 >= 0 )
    {
      *a2 = v6;
      return (unsigned int)v7;
    }
    if ( (v9 & 2) != 0 )
    {
      v8 = 71;
      goto LABEL_7;
    }
    return (unsigned int)v7;
  }
  v7 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 68;
LABEL_7:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v8, v7);
  }
  return (unsigned int)v7;
}
