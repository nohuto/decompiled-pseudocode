/*
 * XREFs of ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180041974
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x1800416E8 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CStreamClassPolicyManager::CreateInstance(struct CStreamClassPolicyManager **a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax

  v2 = 0;
  v3 = operator new(0x18uLL);
  if ( v3 )
  {
    v3[2] = 1;
    *(_QWORD *)v3 = &CStreamClassPolicyManager::`vftable'{for `CRefCountedObject'};
    *((_QWORD *)v3 + 2) = &CStreamClassPolicyManager::`vftable'{for `IStreamClassPolicyManager'};
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = (struct CStreamClassPolicyManager *)v3;
  }
  else
  {
    v2 = -2147024882;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xAu,
        (__int64)&WPP_e3cb839858e24a86ecbedc7f79bd5a67_Traceguids,
        -2147024882);
    }
  }
  return v2;
}
