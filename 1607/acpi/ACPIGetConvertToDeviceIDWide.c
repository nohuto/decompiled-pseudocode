/*
 * XREFs of ACPIGetConvertToDeviceIDWide @ 0x1C0023C48
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C00034A0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToDeviceID @ 0x1C0023A40 (ACPIGetConvertToDeviceID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000397C (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00039F4 (ACPIAnsiStringToWideHelper.c)
 *     ACPIAmliDoubleToNameWide @ 0x1C0023E78 (ACPIAmliDoubleToNameWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C00242F8 (ACPIGetProcessorIDWide.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToDeviceIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  int v8; // ebp
  char *v9; // rbx
  int v11; // eax
  _BYTE *v12; // rsi
  __int64 v13; // rdi
  unsigned int v14; // edi
  SIZE_T v15; // r14
  char *v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // edi
  char *PoolWithTag; // rax

  if ( (a4 & 0x4000000) == 0 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0 )
    return ACPIGetProcessorIDWide(0, a2, 0, a4, (__int64)a5, (__int64)a6);
  if ( (a4 & 0x4000000) == 0 && (*(_QWORD *)(a1 + 8) & 0x800000000000LL) != 0 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 560) + v17) );
    v18 = v17 + 1;
    v8 = 2 * v18;
    v15 = 2 * v18;
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                            v15,
                            0x53706341u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, (unsigned int)v15);
    RtlStringCchPrintfA(v9, v18, "%s", *(_QWORD *)(a1 + 560));
    goto LABEL_22;
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 1 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v11 = *(_DWORD *)(a3 + 24);
    v12 = *(_BYTE **)(a3 + 32);
    if ( !v11 )
      return 3221225485LL;
    if ( *v12 == 42 )
    {
      ++v12;
      --v11;
    }
    if ( !v11 )
      return 3221225485LL;
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 6;
    v8 = 2 * v14;
    v15 = 2 * v14;
    v16 = (char *)ExAllocatePoolWithTag(
                    (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                    v15,
                    0x53706341u);
    v9 = v16;
    if ( !v16 )
      return 3221225626LL;
    memset(v16, 0, (unsigned int)v15);
    RtlStringCchPrintfA(v9, v14, "ACPI\\%s", v12);
LABEL_22:
    ACPIAnsiStringToWideHelper(v9, v15);
    goto LABEL_9;
  }
  v8 = 26;
  v9 = (char *)ExAllocatePoolWithTag(
                 (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                 0x1AuLL,
                 0x53706341u);
  if ( !v9 )
    return 3221225626LL;
  *(_QWORD *)v9 = 0LL;
  *((_QWORD *)v9 + 1) = 0LL;
  *((_QWORD *)v9 + 2) = 0LL;
  *((_WORD *)v9 + 12) = 0;
  RtlStringCchPrintfA(v9, 0xDuLL, "ACPI\\");
  ACPIAnsiStringToWideHelper(v9, 0xAuLL);
  ACPIAmliDoubleToNameWide(v9 + 10, *(unsigned int *)(a3 + 16), 0LL);
LABEL_9:
  *a5 = v9;
  if ( a6 )
    *a6 = v8;
  return 0LL;
}
