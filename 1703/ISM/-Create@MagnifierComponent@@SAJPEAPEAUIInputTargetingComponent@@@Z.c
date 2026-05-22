/*
 * XREFs of ?Create@MagnifierComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x180080FC8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??0MagnifierComponent@@IEAA@XZ @ 0x180080E2C (--0MagnifierComponent@@IEAA@XZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierComponent::Create(struct IInputTargetingComponent **a1)
{
  int v2; // ebx
  int v3; // r9d
  MagnifierComponent *v4; // rax
  MagnifierComponent *v5; // rbx
  MagnifierComponent *v6; // rdi
  __int64 v7; // rcx
  char v8; // al

  if ( a1 )
  {
    v4 = (MagnifierComponent *)malloc(0x60uLL);
    v5 = v4;
    if ( v4 )
      memset(v4, 0, 0x60uLL);
    if ( v5 )
      v6 = MagnifierComponent::MagnifierComponent(v5);
    else
      v6 = 0LL;
    if ( !v6 )
    {
      v2 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v2;
      v3 = 94;
      goto LABEL_4;
    }
    v2 = RegistryWatcher::Create(
           (__int64)a1,
           L"System\\Accessibility",
           v6,
           (void (*)(void *, HKEY))MagnifierComponent::OnMagnifierRegistryKeyChangeStatic,
           (struct RegistryWatcher **)v6 + 6);
    if ( v2 < 0 )
    {
      v8 = Microsoft_OneCore_MinInputEnableBits;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_17:
        if ( v2 >= 0 )
        {
          *a1 = v6;
        }
        else if ( (v8 & 2) != 0 )
        {
          Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 97, v2);
        }
        if ( v2 < 0 )
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v6 + 1) + 24LL))((__int64)v6 + 8, 1LL);
        return (unsigned int)v2;
      }
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 72, v2);
    }
    v8 = Microsoft_OneCore_MinInputEnableBits;
    goto LABEL_17;
  }
  v2 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v3 = 87;
LABEL_4:
    Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v3, v2);
  }
  return (unsigned int)v2;
}
