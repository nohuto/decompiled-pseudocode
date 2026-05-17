/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x18003D83C
 * Callers:
 *     TppWorkInitialize @ 0x18003D7AC (TppWorkInitialize.c)
 *     TppAllocAlpcCompletion @ 0x180065614 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x180079E70 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180084520 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B81C (TppPoolpDereferenceGlobalPool.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAF0 (RtlQueryInformationActivationContext.c)
 *     RtlAddRefActivationContext @ 0x18003E1A0 (RtlAddRefActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180083BB8 (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  unsigned int v7; // ecx
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // edi
  void *v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rcx
  volatile signed __int64 *v16; // rcx
  volatile signed __int32 *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  volatile signed __int32 *v21; // rcx
  __int128 v22; // [rsp+48h] [rbp-30h] BYREF

  v22 = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 168) = a4;
  v6 = (volatile signed __int32 **)(a1 + 144);
  if ( !a3 )
  {
    *v6 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    goto LABEL_30;
  }
  *v6 = *(volatile signed __int32 **)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
  {
LABEL_30:
    *(_DWORD *)(a1 + 192) = 1;
    goto LABEL_5;
  }
  v7 = *(_DWORD *)(a3 + 60);
  if ( v7 >= 3 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 192) = v7;
LABEL_5:
  v8 = a4 & 2;
  if ( (a4 & 2) != 0 && *v6 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v9 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    if ( v9 != -1 )
      RtlAddRefActivationContext(v9);
  }
  else
  {
    v10 = RtlQueryInformationActivationContext(1LL, 0LL, 0LL, 1LL, &v22, 16LL, 0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( (BYTE8(v22) & 1) != 0 )
    {
      RtlReleaseActivationContext((volatile signed __int32 *)v22);
      *(_QWORD *)&v22 = -1LL;
    }
    *(_QWORD *)(a1 + 96) = v22;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_15:
    v10 = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)(*v6 + 18), a2, a3, a4);
      v13 = (__int64 *)(a1 + 152);
      v14 = (__int64)(*v6 + 20);
      v15 = (__int64 **)*((_QWORD *)*v6 + 11);
      if ( *v15 != (__int64 *)v14 )
        __fastfail(3u);
      *v13 = v14;
      *(_QWORD *)(a1 + 160) = v15;
      *v15 = v13;
      *(_QWORD *)(v14 + 8) = v13;
      v16 = (volatile signed __int64 *)(*v6 + 18);
    }
    else
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&TppCleanupGroupMemberpNoPoolListLock, a2, a3, a4);
      v18 = (_QWORD *)(a1 + 152);
      v19 = off_18014C9F8;
      if ( *off_18014C9F8 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v18 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v19;
      *v19 = v18;
      off_18014C9F8 = (_UNKNOWN **)(a1 + 152);
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
    v11 = &TppPoolpSerializedPoolLock;
    v12 = &TppPoolpSerializedPool;
  }
  else
  {
    v11 = &TppPoolpGlobalPoolLock;
    v12 = &TppPoolpGlobalPool;
  }
  v10 = TppPoolpReferenceGlobalPool(v12, v11, v6);
  if ( v10 >= 0 )
    goto LABEL_15;
LABEL_27:
  if ( v10 < 0 )
  {
    v21 = *(volatile signed __int32 **)(a1 + 96);
    if ( (unsigned __int64)v21 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v21);
  }
  return (unsigned int)v10;
}
