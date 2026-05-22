/*
 * XREFs of ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800706B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18007025C (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMRawInputProvider::Create(
        struct IRawInputClient *a1,
        unsigned int a2,
        struct IRawInputProvider **a3)
{
  RIMRawInputProvider *v6; // rax
  RIMRawInputProvider *v7; // rbx
  RIMRawInputProvider *v8; // rdi
  int v9; // ebx
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rcx

  if ( a1 && a3 )
  {
    v6 = (RIMRawInputProvider *)malloc(0x80uLL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x80uLL);
    if ( v7 )
      v8 = RIMRawInputProvider::RIMRawInputProvider(v7, a1);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v11 = RIMRawInputProvider::Initialize(v8, a2);
      v9 = v11;
      if ( v11 >= 0 )
      {
        *a3 = v8;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 82, v11);
      }
      if ( v9 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 1) + 24LL))((__int64)v8 + 8, 1LL);
    }
    else
    {
      v9 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v10 = 79;
LABEL_19:
        Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v10, v9);
      }
    }
  }
  else
  {
    v9 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 72;
      goto LABEL_19;
    }
  }
  return (unsigned int)v9;
}
