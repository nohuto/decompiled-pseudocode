/*
 * XREFs of GreHLsurfSetPresentFlags @ 0x1C02612F0
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C007E9B0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreHLsurfSetPresentFlags(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = a1;
  v5 = -1071775733;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      v11 = 0LL;
      v5 = -1073741811;
      if ( a2 )
      {
        LOBYTE(v6) = 18;
        v7 = HmgShareLockCheck(a2, v6);
        v11 = v7;
        v8 = v7;
        if ( v7 )
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v12, (struct _EX_PUSH_LOCK *)(v7 + 264));
          *(_DWORD *)(v8 + 220) = a3;
          v5 = 0;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
        }
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v11);
    }
    else
    {
      v5 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
  return v5;
}
