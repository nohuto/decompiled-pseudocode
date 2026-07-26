/*
 * XREFs of ndisDoOidRequests @ 0x1C000AF60
 * Callers:
 *     <none>
 * Callees:
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 *     ndisDereferenceWithTag @ 0x1C000B124 (ndisDereferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00548B8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *P)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  ULONG_PTR v4; // r8
  KIRQL v5; // r15
  __int64 v6; // rax
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // dl
  bool v9; // zf
  KIRQL v10; // al
  ULONG_PTR v11; // rcx
  KIRQL v12; // r15
  bool v13; // di
  struct _KEVENT *v14; // rcx
  KIRQL v15; // al
  KIRQL v16; // bl
  ULONG_PTR v17; // rdi
  unsigned int v18; // edx

  v1 = P[7];
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(23LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, P, v1);
  if ( *(_BYTE *)v1 == 17 )
  {
    ndisMDoOidRequest((unsigned __int8 *)v1);
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v1);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 4496));
    v11 = *(_QWORD *)(v1 + 4952);
    v12 = v10;
    if ( v11 )
      ndisDereferenceWithTag(v11);
    v13 = --*(_DWORD *)(v1 + 4504) == 0;
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v1, *(unsigned int *)(v1 + 4504));
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 4496), v12);
    if ( v13 )
    {
      v14 = *(struct _KEVENT **)(v1 + 1608);
      if ( v14 )
        KeSetEvent(v14, 0, 0);
    }
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v1);
  }
  else if ( *(_BYTE *)v1 == 5 )
  {
    if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal, (PVOID)v1, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
      *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
      v16 = v15;
      *(_DWORD *)(v1 + 160) = 2297346;
      *(_BYTE *)(v1 + 232) = 1;
      ndisQueueStackExpansionFallbackWorkItem(v1);
      *(_QWORD *)(v1 + 152) = 0LL;
      *(_DWORD *)(v1 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v16);
    }
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 312));
    v4 = *(_QWORD *)(v1 + 328);
    v5 = v3;
    if ( v4 )
    {
      if ( *(_BYTE *)(v4 + 1) )
      {
        if ( *(_BYTE *)(v4 + 1) == 1 )
        {
          v17 = v4 + 776;
          v18 = *(_DWORD *)(v4 + 832);
          if ( v18 >> 17 < 0x3FFE && (unsigned __int16)v18 >> 1 == (v18 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v4 + 776));
            *(_DWORD *)(v17 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v18 & 0xFFFE) == 0 && (v18 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xCuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v4 + 776), 0);
          }
        }
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v6 && (v7 = *(_BYTE *)(v4 + 3), v8 = 0, v7) )
        {
          while ( *(_BYTE *)(v6 + 2LL * v8) != 12 || !*(_BYTE *)(v6 + 2LL * v8 + 1) )
          {
            if ( ++v8 >= v7 )
              goto LABEL_13;
          }
          --*(_BYTE *)(v6 + 2LL * v8 + 1);
        }
        else
        {
LABEL_13:
          if ( !_bittestandreset((signed __int32 *)(v4 + 16), 0xCu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xCuLL);
        }
      }
    }
    v9 = (*(_WORD *)(v1 + 320))-- == 1;
    if ( v9 && !*(_BYTE *)(v1 + 323) )
    {
      ndisFreeRefCount(*(PVOID *)(v1 + 328));
      *(_QWORD *)(v1 + 328) = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 312), v5);
  }
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(24LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, 0LL, v1);
}
