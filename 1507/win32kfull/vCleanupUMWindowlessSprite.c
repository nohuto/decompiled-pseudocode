/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C0012480
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSprite @ 0x1C000CBEC (GreDeleteSprite.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vCleanupUMWindowlessSprite(int a1)
{
  HDEV HDEV; // rsi
  struct PDEVOBJ *v3; // rdx
  struct DwmState *v4; // rcx
  char *v5; // rax
  char *v6; // rbx
  char *v7; // r8
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  char v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  if ( g_pDwmState && PsGetCurrentProcess() != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
    v11 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    HDEV = (HDEV)UserGetHDEV();
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v9, v3, 0, 1);
    v10 = ghsemDwmState;
    GreAcquireSemaphore(ghsemDwmState);
    v4 = g_pDwmState;
    if ( g_pDwmState )
    {
      v5 = (char *)g_pDwmState + 80;
      v6 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v6 != v5 )
      {
        if ( v6 )
          v7 = v6 - 24;
        else
          v7 = 0LL;
        v6 = *(char **)v6;
        if ( (*((_DWORD *)v7 + 18) & 0x400000) != 0 && *((_DWORD *)v7 + 28) == a1 )
        {
          GreDeleteSprite(HDEV, 0LL, *(void **)v7, 1);
          v4 = g_pDwmState;
        }
        v5 = (char *)(*(_QWORD *)v4 + 80LL);
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v10);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v9);
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  }
}
