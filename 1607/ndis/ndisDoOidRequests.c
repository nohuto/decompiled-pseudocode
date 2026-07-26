/*
 * XREFs of ndisDoOidRequests @ 0x1C001B980
 * Callers:
 *     <none>
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C0058FA4 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *P)
{
  __int64 v1; // r14
  KIRQL v3; // al
  ULONG_PTR v4; // r8
  KIRQL v5; // r15
  __int64 v6; // rax
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // dl
  bool v9; // zf
  KIRQL v10; // al
  ULONG_PTR v11; // r8
  KIRQL v12; // r15
  __int64 v13; // rax
  unsigned __int8 v14; // r9
  unsigned __int8 v15; // dl
  bool v16; // bl
  ULONG_PTR v17; // rbx
  unsigned int v18; // edx
  struct _KEVENT *v19; // rcx
  KIRQL v20; // al
  KIRQL v21; // bl
  ULONG_PTR v22; // rdi
  unsigned int v23; // edx

  v1 = P[7];
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(23LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, P, v1);
  if ( *(_BYTE *)v1 == 17 )
  {
    ndisMDoOidRequest((unsigned __int8 *)v1);
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v1);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 4496));
    v11 = *(_QWORD *)(v1 + 4952);
    v12 = v10;
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 1) )
      {
        if ( *(_BYTE *)(v11 + 1) == 1 )
        {
          v17 = v11 + 4552;
          v18 = *(_DWORD *)(v11 + 4608);
          if ( v18 >> 17 < 0x3FFE && (unsigned __int16)v18 >> 1 == (v18 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v11 + 4552));
            *(_DWORD *)(v17 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v18 & 0xFFFE) == 0 && (v18 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v11, 0x47uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v11 + 4552), 0);
          }
        }
      }
      else
      {
        v13 = *(_QWORD *)(v11 + 8);
        if ( v13 && (v14 = *(_BYTE *)(v11 + 3), v15 = 0, v14) )
        {
          while ( *(_BYTE *)(v13 + 2LL * v15) != 71 || !*(_BYTE *)(v13 + 2LL * v15 + 1) )
          {
            if ( ++v15 >= v14 )
              goto LABEL_28;
          }
          --*(_BYTE *)(v13 + 2LL * v15 + 1);
        }
        else
        {
LABEL_28:
          if ( !_bittestandreset((signed __int32 *)(v11 + 24), 7u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v11, 0x47uLL);
        }
      }
    }
    v9 = (*(_DWORD *)(v1 + 4504))-- == 1;
    v16 = v9;
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v1, *(unsigned int *)(v1 + 4504));
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 4496), v12);
    if ( v16 )
    {
      v19 = *(struct _KEVENT **)(v1 + 1608);
      if ( v19 )
        KeSetEvent(v19, 0, 0);
    }
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v1);
  }
  else if ( *(_BYTE *)v1 == 5 )
  {
    if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal, (PVOID)v1, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
      *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
      v21 = v20;
      *(_DWORD *)(v1 + 160) = 2297348;
      *(_BYTE *)(v1 + 232) = 1;
      ndisQueueStackExpansionFallbackWorkItem(v1);
      *(_QWORD *)(v1 + 152) = 0LL;
      *(_DWORD *)(v1 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v21);
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
          v22 = v4 + 776;
          v23 = *(_DWORD *)(v4 + 832);
          if ( v23 >> 17 < 0x3FFE && (unsigned __int16)v23 >> 1 == (v23 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v4 + 776));
            *(_DWORD *)(v22 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v23 & 0xFFFE) == 0 && (v23 & 1) == 0 )
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
      NdisFreeRefCount(*(PVOID *)(v1 + 328));
      *(_QWORD *)(v1 + 328) = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 312), v5);
  }
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(24LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, 0LL, v1);
}
