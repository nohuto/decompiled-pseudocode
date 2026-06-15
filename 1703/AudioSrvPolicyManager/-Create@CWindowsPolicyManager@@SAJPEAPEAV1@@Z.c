/*
 * XREFs of ?Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z @ 0x1800042AC
 * Callers:
 *     ActivatePolicyManager @ 0x180003E40 (ActivatePolicyManager.c)
 * Callees:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004370 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::Create(struct CWindowsPolicyManager **a1)
{
  HANDLE ProcessHeap; // rax
  struct CWindowsPolicyManager *v3; // rax
  struct CWindowsPolicyManager *v4; // rbx
  signed int v5; // edi

  ProcessHeap = GetProcessHeap();
  v3 = (struct CWindowsPolicyManager *)HeapAlloc(ProcessHeap, 0, 0x40uLL);
  v4 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 6) = 1;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_DWORD *)v3 + 14) = 0;
    *(_QWORD *)v3 = &CWindowsPolicyManager::`vftable'{for `IAudioPolicyManager'};
    *((_QWORD *)v3 + 1) = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
    *((_QWORD *)v3 + 2) = &CWindowsPolicyManager::`vftable'{for `CUnknown'};
  }
  else
  {
    v4 = 0LL;
  }
  v5 = v4 == 0LL ? 0x8007000E : 0;
  if ( v4 && (v5 = CWindowsPolicyManager::Initialize(v4), v5 >= 0) )
  {
    *a1 = v4;
  }
  else if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v4 + 2) + 24LL))((_QWORD *)v4 + 2, 1LL);
  }
  return (unsigned int)v5;
}
