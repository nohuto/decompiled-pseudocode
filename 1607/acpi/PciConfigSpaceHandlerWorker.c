/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C001CF10
 * Callers:
 *     PciConfigInternal @ 0x1C000D9C4 (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C001CE10 (PciConfigSpaceHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     GetOpRegionScope @ 0x1C000C06C (GetOpRegionScope.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     GetPciAddressWorker @ 0x1C001D450 (GetPciAddressWorker.c)
 *     RtlStringCchPrintfW @ 0x1C0024110 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D554 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_ss @ 0x1C0052C08 (WPP_RECORDER_SF_ss.c)
 *     FreeObjectHandle @ 0x1C005CBAC (FreeObjectHandle.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG BusDataByOffset; // ebp
  unsigned int *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  char v11; // al
  int PciAddressWorker; // eax
  int v14; // r14d
  unsigned __int8 CurrentIrql; // di
  void (__fastcall *v16)(_QWORD); // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  const char *v22; // rax
  const char *v23; // rdx
  const char *v24; // rcx
  ULONG v25; // r12d
  __int64 v26; // rax
  ULONG v27; // r13d
  ULONG Length; // r13d
  int v29; // eax
  __int64 v30; // rcx
  int OpRegionScope; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  ULONG Offset; // [rsp+20h] [rbp-D8h]
  int v36; // [rsp+50h] [rbp-A8h]
  int v37; // [rsp+54h] [rbp-A4h]
  const char *v38; // [rsp+58h] [rbp-A0h]
  _QWORD v39[2]; // [rsp+60h] [rbp-98h] BYREF
  int v40; // [rsp+70h] [rbp-88h] BYREF
  char v41; // [rsp+74h] [rbp-84h]
  int v42; // [rsp+78h] [rbp-80h] BYREF
  char v43; // [rsp+7Ch] [rbp-7Ch]
  __int64 v44; // [rsp+80h] [rbp-78h] BYREF
  wchar_t v45; // [rsp+88h] [rbp-70h]
  wchar_t pszDest[16]; // [rsp+90h] [rbp-68h] BYREF

  BusDataByOffset = 0;
  v44 = *(_QWORD *)L"ACPI";
  v5 = (unsigned int *)a4;
  v45 = aAcpi_1[4];
  _InterlockedIncrement((volatile signed __int32 *)(a4 + 80));
  if ( (int)a2 < 0 )
  {
    v14 = 0;
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(a4 + 56) )
  {
    v29 = *(_DWORD *)(a4 + 76);
    if ( (v29 & 0x1000) != 0 )
      goto LABEL_67;
    v30 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 76) = v29 | 0x1000;
    OpRegionScope = GetOpRegionScope(v30, a2, a4, a4 + 56);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
      v14 = 0;
      goto LABEL_16;
    }
    v32 = *((_QWORD *)v5 + 1);
    if ( v32 )
    {
      *(_QWORD *)(*(_QWORD *)v32 + 104LL) = *((_QWORD *)v5 + 7);
      AMLIReferenceHandleEx(*((_QWORD *)v5 + 7));
    }
  }
  a3 = *(_QWORD *)(**((_QWORD **)v5 + 7) + 104LL);
  if ( !a3 )
  {
    v14 = 0;
    goto LABEL_16;
  }
  v6 = *(_QWORD *)(a3 + 80);
  if ( v6 )
  {
LABEL_13:
    v14 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( *v5 )
    {
      if ( *v5 == 1 )
      {
        LODWORD(a2) = v5[4];
        v24 = "+";
        v38 = "+";
        LODWORD(a3) = 0;
        v36 = 0;
        LODWORD(a4) = 0;
        v37 = 0;
        v25 = a2;
        v26 = 0LL;
        do
        {
          v27 = PciConfigDisallowedRanges[v26];
          if ( v25 < v27 )
          {
            Length = v27 - v25;
            if ( v5[5] + (_DWORD)a2 - v25 <= Length )
              Length = v5[5] + a2 - v25;
            if ( v6 )
            {
              if ( CurrentIrql < 2u )
                CurrentIrql = KfRaiseIrql(2u);
              Offset = Length;
              BusDataByOffset += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v6 + 48))(
                                   *(_QWORD *)(v6 + 8),
                                   0LL,
                                   *((_QWORD *)v5 + 3) + 4 * (v25 - (unsigned __int64)v5[4]),
                                   v25);
              if ( CurrentIrql < 2u )
                KeLowerIrql(CurrentIrql);
            }
            else
            {
              BusDataByOffset += HalSetBusDataByOffset(
                                   PCIConfiguration,
                                   v5[22],
                                   v5[21],
                                   (PVOID)(*((_QWORD *)v5 + 3) + 4 * (v25 - (unsigned __int64)(unsigned int)a2)),
                                   v25,
                                   Length);
            }
            v24 = v38;
            LODWORD(a4) = Length + v37;
            LODWORD(a3) = v36;
            v37 += Length;
          }
          LODWORD(a2) = v5[4];
          v25 = *(unsigned __int16 *)v24 + 1;
          if ( (unsigned int)a2 > v25 )
            v25 = v5[4];
          if ( v25 >= (unsigned int)a2 + v5[5] )
            break;
          LODWORD(a3) = a3 + 1;
          v26 = 2LL * (unsigned int)a3;
          v36 = a3;
          v24 = (const char *)&PciConfigDisallowedRanges[v26 + 1];
          v38 = v24;
        }
        while ( *(_WORD *)v24 );
        if ( !(_DWORD)a4 )
        {
          RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x", (unsigned int)a2);
          v39[0] = &v44;
          v39[1] = pszDest;
          ACPIWriteEventLogEntry(3221553162LL, v39, 2LL);
        }
      }
      else
      {
        v14 = -1073741822;
      }
    }
    else if ( v6 )
    {
      if ( CurrentIrql < 2u )
        CurrentIrql = KfRaiseIrql(2u);
      Offset = v5[5];
      BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 56))(
                          *(_QWORD *)(v6 + 8),
                          0LL,
                          *((_QWORD *)v5 + 3),
                          v5[4]);
      if ( CurrentIrql < 2u )
        KeLowerIrql(CurrentIrql);
    }
    else
    {
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v5[22], v5[21], *((PVOID *)v5 + 3), v5[4], v5[5]);
    }
    goto LABEL_16;
  }
  LODWORD(a2) = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 184), 0, 0);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 88), 0, 0) & 2) != 0 || (a2 & 1) != 0 )
    goto LABEL_6;
  v19 = (volatile signed __int32 *)AMLIGetParent(*((_QWORD *)v5 + 7));
  if ( !v19 )
  {
LABEL_67:
    v14 = -1073741772;
    goto LABEL_16;
  }
  v20 = *(_QWORD *)(*(_QWORD *)v19 + 104LL);
  AMLIDereferenceHandleEx(v19, 0LL);
  if ( !v20 )
  {
    v14 = -1073741772;
    goto LABEL_16;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 184), 0, 0) & 1) == 0 )
  {
    v21 = *(_QWORD *)(v20 + 8);
    v22 = (const char *)qword_1C002C340;
    v23 = (const char *)qword_1C002C340;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v22 = *(const char **)(v20 + 560);
      if ( (v21 & 0x400000000000LL) != 0 )
        v23 = *(const char **)(v20 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0xAu,
      (__int64)&WPP_9299deb349643418f1501730d242e085_Traceguids,
      1,
      v20,
      v22,
      v23);
  }
LABEL_6:
  v7 = v5[19];
  if ( (v7 & 0x100) != 0 )
    goto LABEL_13;
  v8 = *((_QWORD *)v5 + 7);
  v5[19] = v7 | 0x100;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    v11 = gdwfAMLI;
    *v10 = v8;
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    if ( (v11 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v10[8] = v5;
    v10[7] = PciConfigSpaceHandlerWorker;
    *((_DWORD *)v10 + 12) = -1;
    v10[1] = v5 + 22;
    v10[2] = v5 + 21;
    PciAddressWorker = GetPciAddressWorker(v8, 0LL, 0LL, v10);
    if ( PciAddressWorker == 259 )
      return 259LL;
    if ( PciAddressWorker >= 0 )
      goto LABEL_13;
  }
  v14 = 0;
LABEL_16:
  if ( !*v5 && !BusDataByOffset )
    memset(*((void **)v5 + 3), 255, v5[5]);
  if ( v5[20] )
  {
    v16 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 5);
    if ( v5[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v16)(
        *((_QWORD *)v5 + 7),
        (unsigned int)v14,
        0LL,
        *((_QWORD *)v5 + 6));
    else
      v16(*((_QWORD *)v5 + 6));
  }
  if ( v14 < 0 )
  {
    v42 = 0;
    v43 = 0;
    v40 = 0;
    v41 = 0;
    v33 = *((_QWORD *)v5 + 1);
    if ( v33 )
    {
      dword_1C0074514 = *(_DWORD *)(*(_QWORD *)v33 + 40LL);
      byte_1C0074518 = 0;
      v42 = dword_1C0074514;
    }
    v34 = *((_QWORD *)v5 + 7);
    if ( v34 )
    {
      dword_1C0074514 = *(_DWORD *)(*(_QWORD *)v34 + 40LL);
      byte_1C0074518 = 0;
      v40 = dword_1C0074514;
    }
    WPP_RECORDER_SF_ss(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, Offset, (__int64)&v42, (__int64)&v40);
  }
  v17 = *((_QWORD *)v5 + 1);
  if ( v17 )
  {
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 )
      FreeObjectHandle(v17);
    *((_QWORD *)v5 + 1) = 0LL;
  }
  v18 = *((_QWORD *)v5 + 7);
  if ( v18 )
  {
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 )
      FreeObjectHandle(v18);
    *((_QWORD *)v5 + 7) = 0LL;
  }
  ExFreePoolWithTag(v5, 0x46706341u);
  return (unsigned int)v14;
}
