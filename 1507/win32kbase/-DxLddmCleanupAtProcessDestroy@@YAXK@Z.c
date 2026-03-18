/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0031698
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     IsvSpUnTearDownSpritesSupported_0 @ 0x1C0001440 (IsvSpUnTearDownSpritesSupported_0.c)
 *     vSpUnTearDownSprites_0 @ 0x1C0001448 (vSpUnTearDownSprites_0.c)
 *     DxLddmFindProcessEntry @ 0x1C0011A60 (DxLddmFindProcessEntry.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00342F8 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUnlockSprite @ 0x1C00610D0 (GreUnlockSprite.c)
 *     GreUnlockDisplayDevice @ 0x1C0061400 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C0061430 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0061460 (GreLockSprite.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00B5748 (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(int a1)
{
  unsigned int v2; // esi
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  __int64 v4; // rdi
  int v5; // ecx
  _QWORD *ProcessEntry; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  void (__fastcall *v10)(__int64, __int64); // rbp
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // eax
  void (__fastcall *v16)(_QWORD, char *); // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v20);
  v4 = hdevEnumerate(0LL);
  if ( v4 )
  {
    do
    {
      v5 = *(_DWORD *)(v4 + 56) & 0x20001;
      v20 = v4;
      if ( v5 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v20) )
      {
        GreLockVisRgn(v4);
        GreLockSprite(v4);
        GreLockDisplayDevice(v4);
        ProcessEntry = DxLddmFindProcessEntry((_QWORD *)(v4 + 2648), a1);
        v9 = ProcessEntry;
        if ( ProcessEntry )
        {
          v13 = *ProcessEntry;
          v14 = (_QWORD *)ProcessEntry[1];
          if ( *(_QWORD **)(v13 + 8) != v9 || (_QWORD *)*v14 != v9 )
            __fastfail(3u);
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          v15 = *((_DWORD *)v9 + 5);
          if ( v15 )
          {
            *(_DWORD *)(v4 + 2664) -= v15;
            v16 = *(void (__fastcall **)(_QWORD, char *))(v4 + 2672);
            if ( v16 )
              v16(*(_QWORD *)(v4 + 1824), (char *)v9 + 28);
            if ( (int)IsvSpUnTearDownSpritesSupported_0() >= 0 )
              vSpUnTearDownSprites_0();
          }
          v17 = -1;
          if ( v2 + *((_DWORD *)v9 + 6) >= v2 )
            v17 = v2 + *((_DWORD *)v9 + 6);
          v2 = v17;
          Win32FreePool(v9);
        }
        v10 = *(void (__fastcall **)(__int64, __int64))(v4 + 2680);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v4 + 1824);
          CurrentProcess = PsGetCurrentProcess(v8, v7);
          v10(v11, CurrentProcess);
        }
        else
        {
          v18 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v19);
          WdLogEvent5_WdError(v18);
        }
        GreUnlockDisplayDevice(v4);
        GreUnlockSprite(v4);
        GreUnlockVisRgn(v4);
      }
      v4 = hdevEnumerate(v4);
    }
    while ( v4 );
    if ( v2 )
      DxLddmLogProcessPrimaryLockCount(v2);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
}
