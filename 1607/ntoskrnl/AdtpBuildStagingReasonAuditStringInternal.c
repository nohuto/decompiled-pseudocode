/*
 * XREFs of AdtpBuildStagingReasonAuditStringInternal @ 0x140238B20
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140237BE8 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     AdtpFormatPrefix @ 0x140238EE8 (AdtpFormatPrefix.c)
 *     AdtpPermissionBitPosition @ 0x140238FC0 (AdtpPermissionBitPosition.c)
 *     StringCchPrintfExW @ 0x140238FCC (StringCchPrintfExW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     AdtpBuildAccessesString @ 0x1406D17B8 (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildStagingReasonAuditStringInternal(
        int a1,
        int a2,
        size_t a3,
        size_t a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        _WORD *a8)
{
  unsigned __int16 Length; // si
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  bool v14; // zf
  ULONG v15; // r15d
  size_t v16; // rdx
  unsigned int v17; // eax
  unsigned int v19; // ebx
  NTSTATUS appended; // eax
  unsigned __int16 v21; // r14
  unsigned int v22; // ebx
  _WORD *PoolWithTag; // rax
  _WORD *v24; // rsi
  __int16 v25; // bx
  _WORD *v26; // rax
  __int64 v27; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  size_t pcchRemaining; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v32; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  size_t v35; // [rsp+A8h] [rbp-58h]
  _WORD *v36; // [rsp+B0h] [rbp-50h]
  wchar_t pszFormat[8]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  char v39; // [rsp+F0h] [rbp-10h] BYREF

  v36 = a8;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  Source.Buffer = (wchar_t *)&v39;
  v32.Buffer = L"-";
  pcchRemaining = a3;
  Length = 2;
  v35 = a4;
  DestinationString.Length = 0;
  Destination.Length = 0;
  LOBYTE(v28) = 0;
  *(_DWORD *)&Source.Length = 1966080;
  wcscpy(pszFormat, L"# %d");
  *(_DWORD *)&v32.Length = 131074;
  v9 = AdtpBuildAccessesString(a1, a2, a5, 2, &DestinationString, 0LL, 0LL, 0LL, (__int64)&v28);
  if ( v9 < 0 )
    goto LABEL_30;
  v33 = DestinationString.Length >> 1;
  v10 = *(_DWORD *)(a7 + 4LL * (unsigned __int8)AdtpPermissionBitPosition(a5));
  v11 = HIBYTE(v10);
  v12 = v10 & 0xFF0000;
  v13 = v11 & 0x7F;
  if ( v12 > 0x200000 )
  {
    if ( v12 == 3145728 )
      goto LABEL_22;
    if ( v12 != 0x400000 )
    {
      if ( v12 == 5242880 )
        goto LABEL_22;
      if ( v12 != 6291456 && v12 != 7340032 )
      {
        v14 = v12 == 0x800000;
LABEL_19:
        if ( !v14 )
        {
          v15 = 1809;
          goto LABEL_23;
        }
        goto LABEL_22;
      }
    }
LABEL_21:
    v15 = 1814;
    goto LABEL_23;
  }
  if ( v12 == 0x200000 || v12 == 0x10000 )
    goto LABEL_21;
  if ( v12 != 0x20000 )
  {
    if ( v12 == 196608 )
    {
      v15 = 1816;
      goto LABEL_23;
    }
    if ( v12 != 327680 )
    {
      if ( v12 == 393216 )
      {
        v15 = 1815;
        goto LABEL_23;
      }
      if ( v12 != 458752 )
      {
        v14 = v12 == 0x100000;
        goto LABEL_19;
      }
    }
  }
LABEL_22:
  v15 = 1813;
LABEL_23:
  v9 = AdtpFormatPrefix(&Source, v15);
  if ( v9 >= 0 )
  {
    if ( v12 == 196608 || v12 == 393216 )
      v16 = v35;
    else
      v16 = pcchRemaining;
    v17 = *(_DWORD *)(v16 + 8);
    if ( !v17 )
      goto LABEL_38;
    if ( v13 >= v17 )
    {
      v9 = -1073741811;
      goto LABEL_30;
    }
    v32 = *(UNICODE_STRING *)(*(_QWORD *)(v16 + 16) + 16LL * v13);
    Length = v32.Length;
    if ( v32.Length <= 2u )
    {
LABEL_38:
      LODWORD(v27) = v13;
      pcchRemaining = 0LL;
      if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v27) >= 0 )
      {
        v32.MaximumLength = 40;
        Length = 2 * (20 - pcchRemaining);
        v32.Length = Length;
        v32.Buffer = pszDest;
      }
    }
    v19 = Length + 54;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v19, 0x6B416553u);
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v19;
      RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( v15 != 1809 )
        RtlAppendUnicodeStringToString(&Destination, &v32);
      appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
      v21 = Destination.Length;
      v9 = appended;
      v22 = v33 + 1 + (Destination.Length >> 1);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v22, 0x6B416553u);
      v24 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( DestinationString.Length )
          memmove(PoolWithTag, DestinationString.Buffer, DestinationString.Length);
        if ( v21 )
          memmove((char *)v24 + DestinationString.Length, Destination.Buffer, v21);
        v24[v22 - 1] = 0;
        v25 = 2 * (v22 - 1);
        v26 = v36;
        *v36 = v25;
        v26[1] = v25 + 2;
        *((_QWORD *)v26 + 1) = v24;
      }
      else
      {
        v9 = -1073741801;
      }
    }
    else
    {
      v9 = -1073741801;
    }
  }
LABEL_30:
  if ( (_BYTE)v28 && DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v9;
}
