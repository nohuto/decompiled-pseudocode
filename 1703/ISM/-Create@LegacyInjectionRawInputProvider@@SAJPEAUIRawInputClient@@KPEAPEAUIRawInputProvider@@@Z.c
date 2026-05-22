/*
 * XREFs of ?Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006F150
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0LegacyInjectionRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18006EEEC (--0LegacyInjectionRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006F240 (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LegacyInjectionRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  LegacyInjectionRawInputProvider *v5; // rax
  LegacyInjectionRawInputProvider *v6; // rbx
  LegacyInjectionRawInputProvider *v7; // rdi
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rcx

  if ( a1 && a3 )
  {
    v5 = (LegacyInjectionRawInputProvider *)malloc(0x80uLL);
    v6 = v5;
    if ( v5 )
      memset(v5, 0, 0x80uLL);
    if ( v6 )
      v7 = LegacyInjectionRawInputProvider::LegacyInjectionRawInputProvider(v6, a1);
    else
      v7 = 0LL;
    if ( v7 )
    {
      v10 = LegacyInjectionRawInputProvider::Initialize(v7);
      v8 = v10;
      if ( v10 >= 0 )
      {
        *a3 = (LegacyInjectionRawInputProvider *)((char *)v7 + 16);
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 75, v10);
      }
    }
    else
    {
      v8 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 72;
LABEL_17:
        Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v9, v8);
      }
    }
  }
  else
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 65;
      goto LABEL_17;
    }
  }
  return v8;
}
