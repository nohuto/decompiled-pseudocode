/*
 * XREFs of _BuildPropList @ 0x1401565B8
 * Callers:
 *     NtUserBuildPropList @ 0x140156500 (NtUserBuildPropList.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14001019C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x14003A9E0 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1401567E0 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1403E23B0 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall BuildPropList(__int64 a1, char *a2, unsigned int a3, volatile void *a4)
{
  int v7; // r13d
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned int v12; // r15d
  __int64 v13; // r12
  int i; // edx
  unsigned int v15; // [rsp+20h] [rbp-108h]
  __int64 Length; // [rsp+28h] [rbp-100h]
  int Lengtha; // [rsp+28h] [rbp-100h]
  _BYTE v18[48]; // [rsp+C0h] [rbp-68h] BYREF

  v15 = 0;
  v7 = 0;
  Length = 16LL * a3;
  v8 = (unsigned __int64)&a2[Length - 16];
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v18,
    *(tagObjLock **)(a1 + 144));
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v9);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
  if ( v10 )
  {
    v12 = 0;
    v13 = v10 + 8;
    ProbeForWrite(a2, Length, 4u);
    ProbeForWrite(a4, 4uLL, 1u);
    for ( i = *(_DWORD *)(v10 + 4); ; --i )
    {
      Lengtha = i;
      if ( !i )
        break;
      if ( (unsigned __int64)&a2[16 * v7] > v8 )
      {
        v7 = 0;
        v12 = -1073741789;
      }
      if ( (*(_BYTE *)(v13 + 10) & 1) == 0 )
      {
        RtlWriteULong64ToUser(&a2[16 * v7], *(_QWORD *)v13);
        RtlWriteUShortToUser(&a2[16 * v7++ + 8], *(unsigned __int16 *)(v13 + 8));
        ++v15;
        i = Lengtha;
      }
      v13 += 16LL;
    }
    RtlWriteULongToUser(a4, v15);
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v18);
    return v12;
  }
  else
  {
    RtlWriteULongToUser(a4, 0LL);
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v18);
    return 0LL;
  }
}
