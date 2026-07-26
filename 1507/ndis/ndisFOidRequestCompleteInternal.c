/*
 * XREFs of ndisFOidRequestCompleteInternal @ 0x1C0004BD0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C00549F0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C000895C (ndisQueueRequestWorkItem.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C003F83C (ndisCancelOidRequestOnFilter.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(char *Parameter)
{
  __int64 v1; // rbp
  int v3; // ebx
  KIRQL v4; // al
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx
  KIRQL v6; // bl
  KIRQL v7; // al
  KIRQL v8; // dl
  KIRQL v9; // al
  ULONG_PTR v10; // r8
  KIRQL v11; // bl
  __int64 v12; // r10
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // al
  _BYTE *v15; // rdx
  bool v16; // zf
  __int64 v17; // r8
  ULONG_PTR v18; // r14
  unsigned int v19; // edx
  _QWORD v20[6]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_QWORD *)Parameter + 23);
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(55LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, Parameter, v1, *(_DWORD *)(v1 + 80));
  memset(v20, 0, sizeof(v20));
  v20[2] = Parameter;
  v20[4] = v1;
  LODWORD(v20[5]) = v3;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 39);
  v5 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)Parameter + 41);
  ++*((_WORD *)Parameter + 160);
  v6 = v4;
  ndisReferenceWithTag(v5);
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 39, v6);
  ndisOidRequestComplete(v20);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
  *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
  v8 = v7;
  *((_DWORD *)Parameter + 40) = 2101188;
  if ( *((char **)Parameter + 21) != Parameter + 168 )
  {
    *((_QWORD *)Parameter + 19) = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v7);
    if ( (unsigned int)ndisQueueRequestWorkItem(Parameter, 0LL, 5LL) != 259 )
    {
      LOBYTE(v17) = 1;
      ndisCancelOidRequestOnFilter(Parameter, 0LL, v17);
    }
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2101214;
  }
  *((_QWORD *)Parameter + 19) = 0LL;
  *((_DWORD *)Parameter + 40) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v8);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 39);
  v10 = *((_QWORD *)Parameter + 41);
  v11 = v9;
  if ( v10 )
  {
    if ( *(_BYTE *)(v10 + 1) )
    {
      if ( *(_BYTE *)(v10 + 1) == 1 )
      {
        v18 = v10 + 1224;
        v19 = *(_DWORD *)(v10 + 1280);
        if ( v19 >> 17 < 0x3FFE && (unsigned __int16)v19 >> 1 == (v19 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 1224));
          *(_DWORD *)(v18 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v19 & 0xFFFE) == 0 && (v19 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v10, 0x13uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 1224), 0);
        }
      }
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 8);
      if ( v12 && (v13 = *(_BYTE *)(v10 + 3), v14 = 0, v13) )
      {
        while ( 1 )
        {
          v15 = (_BYTE *)(v12 + 2LL * v14);
          if ( *v15 == 19 )
          {
            if ( v15[1] )
              break;
          }
          if ( ++v14 >= v13 )
            goto LABEL_10;
        }
        --v15[1];
      }
      else
      {
LABEL_10:
        if ( !_bittestandreset((signed __int32 *)(v10 + 16), 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v10, 0x13uLL);
      }
    }
  }
  v16 = (*((_WORD *)Parameter + 160))-- == 1;
  if ( v16 && !Parameter[323] )
  {
    ndisFreeRefCount(*((PVOID *)Parameter + 41));
    *((_QWORD *)Parameter + 41) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 39, v11);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(56LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, Parameter, v1);
}
