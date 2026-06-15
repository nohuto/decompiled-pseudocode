/*
 * XREFs of ?Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z @ 0x180038F9C
 * Callers:
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180041FF0 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x1800416E8 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::Create(struct CWindowsPolicyManager **a1)
{
  CWindowsPolicyManager *v2; // rax
  CWindowsPolicyManager *v3; // rdi
  int v4; // esi

  if ( !a1 )
    return 2147500035LL;
  v2 = (CWindowsPolicyManager *)operator new(0x40uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 6) = 1;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    *((_QWORD *)v2 + 7) = 0LL;
    *(_QWORD *)v2 = &CWindowsPolicyManager::`vftable'{for `IAudioPolicyManager'};
    *((_QWORD *)v2 + 1) = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
    *((_QWORD *)v2 + 2) = &CWindowsPolicyManager::`vftable'{for `CUnknown'};
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v4 = CWindowsPolicyManager::Initialize(v3);
    if ( v4 < 0 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v3 + 2) + 24LL))((_QWORD *)v3 + 2, 1LL);
    else
      *a1 = v3;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
