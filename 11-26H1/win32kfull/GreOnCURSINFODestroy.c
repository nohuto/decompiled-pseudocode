/*
 * XREFs of GreOnCURSINFODestroy @ 0x140029974
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14002985C (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     GreSetPointer @ 0x14001AE9C (GreSetPointer.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreOnCURSINFODestroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  Gre::Base *v5; // rcx
  __int64 v6; // rbp
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  __int64 HDEV; // rax
  HSEMAPHORE v9; // rbx
  HSEMAPHORE v10; // rdi
  HSEMAPHORE v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  result = W32GetSessionState(a1, a2, a3);
  v6 = *(_QWORD *)(result + 96);
  if ( *(_QWORD *)(v6 + 24) == a1 )
  {
    v7 = Gre::Base::Globals(v5);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v13, v7);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      v12 = HDEV;
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) )
      {
        v9 = *(HSEMAPHORE *)(v12 + 56);
        GreAcquireSemaphoreInternal(v9);
        GrepAcquireLockValidate<4>();
        if ( *(_QWORD *)(v6 + 24) == a1 )
          GreSetPointer(0LL, 0, 0, 0);
        if ( v9 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v9);
      }
      else
      {
        v10 = (HSEMAPHORE)(*(_QWORD *)v7 + 1144LL);
        GreAcquireSemaphoreInternal(v10);
        GrepAcquireLockValidate<2>();
        v11 = *(HSEMAPHORE *)(v12 + 56);
        GreAcquireSemaphoreInternal(v11);
        GrepAcquireLockValidate<4>();
        if ( *(_QWORD *)(v6 + 24) == a1 )
          GreSetPointer(0LL, 0, 0, 0);
        if ( v11 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v11);
        if ( v10 )
          GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v10);
      }
    }
    return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v13);
  }
  return result;
}
