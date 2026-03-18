/*
 * XREFs of GreHidePointer @ 0x1400A4E00
 * Callers:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     GreSetPointer @ 0x14001AE9C (GreSetPointer.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreHidePointerInternal@@YAXAEAVPDEVOBJ@@@Z @ 0x14024A848 (-GreHidePointerInternal@@YAXAEAVPDEVOBJ@@@Z.c)
 *     GreUpdatePointerState @ 0x14029093C (GreUpdatePointerState.c)
 */

__int64 __fastcall GreHidePointer(Gre::Base *a1)
{
  unsigned int v1; // esi
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  unsigned int v3; // edi
  HSEMAPHORE v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int updated; // ebp
  __int64 v9; // r8
  __int64 v10; // rsi
  struct _CURSINFO *v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 HDEV; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v1 = (unsigned int)a1;
  v2 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v17, v2);
  v3 = 0;
  HDEV = UserGetHDEV();
  if ( HDEV )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v16, (struct PDEVOBJ *)&HDEV);
    v5 = *(HSEMAPHORE *)(HDEV + 56);
    GreAcquireSemaphoreInternal(v5);
    GrepAcquireLockValidate<4>();
    updated = GreUpdatePointerState(v1);
    if ( updated )
    {
      if ( v1 )
      {
        GreHidePointerInternal((struct PDEVOBJ *)&HDEV);
      }
      else
      {
        v10 = *(_QWORD *)(W32GetSessionState(v7, v6, v9) + 96);
        if ( *(_DWORD *)(v10 + 76) )
        {
          if ( *(_BYTE *)(v10 + 44) )
          {
            v11 = *(struct _CURSINFO **)(v10 + 24);
            v12 = *(_DWORD *)(v10 + 32);
            v13 = *(_DWORD *)(v10 + 36);
            v14 = *(_DWORD *)(v10 + 40);
          }
          else
          {
            v11 = 0LL;
            v12 = 0;
            v13 = 0;
            v14 = 0;
          }
          GreSetPointer(v11, v12, v13, v14);
          *(_DWORD *)(v10 + 76) = 0;
        }
        if ( *(_DWORD *)(v10 + 80) )
        {
          GreMovePointer(HDEV, *(_DWORD *)(v10 + 56), *(_DWORD *)(v10 + 60), *(_DWORD *)(v10 + 64));
          *(_DWORD *)(v10 + 80) = 0;
        }
      }
    }
    if ( v5 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v5);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
    v3 = updated;
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v17);
  return v3;
}
