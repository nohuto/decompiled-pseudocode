/*
 * XREFs of GreCancelDC @ 0x140326374
 * Callers:
 *     NtGdiCancelDC @ 0x14032A280 (NtGdiCancelDC.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400C6A7C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x140310400 (--0DCOBJA@@QEAA@XZ.c)
 *     ?AcquireDcEndDocLock@DC@@QEAA@XZ @ 0x140310668 (-AcquireDcEndDocLock@DC@@QEAA@XZ.c)
 */

__int64 __fastcall GreCancelDC(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  DC *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  HSEMAPHORE v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  char v10; // [rsp+28h] [rbp-50h]
  _QWORD v11[9]; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE v12; // [rsp+88h] [rbp+10h] BYREF

  SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v12);
  DCOBJA::DCOBJA((DCOBJA *)v11);
  v2 = 1;
  LOBYTE(v3) = 1;
  v4 = (DC *)HmgShareLock(v11[2], a1, v3, 0LL);
  v11[0] = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v4 + 6) + 40LL) & 0x8000) != 0 )
    {
      DC::AcquireDcEndDocLock(v4, (__int64)&v9);
      if ( (*(_DWORD *)(v11[0] + 36LL) & 0x200000) == 0 )
      {
        v5 = *(_QWORD *)(v11[0] + 496LL);
        if ( v5 )
          *(_DWORD *)(v5 + 112) |= 0x40000000u;
      }
      if ( v10 )
        GreInnermostPushLock::ReleaseLock((GreInnermostPushLock *)(v9 + 2096));
    }
    else
    {
      v6 = *((_QWORD *)v4 + 62);
      if ( v6 )
        *(_DWORD *)(v6 + 112) |= 0x40000000u;
    }
  }
  else
  {
    v2 = 0;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v11);
  v7 = v12;
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v12);
    GrepReleaseLockValidate<20>();
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
  return v2;
}
