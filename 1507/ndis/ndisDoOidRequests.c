/*
 * XREFs of ndisDoOidRequests @ 0x1C0002EF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00547D0 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *P)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  ULONG_PTR v4; // r8
  KIRQL v5; // r14
  int v6; // edx
  __int64 v7; // rax
  unsigned __int8 v8; // r9
  bool v9; // zf
  __int64 v10; // rdx
  KIRQL v11; // al
  KIRQL v12; // bl
  ULONG_PTR v13; // rdi
  unsigned int v14; // edx

  v1 = (KSPIN_LOCK *)P[7];
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(23LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, P, v1);
  if ( *(_BYTE *)v1 == 17 )
  {
    ndisMDoOidRequest(v1);
    LOBYTE(v10) = 69;
    ndisDereferenceMiniport(v1, v10);
  }
  else if ( *(_BYTE *)v1 == 5 )
  {
    if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, v1, 0x2000uLL, 0, 0LL) < 0 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc(v1 + 18);
      v1[19] = (KSPIN_LOCK)KeGetCurrentThread();
      v12 = v11;
      *((_DWORD *)v1 + 40) = 2297346;
      *((_BYTE *)v1 + 232) = 1;
      ndisQueueStackExpansionFallbackWorkItem(v1);
      v1[19] = 0LL;
      *((_DWORD *)v1 + 40) = 0;
      KeReleaseSpinLock(v1 + 18, v12);
    }
    v3 = KeAcquireSpinLockRaiseToDpc(v1 + 39);
    v4 = v1[41];
    v5 = v3;
    if ( v4 )
    {
      v6 = *(unsigned __int8 *)(v4 + 1);
      if ( *(_BYTE *)(v4 + 1) )
      {
        if ( v6 == 1 )
        {
          v13 = v4 + 776;
          v14 = *(_DWORD *)(v4 + 832);
          if ( v14 >> 17 < 0x3FFE && (unsigned __int16)v14 >> 1 == (v14 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v4 + 776));
            *(_DWORD *)(v13 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v14 & 0xFFFE) == 0 && (v14 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xCuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v4 + 776), 0);
          }
        }
      }
      else
      {
        v7 = *(_QWORD *)(v4 + 8);
        if ( v7 && (v8 = *(_BYTE *)(v4 + 3)) != 0 )
        {
          while ( *(_BYTE *)(v7 + 2LL * (unsigned __int8)v6) != 12 || !*(_BYTE *)(v7 + 2LL * (unsigned __int8)v6 + 1) )
          {
            LOBYTE(v6) = v6 + 1;
            if ( (unsigned __int8)v6 >= v8 )
              goto LABEL_13;
          }
          --*(_BYTE *)(v7 + 2LL * (unsigned __int8)v6 + 1);
        }
        else
        {
LABEL_13:
          if ( !_bittestandreset((signed __int32 *)(v4 + 16), 0xCu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xCuLL);
        }
      }
    }
    v9 = (*((_WORD *)v1 + 160))-- == 1;
    if ( v9 && !*((_BYTE *)v1 + 323) )
    {
      ndisFreeRefCount((PVOID)v1[41]);
      v1[41] = 0LL;
    }
    KeReleaseSpinLock(v1 + 39, v5);
  }
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(24LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, 0LL, v1);
}
