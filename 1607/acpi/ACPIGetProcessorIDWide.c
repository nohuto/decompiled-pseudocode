/*
 * XREFs of ACPIGetProcessorIDWide @ 0x1C00242F8
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0003718 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0023C48 (ACPIGetConvertToDeviceIDWide.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000397C (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00039F4 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchCopyNA @ 0x1C0024278 (RtlStringCchCopyNA.c)
 *     RtlStringCchPrintfExA @ 0x1C002474C (RtlStringCchPrintfExA.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIGetProcessorIDWide(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  void *v6; // rdi
  char *v7; // r14
  char *v8; // r13
  size_t v9; // rbx
  PVOID v11; // rax
  __int64 i; // rcx
  char v13; // dl
  __int64 v14; // rdx
  char *PoolWithTag; // rax
  char *v16; // rsi
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // r15d
  char *v25; // rax
  char *v26; // rsi
  unsigned int v27; // ebx
  size_t v29; // rdx
  char *v30; // rcx
  size_t v31; // rdx
  char *v32; // rcx
  char v33[4]; // [rsp+40h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-3Ch] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-38h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-30h] BYREF
  char *v37; // [rsp+58h] [rbp-28h]
  char **v38; // [rsp+60h] [rbp-20h]
  _DWORD *v39; // [rsp+68h] [rbp-18h]
  char v40[8]; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0LL;
  ReturnLength = 0;
  v7 = 0LL;
  v37 = 0LL;
  v8 = 0LL;
  v9 = (unsigned __int16)AcpiProcessorString;
  v38 = a5;
  v39 = a6;
  strcpy(v40, "ACPI\\");
  *(_WORD *)v33 = 42;
  pcchRemaining = (unsigned __int16)AcpiProcessorString;
  LODWORD(ppszDestEnd) = a4 & 0x40;
  if ( (a4 & 0x40) != 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)AcpiProcessorString, 0x53706341u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v9);
    RtlStringCchCopyNA(v7, v9, Src, (unsigned __int16)AcpiProcessorString);
    v16 = strstr(v7, "Model");
    v37 = v16;
    v17 = strstr(v7, "Family");
    v8 = v17;
    if ( !v16 || !v17 )
    {
      v27 = -1073741823;
      goto LABEL_35;
    }
    v18 = -1LL;
    v19 = -1LL;
    do
      ++v19;
    while ( v16[v19] );
    v20 = -1LL;
    do
      ++v20;
    while ( v8[v20] );
    v21 = 6 * v9 - (unsigned int)(2 * v19) - (unsigned int)(2 * v20);
    v22 = -1LL;
    do
      ++v22;
    while ( v33[v22] );
    v23 = (unsigned int)(3 * v22) + v21;
    do
      ++v18;
    while ( v40[v18] );
    v9 = v23 + (unsigned int)(3 * v18) + 1LL;
  }
  else
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_28;
    if ( ZwQuerySystemInformation(
           SystemVerifierFaultsInformation|SystemProcessorPerformanceInformation,
           0LL,
           0,
           &ReturnLength) == -1073741820 )
    {
      v11 = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x53706341u);
      v6 = v11;
      if ( v11 )
      {
        if ( ZwQuerySystemInformation(
               SystemVerifierFaultsInformation|SystemProcessorPerformanceInformation,
               v11,
               ReturnLength,
               &ReturnLength) < 0 )
        {
          ExFreePoolWithTag(v6, 0x53706341u);
          v6 = 0LL;
        }
        else
        {
          for ( i = 0LL; (unsigned int)i < ReturnLength; i = (unsigned int)(i + 1) )
          {
            v13 = *((_BYTE *)v6 + i);
            if ( !v13 )
              break;
            if ( (unsigned __int8)(v13 - 32) > 0x5Fu || v13 == 44 )
              *((_BYTE *)v6 + i) = 32;
          }
        }
      }
    }
    v14 = -1LL;
    do
      ++v14;
    while ( v40[v14] );
    pcchRemaining = v9 + (unsigned int)v14;
    v9 = pcchRemaining;
    if ( !v6 )
      goto LABEL_28;
    v9 = ReturnLength + 3 + pcchRemaining;
  }
  pcchRemaining = v9;
LABEL_28:
  v24 = 2 * v9;
  v25 = (char *)ExAllocatePoolWithTag(
                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                  2 * v9,
                  0x53706341u);
  v26 = v25;
  if ( v25 )
  {
    memset(v25, 0, 2 * v9);
    if ( (a4 & 0x20) != 0 )
    {
      if ( v6 )
        RtlStringCchPrintfA(v26, v9, "%s%s - %s", v40, Src, (const char *)v6);
      else
        RtlStringCchPrintfA(v26, v9, "%s%s", v40, Src);
    }
    else
    {
      if ( !(_DWORD)ppszDestEnd )
      {
LABEL_33:
        v27 = 0;
        *v38 = v26;
        if ( v39 )
          *v39 = v24;
        goto LABEL_35;
      }
      ppszDestEnd = v26;
      RtlStringCchPrintfExA(v26, v9, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v7);
      RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v33, v7);
      v29 = pcchRemaining - 1;
      v30 = ppszDestEnd + 1;
      *(v37 - 1) = 0;
      RtlStringCchPrintfExA(v30, v29, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v7);
      RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v33, v7);
      v31 = pcchRemaining - 1;
      v32 = ppszDestEnd + 1;
      *(v8 - 1) = 0;
      RtlStringCchPrintfExA(v32, v31, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v7);
      RtlStringCchPrintfA(ppszDestEnd + 1, pcchRemaining - 1, "%s%s", v33, v7);
    }
    ACPIAnsiStringToWideHelper(v26, 2 * v9);
    goto LABEL_33;
  }
  v27 = -1073741670;
LABEL_35:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  return v27;
}
