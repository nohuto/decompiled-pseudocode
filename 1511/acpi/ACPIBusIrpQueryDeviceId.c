/*
 * XREFs of ACPIBusIrpQueryDeviceId @ 0x1C00712FC
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0065160 (ACPIBusIrpQueryId.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1C00015D0 (RtlStringCbPrintfExW.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C0003814 (AMLIGetNSObjectType.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C0036FB8 (RtlStringCbPrintfW.c)
 *     ACPIAllocateBuffer @ 0x1C0065668 (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C00656FC (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryDeviceId(wchar_t **a1, SIZE_T *a2, __int64 a3)
{
  void *v5; // r12
  int v6; // esi
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // r14
  size_t v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // eax
  __int64 v17; // rax
  size_t v18; // rdx
  PVOID PoolWithTag; // rax
  size_t v20; // r8
  char *v21; // rdx
  SIZE_T v22; // rdx
  PVOID v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  PVOID v26; // rax
  size_t pcbRemaining; // [rsp+50h] [rbp-18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+58h] [rbp-10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+48h] BYREF
  size_t v30; // [rsp+B8h] [rbp+50h] BYREF
  PVOID P; // [rsp+C0h] [rbp+58h] BYREF
  void *Src; // [rsp+C8h] [rbp+60h] BYREF

  Src = 0LL;
  v5 = 0LL;
  Size = 0LL;
  v6 = 0;
  P = 0LL;
  v30 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, (__int64 *)a3);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  v11 = 0LL;
  ppszDestEnd[0] = v8;
  pcbRemaining = v10;
  if ( !v8 )
  {
LABEL_22:
    v6 = -1073741670;
    goto LABEL_13;
  }
  v12 = *(_QWORD *)(a3 + 704);
  if ( v12 && (unsigned int)AMLIGetNSObjectType(v12) == 12 )
  {
    v6 = ACPIGet((_QWORD *)a3, 1145653343, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    if ( v6 < 0 )
      goto LABEL_13;
    if ( v10 >= Size )
    {
      memmove(v9, Src, Size);
      if ( v10 >= Size )
        v6 = RtlStringCbPrintfExW(&v9[Size >> 1], v10 - Size, ppszDestEnd, &pcbRemaining, 0, &word_1C0073690);
      goto LABEL_13;
    }
    goto LABEL_22;
  }
  v13 = *(_QWORD *)(a3 + 904);
  v14 = -1LL;
  if ( (v13 & 8) == 0 || (v13 & 0x10) == 0 )
    goto LABEL_5;
  v17 = *(_QWORD *)(a3 + 552);
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v17 + v18) );
    v30 = v18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x42706341u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_15;
    memset(PoolWithTag, 0, v30);
    v20 = v30;
    v21 = *(char **)(a3 + 552);
    if ( v30 >= 5 )
    {
      v20 = v30 - 5;
      v30 -= 5LL;
      v21 += 5;
    }
    memmove(P, v21, v20);
    if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)P, v30) )
      goto LABEL_5;
    v23 = ExAllocatePoolWithTag(PagedPool, v22, 0x42706341u);
    v5 = v23;
    if ( v23 )
    {
      LOBYTE(v11) = v30 != 7;
      v24 = v11 + 3;
      memset(v23, 0, v30);
      if ( v30 > v24 )
      {
        memmove(v5, (char *)P + v24, v30 - v24);
        *((_BYTE *)P + v24) = 0;
      }
      v6 = RtlStringCbPrintfExW(
             v9,
             v10,
             ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X",
             P,
             v5,
             *(_QWORD *)(a3 + 568),
             *(_DWORD *)(a3 + 576));
      if ( v6 < 0 || !ppszDestEnd[0] || pcbRemaining < 2 )
        goto LABEL_11;
      v9 = ppszDestEnd[0] + 1;
      v10 = pcbRemaining - 2;
LABEL_5:
      v15 = ACPIGet((_QWORD *)a3, 1145653343, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
      v6 = v15;
      if ( v15 == -1073741661 )
      {
        v25 = *(_QWORD *)(a3 + 552);
        if ( !v25 )
          goto LABEL_11;
        do
          ++v14;
        while ( *(_BYTE *)(v25 + v14) );
        Size = 2 * v14 + 2;
        v26 = ExAllocatePoolWithTag(PagedPool, Size, 0x53706341u);
        Src = v26;
        if ( !v26 )
        {
LABEL_44:
          v6 = -1073741670;
LABEL_11:
          if ( v5 )
            ExFreePoolWithTag(v5, 0x53706341u);
          goto LABEL_13;
        }
        memset(v26, 0, Size);
        RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Src, Size, L"%S", *(_QWORD *)(a3 + 552));
        v6 = 0;
      }
      else if ( v15 < 0 )
      {
        goto LABEL_11;
      }
      if ( v10 >= Size )
      {
        memmove(v9, Src, Size);
        if ( v9 && v10 >= Size )
          v6 = RtlStringCbPrintfExW(&v9[Size >> 1], v10 - Size, ppszDestEnd, &pcbRemaining, 0, &word_1C0073690);
        goto LABEL_11;
      }
      goto LABEL_44;
    }
  }
  else
  {
    v6 = ACPIGet((_QWORD *)a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v30);
    if ( v6 < 0 )
      goto LABEL_11;
  }
LABEL_13:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
LABEL_15:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v6;
}
