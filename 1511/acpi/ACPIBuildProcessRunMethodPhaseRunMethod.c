/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D300
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRunMethod(__int64 a1)
{
  unsigned int v1; // esi
  signed __int64 *v2; // r15
  int v4; // r14d
  volatile signed __int32 *v5; // rbx
  _QWORD *v6; // r13
  _SLIST_ENTRY *v7; // r12
  int v8; // edi
  signed __int64 v9; // rbx
  KIRQL v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rbx
  signed __int32 v13; // ecx
  KIRQL v14; // di
  int v15; // edx
  int v17; // edi
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  unsigned int v20; // edi
  volatile signed __int32 *v21; // rcx
  __int64 *v22; // rcx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  int v25; // edi
  unsigned __int64 v26; // rax
  _QWORD v27[10]; // [rsp+30h] [rbp-78h] BYREF

  v1 = 0;
  v2 = *(signed __int64 **)(a1 + 40);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 84) & 0x40) != 0 && *(_DWORD *)(a1 + 128) )
  {
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_10;
  }
  v8 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 9;
  v9 = v2[88];
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
  v12 = v11;
  if ( v11 )
  {
    while ( v8 != *(_DWORD *)(v12 + 32) )
    {
      v12 = *(_QWORD *)(v12 + 8);
      if ( v12 == v11 )
      {
        v12 = 0LL;
        break;
      }
      if ( !v12 )
        break;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( !v12 )
  {
    v5 = 0LL;
    goto LABEL_10;
  }
  v5 = (volatile signed __int32 *)(v12 + 112);
  AMLIReferenceHandleEx((__int64)v5);
  if ( v5 )
  {
    v17 = *(_DWORD *)(a1 + 84);
    if ( (v17 & 2) != 0 )
    {
      _m_prefetchw(v2);
      v18 = *v2;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64(v2, v18 | 0x20000000000000LL, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x20000000000000LL) != 0 )
        goto LABEL_10;
    }
    else
    {
      if ( (v17 & 8) != 0 )
      {
        if ( !*((_DWORD *)v2 + 124) )
          goto LABEL_10;
        memset(v27, 0, 0x28uLL);
        v6 = v27;
        v27[2] = 1LL;
        v20 = 1;
        WORD1(v27[0]) = 1;
        goto LABEL_24;
      }
      if ( (v17 & 0x30) != 0 )
      {
        v25 = v17 | 0x40;
        *(_DWORD *)(a1 + 84) = v25;
        memset(v27, 0, sizeof(v27));
        v27[2] = 2LL;
        WORD1(v27[0]) = 1;
        v6 = v27;
        WORD1(v27[5]) = 1;
        v26 = (unsigned __int8)v25;
        v20 = 2;
        v27[7] = (v26 >> 4) & 1;
LABEL_24:
        v21 = *(volatile signed __int32 **)(a1 + 56);
        if ( v21 )
        {
          AMLIDereferenceHandleEx(v21);
          *(_QWORD *)(a1 + 56) = 0LL;
        }
        *(_QWORD *)(a1 + 56) = v5;
        AMLIReferenceHandleEx((__int64)v5);
        v4 = AMLIAsyncEvalObject(v22, v7, v20, v6, ACPIBuildCompleteMustSucceed, a1);
        if ( v4 == 259 )
        {
          v4 = 0;
          goto LABEL_15;
        }
        goto LABEL_10;
      }
      if ( (v17 & 0x80u) != 0 )
      {
        _m_prefetchw(v2 + 113);
        v23 = v2[113];
        do
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange64(v2 + 113, v23 | 0x4000, v23);
        }
        while ( v24 != v23 );
        if ( (v23 & 0x4000) != 0 )
          goto LABEL_10;
        v7 = (_SLIST_ENTRY *)(a1 + 88);
        memset((void *)(a1 + 88), 0, 0x28uLL);
        *(_DWORD *)(a1 + 32) = 8;
      }
    }
    v20 = 0;
    goto LABEL_24;
  }
LABEL_10:
  v13 = *(_DWORD *)(a1 + 32);
  if ( v4 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
  }
  else
  {
    if ( v4 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v4;
      if ( v5 )
        v1 = *(_DWORD *)(*(_QWORD *)v5 + 32LL);
      KeBugCheckEx(0xA5u, 3uLL, (ULONG_PTR)v5, v4, v1);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v13, 1);
    v14 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v15 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v15;
    if ( (v15 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v15 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v14);
  }
LABEL_15:
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  return (unsigned int)v4;
}
