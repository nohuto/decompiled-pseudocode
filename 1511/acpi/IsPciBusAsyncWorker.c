/*
 * XREFs of IsPciBusAsyncWorker @ 0x1C000AA20
 * Callers:
 *     IsPciBusAsync @ 0x1C0008BB0 (IsPciBusAsync.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIConvertStringDelimitation @ 0x1C00079AC (ACPIConvertStringDelimitation.c)
 *     PciConfigInternal @ 0x1C0008950 (PciConfigInternal.c)
 *     IsPciBusAsync @ 0x1C0008BB0 (IsPciBusAsync.c)
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsPciBusAsyncWorker(__int64 a1, int a2, __int64 a3, KSPIN_LOCK *a4)
{
  char v5; // r15
  int v6; // esi
  KSPIN_LOCK v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rbp
  const char *v12; // rcx
  int v13; // eax
  KSPIN_LOCK v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  _BYTE *v19; // rax
  void *v20; // rcx
  void *v21; // rcx
  int v23; // eax
  KSPIN_LOCK v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbp
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rbp
  _BYTE *v33; // rax
  KIRQL v34; // al

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 10);
  v7 = *a4;
  if ( !*a4 )
    goto LABEL_77;
  if ( a2 < 0 )
    goto LABEL_77;
  v8 = *(_QWORD *)(*(_QWORD *)v7 + 96LL);
  if ( !v8 )
    goto LABEL_77;
  if ( (*(_QWORD *)v8 & 0x2000000LL) != 0 )
  {
    v33 = (_BYTE *)a4[8];
    goto LABEL_75;
  }
  if ( (*(_QWORD *)v8 & 0x100000000LL) != 0 )
  {
LABEL_77:
    v19 = (_BYTE *)a4[8];
    goto LABEL_22;
  }
  v9 = *((_DWORD *)a4 + 2);
  if ( (v9 & 1) != 0 )
    goto LABEL_10;
  v10 = (__int64)(a4 + 2);
  *((_DWORD *)a4 + 2) = v9 | 1;
  a4[2] = 0LL;
  v11 = AMLIGetNamedChild(v7, 1145653343LL);
  if ( !v11 )
    goto LABEL_10;
  v6 = ACPIGet((_QWORD *)*a4, 1145653343, 738722310, 0LL, 0, (__int64)IsPciBusAsyncWorker, (__int64)a4, v10, 0LL);
  AMLIDereferenceHandleEx(v11);
  if ( v6 == 259 )
    return 259LL;
  if ( v6 >= 0 )
  {
LABEL_10:
    v12 = (const char *)a4[2];
    if ( v12 )
    {
      if ( strstr(v12, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
      {
        _InterlockedOr64((volatile signed __int64 *)v8, 0x2000000uLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 184), a4[2], 0LL) )
          ExFreePoolWithTag((PVOID)a4[2], 0);
        _InterlockedOr((volatile signed __int32 *)(v8 + 176), 0x21u);
        a4[2] = 0LL;
LABEL_74:
        v33 = (_BYTE *)a4[8];
LABEL_75:
        *v33 = 1;
        goto LABEL_23;
      }
      ExFreePoolWithTag((PVOID)a4[2], 0);
      a4[2] = 0LL;
    }
    v13 = *((_DWORD *)a4 + 2);
    if ( (v13 & 0x80u) == 0 )
    {
      v14 = *a4;
      a4[3] = 0LL;
      *((_DWORD *)a4 + 2) = v13 | 0x80;
      v15 = AMLIGetNamedChild(v14, 1145652063LL);
      if ( v15 )
      {
        v6 = ACPIGet(
               (_QWORD *)*a4,
               1145652063,
               738722055,
               0LL,
               0,
               (__int64)IsPciBusAsyncWorker,
               (__int64)a4,
               (__int64)(a4 + 3),
               0LL);
        AMLIDereferenceHandleEx(v15);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_21;
      }
    }
    v16 = a4[3];
    if ( !v16 )
      goto LABEL_17;
    ACPIConvertStringDelimitation(v16);
    if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
    {
      ExFreePoolWithTag((PVOID)a4[3], 0);
      a4[3] = 0LL;
LABEL_17:
      v17 = *((_DWORD *)a4 + 2);
      if ( (v17 & 8) == 0 )
      {
        *((_DWORD *)a4 + 2) = v17 | 8;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 80), 0, 0) & 0x80u) != 0 )
        {
          *((_DWORD *)a4 + 8) = *(_DWORD *)(v8 + 84);
        }
        else
        {
          v18 = ACPIGet(
                  (_QWORD *)*a4,
                  1380204895,
                  -1543240702,
                  0LL,
                  0,
                  (__int64)IsPciBusAsyncWorker,
                  (__int64)a4,
                  (__int64)(a4 + 4),
                  0LL);
          v6 = v18;
          if ( v18 == 259 )
            return 259LL;
          if ( v18 < 0 )
            goto LABEL_21;
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 80), 0, 0) & 0x80u) == 0 )
      {
        _InterlockedExchange((volatile __int32 *)(v8 + 84), *((_DWORD *)a4 + 8));
        _InterlockedOr((volatile signed __int32 *)(v8 + 80), 0x80u);
      }
      v23 = *((_DWORD *)a4 + 2);
      if ( (v23 & 0x20) == 0 )
      {
        v24 = *a4;
        *((_DWORD *)a4 + 2) = v23 | 0x20;
        v25 = AMLIGetParent(v24);
        v26 = v25;
        if ( v25 )
        {
          v6 = IsPciBusAsync(v25, (__int64)IsPciBusAsyncWorker, (__int64)a4, (_BYTE *)a4 + 36);
          AMLIDereferenceHandleEx(v26);
        }
        else
        {
          v6 = -1073741661;
        }
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_21;
      }
      if ( !*((_BYTE *)a4 + 36) )
        goto LABEL_21;
      v27 = *((_DWORD *)a4 + 2);
      if ( (v27 & 0x40) != 0 )
      {
LABEL_48:
        if ( *((_WORD *)a4 + 36) != 0xFFFF && *((_WORD *)a4 + 37) != 0xFFFF && *((unsigned __int8 *)a4 + 80) != 0xFFFF )
        {
          v30 = *((_BYTE *)a4 + 86);
          if ( v30 != -1 && *((_BYTE *)a4 + 83) != 0xFF && *((_BYTE *)a4 + 82) != 0xFF && *((_BYTE *)a4 + 81) != 0xFF )
          {
            if ( (v30 & 0x7Fu) - 1 <= 1 )
            {
              _InterlockedOr64((volatile signed __int64 *)v8, 0x2000000uLL);
              *(_BYTE *)(v8 + 88) = *((_BYTE *)a4 + 86);
              *(_BYTE *)a4[8] = 1;
            }
            else
            {
              _InterlockedOr64((volatile signed __int64 *)v8, 0x100000000uLL);
              v5 = 1;
              *(_BYTE *)a4[8] = 0;
            }
            v31 = AMLIGetParent(*a4);
            if ( v31 )
            {
              v32 = *(_QWORD *)(*(_QWORD *)v31 + 96LL);
              AMLIDereferenceHandleEx(v31);
            }
            else
            {
              v32 = 0LL;
            }
            if ( v32 )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v32 + 176), 0, 0) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(v8 + 80), 2u);
                if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                  _InterlockedOr64((volatile signed __int64 *)(v8 + 904), 0x8000uLL);
              }
              goto LABEL_23;
            }
          }
        }
        goto LABEL_21;
      }
      v28 = *a4;
      *((_DWORD *)a4 + 2) = v27 | 0x40;
      v29 = PciConfigInternal(v16, v28, a3, (__int64)a4, (__int64)IsPciBusAsyncWorker, (__int64)a4, (__int64)(a4 + 9));
      v6 = v29;
      if ( v29 != 259 )
      {
        if ( v29 < 0 )
          goto LABEL_21;
        goto LABEL_48;
      }
      return 259LL;
    }
    _InterlockedOr64((volatile signed __int64 *)v8, 0x2000000uLL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[3], 0LL) )
      ExFreePoolWithTag((PVOID)a4[3], 0);
    _InterlockedOr((volatile signed __int32 *)(v8 + 176), 0x41u);
    a4[3] = 0LL;
    goto LABEL_74;
  }
LABEL_21:
  v19 = (_BYTE *)a4[8];
LABEL_22:
  *v19 = 0;
LABEL_23:
  if ( v6 == -1073741772 )
    v6 = 0;
  if ( *((_DWORD *)a4 + 10) )
    ((void (__fastcall *)(KSPIN_LOCK, _QWORD, _QWORD, KSPIN_LOCK))a4[6])(*a4, (unsigned int)v6, 0LL, a4[7]);
  v20 = (void *)a4[2];
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = (void *)a4[3];
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  if ( a4 < gPreAllocPciPool || a4 >= &gPreAllocPciPoolSpinLock )
  {
    ExFreePoolWithTag(a4, 0x46706341u);
  }
  else
  {
    v34 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    *((_BYTE *)a4 + 136) = 0;
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v34);
  }
  return (unsigned int)v6;
}
