/*
 * XREFs of ACPIBusIrpQueryCompatibleId @ 0x1C008EEB4
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080960 (ACPIBusIrpQueryId.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1C0001090 (RtlStringCbPrintfExW.c)
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C00039EC (AMLIGetNSObjectType.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C0047420 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIAllocateBuffer @ 0x1C008034C (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C00803DC (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryCompatibleId(wchar_t **a1, SIZE_T *a2, __int64 a3)
{
  void *v6; // r15
  __int64 v7; // rdi
  wchar_t *v8; // rax
  size_t v9; // r8
  NTSTRSAFE_PWSTR v10; // r14
  size_t v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // rdx
  PVOID PoolWithTag; // rax
  size_t v18; // r8
  char *v19; // rdx
  SIZE_T v20; // rdx
  PVOID v21; // rax
  unsigned __int64 v22; // rdi
  size_t v24; // rdx
  int v25; // eax
  const char *v26; // rax
  __int64 v27; // rdx
  const char *v28; // rcx
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v31; // [rsp+30h] [rbp-48h]
  size_t v32; // [rsp+60h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t pcbRemaining; // [rsp+C0h] [rbp+48h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp+50h] BYREF
  void *v36; // [rsp+D0h] [rbp+58h] BYREF
  size_t Size; // [rsp+D8h] [rbp+60h] BYREF

  v36 = 0LL;
  P[0] = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 0x294uLL);
  *a1 = v8;
  v10 = v8;
  v11 = *a2;
  v12 = 0x200000000000LL;
  pcbRemaining = *a2;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    LODWORD(v7) = -1073741670;
    goto LABEL_41;
  }
  v13 = *(_QWORD *)(a3 + 712);
  if ( v13 && (unsigned int)AMLIGetNSObjectType(v13) == 12 )
  {
    LODWORD(v7) = ACPIGet((__int64 *)a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v32);
    if ( (int)v7 >= 0 )
    {
      v9 = v32;
      if ( v11 >= v32 )
      {
        memmove(v10, P[0], v32);
        v24 = v32;
        if ( v11 < v32 )
          goto LABEL_20;
        goto LABEL_33;
      }
LABEL_40:
      LODWORD(v7) = -1073741670;
      goto LABEL_41;
    }
    goto LABEL_21;
  }
  v14 = *(_QWORD *)(a3 + 8);
  if ( (v14 & v12) == 0 || (v14 & 0x800000000000LL) != 0 )
    goto LABEL_17;
  v15 = *(_QWORD *)(a3 + 560);
  if ( !v15 )
  {
    v25 = ACPIGet((__int64 *)a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&v36, (__int64)&Size);
    goto LABEL_34;
  }
  v16 = -1LL;
  do
    ++v16;
  while ( *(_BYTE *)(v15 + v16) );
  Size = v16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x42706341u);
  v36 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    v18 = Size;
    v19 = *(char **)(a3 + 560);
    if ( Size >= 5 )
    {
      v18 = Size - 5;
      Size -= 5LL;
      v19 += 5;
    }
    memmove(v36, v19, v18);
    if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)v36, Size) && (*(_BYTE *)(a3 + 912) & 0x1C) == 0 )
    {
LABEL_18:
      LODWORD(v7) = ACPIGet((__int64 *)a3, 1145652063, 268960023, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v32);
      if ( (int)v7 < 0 && v11 == *a2 )
        goto LABEL_20;
      v9 = v32;
      LODWORD(v7) = 0;
      if ( v11 >= v32 )
      {
        memmove(v10, P[0], v32);
        if ( !v10 )
          goto LABEL_22;
        v24 = v32;
        if ( v11 < v32 )
          goto LABEL_22;
LABEL_33:
        v25 = RtlStringCbPrintfExW(&v10[v24 >> 1], v11 - v24, &ppszDestEnd, &pcbRemaining, 0, &word_1C0090E20);
LABEL_34:
        LODWORD(v7) = v25;
        goto LABEL_20;
      }
      goto LABEL_40;
    }
    v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x42706341u);
    v6 = v21;
    if ( !v21 )
      goto LABEL_22;
    memset(v21, 0, Size);
    LOBYTE(v7) = Size != 7;
    v22 = v7 + 3;
    memset(v6, 0, Size);
    if ( Size > v22 )
    {
      memmove(v6, (char *)v36 + v22, Size - v22);
      *((_BYTE *)v36 + v22) = 0;
    }
    if ( (*(_BYTE *)(a3 + 912) & 0x18) == 0x18 )
    {
      v31 = (int)v36;
      LODWORD(v7) = RtlStringCbPrintfExW(v10, v11, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
      if ( (int)v7 < 0 )
        goto LABEL_21;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_20;
      v31 = (int)v36;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&DEV_%S");
      if ( (int)v7 < 0 )
      {
LABEL_21:
        if ( (_DWORD)v7 == -1073741772 )
          goto LABEL_22;
LABEL_41:
        v26 = (const char *)qword_1C0090C20;
        v27 = 0LL;
        v28 = (const char *)qword_1C0090C20;
        if ( a3 )
        {
          v9 = *(_QWORD *)(a3 + 8);
          v27 = a3;
          if ( (v9 & 0x200000000000LL) != 0 )
          {
            v26 = *(const char **)(a3 + 560);
            if ( (v9 & 0x400000000000LL) != 0 )
              v28 = *(const char **)(a3 + 568);
          }
        }
        WPP_RECORDER_SF_qdLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v27,
          v9,
          0x25u,
          dwFlags,
          pszFormat,
          v31,
          v7,
          v27,
          v26,
          v28);
        goto LABEL_22;
      }
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_20;
      v10 = ppszDestEnd + 1;
      v11 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
LABEL_17:
    if ( (*(_BYTE *)(a3 + 912) & 4) == 0 )
      goto LABEL_18;
    v31 = (int)v36;
    LODWORD(v7) = RtlStringCbPrintfExW(
                    v10,
                    v11,
                    &ppszDestEnd,
                    &pcbRemaining,
                    0,
                    L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
    if ( (int)v7 >= 0 )
    {
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_20;
      v31 = (int)v36;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 >= 0 )
      {
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_20;
        v31 = (int)v36;
        ++ppszDestEnd;
        pcbRemaining -= 2LL;
        LODWORD(v7) = RtlStringCbPrintfExW(ppszDestEnd, pcbRemaining, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S");
        if ( (int)v7 >= 0 )
        {
          if ( !ppszDestEnd || pcbRemaining < 2 )
            goto LABEL_20;
          v31 = *(unsigned __int16 *)(a3 + 598);
          ++ppszDestEnd;
          pcbRemaining -= 2LL;
          LODWORD(v7) = RtlStringCbPrintfExW(
                          ppszDestEnd,
                          pcbRemaining,
                          &ppszDestEnd,
                          &pcbRemaining,
                          0,
                          L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
          if ( (int)v7 >= 0 )
          {
            if ( !ppszDestEnd || pcbRemaining < 2 )
              goto LABEL_20;
            v31 = *(unsigned __int16 *)(a3 + 598);
            ++ppszDestEnd;
            pcbRemaining -= 2LL;
            LODWORD(v7) = RtlStringCbPrintfExW(
                            ppszDestEnd,
                            pcbRemaining,
                            &ppszDestEnd,
                            &pcbRemaining,
                            0,
                            L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X");
            if ( (int)v7 >= 0 )
            {
              if ( ppszDestEnd && pcbRemaining >= 2 )
              {
                v10 = ppszDestEnd + 1;
                v11 = pcbRemaining - 2;
                goto LABEL_18;
              }
LABEL_20:
              if ( (int)v7 < 0 )
                goto LABEL_21;
LABEL_22:
              PoolWithTag = v36;
              goto LABEL_23;
            }
          }
        }
      }
    }
    goto LABEL_21;
  }
LABEL_23:
  if ( P[0] )
  {
    ExFreePoolWithTag(P[0], 0x53706341u);
    PoolWithTag = v36;
  }
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x53706341u);
    PoolWithTag = v36;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x53706341u);
  return (unsigned int)v7;
}
