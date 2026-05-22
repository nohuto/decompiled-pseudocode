/*
 * XREFs of ?Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z @ 0x180081C7C
 * Callers:
 *     ?OnHitTest@MagnifierComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800811A0 (-OnHitTest@MagnifierComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInp.c)
 *     ?DoConvergedTargetingDecision@MagnifierComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAUInputInfo@@PEAW4InputTargetingResult@@@Z @ 0x180081390 (-DoConvergedTargetingDecision@MagnifierComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAU.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0MagnifierTarget@@IEAA@PEAVMagnifierComponent@@@Z @ 0x1800818BC (--0MagnifierTarget@@IEAA@PEAVMagnifierComponent@@@Z.c)
 *     ?Initialize@MagnifierTarget@@IEAAJXZ @ 0x180081A7C (-Initialize@MagnifierTarget@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MagnifierTarget::Create(struct MagnifierComponent *a1, struct MagnifierTarget **a2)
{
  int v4; // ebx
  int v5; // r9d
  MagnifierTarget *v6; // rax
  MagnifierTarget *v7; // rbx
  MagnifierTarget *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    v6 = (MagnifierTarget *)malloc(0x60uLL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x60uLL);
    if ( v7 )
      v8 = MagnifierTarget::MagnifierTarget(v7, a1);
    else
      v8 = 0LL;
    if ( !v8 )
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v4;
      v5 = 102;
      goto LABEL_4;
    }
    v9 = MagnifierTarget::Initialize(v8);
    v4 = v9;
    if ( v9 >= 0 )
    {
      *a2 = v8;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 105, v9);
    }
    if ( v4 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 3) + 24LL))((__int64)v8 + 24, 1LL);
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 95;
LABEL_4:
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v5, v4);
    }
  }
  return (unsigned int)v4;
}
