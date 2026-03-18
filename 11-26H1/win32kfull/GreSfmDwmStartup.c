/*
 * XREFs of GreSfmDwmStartup @ 0x140328320
 * Callers:
 *     GreDwmStartup @ 0x1402931FC (GreDwmStartup.c)
 * Callees:
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall GreSfmDwmStartup(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  struct W32_PUSH_LOCK *v2; // rbx
  _QWORD **v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = Gre::Base::Globals(a1);
  SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v6, v1);
  v2 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v1 + 543) + 40LL);
  if ( *((_QWORD *)v1 + 543) != -40LL )
    GreAcquirePushLockShared(v2);
  v3 = (_QWORD **)(*((_QWORD *)v1 + 543) + 48LL);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( !*((_DWORD *)v5 + 54) )
      *((_DWORD *)v5 + 53) |= 0x10u;
    v3 = (_QWORD **)(*((_QWORD *)v1 + 543) + 48LL);
  }
  if ( v2 )
    GreReleasePushLockShared(v2);
  if ( v6 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v6);
}
