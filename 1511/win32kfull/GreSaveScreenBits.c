/*
 * XREFs of GreSaveScreenBits @ 0x1C0290CD0
 * Callers:
 *     FreeSpb @ 0x1C00098E8 (FreeSpb.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     ?SpbApc@@YAXPEAX00@Z @ 0x1C01EA6D0 (-SpbApc@@YAXPEAX00@Z.c)
 *     RestoreSpb @ 0x1C01EA75C (RestoreSpb.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0226CF4 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSaveScreenBits(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, _QWORD *); // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-40h] BYREF

  v6 = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v15, ghsemDynamicModeChange);
  v14 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
  {
    v16 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(a1 + 3040);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 2576);
      if ( v10 )
        v10 += 24LL;
      v11 = v17;
      if ( a2 != 2 )
        v11 = a4;
      v12 = 0LL;
      if ( v10
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
      {
        v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
      }
      v6 = v9(v10, a2, a3, v11);
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v15);
  return v6;
}
