/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C0021640
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C004A50C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004A5EC (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 Clock; // r15
  char v7; // si
  __int64 v8; // r13
  KIRQL v9; // bp
  unsigned __int16 v10; // ax
  struct _NDIS_REFCOUNT_BLOCK *v11; // rcx
  char v12; // si
  KIRQL v13; // al
  ULONG_PTR v14; // r8
  KIRQL v15; // si
  __int64 v16; // r10
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // al
  _BYTE *v19; // rdx
  char v21; // di
  _QWORD **v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  ULONG_PTR v25; // rdi
  unsigned int v26; // edx
  KIRQL v27; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v29; // bl
  struct _NDIS_M_DRIVER_BLOCK *v30; // rdx
  void *v31; // rcx
  void *v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx

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
        v11 = *(struct _NDIS_REFCOUNT_BLOCK **)(v8 + 408);
        *(_WORD *)(v8 + 400) = v10 + 1;
        ndisReferenceWithTag(v11, 0xAu);
        v7 = 1;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 392), v9);
    if ( v7 )
    {
      if ( HIBYTE(dword_1C00870D8) )
      {
        v12 = 1;
        ndisTraceDpcStart(v4, 2LL);
        Clock = WmiGetClock(0LL, 0LL);
      }
      else
      {
        v12 = 0;
      }
      if ( (*(_BYTE *)(v8 + 26) & 2) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880));
        v22 = (_QWORD **)(v4 + 560);
        if ( *(_QWORD *)(v4 + 560) )
        {
          while ( 1 )
          {
            v23 = *v22;
            if ( *v22 == DeferredContext )
              break;
            v22 = (_QWORD **)*v22;
            if ( !*v23 )
              goto LABEL_33;
          }
          if ( !*((_DWORD *)DeferredContext + 23) )
            *v22 = (_QWORD *)*DeferredContext;
        }
LABEL_33:
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1880));
      }
      if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DeferredContext[21])(0LL, DeferredContext[23], 0LL, 0LL);
      if ( v12 )
      {
        v24 = WmiGetClock(0LL, 0LL);
        ndisTraceDpcEnd(v4, 2LL, v24 - Clock);
      }
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 392));
      v14 = *(_QWORD *)(v8 + 408);
      v15 = v13;
      if ( v14 )
      {
        if ( *(_BYTE *)(v14 + 1) )
        {
          if ( *(_BYTE *)(v14 + 1) == 1 )
          {
            v25 = v14 + 648;
            v26 = *(_DWORD *)(v14 + 704);
            if ( v26 >> 17 < 0x3FFE && (unsigned __int16)v26 >> 1 == (v26 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 648));
              *(_DWORD *)(v25 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v26 & 0xFFFE) == 0 && (v26 & 1) == 0 )
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
            while ( 1 )
            {
              v19 = (_BYTE *)(v16 + 2LL * v18);
              if ( *v19 == 10 )
              {
                if ( v19[1] )
                  break;
              }
              if ( ++v18 >= v17 )
                goto LABEL_19;
            }
            --v19[1];
          }
          else
          {
LABEL_19:
            if ( !_bittestandreset((signed __int32 *)(v14 + 16), 0xAu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xAuLL);
          }
        }
      }
      if ( (*(_WORD *)(v8 + 400))-- == 1 )
      {
        v21 = 1;
        if ( !*(_BYTE *)(v8 + 403) )
        {
          ndisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v8 + 408));
          *(_QWORD *)(v8 + 408) = 0LL;
        }
      }
      else
      {
        v21 = 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 392), v15);
      if ( v21 )
      {
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_q(23LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v8);
        v27 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        p_NextDriver = &ndisMiniDriverList;
        v29 = v27;
        if ( ndisMiniDriverList )
        {
          while ( 1 )
          {
            v30 = *p_NextDriver;
            if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v8 )
              break;
            p_NextDriver = &v30->NextDriver;
            if ( !v30->NextDriver )
              goto LABEL_51;
          }
          *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v8 + 8);
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_51:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v29);
        v31 = *(void **)(v8 + 888);
        if ( v31 )
        {
          ExFreePoolWithTag(v31, 0);
          *(_QWORD *)(v8 + 888) = 0LL;
        }
        v32 = *(void **)(v8 + 32);
        if ( v32 )
        {
          ExFreePoolWithTag(v32, 0);
          *(_QWORD *)(v8 + 32) = 0LL;
        }
        if ( (*(_BYTE *)(v8 + 26) & 1) != 0 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 416), Executive, 0, 0, 0LL);
          v33 = *(_QWORD **)(v8 + 96);
          *(_QWORD *)(v8 + 472) = KeGetCurrentThread();
          if ( v33 )
          {
            do
            {
              v34 = (_QWORD *)*v33;
              ExFreePoolWithTag(v33, 0);
              v33 = v34;
            }
            while ( v34 );
          }
          *(_QWORD *)(v8 + 472) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v8 + 416), 0);
        }
        KeSetEvent((PRKEVENT)(v8 + 368), 0, 0);
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_q(24LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v8);
      }
    }
  }
}
