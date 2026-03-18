/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0045758
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     IsvSpUnTearDownSpritesSupported_0 @ 0x1C00013E0 (IsvSpUnTearDownSpritesSupported_0.c)
 *     vSpUnTearDownSprites_0 @ 0x1C00013E8 (vSpUnTearDownSprites_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037D08 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUnlockSprite @ 0x1C0045960 (GreUnlockSprite.c)
 *     GreUnlockDisplayDevice @ 0x1C0045990 (GreUnlockDisplayDevice.c)
 *     DxLddmFindProcessEntry @ 0x1C00459C0 (DxLddmFindProcessEntry.c)
 *     GreLockDisplayDevice @ 0x1C00459D0 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0045A00 (GreLockSprite.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00B7D78 (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  unsigned int v2; // esi
  int v3; // edx
  __int64 v4; // r8
  int v5; // edx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v7; // rdi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v8; // r8
  int v9; // ecx
  _QWORD *ProcessEntry; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  void (__fastcall *v14)(__int64, __int64); // rbp
  __int64 v15; // rbx
  __int64 CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  void (__fastcall *v22)(_QWORD, char *); // rax
  int v23; // eax
  __int64 v24; // rbx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v25; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v25);
  v7 = hdevEnumerate(0LL, v3, v4);
  if ( v7 )
  {
    do
    {
      v9 = *(_DWORD *)(*(_QWORD *)&v7 + 56LL) & 0x20001;
      v25 = v7;
      if ( v9 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v25) )
      {
        GreLockVisRgn(*(_QWORD *)&v7, v5, *(_QWORD *)&v8);
        ((void (__fastcall *)(_QWORD))GreLockSprite)(v7);
        ((void (__fastcall *)(_QWORD))GreLockDisplayDevice)(v7);
        ProcessEntry = (_QWORD *)DxLddmFindProcessEntry(*(_QWORD *)&v7 + 2648LL, a1);
        v13 = ProcessEntry;
        if ( ProcessEntry )
        {
          v19 = *ProcessEntry;
          v20 = (_QWORD *)ProcessEntry[1];
          if ( *(_QWORD **)(v19 + 8) != v13 || (_QWORD *)*v20 != v13 )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          v21 = *((_DWORD *)v13 + 5);
          if ( v21 )
          {
            *(_DWORD *)(*(_QWORD *)&v7 + 2664LL) -= v21;
            v22 = *(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)&v7 + 2672LL);
            if ( v22 )
              v22(*(_QWORD *)(*(_QWORD *)&v7 + 1824LL), (char *)v13 + 28);
            if ( (int)IsvSpUnTearDownSpritesSupported_0() >= 0 )
              vSpUnTearDownSprites_0();
          }
          v23 = -1;
          if ( v2 + *((_DWORD *)v13 + 6) >= v2 )
            v23 = v2 + *((_DWORD *)v13 + 6);
          v2 = v23;
          Win32FreePool();
        }
        v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)&v7 + 2680LL);
        if ( v14 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)&v7 + 1824LL);
          CurrentProcess = PsGetCurrentProcess(v12, v11);
          v14(v15, CurrentProcess);
        }
        else
        {
          v24 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v24 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
          WdLogEvent5_WdError(v24);
        }
        ((void (__fastcall *)(_QWORD))GreUnlockDisplayDevice)(v7);
        ((void (__fastcall *)(_QWORD))GreUnlockSprite)(v7);
        GreUnlockVisRgn(*(_QWORD *)&v7, v17, v18);
      }
      v7 = hdevEnumerate(v7, v5, *(_QWORD *)&v8);
    }
    while ( v7 );
    if ( v2 )
      DxLddmLogProcessPrimaryLockCount(v2);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
}
