/*
 * XREFs of ndisMTimerDpcX @ 0x1C0004ED0
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

void __fastcall ndisMTimerDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 Clock; // r15
  char v5; // di
  __int64 v6; // r13
  KIRQL v7; // bp
  unsigned __int16 v8; // ax
  struct _NDIS_REFCOUNT_BLOCK *v9; // rcx
  char v10; // di
  __int64 v11; // rdx
  KIRQL v12; // al
  ULONG_PTR v13; // r8
  KIRQL v14; // si
  __int64 v15; // r10
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // al
  _BYTE *v18; // rdx
  char v20; // di
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  ULONG_PTR v24; // rdi
  unsigned int v25; // edx
  KIRQL v26; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v28; // bl
  struct _NDIS_M_DRIVER_BLOCK *v29; // rdx
  void *v30; // rcx
  void *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx

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
      ndisReferenceWithTag(v9);
      v5 = 1;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 392), v7);
  if ( v5 )
  {
    if ( HIBYTE(dword_1C00870D8) )
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
      v21 = (__int64 *)(v2 + 560);
      if ( *(_QWORD *)(v2 + 560) )
      {
        while ( 1 )
        {
          v22 = *v21;
          if ( *v21 == a2 )
            break;
          v21 = (__int64 *)(v22 + 152);
          if ( !*(_QWORD *)(v22 + 152) )
            goto LABEL_30;
        }
        if ( !*(_DWORD *)(a2 + 60) )
          *v21 = *(_QWORD *)(a2 + 152);
      }
LABEL_30:
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a2 + 144) + 1880LL));
    }
    if ( (*(_DWORD *)(v2 + 124) & 0x1000000) == 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 128))(0LL, *(_QWORD *)(a2 + 136), 0LL, 0LL);
    if ( v10 )
    {
      v23 = WmiGetClock(0LL, 0LL);
      ndisTraceDpcEnd(v2, 2LL, v23 - Clock);
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
          v24 = v13 + 712;
          v25 = *(_DWORD *)(v13 + 768);
          if ( v25 >> 17 < 0x3FFE && (unsigned __int16)v25 >> 1 == (v25 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 712));
            *(_DWORD *)(v24 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v25 & 0xFFFE) == 0 && (v25 & 1) == 0 )
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
          while ( 1 )
          {
            v18 = (_BYTE *)(v15 + 2LL * v17);
            if ( *v18 == 11 )
            {
              if ( v18[1] )
                break;
            }
            if ( ++v17 >= v16 )
              goto LABEL_18;
          }
          --v18[1];
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
      v20 = 1;
      if ( !*(_BYTE *)(v6 + 403) )
      {
        ndisFreeRefCount(*(PVOID *)(v6 + 408));
        *(_QWORD *)(v6 + 408) = 0LL;
      }
    }
    else
    {
      v20 = 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 392), v14);
    if ( v20 )
    {
      if ( (unsigned __int8)byte_1C008531B >= 4u )
        WPP_SF_q(23LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v6);
      v26 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      p_NextDriver = &ndisMiniDriverList;
      v28 = v26;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v29 = *p_NextDriver;
          if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v6 )
            break;
          p_NextDriver = &v29->NextDriver;
          if ( !v29->NextDriver )
            goto LABEL_50;
        }
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v6 + 8);
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_50:
      KeReleaseSpinLock(&ndisMiniDriverListLock, v28);
      v30 = *(void **)(v6 + 888);
      if ( v30 )
      {
        ExFreePoolWithTag(v30, 0);
        *(_QWORD *)(v6 + 888) = 0LL;
      }
      v31 = *(void **)(v6 + 32);
      if ( v31 )
      {
        ExFreePoolWithTag(v31, 0);
        *(_QWORD *)(v6 + 32) = 0LL;
      }
      if ( (*(_BYTE *)(v6 + 26) & 1) != 0 )
      {
        KeWaitForSingleObject((PVOID)(v6 + 416), Executive, 0, 0, 0LL);
        v32 = *(_QWORD **)(v6 + 96);
        *(_QWORD *)(v6 + 472) = KeGetCurrentThread();
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
        *(_QWORD *)(v6 + 472) = 0LL;
        KeReleaseMutex((PRKMUTEX)(v6 + 416), 0);
      }
      KeSetEvent((PRKEVENT)(v6 + 368), 0, 0);
      if ( (unsigned __int8)byte_1C008531B >= 4u )
        WPP_SF_q(24LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v6);
    }
  }
}
