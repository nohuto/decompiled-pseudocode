/*
 * XREFs of IsPciBusAsyncWorker @ 0x1C000DD00
 * Callers:
 *     IsPciBusAsync @ 0x1C000DC28 (IsPciBusAsync.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     PciConfigInternal @ 0x1C000D9C4 (PciConfigInternal.c)
 *     IsPciBusAsync @ 0x1C000DC28 (IsPciBusAsync.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     ACPIConvertStringDelimitation @ 0x1C0029298 (ACPIConvertStringDelimitation.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsPciBusAsyncWorker(__int64 a1, int a2, __int64 a3, KSPIN_LOCK *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rbp
  const char *v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  _BYTE *v20; // rax
  void *v21; // rcx
  void *v22; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbp
  int v28; // eax
  __int64 *v29; // rdx
  int v30; // eax
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rbp
  _BYTE *v34; // rax
  KIRQL v35; // al

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 10);
  v7 = (__int64 *)*a4;
  if ( !*a4 )
    goto LABEL_77;
  if ( a2 < 0 )
    goto LABEL_77;
  v8 = *(_QWORD *)(*v7 + 104);
  if ( !v8 )
    goto LABEL_77;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    v34 = (_BYTE *)a4[8];
    goto LABEL_75;
  }
  if ( (v9 & 0x100000000LL) != 0 )
  {
LABEL_77:
    v20 = (_BYTE *)a4[8];
    goto LABEL_22;
  }
  v10 = *((_DWORD *)a4 + 2);
  if ( (v10 & 1) != 0 )
    goto LABEL_10;
  v11 = (__int64)(a4 + 2);
  *((_DWORD *)a4 + 2) = v10 | 1;
  a4[2] = 0LL;
  v12 = AMLIGetNamedChild(v7, 1145653343LL);
  if ( !v12 )
    goto LABEL_10;
  v6 = ACPIGet((__int64 *)*a4, 1145653343, 738722310, 0LL, 0, (__int64)IsPciBusAsyncWorker, (__int64)a4, v11, 0LL);
  AMLIDereferenceHandleEx(v12, 0LL);
  if ( v6 == 259 )
    return 259LL;
  if ( v6 >= 0 )
  {
LABEL_10:
    v13 = (const char *)a4[2];
    if ( v13 )
    {
      if ( strstr(v13, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") )
      {
        _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 192), a4[2], 0LL) )
          ExFreePoolWithTag((PVOID)a4[2], 0);
        _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x21u);
        a4[2] = 0LL;
LABEL_74:
        v34 = (_BYTE *)a4[8];
LABEL_75:
        *v34 = 1;
        goto LABEL_23;
      }
      ExFreePoolWithTag((PVOID)a4[2], 0);
      a4[2] = 0LL;
    }
    v14 = *((_DWORD *)a4 + 2);
    if ( (v14 & 0x80u) == 0 )
    {
      v15 = (__int64 *)*a4;
      a4[3] = 0LL;
      *((_DWORD *)a4 + 2) = v14 | 0x80;
      v16 = AMLIGetNamedChild(v15, 1145652063LL);
      if ( v16 )
      {
        v6 = ACPIGet(
               (__int64 *)*a4,
               1145652063,
               738722055,
               0LL,
               0,
               (__int64)IsPciBusAsyncWorker,
               (__int64)a4,
               (__int64)(a4 + 3),
               0LL);
        AMLIDereferenceHandleEx(v16, 0LL);
        if ( v6 == 259 )
          return 259LL;
        if ( v6 < 0 )
          goto LABEL_21;
      }
    }
    v17 = a4[3];
    if ( !v17 )
      goto LABEL_17;
    ACPIConvertStringDelimitation();
    if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
    {
      ExFreePoolWithTag((PVOID)a4[3], 0);
      a4[3] = 0LL;
LABEL_17:
      v18 = *((_DWORD *)a4 + 2);
      if ( (v18 & 8) == 0 )
      {
        *((_DWORD *)a4 + 2) = v18 | 8;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) != 0 )
        {
          *((_DWORD *)a4 + 8) = *(_DWORD *)(v8 + 92);
        }
        else
        {
          v19 = ACPIGet(
                  (__int64 *)*a4,
                  1380204895,
                  -1543240702,
                  0LL,
                  0,
                  (__int64)IsPciBusAsyncWorker,
                  (__int64)a4,
                  (__int64)(a4 + 4),
                  0LL);
          v6 = v19;
          if ( v19 == 259 )
            return 259LL;
          if ( v19 < 0 )
            goto LABEL_21;
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 88), 0, 0) & 0x80u) == 0 )
      {
        _InterlockedExchange((volatile __int32 *)(v8 + 92), *((_DWORD *)a4 + 8));
        _InterlockedOr((volatile signed __int32 *)(v8 + 88), 0x80u);
      }
      v24 = *((_DWORD *)a4 + 2);
      if ( (v24 & 0x20) == 0 )
      {
        v25 = (__int64 *)*a4;
        *((_DWORD *)a4 + 2) = v24 | 0x20;
        v26 = AMLIGetParent((__int64)v25);
        v27 = v26;
        if ( v26 )
        {
          v6 = IsPciBusAsync(v26, (__int64)IsPciBusAsyncWorker, (__int64)a4, (_BYTE *)a4 + 36);
          AMLIDereferenceHandleEx(v27, 0LL);
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
      v28 = *((_DWORD *)a4 + 2);
      if ( (v28 & 0x40) != 0 )
      {
LABEL_48:
        if ( *((_WORD *)a4 + 36) != 0xFFFF && *((_WORD *)a4 + 37) != 0xFFFF && *((unsigned __int8 *)a4 + 80) != 0xFFFF )
        {
          v31 = *((_BYTE *)a4 + 86);
          if ( v31 != -1 && *((_BYTE *)a4 + 83) != 0xFF && *((_BYTE *)a4 + 82) != 0xFF && *((_BYTE *)a4 + 81) != 0xFF )
          {
            if ( (v31 & 0x7Fu) - 1 <= 1 )
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
              *(_BYTE *)(v8 + 96) = *((_BYTE *)a4 + 86);
              *(_BYTE *)a4[8] = 1;
            }
            else
            {
              _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x100000000uLL);
              v5 = 1;
              *(_BYTE *)a4[8] = 0;
            }
            v32 = AMLIGetParent(*a4);
            if ( v32 )
            {
              v33 = *(_QWORD *)(*(_QWORD *)v32 + 104LL);
              AMLIDereferenceHandleEx(v32, 0LL);
            }
            else
            {
              v33 = 0LL;
            }
            if ( v33 )
            {
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v33 + 184), 0, 0) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(v8 + 88), 2u);
                if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                  _InterlockedOr64((volatile signed __int64 *)(v8 + 912), 0x8000uLL);
              }
              goto LABEL_23;
            }
          }
        }
        goto LABEL_21;
      }
      v29 = (__int64 *)*a4;
      *((_DWORD *)a4 + 2) = v28 | 0x40;
      v30 = PciConfigInternal(
              v17,
              (__int64)v29,
              a3,
              (__int64)a4,
              (__int64)IsPciBusAsyncWorker,
              (__int64)a4,
              (__int64)(a4 + 9));
      v6 = v30;
      if ( v30 != 259 )
      {
        if ( v30 < 0 )
          goto LABEL_21;
        goto LABEL_48;
      }
      return 259LL;
    }
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x2000000uLL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), a4[3], 0LL) )
      ExFreePoolWithTag((PVOID)a4[3], 0);
    _InterlockedOr((volatile signed __int32 *)(v8 + 184), 0x41u);
    a4[3] = 0LL;
    goto LABEL_74;
  }
LABEL_21:
  v20 = (_BYTE *)a4[8];
LABEL_22:
  *v20 = 0;
LABEL_23:
  if ( v6 == -1073741772 )
    v6 = 0;
  if ( *((_DWORD *)a4 + 10) )
    ((void (__fastcall *)(KSPIN_LOCK, _QWORD, _QWORD, KSPIN_LOCK))a4[6])(*a4, (unsigned int)v6, 0LL, a4[7]);
  v21 = (void *)a4[2];
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = (void *)a4[3];
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4, 0LL);
    *a4 = 0LL;
  }
  if ( a4 < gPreAllocPciPool || a4 >= &gPreAllocPciPoolSpinLock )
  {
    ExFreePoolWithTag(a4, 0x46706341u);
  }
  else
  {
    v35 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    *((_BYTE *)a4 + 136) = 0;
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v35);
  }
  return (unsigned int)v6;
}
