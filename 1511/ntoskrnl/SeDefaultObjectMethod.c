/*
 * XREFs of SeDefaultObjectMethod @ 0x14042E060
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        void *a1,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        PGENERIC_MAPPING a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  int v10; // edx
  int v11; // edx
  int v12; // esi
  unsigned int v13; // ecx
  __int64 v15; // rdi
  unsigned int v16; // ebx
  _QWORD *v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  unsigned __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbp
  signed __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // [rsp+30h] [rbp-28h]

  if ( !a2 )
    return ObSetSecurityDescriptorInfo(a1, a3, a4, a7, a8);
  v10 = a2 - 1;
  if ( !v10 )
    return ObQuerySecurityDescriptorInfo((__int64)a1, a3, a4, a5);
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
    if ( a4 )
    {
      v12 = ObLogSecurityDescriptor(a4);
      if ( v12 >= 0 )
      {
        ExFreePoolWithTag(a4, 0);
        if ( v28 )
          *((_QWORD *)a1 - 1) = v28 + 15;
        else
          *((_QWORD *)a1 - 1) = 0LL;
      }
      return (unsigned int)v12;
    }
    else
    {
      v13 = 0;
      *((_QWORD *)a1 - 1) = 0LL;
    }
    return v13;
  }
  else
  {
    v15 = *(_QWORD *)&a6->GenericRead;
    *(_QWORD *)&a6->GenericRead = 0LL;
    v16 = (v15 & 0xF) + 1;
    v17 = (_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw(v17 + 2);
    v18 = v17[2];
    while ( v18 - v16 > 0 )
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange64(v17 + 2, v18 - v16, v18);
      if ( v19 == v18 )
        return 0LL;
    }
    if ( v18 != v16 )
      __fastfail(0xEu);
    v20 = v17[3];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v22 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v20 % 0x101));
    v23 = KeAbPreAcquire((ULONG_PTR)v22, 0LL, 0LL);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, v23, (ULONG_PTR)v22);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    v25 = _InterlockedExchangeAdd64(v17 + 2, -v16) - v16;
    if ( v25 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease((ULONG_PTR)v22);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 0LL;
    }
    if ( v25 )
      __fastfail(0xEu);
    v26 = *v17;
    v27 = (_QWORD *)v17[1];
    if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v27 != v17 )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v22);
    KeAbPostRelease((ULONG_PTR)v22);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag(v17, 0);
    return 0LL;
  }
}
