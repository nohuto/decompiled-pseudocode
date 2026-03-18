/*
 * XREFs of ACPIBusIrpQueryHardwareId @ 0x1C00652E4
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

__int64 __fastcall ACPIBusIrpQueryHardwareId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r12
  int v7; // r14d
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // rsi
  size_t v10; // rbx
  __int64 v11; // rcx
  size_t v12; // rdx
  PVOID PoolWithTag; // rax
  size_t v14; // r8
  char *v15; // rdx
  SIZE_T v16; // rdx
  PVOID v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  NTSTATUS v20; // eax
  bool v21; // zf
  int v22; // eax
  __int64 v24; // [rsp+40h] [rbp-29h]
  __int64 v25; // [rsp+48h] [rbp-21h]
  size_t v26; // [rsp+60h] [rbp-9h] BYREF
  void *Src; // [rsp+68h] [rbp-1h] BYREF
  PVOID v28; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v29[9]; // [rsp+78h] [rbp+Fh] BYREF
  size_t pcbRemaining; // [rsp+D0h] [rbp+67h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+E0h] [rbp+77h] BYREF
  size_t Size; // [rsp+E8h] [rbp+7Fh] BYREF

  Src = 0LL;
  P = 0LL;
  v28 = 0LL;
  Size = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v29[0] = 0LL;
  v7 = 0;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  pcbRemaining = *a2;
  ppszDestEnd = v8;
  if ( !v8 )
  {
LABEL_41:
    v7 = -1073741670;
    goto LABEL_29;
  }
  v11 = *(_QWORD *)(a3 + 704);
  if ( v11 && (unsigned int)AMLIGetNSObjectType(v11) == 12 )
  {
    v7 = ACPIGet((_QWORD *)a3, 1145653343, 268959830, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&v26);
    if ( v7 < 0 )
      goto LABEL_29;
    if ( v10 >= v26 )
    {
      memmove(v9, Src, v26);
LABEL_26:
      if ( v10 < v26 )
        goto LABEL_29;
      v22 = RtlStringCbPrintfExW(&v9[v26 >> 1], v10 - v26, &ppszDestEnd, &pcbRemaining, 0, &word_1C0073600);
      goto LABEL_28;
    }
    goto LABEL_41;
  }
  if ( (*(_QWORD *)a3 & 0x200000000000LL) == 0 || (*(_QWORD *)a3 & 0x800000000000LL) != 0 )
    goto LABEL_23;
  if ( !*(_QWORD *)(a3 + 552) )
  {
    v22 = ACPIGet((_QWORD *)a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&Size);
LABEL_28:
    v7 = v22;
    goto LABEL_29;
  }
  v12 = -1LL;
  do
    ++v12;
  while ( *(_BYTE *)(*(_QWORD *)(a3 + 552) + v12) );
  Size = v12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x42706341u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_29;
  memset(PoolWithTag, 0, Size);
  v14 = Size;
  v15 = *(char **)(a3 + 552);
  if ( Size >= 5 )
  {
    v14 = Size - 5;
    Size -= 5LL;
    v15 += 5;
  }
  memmove(P, v15, v14);
  if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(P, Size) && (*(_BYTE *)(a3 + 904) & 0x1C) == 0 )
  {
LABEL_23:
    v7 = ACPIGet((_QWORD *)a3, 1145653343, 268959830, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&v26);
    if ( v7 < 0 )
      goto LABEL_29;
    if ( v10 >= v26 )
    {
      memmove(v9, Src, v26);
      if ( !v9 )
        goto LABEL_29;
      goto LABEL_26;
    }
    goto LABEL_41;
  }
  v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x42706341u);
  v6 = v17;
  if ( !v17 )
    goto LABEL_29;
  v18 = (Size != 7) + 3LL;
  memset(v17, 0, Size);
  if ( Size > v18 )
  {
    memmove(v6, (char *)P + v18, Size - v18);
    *((_BYTE *)P + v18) = 0;
  }
  v19 = *(_QWORD *)(a3 + 904);
  if ( (v19 & 0x10) != 0 )
  {
    v7 = ACPIGet((_QWORD *)a3, 1112888159, 268959764, 0LL, 0, 0LL, 0LL, (__int64)&v28, (__int64)v29);
    if ( v7 < 0 )
      goto LABEL_29;
    if ( (*(_BYTE *)(a3 + 904) & 8) != 0 )
    {
      v7 = RtlStringCbPrintfExW(
             v9,
             v10,
             &ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X",
             P,
             v6,
             *(_QWORD *)(a3 + 568),
             *(_DWORD *)(a3 + 576));
      if ( v7 < 0 || !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_29;
      v9 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v20 = RtlStringCbPrintfExW(
            v9,
            v10,
            &ppszDestEnd,
            &pcbRemaining,
            0,
            L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S",
            P,
            v6,
            *(_QWORD *)(a3 + 568));
  }
  else
  {
    if ( (v19 & 8) != 0 )
    {
      v7 = RtlStringCbPrintfExW(
             v9,
             v10,
             &ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&REV_%04X",
             P,
             v6,
             *(_DWORD *)(a3 + 576));
      if ( v7 < 0 || !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_29;
      v9 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v20 = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S", P, v6);
  }
  v7 = v20;
  if ( v20 >= 0 && ppszDestEnd && pcbRemaining >= 2 )
  {
    v9 = ppszDestEnd + 1;
    v10 = pcbRemaining - 2;
    v21 = (*(_BYTE *)(a3 + 904) & 4) == 0;
    pcbRemaining -= 2LL;
    ++ppszDestEnd;
    if ( v21 )
      goto LABEL_23;
    v7 = RtlStringCbPrintfExW(
           v9,
           v10,
           &ppszDestEnd,
           &pcbRemaining,
           0,
           L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X",
           P,
           v6,
           *(unsigned __int16 *)(a3 + 590),
           *(unsigned __int16 *)(a3 + 588),
           *(unsigned __int8 *)(a3 + 587));
    if ( v7 >= 0 )
    {
      if ( ppszDestEnd )
      {
        if ( pcbRemaining >= 2 )
        {
          v25 = *(unsigned __int16 *)(a3 + 588);
          v24 = *(unsigned __int16 *)(a3 + 590);
          ++ppszDestEnd;
          pcbRemaining -= 2LL;
          v7 = RtlStringCbPrintfExW(
                 ppszDestEnd,
                 pcbRemaining,
                 &ppszDestEnd,
                 &pcbRemaining,
                 0,
                 L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X",
                 P,
                 v6,
                 v24,
                 v25);
          if ( v7 >= 0 && ppszDestEnd && pcbRemaining >= 2 )
          {
            v9 = ppszDestEnd + 1;
            v10 = pcbRemaining - 2;
            goto LABEL_23;
          }
        }
      }
    }
  }
LABEL_29:
  if ( v28 )
    ExFreePoolWithTag(v28, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
