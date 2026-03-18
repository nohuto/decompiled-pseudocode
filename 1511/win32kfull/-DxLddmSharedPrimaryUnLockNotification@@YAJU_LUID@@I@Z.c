/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0261F44
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C02639A0 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C001CE48 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     vSpUnTearDownSprites @ 0x1C027AB70 (vSpUnTearDownSprites.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  unsigned int v3; // esi
  int v4; // r14d
  __int64 i; // rcx
  __int64 v6; // rbx
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rax
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+80h] [rbp+40h] BYREF

  v3 = 0;
  v4 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
  for ( i = 0LL; ; i = v14 )
  {
    v12 = hdevEnumerate(i);
    v14 = v12;
    if ( !v12 )
      break;
    v23 = v12;
    if ( (*(_DWORD *)(v12 + 56) & 0x20400) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v23)
      && a1.LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23)->LowPart
      && a1.HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v23 + 2600) + 272LL) == a2 )
    {
      GreLockVisRgn(v23);
      GreLockSprite(v23);
      GreLockDisplayDevice(v23);
      v6 = v23;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v6 + 2648, CurrentProcessId & 0xFFFFFFFC);
      v9 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v10 = v23;
          if ( *(_QWORD *)(v23 + 2672) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v23 + 2672))(*(_QWORD *)(v23 + 1824), v9 + 28);
            v10 = v23;
          }
          --*(_DWORD *)(v10 + 2664);
          if ( (*(_DWORD *)(v9 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v23, v9 + 28, 1LL);
            if ( *(_DWORD *)(v9 + 44) != giVisRgnUniqueness )
              v4 = 1;
          }
        }
      }
      else
      {
        v3 = -1073741811;
      }
      GreUnlockDisplayDevice(v23);
      GreUnlockSprite(v23);
      GreUnlockVisRgn(v23);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  if ( v4 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23);
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = v15;
    ++*(_DWORD *)(v15 + 8);
    xxxInternalInvalidate((struct tagWND *)v15, (HRGN)1, 0x485u);
    ThreadUnlock1(v17, v16);
    if ( !(_DWORD)v23 )
      UserSessionSwitchLeaveCrit(v19, v18);
  }
  return v3;
}
