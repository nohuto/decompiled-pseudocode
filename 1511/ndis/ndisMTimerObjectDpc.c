/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C0015390
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C004ADAC (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004AE8C (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 Clock; // r12
  __int64 v7; // rdi
  char v8; // bp
  KIRQL v9; // r15
  unsigned __int16 v10; // ax
  struct _NDIS_REFCOUNT_BLOCK *v11; // rcx
  char v12; // r15
  KIRQL v13; // al
  ULONG_PTR v14; // r8
  KIRQL v15; // bp
  __int64 v16; // rax
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // dl
  char v20; // si
  _QWORD **v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  ULONG_PTR v24; // rsi
  unsigned int v25; // edx
  KIRQL v26; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v28; // bl
  struct _NDIS_M_DRIVER_BLOCK *v29; // rdx
  void *v30; // rcx
  void *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx

  v4 = DeferredContext[3];
  Clock = 0LL;
  if ( *(_BYTE *)v4 == 17 )
  {
    v7 = *(_QWORD *)(v4 + 3816);
    v8 = 0;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
    if ( !*(_BYTE *)(v7 + 402) )
    {
      v10 = *(_WORD *)(v7 + 400);
      if ( v10 < 0xFFEBu )
      {
        v11 = *(struct _NDIS_REFCOUNT_BLOCK **)(v7 + 408);
        *(_WORD *)(v7 + 400) = v10 + 1;
        ndisReferenceWithTag(v11, 0xAu);
        v8 = 1;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v9);
    if ( v8 )
    {
      if ( HIBYTE(dword_1C0085018) )
      {
        v12 = 1;
        ndisTraceDpcStart(v4, 2LL);
        Clock = WmiGetClock(0LL, 0LL);
      }
      else
      {
        v12 = 0;
      }
      if ( (*(_BYTE *)(v7 + 26) & 2) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880));
        v21 = (_QWORD **)(v4 + 560);
        if ( *(_QWORD *)(v4 + 560) )
        {
          while ( 1 )
          {
            v22 = *v21;
            if ( *v21 == DeferredContext )
              break;
            v21 = (_QWORD **)*v21;
            if ( !*v22 )
              goto LABEL_33;
          }
          if ( !*((_DWORD *)DeferredContext + 23) )
            *v21 = (_QWORD *)*DeferredContext;
        }
LABEL_33:
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1880));
      }
      if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DeferredContext[21])(0LL, DeferredContext[23], 0LL, 0LL);
      if ( v12 )
      {
        v23 = WmiGetClock(0LL, 0LL);
        ndisTraceDpcEnd(v4, 2LL, v23 - Clock);
      }
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
      v14 = *(_QWORD *)(v7 + 408);
      v15 = v13;
      if ( v14 )
      {
        if ( *(_BYTE *)(v14 + 1) )
        {
          if ( *(_BYTE *)(v14 + 1) == 1 )
          {
            v24 = v14 + 648;
            v25 = *(_DWORD *)(v14 + 704);
            if ( v25 >> 17 < 0x3FFE && (unsigned __int16)v25 >> 1 == (v25 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 648));
              *(_DWORD *)(v24 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v25 & 0xFFFE) == 0 && (v25 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xAuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 648), 0);
            }
          }
        }
        else
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v16 && (v17 = *(_BYTE *)(v14 + 3), v18 = 0, v17) )
          {
            while ( *(_BYTE *)(v16 + 2LL * v18) != 10 || !*(_BYTE *)(v16 + 2LL * v18 + 1) )
            {
              if ( ++v18 >= v17 )
                goto LABEL_19;
            }
            --*(_BYTE *)(v16 + 2LL * v18 + 1);
          }
          else
          {
LABEL_19:
            if ( !_bittestandreset((signed __int32 *)(v14 + 16), 0xAu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xAuLL);
          }
        }
      }
      if ( (*(_WORD *)(v7 + 400))-- == 1 )
      {
        v20 = 1;
        if ( !*(_BYTE *)(v7 + 403) )
        {
          ndisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v7 + 408));
          *(_QWORD *)(v7 + 408) = 0LL;
        }
      }
      else
      {
        v20 = 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v15);
      if ( v20 )
      {
        if ( (unsigned __int8)byte_1C008371B >= 4u )
          WPP_SF_q(23LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v7);
        v26 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        p_NextDriver = &ndisMiniDriverList;
        v28 = v26;
        if ( ndisMiniDriverList )
        {
          while ( 1 )
          {
            v29 = *p_NextDriver;
            if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v7 )
              break;
            p_NextDriver = &v29->NextDriver;
            if ( !v29->NextDriver )
              goto LABEL_51;
          }
          *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v7 + 8);
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_51:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v28);
        v30 = *(void **)(v7 + 888);
        if ( v30 )
        {
          ExFreePoolWithTag(v30, 0);
          *(_QWORD *)(v7 + 888) = 0LL;
        }
        v31 = *(void **)(v7 + 32);
        if ( v31 )
        {
          ExFreePoolWithTag(v31, 0);
          *(_QWORD *)(v7 + 32) = 0LL;
        }
        if ( (*(_BYTE *)(v7 + 26) & 1) != 0 )
        {
          KeWaitForSingleObject((PVOID)(v7 + 416), Executive, 0, 0, 0LL);
          v32 = *(_QWORD **)(v7 + 96);
          *(_QWORD *)(v7 + 472) = KeGetCurrentThread();
          if ( v32 )
          {
            do
            {
              v33 = (_QWORD *)*v32;
              ExFreePoolWithTag(v32, 0);
              v32 = v33;
            }
            while ( v33 );
          }
          *(_QWORD *)(v7 + 472) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v7 + 416), 0);
        }
        KeSetEvent((PRKEVENT)(v7 + 368), 0, 0);
        if ( (unsigned __int8)byte_1C008371B >= 4u )
          WPP_SF_q(24LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v7);
      }
    }
  }
}
