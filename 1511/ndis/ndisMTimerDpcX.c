/*
 * XREFs of ndisMTimerDpcX @ 0x1C000A040
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

void __fastcall ndisMTimerDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 Clock; // r12
  char v5; // bp
  __int64 v6; // rdi
  KIRQL v7; // r15
  unsigned __int16 v8; // ax
  struct _NDIS_REFCOUNT_BLOCK *v9; // rcx
  char v10; // bp
  __int64 v11; // rdx
  KIRQL v12; // al
  ULONG_PTR v13; // r8
  KIRQL v14; // bp
  __int64 v15; // rax
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // dl
  char v19; // si
  _QWORD *i; // rcx
  __int64 v21; // rax
  ULONG_PTR v22; // rsi
  unsigned int v23; // edx
  KIRQL v24; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v26; // bl
  struct _NDIS_M_DRIVER_BLOCK *v27; // rdx
  void *v28; // rcx
  void *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rbx

  v2 = *(_QWORD *)(a2 + 144);
  Clock = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 3816);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 392));
  if ( !*(_BYTE *)(v6 + 402) )
  {
    v8 = *(_WORD *)(v6 + 400);
    if ( v8 < 0xFFEBu )
    {
      v9 = *(struct _NDIS_REFCOUNT_BLOCK **)(v6 + 408);
      *(_WORD *)(v6 + 400) = v8 + 1;
      ndisReferenceWithTag(v9, 0xBu);
      v5 = 1;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 392), v7);
  if ( v5 )
  {
    if ( HIBYTE(dword_1C0085018) )
    {
      v10 = 1;
      ndisTraceDpcStart(v2, 2LL);
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)(a2 + 144);
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 3816) + 26LL) & 2) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 1880));
      for ( i = (_QWORD *)(v2 + 560); *i; i = (_QWORD *)(*i + 152LL) )
      {
        if ( *i == a2 )
        {
          if ( !*(_DWORD *)(a2 + 60) )
            *i = *(_QWORD *)(a2 + 152);
          break;
        }
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a2 + 144) + 1880LL));
    }
    if ( (*(_DWORD *)(v2 + 124) & 0x1000000) == 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 128))(0LL, *(_QWORD *)(a2 + 136), 0LL, 0LL);
    if ( v10 )
    {
      v21 = WmiGetClock(0LL, 0LL);
      ndisTraceDpcEnd(v2, 2LL, v21 - Clock);
    }
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 392));
    v13 = *(_QWORD *)(v6 + 408);
    v14 = v12;
    if ( v13 )
    {
      if ( *(_BYTE *)(v13 + 1) )
      {
        if ( *(_BYTE *)(v13 + 1) == 1 )
        {
          v22 = v13 + 712;
          v23 = *(_DWORD *)(v13 + 768);
          if ( v23 >> 17 < 0x3FFE && (unsigned __int16)v23 >> 1 == (v23 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 712));
            *(_DWORD *)(v22 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v23 & 0xFFFE) == 0 && (v23 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v13, 0xBuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 712), 0);
          }
        }
      }
      else
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( v15 && (v16 = *(_BYTE *)(v13 + 3), v17 = 0, v16) )
        {
          while ( *(_BYTE *)(v15 + 2LL * v17) != 11 || !*(_BYTE *)(v15 + 2LL * v17 + 1) )
          {
            if ( ++v17 >= v16 )
              goto LABEL_18;
          }
          --*(_BYTE *)(v15 + 2LL * v17 + 1);
        }
        else
        {
LABEL_18:
          if ( !_bittestandreset((signed __int32 *)(v13 + 16), 0xBu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v13, 0xBuLL);
        }
      }
    }
    if ( (*(_WORD *)(v6 + 400))-- == 1 )
    {
      v19 = 1;
      if ( !*(_BYTE *)(v6 + 403) )
      {
        ndisFreeRefCount(*(PVOID *)(v6 + 408));
        *(_QWORD *)(v6 + 408) = 0LL;
      }
    }
    else
    {
      v19 = 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 392), v14);
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(23LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v6);
      v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      p_NextDriver = &ndisMiniDriverList;
      v26 = v24;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v27 = *p_NextDriver;
          if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v6 )
            break;
          p_NextDriver = &v27->NextDriver;
          if ( !v27->NextDriver )
            goto LABEL_51;
        }
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v6 + 8);
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_51:
      KeReleaseSpinLock(&ndisMiniDriverListLock, v26);
      v28 = *(void **)(v6 + 888);
      if ( v28 )
      {
        ExFreePoolWithTag(v28, 0);
        *(_QWORD *)(v6 + 888) = 0LL;
      }
      v29 = *(void **)(v6 + 32);
      if ( v29 )
      {
        ExFreePoolWithTag(v29, 0);
        *(_QWORD *)(v6 + 32) = 0LL;
      }
      if ( (*(_BYTE *)(v6 + 26) & 1) != 0 )
      {
        KeWaitForSingleObject((PVOID)(v6 + 416), Executive, 0, 0, 0LL);
        v30 = *(_QWORD **)(v6 + 96);
        *(_QWORD *)(v6 + 472) = KeGetCurrentThread();
        if ( v30 )
        {
          do
          {
            v31 = (_QWORD *)*v30;
            ExFreePoolWithTag(v30, 0);
            v30 = v31;
          }
          while ( v31 );
        }
        *(_QWORD *)(v6 + 472) = 0LL;
        KeReleaseMutex((PRKMUTEX)(v6 + 416), 0);
      }
      KeSetEvent((PRKEVENT)(v6 + 368), 0, 0);
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(24LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v6);
    }
  }
}
