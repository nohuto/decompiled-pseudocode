/*
 * XREFs of AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14015AEB8 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     AdtpFormatPrefix @ 0x14026DE14 (AdtpFormatPrefix.c)
 *     AdtpPermissionBitPosition @ 0x14026DEEC (AdtpPermissionBitPosition.c)
 *     StringCchPrintfExW @ 0x14026DEF8 (StringCchPrintfExW.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildStagingReasonAuditStringInternal(
        __int64 a1,
        __int64 a2,
        size_t a3,
        size_t a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        _WORD *a8)
{
  unsigned __int16 Length; // r14
  __int64 v9; // rsi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // ebx
  unsigned int v17; // esi
  bool v18; // zf
  ULONG v19; // r15d
  size_t v20; // rdx
  unsigned int v21; // eax
  NTSTATUS appended; // eax
  unsigned __int16 v24; // r14
  unsigned int v25; // ebx
  _WORD *PoolWithTag; // rax
  _WORD *v27; // rsi
  __int16 v28; // bx
  _WORD *v29; // rax
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v33; // [rsp+68h] [rbp-98h] BYREF
  size_t pcchRemaining; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v35; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  _WORD *v38; // [rsp+A8h] [rbp-58h]
  size_t v39; // [rsp+B0h] [rbp-50h]
  wchar_t pszFormat[8]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  char v42; // [rsp+F0h] [rbp-10h] BYREF

  v38 = a8;
  *(_QWORD *)&v33.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v33.Buffer + 2) = 0;
  HIWORD(v33.Buffer) = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  Source.Buffer = (wchar_t *)&v42;
  v39 = a4;
  pcchRemaining = a3;
  Length = 2;
  v35.Buffer = L"-";
  v33.Length = 0;
  Destination.Length = 0;
  LOBYTE(v31) = 0;
  *(_DWORD *)&Source.Length = 1966080;
  wcscpy(pszFormat, L"# %d");
  *(_DWORD *)&v35.Length = 131074;
  v9 = (unsigned __int8)AdtpPermissionBitPosition(a5);
  v14 = AdtpBuildAccessesString(v13, v10, v11, v12, &v33, 0LL, 0LL, 0LL, (__int64)&v31);
  if ( v14 < 0 )
    goto LABEL_30;
  v15 = *(_DWORD *)(a7 + 4 * v9);
  v16 = v15 & 0xFF0000;
  v36 = v33.Length >> 1;
  v17 = HIBYTE(v15) & 0x7F;
  if ( v16 > 0x200000 )
  {
    if ( v16 == 3145728 )
      goto LABEL_22;
    if ( v16 != 0x400000 )
    {
      if ( v16 == 5242880 )
        goto LABEL_22;
      if ( v16 != 6291456 && v16 != 7340032 )
      {
        v18 = v16 == 0x800000;
LABEL_19:
        if ( !v18 )
        {
          v19 = 1809;
          goto LABEL_23;
        }
        goto LABEL_22;
      }
    }
LABEL_21:
    v19 = 1814;
    goto LABEL_23;
  }
  if ( v16 == 0x200000 || v16 == 0x10000 )
    goto LABEL_21;
  if ( v16 != 0x20000 )
  {
    if ( v16 == 196608 )
    {
      v19 = 1816;
      goto LABEL_23;
    }
    if ( v16 != 327680 )
    {
      if ( v16 == 393216 )
      {
        v19 = 1815;
        goto LABEL_23;
      }
      if ( v16 != 458752 )
      {
        v18 = v16 == 0x100000;
        goto LABEL_19;
      }
    }
  }
LABEL_22:
  v19 = 1813;
LABEL_23:
  v14 = AdtpFormatPrefix(&Source, v19);
  if ( v14 >= 0 )
  {
    if ( v16 == 196608 || v16 == 393216 )
      v20 = v39;
    else
      v20 = pcchRemaining;
    v21 = *(_DWORD *)(v20 + 8);
    if ( !v21 )
      goto LABEL_38;
    if ( v17 >= v21 )
    {
      v14 = -1073741811;
      goto LABEL_30;
    }
    v35 = *(UNICODE_STRING *)(*(_QWORD *)(v20 + 16) + 16LL * v17);
    Length = v35.Length;
    if ( v35.Length <= 2u )
    {
LABEL_38:
      LODWORD(v30) = v17;
      pcchRemaining = 0LL;
      if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v30) >= 0 )
      {
        v35.MaximumLength = 40;
        Length = 2 * (20 - pcchRemaining);
        v35.Length = Length;
        v35.Buffer = pszDest;
      }
    }
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)Length + 54, 0x6B416553u);
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * (Length + 54);
      RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( v19 != 1809 )
        RtlAppendUnicodeStringToString(&Destination, &v35);
      appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
      v24 = Destination.Length;
      v14 = appended;
      v25 = v36 + 1 + (Destination.Length >> 1);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v25, 0x6B416553u);
      v27 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( v33.Length )
          memmove(PoolWithTag, v33.Buffer, v33.Length);
        if ( v24 )
          memmove((char *)v27 + v33.Length, Destination.Buffer, v24);
        v27[v25 - 1] = 0;
        v28 = 2 * (v25 - 1);
        v29 = v38;
        *v38 = v28;
        v29[1] = v28 + 2;
        *((_QWORD *)v29 + 1) = v27;
      }
      else
      {
        v14 = -1073741801;
      }
    }
    else
    {
      v14 = -1073741801;
    }
  }
LABEL_30:
  if ( (_BYTE)v31 && v33.Buffer )
    ExFreePoolWithTag(v33.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v14;
}
