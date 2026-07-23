/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x1402380B0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140237BE8 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140009844 (RtlGetDaclSecurityDescriptor.c)
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlGetAce @ 0x14000BDCC (RtlGetAce.c)
 *     StringCchPrintfW @ 0x1400AC770 (StringCchPrintfW.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140235884 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     AdtpFormatPrefix @ 0x140238EE8 (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x140238FCC (StringCchPrintfExW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1403F4CE4 (RtlIntegerToUnicodeString.c)
 *     RtlAddAce @ 0x140406208 (RtlAddAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1406D090C (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x1406D17B8 (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditStringInternal(
        ACL *a1,
        void *a2,
        __int64 a3,
        size_t a4,
        int a5,
        int a6,
        __int64 a7,
        _WORD *a8,
        int a9,
        int a10,
        int a11,
        _BYTE *a12)
{
  wchar_t *Buffer; // rsi
  wchar_t *v14; // r15
  ACL *v15; // r13
  unsigned int v16; // edi
  int v17; // eax
  NTSTATUS DaclSecurityDescriptor; // ebx
  int v19; // r14d
  int v20; // edi
  unsigned __int16 v21; // bx
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // ebx
  UNICODE_STRING *p_Source; // rdx
  PCWSTR *v27; // rdx
  void *v28; // rcx
  ULONG v29; // edx
  PACL v30; // r14
  unsigned __int16 *v31; // r12
  ULONG v32; // ebx
  ACL *v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  WCHAR *v36; // r12
  UNICODE_STRING *v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rcx
  unsigned int v40; // ecx
  __int16 v41; // r14
  UNICODE_STRING *v42; // rdx
  ULONG v43; // ebx
  unsigned int v44; // ebx
  UNICODE_STRING *v46; // rdx
  NTSTATUS appended; // eax
  unsigned __int16 Length; // r12
  unsigned int v49; // edi
  char *PoolWithTag; // r14
  _WORD *v51; // rax
  __int16 v52; // di
  __int64 v53; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+68h] [rbp-98h] BYREF
  int v57; // [rsp+6Ch] [rbp-94h]
  PCWSTR v58[2]; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v59; // [rsp+80h] [rbp-80h] BYREF
  size_t pcchRemaining; // [rsp+88h] [rbp-78h] BYREF
  PACL Dacl; // [rsp+90h] [rbp-70h] BYREF
  PVOID Ace; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v64; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v65; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v66; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v68; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v69; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v70; // [rsp+110h] [rbp+10h] BYREF
  _BYTE *v71; // [rsp+120h] [rbp+20h]
  _WORD *v72; // [rsp+128h] [rbp+28h]
  _BYTE SecurityDescriptor[40]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t pszFormat[8]; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING pszDest[2]; // [rsp+168h] [rbp+68h] BYREF
  char v76; // [rsp+190h] [rbp+90h] BYREF
  char v77; // [rsp+1A8h] [rbp+A8h] BYREF
  char v78; // [rsp+1C8h] [rbp+C8h] BYREF
  char v79; // [rsp+1E8h] [rbp+E8h] BYREF
  char v80; // [rsp+208h] [rbp+108h] BYREF
  char v81; // [rsp+228h] [rbp+128h] BYREF
  char v82; // [rsp+248h] [rbp+148h] BYREF
  char v83; // [rsp+268h] [rbp+168h] BYREF

  Buffer = 0LL;
  *(_QWORD *)pszFormat = a7;
  Dacl = a1;
  v71 = a12;
  v72 = a8;
  v14 = 0LL;
  Ace = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v15 = 0LL;
  DestinationString.Buffer = 0LL;
  v16 = 0;
  pcchRemaining = a4;
  v17 = 1;
  v59 = 0LL;
  v58[0] = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&v64.Length = 0LL;
  v64.Buffer = 0LL;
  while ( (v17 & a5) == 0 )
  {
    ++v16;
    v17 *= 2;
    if ( v16 >= 0x20 )
    {
      v16 = v57;
      break;
    }
  }
  *(_DWORD *)SecurityDescriptor = 1310720;
  *(_QWORD *)&SecurityDescriptor[8] = &v76;
  *(_DWORD *)&v65.Length = 1966080;
  v65.Buffer = (wchar_t *)&v77;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v65, 0x709u);
  if ( DaclSecurityDescriptor >= 0 )
  {
    *(_DWORD *)&v68.Length = 1966080;
    v68.Buffer = (wchar_t *)&v78;
    DaclSecurityDescriptor = AdtpFormatPrefix(&v68, 0x70Au);
    if ( DaclSecurityDescriptor >= 0 )
    {
      *(_DWORD *)&v69.Length = 1966080;
      v69.Buffer = (wchar_t *)&v79;
      DaclSecurityDescriptor = AdtpFormatPrefix(&v69, 0x713u);
      if ( DaclSecurityDescriptor >= 0 )
      {
        *(_DWORD *)&v70.Length = 1966080;
        v70.Buffer = (wchar_t *)&v80;
        DaclSecurityDescriptor = AdtpFormatPrefix(&v70, 0x714u);
        if ( DaclSecurityDescriptor >= 0 )
        {
          *(_DWORD *)&pszDest[0].Length = 1966080;
          pszDest[0].Buffer = (wchar_t *)&v81;
          DaclSecurityDescriptor = AdtpFormatPrefix(pszDest, 0x712u);
          if ( DaclSecurityDescriptor >= 0 )
          {
            *(_DWORD *)&v66.Length = 1966080;
            v66.Buffer = (wchar_t *)&v82;
            DaclSecurityDescriptor = AdtpFormatPrefix(&v66, 0x716u);
            if ( DaclSecurityDescriptor >= 0 )
            {
              *(_DWORD *)&Source.Length = 1966080;
              Source.Buffer = (wchar_t *)&v83;
              DaclSecurityDescriptor = AdtpFormatPrefix(&Source, 0x718u);
              if ( DaclSecurityDescriptor >= 0 )
              {
                DaclSecurityDescriptor = AdtpBuildAccessesString(
                                           (int)Dacl,
                                           (int)Ace,
                                           a5,
                                           2,
                                           &DestinationString,
                                           0LL,
                                           0LL,
                                           0LL,
                                           (__int64)DaclPresent);
                if ( DaclSecurityDescriptor >= 0 )
                {
                  v57 = DestinationString.Length >> 1;
                  v19 = *(_DWORD *)(*(_QWORD *)pszFormat + 4LL * v16);
                  v20 = v19 & 0xFF0000;
                  if ( (v19 & 0xFF0000u) > 0x100000 )
                  {
                    if ( v20 != 0x200000 )
                    {
                      if ( v20 != 3145728
                        && v20 != 0x400000
                        && v20 != 5242880
                        && v20 != 6291456
                        && v20 != 7340032
                        && v20 != 0x800000
                        && v20 != 9437184 )
                      {
                        goto LABEL_123;
                      }
                      goto LABEL_84;
                    }
                  }
                  else if ( v20 != 0x100000 )
                  {
                    if ( v20 )
                    {
                      if ( v20 != 0x10000 && v20 != 0x20000 && v20 != 196608 && v20 != 0x40000 )
                      {
                        if ( v20 != 327680 && v20 != 393216 )
                        {
                          if ( v20 != 458752 )
                            goto LABEL_123;
                          v43 = 1830;
LABEL_86:
                          if ( v20 == 3145728 )
                            v43 = 1803;
                          if ( v20 == 0x400000 )
                            v43 = 1804;
                          if ( v20 == 5242880 )
                            v43 = 1806;
                          if ( v20 == 6291456 )
                            v43 = 1807;
                          if ( v20 == 7340032 )
                            v43 = 1808;
                          if ( !v20 )
                            v43 = 1809;
                          if ( v20 == 0x800000 )
                            v43 = 1805;
                          if ( v20 == 9437184 )
                            v43 = 1841;
                          Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
                          Buffer = Destination.Buffer;
                          if ( Destination.Buffer )
                          {
                            *(_DWORD *)&Destination.Length = 5111808;
                            RtlAppendUnicodeToString(&Destination, L"%%");
                            DaclSecurityDescriptor = RtlIntegerToUnicodeString(
                                                       v43,
                                                       0xAu,
                                                       (PUNICODE_STRING)SecurityDescriptor);
                            if ( DaclSecurityDescriptor < 0 )
                            {
                              Buffer = Destination.Buffer;
                              goto LABEL_111;
                            }
                            v27 = (PCWSTR *)SecurityDescriptor;
                            goto LABEL_105;
                          }
                          goto LABEL_36;
                        }
                        v21 = 2;
                        LODWORD(v58[0]) = 131074;
                        wcscpy(pszFormat, L"# %d");
                        v58[1] = L"-";
                        if ( v20 == 393216 )
                        {
                          v24 = *(_DWORD *)(pcchRemaining + 8);
                          if ( v24 )
                          {
                            if ( (unsigned __int16)v19 >= v24 )
                              goto LABEL_27;
                            v23 = *(_QWORD *)(pcchRemaining + 16);
                            goto LABEL_32;
                          }
                        }
                        else
                        {
                          v22 = *(_DWORD *)(a3 + 8);
                          if ( v22 )
                          {
                            if ( (unsigned __int16)v19 >= v22 )
                            {
LABEL_27:
                              DaclSecurityDescriptor = -1073741811;
                              goto LABEL_111;
                            }
                            v23 = *(_QWORD *)(a3 + 16);
LABEL_32:
                            *(_OWORD *)v58 = *(_OWORD *)(v23 + 16LL * (unsigned __int16)v19);
                            v21 = (unsigned __int16)v58[0];
                            if ( LOWORD(v58[0]) > 2u )
                              goto LABEL_35;
                          }
                        }
                        LODWORD(v53) = (unsigned __int16)v19;
                        pcchRemaining = 0LL;
                        if ( StringCchPrintfExW(&pszDest[0].Length, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v53) >= 0 )
                        {
                          v21 = 2 * (20 - pcchRemaining);
                          WORD1(v58[0]) = 40;
                          LOWORD(v58[0]) = v21;
                          v58[1] = (PCWSTR)pszDest;
                        }
LABEL_35:
                        v25 = v21 + 54;
                        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v25, 0x6B416553u);
                        Buffer = Destination.Buffer;
                        if ( Destination.Buffer )
                        {
                          Destination.Length = 0;
                          Destination.MaximumLength = 2 * v25;
                          if ( v20 == 327680 )
                            p_Source = &v66;
                          else
                            p_Source = &Source;
                          RtlAppendUnicodeStringToString(&Destination, p_Source);
                          v27 = v58;
LABEL_105:
                          RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)v27);
LABEL_123:
                          appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
                          Length = Destination.Length;
                          DaclSecurityDescriptor = appended;
                          v49 = v57 + 1 + (Destination.Length >> 1);
                          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * v49, 0x6B416553u);
                          if ( PoolWithTag )
                          {
                            *v71 = 1;
                            if ( DestinationString.Length )
                              memmove(PoolWithTag, DestinationString.Buffer, DestinationString.Length);
                            Buffer = Destination.Buffer;
                            if ( Length )
                              memmove(&PoolWithTag[DestinationString.Length], Destination.Buffer, Length);
                            *(_WORD *)&PoolWithTag[2 * v49 - 2] = 0;
                            v51 = v72;
                            v52 = 2 * (v49 - 1);
                            *v72 = v52;
                            v51[1] = v52 + 2;
                            *((_QWORD *)v51 + 1) = PoolWithTag;
                          }
                          else
                          {
                            Buffer = Destination.Buffer;
                            DaclSecurityDescriptor = -1073741801;
                          }
                          v36 = (WCHAR *)v59;
                          goto LABEL_131;
                        }
LABEL_36:
                        DaclSecurityDescriptor = -1073741801;
                        goto LABEL_111;
                      }
                      Dacl = 0LL;
                      Ace = 0LL;
                      memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
                      LODWORD(v59) = 0;
                      if ( ((v20 - 0x10000) & 0xFFFEFFFF) != 0 )
                        v28 = *(void **)pcchRemaining;
                      else
                        v28 = *(void **)a3;
                      DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v28, DaclPresent, &Dacl, DaclDefaulted);
                      if ( DaclSecurityDescriptor < 0 )
                        goto LABEL_111;
                      if ( !DaclPresent[0] )
                        goto LABEL_111;
                      v29 = (unsigned __int16)v19;
                      v30 = Dacl;
                      DaclSecurityDescriptor = RtlGetAce(Dacl, v29, &Ace);
                      if ( DaclSecurityDescriptor < 0 )
                        goto LABEL_111;
                      v31 = (unsigned __int16 *)Ace;
                      v32 = *((unsigned __int16 *)Ace + 1) + 8;
                      v33 = (ACL *)ExAllocatePoolWithTag(PagedPool, v32, 0x6B416553u);
                      v15 = v33;
                      if ( !v33 )
                        goto LABEL_36;
                      DaclSecurityDescriptor = RtlCreateAcl(v33, v32, v30->AclRevision);
                      if ( DaclSecurityDescriptor < 0
                        || (DaclSecurityDescriptor = RtlAddAce(v15, v30->AclRevision, 0, v31, v31[1]),
                            DaclSecurityDescriptor < 0)
                        || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
                            DaclSecurityDescriptor < 0)
                        || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0),
                            DaclSecurityDescriptor < 0) )
                      {
LABEL_133:
                        if ( v15 )
                          ExFreePoolWithTag(v15, 0);
                        goto LABEL_111;
                      }
                      v35 = SeConvertSecurityDescriptorToStringSecurityDescriptor(
                              (__int64)SecurityDescriptor,
                              v34,
                              4LL,
                              v58,
                              &v59);
                      v36 = (WCHAR *)v58[0];
                      DaclSecurityDescriptor = v35;
                      v59 = v58[0];
                      if ( v35 < 0 )
                      {
                        if ( v35 == -1073741801 )
                          goto LABEL_131;
                        v37 = pszDest;
                        if ( StringCchPrintfW(&pszDest[0].Length, 0x10uLL, L"<0x%08X>", (unsigned int)v35) < 0 )
                          v37 = (UNICODE_STRING *)L"-";
                      }
                      else
                      {
                        v37 = (UNICODE_STRING *)v58[0];
                      }
                      v38 = -1LL;
                      v39 = -1LL;
                      do
                        ++v39;
                      while ( *(&v37->Length + v39) );
                      v40 = v39 + 1;
                      if ( 2 * (unsigned __int64)v40 > 0xFFFF )
                      {
                        DaclSecurityDescriptor = RtlStringCbPrintfW(&pszDest[0].Length, 0x10uLL, L"%%%%%u", 1828LL);
                        if ( DaclSecurityDescriptor < 0 )
                          goto LABEL_131;
                        v37 = pszDest;
                        do
                          ++v38;
                        while ( *(&pszDest[0].Length + v38) );
                        v40 = v38 + 1;
                      }
                      v41 = v40 + 27;
                      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v40 + 27), 0x6B416553u);
                      Buffer = Destination.Buffer;
                      if ( Destination.Buffer )
                      {
                        Destination.Length = 0;
                        Destination.MaximumLength = 2 * v41;
                        switch ( v20 )
                        {
                          case 65536:
                            v42 = &v65;
                            break;
                          case 131072:
                            v42 = &v68;
                            break;
                          case 196608:
                            v42 = &v69;
                            break;
                          default:
                            v42 = &v70;
                            break;
                        }
                        RtlAppendUnicodeStringToString(&Destination, v42);
                        RtlAppendUnicodeToString(&Destination, &v37->Length);
                        if ( v36 )
                        {
                          ExFreePoolWithTag(v36, 0);
                          v59 = 0LL;
                        }
                        ExFreePoolWithTag(v15, 0);
                        v15 = 0LL;
                        goto LABEL_123;
                      }
                      DaclSecurityDescriptor = -1073741801;
LABEL_131:
                      if ( v36 )
                        ExFreePoolWithTag(v36, 0);
                      goto LABEL_133;
                    }
LABEL_84:
                    v43 = v57;
                    goto LABEL_86;
                  }
                  v58[0] = (PCWSTR)(unsigned __int16)v19;
                  *(_QWORD *)&SecurityDescriptor[8] = (unsigned __int16)v19;
                  *(_DWORD *)SecurityDescriptor = 1;
                  *(_DWORD *)&SecurityDescriptor[4] = 1;
                  *(_DWORD *)&SecurityDescriptor[16] = 0;
                  DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(SecurityDescriptor, &v64, 0LL, 0LL);
                  if ( DaclSecurityDescriptor >= 0 )
                  {
                    v44 = (v64.Length >> 1) + 27;
                    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v44, 0x6B416553u);
                    Buffer = Destination.Buffer;
                    if ( Destination.Buffer )
                    {
                      Destination.Length = 0;
                      Destination.MaximumLength = 2 * v44;
                      if ( v20 == 0x200000 )
                        v46 = &v65;
                      else
                        v46 = pszDest;
                      RtlAppendUnicodeStringToString(&Destination, v46);
                      RtlAppendUnicodeStringToString(&Destination, &v64);
                      v14 = v64.Buffer;
                      if ( v64.Buffer )
                      {
                        ExFreePoolWithTag(v64.Buffer, 0);
                        v14 = 0LL;
                      }
                      goto LABEL_123;
                    }
                    DaclSecurityDescriptor = -1073741801;
                  }
                  v14 = v64.Buffer;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_111:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)DaclSecurityDescriptor;
}
