/*
 * XREFs of ndisMTimerDpcX @ 0x1C000F400
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

void __fastcall ndisMTimerDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 Clock; // r12
  char v5; // bl
  __int64 v6; // rdi
  KIRQL v7; // r15
  unsigned __int16 v8; // ax
  __int64 v9; // rbx
  _WORD *v10; // rdx
  __int64 v11; // r8
  char v12; // bl
  __int64 v13; // rdx
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // bp
  __int64 v17; // rax
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // dl
  char v21; // bl
  __int64 v22; // r10
  unsigned __int8 v23; // r9
  unsigned __int8 v24; // r8
  _BYTE *v25; // rcx
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // dl
  __int64 v28; // r8
  _QWORD *i; // rcx
  __int64 v30; // rax
  ULONG_PTR v31; // rbx
  unsigned int v32; // edx
  KIRQL v33; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v35; // bl
  struct _NDIS_M_DRIVER_BLOCK *v36; // rdx
  void *v37; // rcx
  void *v38; // rcx
  _QWORD *v39; // rcx
  _QWORD *v40; // rbx

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
      v9 = *(_QWORD *)(v6 + 408);
      *(_WORD *)(v6 + 400) = v8 + 1;
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 1) )
        {
          if ( *(_BYTE *)(v9 + 1) == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v9 + 712), 1u);
        }
        else
        {
          v10 = 0LL;
          if ( _bittestandset((signed __int32 *)(v9 + 16), 0xBu) )
          {
            v22 = *(_QWORD *)(v9 + 8);
            if ( !v22 )
              goto LABEL_86;
            v23 = *(_BYTE *)(v9 + 3);
            v24 = 0;
            if ( !v23 )
              goto LABEL_86;
            do
            {
              v25 = (_BYTE *)(v22 + 2LL * v24);
              if ( *v25 == 11 )
              {
                if ( v25[1] != 0xFF )
                {
                  ++v25[1];
                  goto LABEL_6;
                }
              }
              else if ( !v25[1] )
              {
                v10 = (_WORD *)(v22 + 2LL * v24);
              }
              ++v24;
            }
            while ( v24 < v23 );
            if ( v10 )
            {
              *v10 = 267;
            }
            else
            {
LABEL_86:
              if ( !*(_BYTE *)(v9 + 1) )
              {
                v26 = *(_BYTE *)(v9 + 3);
                if ( v26 == 0xFF )
                {
                  ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v9);
                  *(_BYTE *)(v9 + 1) = 2;
                }
                else
                {
                  if ( (unsigned int)v26 + 2 <= 0xFF )
                    v27 = v26 + 2;
                  else
                    v27 = -1;
                  ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v9, v27);
                }
              }
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v9);
            }
          }
        }
      }
LABEL_6:
      v5 = 1;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 392), v7);
  if ( v5 )
  {
    if ( HIBYTE(dword_1C008AE58) )
    {
      v12 = 1;
      ndisTraceDpcStart(v2, 2LL);
      Clock = WmiGetClock(0LL, 0LL, v28);
    }
    else
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)(a2 + 144);
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 3816) + 26LL) & 2) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 1880));
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
    if ( v12 )
    {
      v30 = WmiGetClock(0LL, 0LL, v11);
      ndisTraceDpcEnd(v2, 2LL, v30 - Clock);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 392));
    v15 = *(_QWORD *)(v6 + 408);
    v16 = v14;
    if ( v15 )
    {
      if ( *(_BYTE *)(v15 + 1) )
      {
        if ( *(_BYTE *)(v15 + 1) == 1 )
        {
          v31 = v15 + 712;
          v32 = *(_DWORD *)(v15 + 768);
          if ( v32 >> 17 < 0x3FFE && (unsigned __int16)v32 >> 1 == (v32 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 712));
            *(_DWORD *)(v31 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v32 & 0xFFFE) == 0 && (v32 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xBuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 712), 0);
          }
        }
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( v17 && (v18 = *(_BYTE *)(v15 + 3), v19 = 0, v18) )
        {
          while ( *(_BYTE *)(v17 + 2LL * v19) != 11 || !*(_BYTE *)(v17 + 2LL * v19 + 1) )
          {
            if ( ++v19 >= v18 )
              goto LABEL_21;
          }
          --*(_BYTE *)(v17 + 2LL * v19 + 1);
        }
        else
        {
LABEL_21:
          if ( !_bittestandreset((signed __int32 *)(v15 + 16), 0xBu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xBuLL);
        }
      }
    }
    if ( (*(_WORD *)(v6 + 400))-- == 1 )
    {
      v21 = 1;
      if ( !*(_BYTE *)(v6 + 403) )
      {
        NdisFreeRefCount(*(PVOID *)(v6 + 408));
        *(_QWORD *)(v6 + 408) = 0LL;
      }
    }
    else
    {
      v21 = 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 392), v16);
    if ( v21 )
    {
      if ( (unsigned __int8)byte_1C00895DB >= 4u )
        WPP_SF_q(23LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v6);
      v33 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      p_NextDriver = &ndisMiniDriverList;
      v35 = v33;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v36 = *p_NextDriver;
          if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v6 )
            break;
          p_NextDriver = &v36->NextDriver;
          if ( !v36->NextDriver )
            goto LABEL_74;
        }
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v6 + 8);
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_74:
      KeReleaseSpinLock(&ndisMiniDriverListLock, v35);
      v37 = *(void **)(v6 + 888);
      if ( v37 )
      {
        ExFreePoolWithTag(v37, 0);
        *(_QWORD *)(v6 + 888) = 0LL;
      }
      v38 = *(void **)(v6 + 32);
      if ( v38 )
      {
        ExFreePoolWithTag(v38, 0);
        *(_QWORD *)(v6 + 32) = 0LL;
      }
      if ( (*(_BYTE *)(v6 + 26) & 1) != 0 )
      {
        KeWaitForSingleObject((PVOID)(v6 + 416), Executive, 0, 0, 0LL);
        v39 = *(_QWORD **)(v6 + 96);
        *(_QWORD *)(v6 + 472) = KeGetCurrentThread();
        if ( v39 )
        {
          do
          {
            v40 = (_QWORD *)*v39;
            ExFreePoolWithTag(v39, 0);
            v39 = v40;
          }
          while ( v40 );
        }
        *(_QWORD *)(v6 + 472) = 0LL;
        KeReleaseMutex((PRKMUTEX)(v6 + 416), 0);
      }
      KeSetEvent((PRKEVENT)(v6 + 368), 0, 0);
      if ( (unsigned __int8)byte_1C00895DB >= 4u )
        WPP_SF_q(24LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v6);
    }
  }
}
