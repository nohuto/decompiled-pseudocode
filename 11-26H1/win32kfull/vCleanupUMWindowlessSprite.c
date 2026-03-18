/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1400A4F50
 * Callers:
 *     <none>
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1400A6C24 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall vCleanupUMWindowlessSprite(Gre::Base *a1)
{
  int v1; // ebp
  __int64 result; // rax
  __int64 CSRSSProcess; // rbx
  __int64 v4; // rcx
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rsi
  HSEMAPHORE v9; // rdi
  struct PDEVOBJ *v10; // rdx
  HSEMAPHORE v11; // rcx
  Gre::Base *v12; // rcx
  _QWORD **v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  Gre::Base *HDEV; // [rsp+20h] [rbp-38h] BYREF
  char v19[8]; // [rsp+28h] [rbp-30h] BYREF
  HSEMAPHORE v20; // [rsp+30h] [rbp-28h]
  char v21; // [rsp+38h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v1 = (int)a1;
  result = IsDwmActive(a1);
  if ( (_DWORD)result )
  {
    CSRSSProcess = UserGetCSRSSProcess();
    result = PsGetCurrentProcess(v4);
    if ( result != CSRSSProcess )
    {
      v6 = Gre::Base::Globals(v5);
      SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v22, v6);
      v8 = Gre::Base::Globals(v7);
      v9 = (HSEMAPHORE)(*(_QWORD *)v8 + 1144LL);
      GreAcquireSemaphoreInternal(v9);
      GrepAcquireLockValidate<2>();
      HDEV = (Gre::Base *)UserGetHDEV();
      DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v19, v10, 0, 1);
      v11 = (HSEMAPHORE)(*(_QWORD *)v8 + 520LL);
      v21 = 0;
      v20 = v11;
      GreAcquireSemaphoreInternal(v11);
      GrepAcquireLockValidate<7>();
      if ( IsDwmActive(v12) )
      {
        v13 = (_QWORD **)(*((_QWORD *)v8 + 28) + 80LL);
        v14 = *v13;
        while ( v14 != v13 )
        {
          v15 = (__int64)v14;
          v16 = (unsigned __int64)(v14 - 3);
          v14 = (_QWORD *)*v14;
          v17 = -v15;
          if ( (*(_DWORD *)((v16 & -(__int64)(v17 != 0)) + 0x48) & 0x400000) != 0
            && *(_DWORD *)((v16 & -(__int64)(v17 != 0)) + 0x70) == v1 )
          {
            GreDeleteSprite(HDEV, 0LL, *(void **)(v16 & -(__int64)(v17 != 0)), 1);
          }
          v13 = (_QWORD **)(*((_QWORD *)v8 + 28) + 80LL);
        }
      }
      ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)&HDEV);
      if ( v9 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v9);
      return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
               (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
               v22);
    }
  }
  return result;
}
