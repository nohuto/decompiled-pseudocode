/*
 * XREFs of ?Create@DWMHardwareCursor@@SAJPEAUIInputDisplay@@PEAPEAV1@@Z @ 0x180020060
 * Callers:
 *     ?CreateHardwareCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAUIInputDisplay@@@Z @ 0x18001E888 (-CreateHardwareCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAUIInputDisplay@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0DWMHardwareCursor@@IEAA@PEAUIInputDisplay@@@Z @ 0x18001FD7C (--0DWMHardwareCursor@@IEAA@PEAUIInputDisplay@@@Z.c)
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194 (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMHardwareCursor::Create(struct IInputDisplay *a1, struct DWMHardwareCursor **a2)
{
  int v4; // ebx
  int v5; // r9d
  DWMHardwareCursor *v6; // rax
  __int64 v7; // rcx
  DWMHardwareCursor *v8; // rbx
  DWMHardwareCursor *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx

  if ( a2 )
  {
    if ( a1 )
    {
      v6 = (DWMHardwareCursor *)malloc(0xB0uLL);
      v8 = v6;
      if ( v6 )
        memset(v6, 0, 0xB0uLL);
      if ( v8 )
        v9 = DWMHardwareCursor::DWMHardwareCursor(v8, a1);
      else
        v9 = 0LL;
      if ( v9 )
      {
        v10 = DWMHardwareCursor::Initialize(v9);
        v4 = v10;
        if ( v10 >= 0 )
        {
          *a2 = v9;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 48, v10);
        }
        if ( v4 < 0 )
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v9 + 2) + 24LL))((__int64)v9 + 16, 1LL);
      }
      else
      {
        v4 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 46, 14);
      }
    }
    else
    {
      v4 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 43;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 42;
LABEL_4:
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v5, 87);
    }
  }
  return (unsigned int)v4;
}
