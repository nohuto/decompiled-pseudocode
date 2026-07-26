/*
 * XREFs of ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C00E3B30
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00E3800 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00C541C (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

__int64 __fastcall ndisMpHookGetHook(__int64 a1)
{
  struct MINIPORT_HOOK_DRIVER *v2; // rax
  char *v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rax
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  KLockThisShared::KLockThisShared((KLockThisShared *)&v6, &g_MiniportHookDriversLock);
  v2 = g_MiniportHookDrivers;
  if ( *((_BYTE *)g_MiniportHookDrivers + 137) )
  {
    *(_QWORD *)a1 = 0LL;
    v3 = (char *)v2 + 160;
    *(_DWORD *)(a1 + 16) = 0;
    v4 = (struct _EX_RUNDOWN_REF *)((char *)v2 + 144);
    *(_QWORD *)(a1 + 8) = v4;
    if ( v3 && ExAcquireRundownProtection(v4) )
    {
      ++*(_DWORD *)(a1 + 16);
      *(_QWORD *)a1 = v3;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 8) = a1;
  }
  KLockHolder::~KLockHolder(&v6);
  return a1;
}
