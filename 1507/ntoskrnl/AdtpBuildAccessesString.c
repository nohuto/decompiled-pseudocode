/*
 * XREFs of AdtpBuildAccessesString @ 0x1405862D4
 * Callers:
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpBuildObjectTypeStrings @ 0x140585F2C (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1404FE908 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall AdtpBuildAccessesString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        int a4,
        PUNICODE_STRING a5,
        wchar_t **a6,
        __int64 a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r15d
  __int64 *v10; // r12
  int v11; // r8d
  NTSTATUS appended; // edx
  int v13; // ecx
  int v14; // r9d
  const WCHAR *v15; // r13
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // ecx
  wchar_t *PoolWithTag; // rax
  unsigned int v20; // edi
  _DWORD *v21; // rsi
  wchar_t **v22; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v24; // rsi
  char v25; // di
  const UNICODE_STRING *v26; // rbx
  __int64 *v27; // r14
  _QWORD *v28; // r14
  char v29; // r15
  const UNICODE_STRING *v30; // r13
  _QWORD *v31; // rsi
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  int v34; // r14d
  unsigned int v35; // edi
  int v36; // esi
  unsigned int v38; // esi
  _DWORD *v39; // r14
  wchar_t *Buffer; // rax
  NTSTATUS v41; // [rsp+20h] [rbp-A9h]
  UNICODE_STRING Destination; // [rsp+28h] [rbp-A1h] BYREF
  int v43; // [rsp+38h] [rbp-91h]
  const WCHAR *v44; // [rsp+40h] [rbp-89h]
  wchar_t **v45; // [rsp+48h] [rbp-81h]
  _QWORD *v46; // [rsp+50h] [rbp-79h]
  PCUNICODE_STRING v47; // [rsp+58h] [rbp-71h]
  wchar_t *v48; // [rsp+60h] [rbp-69h]
  PCUNICODE_STRING String2; // [rsp+68h] [rbp-61h]
  UNICODE_STRING String; // [rsp+70h] [rbp-59h] BYREF
  UNICODE_STRING *v51; // [rsp+80h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  UNICODE_STRING v53; // [rsp+98h] [rbp-31h] BYREF
  char v54; // [rsp+A8h] [rbp-21h] BYREF

  v9 = a3;
  v10 = 0LL;
  v43 = a3;
  v11 = 0;
  v47 = a2;
  appended = 0;
  String2 = a1;
  v51 = a5;
  v45 = a6;
  v46 = 0LL;
  if ( !v9 )
  {
    if ( a6 )
    {
      a6[1] = (wchar_t *)4;
      *a6 = (wchar_t *)&unk_140294D18;
    }
    else if ( a5 )
    {
      RtlInitUnicodeString(a5, L"-");
    }
    return 0LL;
  }
  v13 = v9;
  do
  {
    ++v11;
    v13 &= v13 - 1;
  }
  while ( v13 );
  if ( !a4 )
    goto LABEL_50;
  v14 = a4 - 1;
  if ( !v14 )
  {
    v15 = L"\r\n";
    goto LABEL_7;
  }
  if ( v14 == 1 )
    v15 = L":\t";
  else
LABEL_50:
    v15 = L"\r\n\t\t\t\t";
LABEL_7:
  v44 = v15;
  v16 = 24 * v11 + 1;
  if ( a7 && a8 && (v17 = (unsigned int)*a8, v18 = v17 + v16, (unsigned int)v17 + v16 < 0x400) )
  {
    PoolWithTag = (wchar_t *)(a7 + 2 * v17);
    *a8 = v18;
    v48 = PoolWithTag;
  }
  else
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v16, 0x6B416553u);
    v48 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    *a9 = 1;
    appended = 0;
  }
  Destination.Length = 0;
  Destination.MaximumLength = 2 * v16;
  v20 = 5;
  Destination.Buffer = PoolWithTag;
  if ( (v9 & 0x1F0000) != 0 )
  {
    v38 = 0;
    v39 = &AdtpStandardAccessTypes;
    do
    {
      if ( (v9 & *v39) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"%%");
        RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v38);
        appended = RtlAppendUnicodeToString(&Destination, v15);
      }
      ++v38;
      ++v39;
    }
    while ( v38 < 5 );
  }
  v21 = &unk_1402A03F4;
  do
  {
    if ( (v9 & *v21) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"%%");
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v20);
      appended = RtlAppendUnicodeToString(&Destination, v15);
    }
    ++v20;
    ++v21;
  }
  while ( v20 < 7 );
  v22 = v45;
  v41 = appended;
  if ( (_WORD)v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&AdtpSourceModuleLock, 1u);
    v24 = &AdtpSourceModules;
    v25 = 0;
    if ( AdtpSourceModules )
    {
      v26 = String2;
      do
      {
        if ( v25 )
          break;
        v27 = (__int64 *)*v24;
        if ( RtlEqualUnicodeString((PCUNICODE_STRING)(*v24 + 8), v26, 1u) )
        {
          v25 = 1;
          *v24 = *v27;
          v10 = v27;
          *v27 = AdtpSourceModules;
          AdtpSourceModules = (__int64)v27;
        }
        else
        {
          v24 = v27;
        }
      }
      while ( *v24 );
      v22 = v45;
      if ( v25 == 1 )
      {
        v25 = 0;
        v28 = v10 + 3;
        RtlInitUnicodeString(&DestinationString, L"DS");
        if ( !RtlEqualUnicodeString(String2, &DestinationString, 1u)
          || v47->Length != 78
          || (Buffer = v47->Buffer, *Buffer != 37)
          || Buffer[1] != 123
          || (v29 = 1, Buffer[38] != 125) )
        {
          v29 = 0;
        }
        RtlInitUnicodeString(&v53, L"Directory Service Object");
        if ( v10[3] )
        {
          v30 = v47;
          do
          {
            if ( v25 )
              break;
            if ( v29 && (v31 = (_QWORD *)*v28, RtlEqualUnicodeString((PCUNICODE_STRING)(*v28 + 8LL), &v53, 1u))
              || (v31 = (_QWORD *)*v28, RtlEqualUnicodeString((PCUNICODE_STRING)(*v28 + 8LL), v30, 1u)) )
            {
              *v28 = *v31;
              v25 = 1;
              *v31 = v10[3];
              v10[3] = (__int64)v31;
              v46 = v31;
            }
            else
            {
              v28 = v31;
            }
          }
          while ( *v28 );
          v22 = v45;
          v15 = v44;
        }
        v9 = v43;
      }
    }
    ExReleaseResourceLite(&AdtpSourceModuleLock);
    v32 = KeGetCurrentThread();
    v33 = v32->KernelApcDisable + 1;
    v32->KernelApcDisable = v33;
    if ( !v33
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
      && !v32->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v25 )
      v34 = *((_DWORD *)v46 + 6);
    else
      v34 = 1552;
    *(_DWORD *)&String.Length = 1310720;
    v35 = 0;
    String.Buffer = (wchar_t *)&v54;
    v36 = 1;
    do
    {
      if ( (v36 & v9) != 0 )
      {
        v41 = RtlIntegerToUnicodeString(v34 + v35, 0xAu, &String);
        appended = v41;
        if ( v41 >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"%%");
          RtlAppendUnicodeStringToString(&Destination, &String);
          appended = RtlAppendUnicodeToString(&Destination, v15);
          v41 = appended;
        }
      }
      else
      {
        appended = v41;
      }
      ++v35;
      v36 *= 2;
    }
    while ( v35 < 0x10 );
  }
  if ( appended >= 0 )
  {
    if ( v22 )
    {
      *v22 = v48;
      v22[1] = (wchar_t *)((unsigned int)Destination.Length + 2);
    }
    else
    {
      *v51 = Destination;
    }
  }
  return (unsigned int)appended;
}
