/*
 * XREFs of xxxDoSysExpungeIfNeeded @ 0x140024000
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxDoSysExpunge @ 0x140025A60 (xxxDoSysExpunge.c)
 */

void __fastcall xxxDoSysExpungeIfNeeded(__int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char *v5; // rbx
  __int64 v6; // rdx
  int v7; // edi
  tagDomLock *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-38h]
  char v15; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  char v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  char v19; // [rsp+48h] [rbp-10h]

  DLT = DLT_CLIENTLIB::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v15 = 1;
  v17 = 0;
  v5 = &v15;
  v16 = W32GetUserSessionState(v4, v3) + 42384;
  v18 = 0LL;
  v7 = 0;
  v19 = 0;
  do
  {
    v8 = (tagDomLock *)*((_QWORD *)v5 - 1);
    if ( v8 )
    {
      if ( *v5 )
        tagDomLock::LockExclusive(v8);
      else
        tagDomLock::LockShared(v8);
    }
    ++v7;
    v5 += 16;
  }
  while ( !v7 );
  v19 = 1;
  v10 = *(unsigned int *)(W32GetUserSessionState(v8, v6) + 41356);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 456) + 392LL) != (_DWORD)v10 )
  {
    v11 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 41356);
    *(_DWORD *)(*(_QWORD *)(a1 + 456) + 392LL) = v11;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 396LL);
    if ( (v12 & *(_DWORD *)(W32GetUserSessionState(v13, v11) + 41352)) != 0 )
      xxxDoSysExpunge(a1);
  }
  if ( v19 && DomainLockRef )
  {
    if ( v15 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
