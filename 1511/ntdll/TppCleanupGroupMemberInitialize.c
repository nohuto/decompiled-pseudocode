/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x18000D4C8
 * Callers:
 *     TppWorkInitialize @ 0x18000D374 (TppWorkInitialize.c)
 *     TppAllocAlpcCompletion @ 0x18006BF34 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800777F0 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180081660 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 *     RtlQueryInformationActivationContext @ 0x18000D770 (RtlQueryInformationActivationContext.c)
 *     RtlAddRefActivationContext @ 0x18000DE20 (RtlAddRefActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x18007F6E8 (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  unsigned int v7; // ecx
  int v8; // r14d
  _ACTIVATION_CONTEXT *v9; // rcx
  NTSTATUS v10; // edi
  _RTL_SRWLOCK *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  _RTL_SRWLOCK *v16; // rcx
  volatile signed __int32 *v17; // rax
  _UNKNOWN ***v18; // rcx
  _ACTIVATION_CONTEXT *v20; // rcx
  __int128 ActivationContext; // [rsp+48h] [rbp-30h] BYREF

  ActivationContext = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 160) = a4;
  v6 = (volatile signed __int32 **)(a1 + 136);
  if ( !a3 )
  {
    *v6 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    goto LABEL_30;
  }
  *v6 = *(volatile signed __int32 **)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
  {
LABEL_30:
    *(_DWORD *)(a1 + 184) = 1;
    goto LABEL_5;
  }
  v7 = *(_DWORD *)(a3 + 60);
  if ( v7 >= 3 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 184) = v7;
LABEL_5:
  v8 = a4 & 2;
  if ( (a4 & 2) != 0 && *v6 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v9 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
  if ( v9 )
  {
    if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
      RtlAddRefActivationContext(v9);
  }
  else
  {
    v10 = RtlQueryInformationActivationContext(
            1u,
            0LL,
            0LL,
            ActivationContextBasicInformation,
            &ActivationContext,
            0x10uLL,
            0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( (BYTE8(ActivationContext) & 1) != 0 )
    {
      RtlReleaseActivationContext((PACTIVATION_CONTEXT)ActivationContext);
      *(_QWORD *)&ActivationContext = -1LL;
    }
    *(_QWORD *)(a1 + 96) = ActivationContext;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_15:
    v10 = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*v6 + 9);
      v13 = a1 + 144;
      v14 = (__int64)(*v6 + 20);
      v15 = (_QWORD *)*((_QWORD *)*v6 + 11);
      *(_QWORD *)(a1 + 144) = v14;
      *(_QWORD *)(a1 + 152) = v15;
      if ( *v15 != v14 )
        __fastfail(3u);
      *v15 = v13;
      *(_QWORD *)(v14 + 8) = v13;
      v16 = (_RTL_SRWLOCK *)(*v6 + 18);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
      v18 = (_UNKNOWN ***)off_180142DC8;
      *(_QWORD *)(a1 + 144) = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 152) = v18;
      if ( *v18 != &TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v18 = (_UNKNOWN **)(a1 + 144);
      off_180142DC8 = (_UNKNOWN **)(a1 + 144);
      v16 = &TppCleanupGroupMemberpNoPoolListLock;
    }
    RtlReleaseSRWLockExclusive(v16);
    v17 = *(volatile signed __int32 **)(a1 + 16);
    if ( v17 )
    {
      _InterlockedAdd(v17, 1u);
      v10 = 0;
    }
    goto LABEL_27;
  }
  if ( v8 )
  {
    v11 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
    v12 = &TppPoolpSerializedPool;
  }
  else
  {
    v11 = &TppPoolpGlobalPoolLock;
    v12 = (__int64 *)&TppPoolpGlobalPool;
  }
  v10 = TppPoolpReferenceGlobalPool(v12, v11, v6);
  if ( v10 >= 0 )
    goto LABEL_15;
LABEL_27:
  if ( v10 < 0 )
  {
    v20 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
    if ( (unsigned __int64)&v20[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v20);
  }
  return (unsigned int)v10;
}
