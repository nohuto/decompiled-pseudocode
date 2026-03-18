/*
 * XREFs of ACPIBusIrpQueryCompatibleId @ 0x1C0071048
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0065160 (ACPIBusIrpQueryId.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1C00015D0 (RtlStringCbPrintfExW.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C000386C (AMLIGetNSObjectType.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIAllocateBuffer @ 0x1C0065658 (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C00656EC (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryCompatibleId(wchar_t **a1, SIZE_T *a2, __int64 a3)
{
  void *v6; // r15
  __int64 v7; // rdi
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // rsi
  size_t v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  size_t v13; // rdx
  PVOID PoolWithTag; // rax
  size_t v15; // r8
  char *v16; // rdx
  SIZE_T v17; // rdx
  PVOID v18; // rax
  unsigned __int64 v19; // rdi
  int v21; // eax
  __int64 v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+38h] [rbp-30h]
  __int64 v27; // [rsp+40h] [rbp-28h]
  __int64 v28; // [rsp+40h] [rbp-28h]
  size_t v29; // [rsp+50h] [rbp-18h] BYREF
  PVOID Src[2]; // [rsp+58h] [rbp-10h] BYREF
  size_t pcbRemaining; // [rsp+B0h] [rbp+48h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp+50h] BYREF
  PVOID P; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  P = 0LL;
  Src[0] = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, (__int64 *)a3);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  pcbRemaining = *a2;
  ppszDestEnd = v8;
  if ( !v8 )
    goto LABEL_36;
  v11 = *(_QWORD *)(a3 + 704);
  if ( v11 && (unsigned int)AMLIGetNSObjectType(v11) == 12 )
  {
    LODWORD(v7) = ACPIGet((_QWORD *)a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&v29);
    if ( (int)v7 < 0 )
      goto LABEL_20;
    if ( v10 >= v29 )
    {
      memmove(v9, Src[0], v29);
LABEL_30:
      if ( v10 < v29 )
        goto LABEL_20;
      v21 = RtlStringCbPrintfExW(&v9[v29 >> 1], v10 - v29, &ppszDestEnd, &pcbRemaining, 0, &word_1C0073600);
      goto LABEL_32;
    }
LABEL_36:
    LODWORD(v7) = -1073741670;
    goto LABEL_20;
  }
  if ( (*(_QWORD *)a3 & 0x200000000000LL) != 0 && (*(_QWORD *)a3 & 0x800000000000LL) == 0 )
  {
    v12 = *(_QWORD *)(a3 + 552);
    if ( !v12 )
    {
      v21 = ACPIGet((_QWORD *)a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&Size);
LABEL_32:
      LODWORD(v7) = v21;
      goto LABEL_20;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v12 + v13) );
    Size = v13;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x42706341u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_20;
    memset(PoolWithTag, 0, Size);
    v15 = Size;
    v16 = *(char **)(a3 + 552);
    if ( Size >= 5 )
    {
      v15 = Size - 5;
      Size -= 5LL;
      v16 += 5;
    }
    memmove(P, v16, v15);
    if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)P, Size) && (*(_BYTE *)(a3 + 904) & 0x1C) == 0 )
    {
LABEL_18:
      LODWORD(v7) = ACPIGet((_QWORD *)a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&v29);
      if ( (int)v7 < 0 && v10 == *a2 )
        goto LABEL_20;
      LODWORD(v7) = 0;
      if ( v10 >= v29 )
      {
        memmove(v9, Src[0], v29);
        if ( !v9 )
          goto LABEL_20;
        goto LABEL_30;
      }
      goto LABEL_36;
    }
    v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x42706341u);
    v6 = v18;
    if ( !v18 )
      goto LABEL_20;
    memset(v18, 0, Size);
    LOBYTE(v7) = Size != 7;
    v19 = v7 + 3;
    memset(v6, 0, Size);
    if ( Size > v19 )
    {
      memmove(v6, (char *)P + v19, Size - v19);
      *((_BYTE *)P + v19) = 0;
    }
    if ( (*(_BYTE *)(a3 + 904) & 0x18) == 0x18 )
    {
      LODWORD(v7) = RtlStringCbPrintfExW(
                      v9,
                      v10,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&DEV_%S&REV_%04X",
                      P,
                      v6,
                      *(_DWORD *)(a3 + 576));
      if ( (int)v7 < 0 )
        goto LABEL_20;
      if ( !ppszDestEnd )
        goto LABEL_20;
      if ( pcbRemaining < 2 )
        goto LABEL_20;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&DEV_%S",
                      P,
                      v6);
      if ( (int)v7 < 0 || !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_20;
      v9 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
  }
  if ( (*(_BYTE *)(a3 + 904) & 4) == 0 )
    goto LABEL_18;
  LODWORD(v7) = RtlStringCbPrintfExW(
                  v9,
                  v10,
                  &ppszDestEnd,
                  &pcbRemaining,
                  0,
                  L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X",
                  P,
                  *(unsigned __int16 *)(a3 + 590),
                  *(unsigned __int16 *)(a3 + 588),
                  *(unsigned __int8 *)(a3 + 587));
  if ( (int)v7 >= 0 )
  {
    if ( ppszDestEnd )
    {
      if ( pcbRemaining >= 2 )
      {
        v27 = *(unsigned __int16 *)(a3 + 588);
        v24 = *(unsigned __int16 *)(a3 + 590);
        ++ppszDestEnd;
        pcbRemaining -= 2LL;
        LODWORD(v7) = RtlStringCbPrintfExW(
                        ppszDestEnd,
                        pcbRemaining,
                        &ppszDestEnd,
                        &pcbRemaining,
                        0,
                        L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X",
                        P,
                        v24,
                        v27);
        if ( (int)v7 >= 0 )
        {
          if ( ppszDestEnd )
          {
            if ( pcbRemaining >= 2 )
            {
              ++ppszDestEnd;
              pcbRemaining -= 2LL;
              LODWORD(v7) = RtlStringCbPrintfExW(
                              ppszDestEnd,
                              pcbRemaining,
                              &ppszDestEnd,
                              &pcbRemaining,
                              0,
                              L"ACPI\\VEN_%S",
                              P);
              if ( (int)v7 >= 0 )
              {
                if ( ppszDestEnd )
                {
                  if ( pcbRemaining >= 2 )
                  {
                    v28 = *(unsigned __int8 *)(a3 + 587);
                    v25 = *(unsigned __int16 *)(a3 + 588);
                    v22 = *(unsigned __int16 *)(a3 + 590);
                    ++ppszDestEnd;
                    pcbRemaining -= 2LL;
                    LODWORD(v7) = RtlStringCbPrintfExW(
                                    ppszDestEnd,
                                    pcbRemaining,
                                    &ppszDestEnd,
                                    &pcbRemaining,
                                    0,
                                    L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X",
                                    v22,
                                    v25,
                                    v28);
                    if ( (int)v7 >= 0 )
                    {
                      if ( ppszDestEnd )
                      {
                        if ( pcbRemaining >= 2 )
                        {
                          v26 = *(unsigned __int16 *)(a3 + 588);
                          v23 = *(unsigned __int16 *)(a3 + 590);
                          ++ppszDestEnd;
                          pcbRemaining -= 2LL;
                          LODWORD(v7) = RtlStringCbPrintfExW(
                                          ppszDestEnd,
                                          pcbRemaining,
                                          &ppszDestEnd,
                                          &pcbRemaining,
                                          0,
                                          L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X",
                                          v23,
                                          v26);
                          if ( (int)v7 >= 0 && ppszDestEnd && pcbRemaining >= 2 )
                          {
                            v9 = ppszDestEnd + 1;
                            v10 = pcbRemaining - 2;
                            goto LABEL_18;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_20:
  if ( Src[0] )
    ExFreePoolWithTag(Src[0], 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v7;
}
