/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     IsvSpUnTearDownSpritesSupported_0 @ 0x1C0001450 (IsvSpUnTearDownSpritesSupported_0.c)
 *     vSpUnTearDownSprites_0 @ 0x1C0001458 (vSpUnTearDownSprites_0.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003191C (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     GreUnlockSprite @ 0x1C0065AF0 (GreUnlockSprite.c)
 *     GreUnlockDisplayDevice @ 0x1C0065B20 (GreUnlockDisplayDevice.c)
 *     DxLddmFindProcessEntry @ 0x1C0065B50 (DxLddmFindProcessEntry.c)
 *     GreLockDisplayDevice @ 0x1C0065B60 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0065B90 (GreLockSprite.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00C3288 (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  unsigned int v2; // esi
  int v3; // edx
  int v4; // r8d
  int v5; // edx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  struct _LIST_ENTRY *v7; // rdi
  int v8; // r8d
  int v9; // ecx
  _QWORD *ProcessEntry; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  struct _LIST_ENTRY *Blink; // rbp
  struct _LIST_ENTRY *v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  struct _LIST_ENTRY *Flink; // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  struct _LIST_ENTRY *v23; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
  v7 = hdevEnumerate(0LL, v3, v4);
  if ( v7 )
  {
    do
    {
      v9 = (__int64)v7[3].Blink & 0x20001;
      v23 = v7;
      if ( v9 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v23) )
      {
        GreLockVisRgn((__int64)v7, v5, v8);
        GreLockSprite(v7);
        GreLockDisplayDevice(v7);
        ProcessEntry = (_QWORD *)DxLddmFindProcessEntry(&v7[165].Blink, a1);
        v12 = ProcessEntry;
        if ( ProcessEntry )
        {
          v16 = *ProcessEntry;
          v17 = (_QWORD *)ProcessEntry[1];
          if ( *(_QWORD **)(v16 + 8) != v12 || (_QWORD *)*v17 != v12 )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          v18 = *((_DWORD *)v12 + 5);
          if ( v18 )
          {
            LODWORD(v7[166].Blink) -= v18;
            Flink = v7[167].Flink;
            if ( Flink )
              ((void (__fastcall *)(struct _LIST_ENTRY *, char *))Flink)(v7[114].Flink, (char *)v12 + 28);
            if ( (int)IsvSpUnTearDownSpritesSupported_0() >= 0 )
              vSpUnTearDownSprites_0();
          }
          v20 = -1;
          if ( v2 + *((_DWORD *)v12 + 6) >= v2 )
            v20 = v2 + *((_DWORD *)v12 + 6);
          v2 = v20;
          Win32FreePool();
        }
        Blink = v7[167].Blink;
        if ( Blink )
        {
          v14 = v7[114].Flink;
          CurrentProcess = PsGetCurrentProcess(v11);
          ((void (__fastcall *)(struct _LIST_ENTRY *, __int64))Blink)(v14, CurrentProcess);
        }
        else
        {
          v21 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v22);
          WdLogEvent5_WdError(v21);
        }
        GreUnlockDisplayDevice(v7);
        GreUnlockSprite(v7);
        GreUnlockVisRgn((__int64)v7);
      }
      v7 = hdevEnumerate(v7, v5, v8);
    }
    while ( v7 );
    if ( v2 )
      DxLddmLogProcessPrimaryLockCount(v2);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
}
