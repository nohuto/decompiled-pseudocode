/*
 * XREFs of ndisFOidRequestCompleteInternal @ 0x1C00066F0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0054AD0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0040F38 (ndisCancelOidRequestOnFilter.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(char *Parameter)
{
  __int64 v1; // rbp
  int v3; // ebx
  KIRQL v4; // al
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx
  KIRQL v6; // bl
  KIRQL v7; // dl
  KIRQL v8; // al
  ULONG_PTR v9; // r8
  KIRQL v10; // r14
  int v11; // edx
  __int64 v12; // rax
  unsigned __int8 v13; // r9
  bool v14; // zf
  __int64 v15; // r8
  ULONG_PTR v16; // rbx
  unsigned int v17; // edx
  _QWORD v18[6]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)Parameter + 23);
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(55LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, Parameter, v1, *(_DWORD *)(v1 + 80));
  memset(v18, 0, sizeof(v18));
  v18[2] = Parameter;
  v18[4] = v1;
  LODWORD(v18[5]) = v3;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 39);
  v5 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)Parameter + 41);
  ++*((_WORD *)Parameter + 160);
  v6 = v4;
  ndisReferenceWithTag(v5);
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 39, v6);
  ndisOidRequestComplete(v18);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
  *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
  *((_DWORD *)Parameter + 40) = 2101198;
  if ( *((char **)Parameter + 21) != Parameter + 168 )
  {
    *((_QWORD *)Parameter + 19) = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v7);
    if ( (unsigned int)ndisQueueRequestWorkItem(Parameter, 0LL, 5LL) != 259 )
    {
      LOBYTE(v15) = 1;
      ndisCancelOidRequestOnFilter(Parameter, 0LL, v15);
    }
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2101224;
  }
  *((_QWORD *)Parameter + 19) = 0LL;
  *((_DWORD *)Parameter + 40) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v7);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 39);
  v9 = *((_QWORD *)Parameter + 41);
  v10 = v8;
  if ( v9 )
  {
    v11 = *(unsigned __int8 *)(v9 + 1);
    if ( *(_BYTE *)(v9 + 1) )
    {
      if ( v11 == 1 )
      {
        v16 = v9 + 1224;
        v17 = *(_DWORD *)(v9 + 1280);
        if ( v17 >> 17 < 0x3FFE && (unsigned __int16)v17 >> 1 == (v17 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v9 + 1224));
          *(_DWORD *)(v16 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v17 & 0xFFFE) == 0 && (v17 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v9, 0x13uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v9 + 1224), 0);
        }
      }
    }
    else
    {
      v12 = *(_QWORD *)(v9 + 8);
      if ( v12 && (v13 = *(_BYTE *)(v9 + 3)) != 0 )
      {
        while ( *(_BYTE *)(v12 + 2LL * (unsigned __int8)v11) != 19 || !*(_BYTE *)(v12 + 2LL * (unsigned __int8)v11 + 1) )
        {
          LOBYTE(v11) = v11 + 1;
          if ( (unsigned __int8)v11 >= v13 )
            goto LABEL_10;
        }
        --*(_BYTE *)(v12 + 2LL * (unsigned __int8)v11 + 1);
      }
      else
      {
LABEL_10:
        if ( !_bittestandreset((signed __int32 *)(v9 + 16), 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v9, 0x13uLL);
      }
    }
  }
  v14 = (*((_WORD *)Parameter + 160))-- == 1;
  if ( v14 && !Parameter[323] )
  {
    ndisFreeRefCount(*((PVOID *)Parameter + 41));
    *((_QWORD *)Parameter + 41) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 39, v10);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(56LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, Parameter, v1);
}
