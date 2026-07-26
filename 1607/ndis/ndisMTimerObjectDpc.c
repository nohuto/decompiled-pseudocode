/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C00217D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004F8A8 (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 Clock; // r15
  char v7; // di
  __int64 v8; // r13
  KIRQL v9; // bp
  unsigned __int16 v10; // ax
  __int64 v11; // rdi
  _WORD *v12; // rcx
  __int64 v13; // r8
  char v14; // di
  KIRQL v15; // al
  ULONG_PTR v16; // r8
  KIRQL v17; // si
  __int64 v18; // r10
  unsigned __int8 v19; // r9
  unsigned __int8 v20; // al
  _BYTE *v21; // rdx
  char v23; // di
  __int64 v24; // r10
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // r8
  _BYTE *v27; // rdx
  unsigned __int8 v28; // dl
  unsigned __int8 v29; // dl
  __int64 v30; // r8
  _QWORD **v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rax
  ULONG_PTR v34; // rdi
  unsigned int v35; // edx
  KIRQL v36; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v38; // bl
  struct _NDIS_M_DRIVER_BLOCK *v39; // rdx
  void *v40; // rcx
  void *v41; // rcx
  _QWORD *v42; // rcx
  _QWORD *v43; // rbx

  v4 = DeferredContext[3];
  Clock = 0LL;
  if ( *(_BYTE *)v4 == 17 )
  {
    v7 = 0;
    v8 = *(_QWORD *)(v4 + 3816);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 392));
    if ( !*(_BYTE *)(v8 + 402) )
    {
      v10 = *(_WORD *)(v8 + 400);
      if ( v10 < 0xFFEBu )
      {
        v11 = *(_QWORD *)(v8 + 408);
        *(_WORD *)(v8 + 400) = v10 + 1;
        if ( v11 )
        {
          if ( *(_BYTE *)(v11 + 1) )
          {
            if ( *(_BYTE *)(v11 + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v11 + 648), 1u);
          }
          else
          {
            v12 = 0LL;
            if ( _bittestandset((signed __int32 *)(v11 + 16), 0xAu) )
            {
              v24 = *(_QWORD *)(v11 + 8);
              if ( !v24 )
                goto LABEL_86;
              v25 = *(_BYTE *)(v11 + 3);
              v26 = 0;
              if ( !v25 )
                goto LABEL_86;
              do
              {
                v27 = (_BYTE *)(v24 + 2LL * v26);
                if ( *v27 == 10 )
                {
                  if ( v27[1] != 0xFF )
                  {
                    ++v27[1];
                    goto LABEL_7;
                  }
                }
                else if ( !v27[1] )
                {
                  v12 = (_WORD *)(v24 + 2LL * v26);
                }
                ++v26;
              }
              while ( v26 < v25 );
              if ( v12 )
              {
                *v12 = 266;
              }
              else
              {
LABEL_86:
                if ( !*(_BYTE *)(v11 + 1) )
                {
                  v28 = *(_BYTE *)(v11 + 3);
                  if ( v28 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v11);
                    *(_BYTE *)(v11 + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v28 + 2 <= 0xFF )
                      v29 = v28 + 2;
                    else
                      v29 = -1;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v11, v29);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v11, 0xAu);
              }
            }
          }
        }
LABEL_7:
        v7 = 1;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 392), v9);
    if ( v7 )
    {
      if ( HIBYTE(dword_1C008AE58) )
      {
        v14 = 1;
        ndisTraceDpcStart(v4, 2LL);
        Clock = WmiGetClock(0LL, 0LL, v30);
      }
      else
      {
        v14 = 0;
      }
      if ( (*(_BYTE *)(v8 + 26) & 2) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880));
        v31 = (_QWORD **)(v4 + 560);
        if ( *(_QWORD *)(v4 + 560) )
        {
          while ( 1 )
          {
            v32 = *v31;
            if ( *v31 == DeferredContext )
              break;
            v31 = (_QWORD **)*v31;
            if ( !*v32 )
              goto LABEL_54;
          }
          if ( !*((_DWORD *)DeferredContext + 23) )
            *v31 = (_QWORD *)*DeferredContext;
        }
LABEL_54:
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1880));
      }
      if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DeferredContext[21])(0LL, DeferredContext[23], 0LL, 0LL);
      if ( v14 )
      {
        v33 = WmiGetClock(0LL, 0LL, v13);
        ndisTraceDpcEnd(v4, 2LL, v33 - Clock);
      }
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 392));
      v16 = *(_QWORD *)(v8 + 408);
      v17 = v15;
      if ( v16 )
      {
        if ( *(_BYTE *)(v16 + 1) )
        {
          if ( *(_BYTE *)(v16 + 1) == 1 )
          {
            v34 = v16 + 648;
            v35 = *(_DWORD *)(v16 + 704);
            if ( v35 >> 17 < 0x3FFE && (unsigned __int16)v35 >> 1 == (v35 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v16 + 648));
              *(_DWORD *)(v34 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v35 & 0xFFFE) == 0 && (v35 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v16, 0xAuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v16 + 648), 0);
            }
          }
        }
        else
        {
          v18 = *(_QWORD *)(v16 + 8);
          if ( v18 && (v19 = *(_BYTE *)(v16 + 3), v20 = 0, v19) )
          {
            while ( 1 )
            {
              v21 = (_BYTE *)(v18 + 2LL * v20);
              if ( *v21 == 10 )
              {
                if ( v21[1] )
                  break;
              }
              if ( ++v20 >= v19 )
                goto LABEL_22;
            }
            --v21[1];
          }
          else
          {
LABEL_22:
            if ( !_bittestandreset((signed __int32 *)(v16 + 16), 0xAu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v16, 0xAuLL);
          }
        }
      }
      if ( (*(_WORD *)(v8 + 400))-- == 1 )
      {
        v23 = 1;
        if ( !*(_BYTE *)(v8 + 403) )
        {
          NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v8 + 408));
          *(_QWORD *)(v8 + 408) = 0LL;
        }
      }
      else
      {
        v23 = 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 392), v17);
      if ( v23 )
      {
        if ( (unsigned __int8)byte_1C00895DB >= 4u )
          WPP_SF_q(23LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v8);
        v36 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        p_NextDriver = &ndisMiniDriverList;
        v38 = v36;
        if ( ndisMiniDriverList )
        {
          while ( 1 )
          {
            v39 = *p_NextDriver;
            if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v8 )
              break;
            p_NextDriver = &v39->NextDriver;
            if ( !v39->NextDriver )
              goto LABEL_74;
          }
          *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v8 + 8);
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_74:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v38);
        v40 = *(void **)(v8 + 888);
        if ( v40 )
        {
          ExFreePoolWithTag(v40, 0);
          *(_QWORD *)(v8 + 888) = 0LL;
        }
        v41 = *(void **)(v8 + 32);
        if ( v41 )
        {
          ExFreePoolWithTag(v41, 0);
          *(_QWORD *)(v8 + 32) = 0LL;
        }
        if ( (*(_BYTE *)(v8 + 26) & 1) != 0 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 416), Executive, 0, 0, 0LL);
          v42 = *(_QWORD **)(v8 + 96);
          *(_QWORD *)(v8 + 472) = KeGetCurrentThread();
          if ( v42 )
          {
            do
            {
              v43 = (_QWORD *)*v42;
              ExFreePoolWithTag(v42, 0);
              v42 = v43;
            }
            while ( v43 );
          }
          *(_QWORD *)(v8 + 472) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v8 + 416), 0);
        }
        KeSetEvent((PRKEVENT)(v8 + 368), 0, 0);
        if ( (unsigned __int8)byte_1C00895DB >= 4u )
          WPP_SF_q(24LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v8);
      }
    }
  }
}
