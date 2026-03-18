/*
 * XREFs of DwmDestroyDeviceSpecificResources @ 0x1C003E020
 * Callers:
 *     <none>
 * Callees:
 *     GreDwmHasSoftwareCursor @ 0x1C003E100 (GreDwmHasSoftwareCursor.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0261C54 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 */

void __fastcall DwmDestroyDeviceSpecificResources(HDEV a1, struct PDEVOBJ *a2)
{
  HDEV v3; // rax
  HDEV v4; // rdx
  HDEV *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v6, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( (unsigned int)GreDwmHasSoftwareCursor(a1, 1LL) )
  {
    v3 = a1 + 890;
    v4 = (HDEV)*((_QWORD *)a1 + 445);
    v5 = (HDEV *)*((_QWORD *)a1 + 446);
    if ( *((HDEV *)v4 + 1) != a1 + 890 || *v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    *((_QWORD *)a1 + 446) = a1 + 890;
    *(_QWORD *)v3 = v3;
    if ( *((struct DwmState **)g_pDwmState + 13) == (struct DwmState *)((char *)g_pDwmState + 104)
      && *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
    {
      vSpDwmDestroyCursorSprites(a1);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v6);
}
