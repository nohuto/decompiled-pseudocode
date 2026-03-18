/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C00090D0
 * Callers:
 *     PciConfigInternal @ 0x1C0008C74 (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C0008FD0 (PciConfigSpaceHandler.c)
 * Callees:
 *     GetOpRegionScope @ 0x1C00081A4 (GetOpRegionScope.c)
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     GetPciAddressWorker @ 0x1C00095A0 (GetPciAddressWorker.c)
 *     AMLIGetParent @ 0x1C000B88C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     RtlStringCchPrintfW @ 0x1C001DB9C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C003AC44 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  ULONG BusDataByOffset; // ebp
  __int64 v6; // r8
  __int64 v7; // rsi
  char v8; // dl
  unsigned int v9; // eax
  __int64 v10; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rdi
  char v13; // al
  int PciAddressWorker; // eax
  int v16; // r14d
  unsigned __int8 CurrentIrql; // di
  void (__fastcall *v18)(_QWORD); // rax
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  ULONG v23; // edx
  int v24; // r8d
  ULONG v25; // r9d
  __int64 v26; // rax
  ULONG Offset; // r12d
  const char *v28; // r13
  ULONG v29; // ecx
  ULONG v30; // ecx
  ULONG Length; // r8d
  unsigned int v32; // eax
  __int64 v33; // rcx
  int OpRegionScope; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // [rsp+30h] [rbp-98h]
  ULONG v41; // [rsp+34h] [rbp-94h]
  int v42; // [rsp+38h] [rbp-90h]
  _QWORD v43[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v44; // [rsp+50h] [rbp-78h] BYREF
  wchar_t v45; // [rsp+58h] [rbp-70h]
  wchar_t pszDest[16]; // [rsp+60h] [rbp-68h] BYREF

  BusDataByOffset = 0;
  v44 = *(_QWORD *)L"ACPI";
  v45 = aAcpi_1[4];
  _InterlockedIncrement((volatile signed __int32 *)a4 + 20);
  if ( (int)a2 < 0 )
  {
    v16 = 0;
    goto LABEL_16;
  }
  if ( !*((_QWORD *)a4 + 7) )
  {
    v32 = a4[19];
    if ( (v32 & 0x1000) != 0 )
      goto LABEL_65;
    v33 = *((_QWORD *)a4 + 1);
    a4[19] = v32 | 0x1000;
    OpRegionScope = GetOpRegionScope(v33, a2, (__int64)a4, (__int64)(a4 + 14));
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
      v16 = 0;
      goto LABEL_16;
    }
    v35 = *((_QWORD *)a4 + 1);
    if ( v35 )
    {
      *(_QWORD *)(*(_QWORD *)v35 + 96LL) = *((_QWORD *)a4 + 7);
      AMLIReferenceHandleEx(*((_QWORD *)a4 + 7));
    }
  }
  v6 = *(_QWORD *)(**((_QWORD **)a4 + 7) + 96LL);
  if ( !v6 )
  {
    v16 = 0;
    goto LABEL_16;
  }
  v7 = *(_QWORD *)(v6 + 72);
  if ( v7 )
  {
LABEL_13:
    v16 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( *a4 )
    {
      if ( *a4 == 1 )
      {
        v23 = a4[4];
        v24 = 0;
        v40 = 0;
        v25 = 0;
        v42 = 0;
        v26 = 0LL;
        Offset = v23;
        v28 = "+";
        do
        {
          v29 = PciConfigDisallowedRanges[v26];
          if ( Offset < v29 )
          {
            v30 = v29 - Offset;
            Length = v23 + a4[5] - Offset;
            v41 = Length;
            if ( Length >= v30 )
            {
              Length = v30;
              v41 = v30;
            }
            if ( v7 )
            {
              if ( CurrentIrql < 2u )
                CurrentIrql = KfRaiseIrql(2u);
              BusDataByOffset += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD, ULONG))(v7 + 48))(
                                   *(_QWORD *)(v7 + 8),
                                   0LL,
                                   *((_QWORD *)a4 + 3) + 4 * (Offset - (unsigned __int64)a4[4]),
                                   Offset,
                                   v41);
              if ( CurrentIrql < 2u )
                KeLowerIrql(CurrentIrql);
            }
            else
            {
              BusDataByOffset += HalSetBusDataByOffset(
                                   PCIConfiguration,
                                   a4[22],
                                   a4[21],
                                   (PVOID)(*((_QWORD *)a4 + 3) + 4 * (Offset - (unsigned __int64)v23)),
                                   Offset,
                                   Length);
            }
            v25 = v41 + v42;
            v24 = v40;
            v42 += v41;
          }
          v23 = a4[4];
          Offset = *(unsigned __int16 *)v28 + 1;
          if ( v23 > Offset )
            Offset = a4[4];
          if ( Offset >= v23 + a4[5] )
            break;
          v26 = 2LL * (unsigned int)++v24;
          v40 = v24;
          v28 = (const char *)&PciConfigDisallowedRanges[v26 + 1];
        }
        while ( *(_WORD *)v28 );
        if ( !v25 )
        {
          RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x", v23);
          v43[0] = &v44;
          v43[1] = pszDest;
          ACPIWriteEventLogEntry(3221553162LL, v43, 2LL);
        }
      }
      else
      {
        v16 = -1073741822;
      }
    }
    else if ( v7 )
    {
      if ( CurrentIrql < 2u )
        CurrentIrql = KfRaiseIrql(2u);
      BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(v7 + 56))(
                          *(_QWORD *)(v7 + 8),
                          0LL,
                          *((_QWORD *)a4 + 3),
                          a4[4],
                          a4[5]);
      if ( CurrentIrql < 2u )
        KeLowerIrql(CurrentIrql);
    }
    else
    {
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, a4[22], a4[21], *((PVOID *)a4 + 3), a4[4], a4[5]);
    }
    goto LABEL_16;
  }
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 176), 0, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 80), 0, 0) & 2) != 0 || (v8 & 1) != 0 )
    goto LABEL_6;
  v21 = AMLIGetParent(*((_QWORD *)a4 + 7));
  if ( !v21 )
  {
LABEL_65:
    v16 = -1073741772;
    goto LABEL_16;
  }
  v22 = *(_QWORD *)(*(_QWORD *)v21 + 96LL);
  AMLIDereferenceHandleEx(v21);
  if ( !v22 )
  {
    v16 = -1073741772;
    goto LABEL_16;
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 176), 0, 0);
LABEL_6:
  v9 = a4[19];
  if ( (v9 & 0x100) != 0 )
    goto LABEL_13;
  v10 = *((_QWORD *)a4 + 7);
  a4[19] = v9 | 0x100;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    v13 = gdwfAMLI;
    *v12 = v10;
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
    if ( (v13 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v12[8] = a4;
    v12[7] = PciConfigSpaceHandlerWorker;
    *((_DWORD *)v12 + 12) = -1;
    v12[1] = a4 + 22;
    v12[2] = a4 + 21;
    PciAddressWorker = GetPciAddressWorker(v10, 0LL, 0LL, v12);
    if ( PciAddressWorker == 259 )
      return 259LL;
    if ( PciAddressWorker >= 0 )
      goto LABEL_13;
  }
  v16 = 0;
LABEL_16:
  if ( !*a4 && !BusDataByOffset )
    memset(*((void **)a4 + 3), 255, a4[5]);
  if ( a4[20] )
  {
    v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)a4 + 5);
    if ( a4[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v18)(
        *((_QWORD *)a4 + 7),
        (unsigned int)v16,
        0LL,
        *((_QWORD *)a4 + 6));
    else
      v18(*((_QWORD *)a4 + 6));
  }
  if ( v16 < 0 )
  {
    v36 = *((_QWORD *)a4 + 1);
    if ( v36 )
    {
      dword_1C005ADB0 = *(_DWORD *)(*(_QWORD *)v36 + 32LL);
      byte_1C005ADB4 = 0;
    }
    v37 = *((_QWORD *)a4 + 7);
    if ( v37 )
    {
      dword_1C005ADB0 = *(_DWORD *)(*(_QWORD *)v37 + 32LL);
      byte_1C005ADB4 = 0;
    }
  }
  v19 = (volatile signed __int32 *)*((_QWORD *)a4 + 1);
  if ( v19 )
  {
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      v38 = *(_QWORD *)v19;
      if ( v19 == (volatile signed __int32 *)(*(_QWORD *)v19 + 112LL) )
      {
        DereferenceObjectEx(v38);
      }
      else
      {
        DereferenceObjectEx(v38);
        HeapFree(v19);
      }
    }
    *((_QWORD *)a4 + 1) = 0LL;
  }
  v20 = (volatile signed __int32 *)*((_QWORD *)a4 + 7);
  if ( v20 )
  {
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      v39 = *(_QWORD *)v20;
      if ( v20 == (volatile signed __int32 *)(*(_QWORD *)v20 + 112LL) )
      {
        DereferenceObjectEx(v39);
      }
      else
      {
        DereferenceObjectEx(v39);
        HeapFree(v20);
      }
    }
    *((_QWORD *)a4 + 7) = 0LL;
  }
  ExFreePoolWithTag(a4, 0x46706341u);
  return (unsigned int)v16;
}
