/*
 * XREFs of PipInitComputerIds @ 0x140799740
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     RtlUnicodeStringCopyStringEx @ 0x14013C564 (RtlUnicodeStringCopyStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     IopCreateRegistryKeyEx @ 0x140539738 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 *     PipCreateComputerId @ 0x14079A240 (PipCreateComputerId.c)
 *     PipSmBiosGetString @ 0x14079A3B4 (PipSmBiosGetString.c)
 *     PipSmBiosFindStruct @ 0x14079A4DC (PipSmBiosFindStruct.c)
 */

__int64 __fastcall PipInitComputerIds(__int64 a1)
{
  void *v2; // r13
  unsigned int v3; // r15d
  unsigned __int8 v4; // r12
  unsigned int v5; // esi
  int ComputerId; // ebx
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 Struct; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // rdi
  _BYTE *v17; // r14
  int String; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  _BYTE *v25; // r14
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int8 *v30; // rcx
  unsigned __int8 *v31; // rdi
  _BYTE *v32; // r14
  int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  UNICODE_STRING *v37; // rdi
  wchar_t *Buffer; // rax
  HANDLE v39; // rdi
  UNICODE_STRING *v40; // rcx
  __int64 v41; // rdx
  UNICODE_STRING **v42; // rax
  unsigned int v43; // esi
  UNICODE_STRING *v44; // rcx
  __int64 v45; // rdx
  UNICODE_STRING **v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  UNICODE_STRING *v49; // rcx
  __int64 v50; // rdx
  UNICODE_STRING *v51; // rcx
  UNICODE_STRING **v52; // rax
  __int64 v53; // rdx
  UNICODE_STRING *v54; // rcx
  UNICODE_STRING **v55; // rax
  __int64 v56; // rdx
  UNICODE_STRING *v57; // rcx
  UNICODE_STRING **v58; // rax
  unsigned int v59; // r14d
  wchar_t *PoolWithTag; // rax
  wchar_t *v61; // r12
  unsigned int v62; // r15d
  UNICODE_STRING *v63; // rsi
  __int64 v64; // rdi
  HANDLE v65; // rdi
  __int64 v67; // rdx
  UNICODE_STRING *v68; // rcx
  UNICODE_STRING **v69; // rax
  __int64 v70; // [rsp+28h] [rbp-E0h]
  unsigned int v71; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v72; // [rsp+5Ch] [rbp-ACh]
  unsigned __int8 v73; // [rsp+5Dh] [rbp-ABh]
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v76; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v78; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING *v79; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING *v80; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING *v81; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING *v82; // [rsp+B8h] [rbp-50h]
  _QWORD v83[3]; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString[23]; // [rsp+D8h] [rbp-30h] BYREF
  wchar_t SourceString; // [rsp+248h] [rbp+140h] BYREF
  wchar_t pszDest[8]; // [rsp+250h] [rbp+148h] BYREF

  v76 = 0LL;
  Handle = 0LL;
  v72 = 0;
  v2 = 0LL;
  v73 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  memset(UnicodeString, 0, 0x80uLL);
  *(_DWORD *)&RemainingString.Length = 6291550;
  RemainingString.Buffer = L"\\Registry\\Machine\\System\\HardwareConfig\\Current";
  ComputerId = IopOpenRegistryKeyEx(&v76, 0LL, &RemainingString, 0xF003Fu);
  if ( ComputerId >= 0 )
  {
    PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v76, (__int64)L"ComputerIds");
    *(_DWORD *)&RemainingString.Length = 1572886;
    RemainingString.Buffer = L"ComputerIds";
    ComputerId = IopCreateRegistryKeyEx(&Handle, v76, &RemainingString, 0xF003Fu, 0, 0LL);
    if ( ComputerId >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 240);
      v8 = 0;
      v9 = *(_QWORD *)(v7 + 56);
      if ( !v9 || (v10 = *(_QWORD *)(v9 + 16)) == 0 )
      {
        ComputerId = -1073741637;
        goto LABEL_112;
      }
      v3 = *(_DWORD *)(v9 + 12);
      v71 = v3;
      v11 = MmMapIoSpaceEx(v10, v3, 2u);
      v2 = (void *)v11;
      if ( !v11 )
      {
        ComputerId = -1073741670;
        goto LABEL_112;
      }
      LOBYTE(v12) = 1;
      Struct = PipSmBiosFindStruct(v12, 0LL, v11, v3);
      v16 = (unsigned __int8 *)Struct;
      if ( Struct )
      {
        v17 = (_BYTE *)(Struct + 5);
        if ( Struct + 5 <= Struct + (unsigned __int64)*(unsigned __int8 *)(Struct + 1) )
        {
          LOBYTE(v14) = *(_BYTE *)(Struct + 4);
          String = PipSmBiosGetString(Struct, v14, v2, v3, UnicodeString);
          ComputerId = String;
          if ( String == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( String < 0 )
          {
            goto LABEL_112;
          }
        }
        if ( v16 + 27 <= &v16[v16[1]] )
        {
          LOBYTE(v14) = v16[26];
          v19 = PipSmBiosGetString(v16, v14, v2, v3, &UnicodeString[1]);
          ComputerId = v19;
          if ( v19 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v19 < 0 )
          {
            goto LABEL_112;
          }
        }
        if ( v16 + 6 > &v16[v16[1]] )
        {
          v8 = 0;
        }
        else
        {
          LOBYTE(v14) = *v17;
          v20 = PipSmBiosGetString(v16, v14, v2, v3, &UnicodeString[2]);
          v8 = 0;
          ComputerId = v20;
          if ( v20 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v20 < 0 )
          {
            goto LABEL_112;
          }
        }
        v15 = (unsigned __int64)&v16[v16[1]];
        if ( (unsigned __int64)(v16 + 26) <= v15 )
        {
          LOBYTE(v14) = v16[25];
          v21 = PipSmBiosGetString(v16, v14, v2, v3, &UnicodeString[3]);
          ComputerId = v21;
          if ( v21 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v21 < 0 )
          {
            goto LABEL_112;
          }
        }
      }
      LOBYTE(v14) = 10;
      LOBYTE(v15) = 2;
      v22 = PipSmBiosFindStruct(v15, v14, v2, v3);
      v24 = v22;
      if ( v22 )
      {
        v25 = (_BYTE *)(v22 + 5);
        if ( v22 + 5 <= v22 + (unsigned __int64)*(unsigned __int8 *)(v22 + 1) )
        {
          LOBYTE(v23) = *(_BYTE *)(v22 + 4);
          v26 = PipSmBiosGetString(v22, v23, v2, v3, &UnicodeString[6]);
          ComputerId = v26;
          if ( v26 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v26 < 0 )
          {
            goto LABEL_112;
          }
        }
        if ( v24 + 6 > v24 + (unsigned __int64)*(unsigned __int8 *)(v24 + 1) )
        {
          v8 = 0;
        }
        else
        {
          LOBYTE(v23) = *v25;
          v27 = PipSmBiosGetString(v24, v23, v2, v3, &UnicodeString[7]);
          v8 = 0;
          ComputerId = v27;
          if ( v27 == -1073741275 )
          {
            ComputerId = 0;
          }
          else if ( v27 < 0 )
          {
            goto LABEL_112;
          }
        }
      }
      v28 = PipSmBiosFindStruct(0LL, 0LL, v2, v3);
      v31 = (unsigned __int8 *)v28;
      if ( !v28 )
        goto LABEL_37;
      v32 = (_BYTE *)(v28 + 5);
      if ( v28 + 5 <= v28 + (unsigned __int64)*(unsigned __int8 *)(v28 + 1) )
      {
        LOBYTE(v29) = *(_BYTE *)(v28 + 4);
        v33 = PipSmBiosGetString(v28, v29, v2, v3, &UnicodeString[4]);
        ComputerId = v33;
        if ( v33 == -1073741275 )
        {
          ComputerId = 0;
        }
        else if ( v33 < 0 )
        {
          goto LABEL_112;
        }
      }
      if ( v31 + 6 > &v31[v31[1]] )
      {
        v8 = 0;
        goto LABEL_33;
      }
      LOBYTE(v29) = *v32;
      v34 = PipSmBiosGetString(v31, v29, v2, v3, &UnicodeString[5]);
      v8 = 0;
      ComputerId = v34;
      if ( v34 == -1073741275 )
      {
        ComputerId = 0;
        goto LABEL_33;
      }
      if ( v34 >= 0 )
      {
LABEL_33:
        v30 = v31 + 21;
        v35 = (unsigned __int64)&v31[v31[1]];
        if ( (unsigned __int64)(v31 + 21) <= v35 )
          v72 = v31[20];
        if ( (unsigned __int64)(v31 + 22) <= v35 )
          v4 = *v30;
LABEL_37:
        LOBYTE(v30) = 3;
        v36 = PipSmBiosFindStruct(v30, 0LL, v2, v3);
        if ( v36 && v36 + 6 <= v36 + (unsigned __int64)*(unsigned __int8 *)(v36 + 1) )
          v73 = *(_BYTE *)(v36 + 5) & 0x7F;
        v37 = UnicodeString;
        do
        {
          if ( v37->Buffer && !v37->Length )
            RtlFreeAnsiString(&UnicodeString[v8]);
          ++v8;
          ++v37;
        }
        while ( v8 < 8 );
        Buffer = UnicodeString[0].Buffer;
        v39 = Handle;
        if ( !UnicodeString[0].Buffer )
        {
LABEL_102:
          v59 = 112 * v5 + 2;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v59, 0x6E697050u);
          v61 = PoolWithTag;
          if ( PoolWithTag )
          {
            RemainingString.Buffer = PoolWithTag;
            v62 = 0;
            RemainingString.MaximumLength = v59;
            if ( v5 )
            {
              while ( 1 )
              {
                RemainingString.Length = 0;
                ComputerId = RtlUnicodeStringCopyStringEx(&RemainingString, L"ComputerMetadata\\", &RemainingString, 0);
                if ( ComputerId < 0 )
                  break;
                ComputerId = RtlStringFromGUIDEx((PGUID)&UnicodeString[v62 + 8], &RemainingString, 0);
                if ( ComputerId < 0 )
                  break;
                ComputerId = RtlUpcaseUnicodeString(&RemainingString, &RemainingString, 0);
                if ( ComputerId < 0 )
                  break;
                RemainingString.MaximumLength -= 78;
                PoolWithTag = RemainingString.Buffer + 39;
                ++v62;
                RemainingString.Buffer += 39;
                if ( v62 >= v5 )
                  goto LABEL_108;
              }
            }
            else
            {
LABEL_108:
              if ( ComputerId >= 0 )
              {
                *PoolWithTag = 0;
                ++RemainingString.Buffer;
                ComputerId = PnpSetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                               5u,
                               0LL,
                               0LL,
                               (__int64)&DEVPKEY_Device_HardwareIds,
                               8210,
                               (__int64)v61,
                               v59,
                               0);
              }
            }
            ExFreePoolWithTag(v61, 0);
          }
          else
          {
            ComputerId = -1073741670;
          }
          goto LABEL_111;
        }
        if ( UnicodeString[2].Buffer && UnicodeString[4].Buffer && UnicodeString[5].Buffer )
        {
          LODWORD(v70) = v4;
          ComputerId = RtlStringCchPrintfW(pszDest, 8uLL, L"%02x&%02x", v72, v70);
          if ( ComputerId < 0 )
            goto LABEL_111;
          RtlInitUnicodeString(&DestinationString, pszDest);
          if ( UnicodeString[3].Buffer )
          {
            v79 = UnicodeString;
            v40 = &UnicodeString[2];
            v80 = &UnicodeString[1];
            v41 = 4LL;
            v42 = &v81;
            do
            {
              *v42++ = v40++;
              --v41;
            }
            while ( v41 );
            v83[2] = &DestinationString;
            ComputerId = PipCreateComputerId(v39);
            v5 = 1;
            if ( ComputerId < 0 )
              goto LABEL_111;
          }
          v79 = UnicodeString;
          v80 = &UnicodeString[1];
          v81 = &UnicodeString[2];
          v82 = &UnicodeString[4];
          v83[0] = &UnicodeString[5];
          v83[1] = &DestinationString;
          v43 = v5 + 1;
          ComputerId = PipCreateComputerId(v39);
          if ( ComputerId < 0 )
            goto LABEL_111;
          v79 = UnicodeString;
          v80 = &UnicodeString[2];
          v81 = &UnicodeString[4];
          v82 = &UnicodeString[5];
          v83[0] = &DestinationString;
          v5 = v43 + 1;
          ComputerId = PipCreateComputerId(v39);
          if ( ComputerId < 0 )
            goto LABEL_111;
          Buffer = UnicodeString[0].Buffer;
        }
        if ( !Buffer )
          goto LABEL_102;
        if ( UnicodeString[2].Buffer )
        {
          if ( UnicodeString[3].Buffer )
          {
            if ( UnicodeString[6].Buffer )
            {
              if ( UnicodeString[7].Buffer )
              {
                v79 = UnicodeString;
                v44 = &UnicodeString[2];
                v45 = 2LL;
                v80 = &UnicodeString[1];
                v46 = &v81;
                do
                {
                  *v46++ = v44++;
                  --v45;
                }
                while ( v45 );
                v47 = v83;
                v48 = 2LL;
                v49 = &UnicodeString[6];
                do
                {
                  *v47++ = v49++;
                  --v48;
                }
                while ( v48 );
                ++v5;
                ComputerId = PipCreateComputerId(v39);
                if ( ComputerId < 0 )
                  goto LABEL_111;
              }
            }
            v50 = 2LL;
            v79 = UnicodeString;
            v51 = &UnicodeString[2];
            v80 = &UnicodeString[1];
            v52 = &v81;
            do
            {
              *v52++ = v51++;
              --v50;
            }
            while ( v50 );
            ++v5;
            ComputerId = PipCreateComputerId(v39);
            if ( ComputerId < 0 )
              goto LABEL_111;
          }
          v79 = UnicodeString;
          v80 = &UnicodeString[1];
          v81 = &UnicodeString[2];
          ++v5;
          ComputerId = PipCreateComputerId(v39);
          if ( ComputerId < 0 )
            goto LABEL_111;
          Buffer = UnicodeString[0].Buffer;
        }
        if ( !Buffer )
          goto LABEL_102;
        if ( UnicodeString[3].Buffer )
        {
          if ( UnicodeString[6].Buffer )
          {
            if ( UnicodeString[7].Buffer )
            {
              v53 = 2LL;
              v79 = UnicodeString;
              v54 = &UnicodeString[6];
              v80 = &UnicodeString[3];
              v55 = &v81;
              do
              {
                *v55++ = v54++;
                --v53;
              }
              while ( v53 );
              ++v5;
              ComputerId = PipCreateComputerId(v39);
              if ( ComputerId < 0 )
                goto LABEL_111;
            }
          }
          v79 = UnicodeString;
          v80 = &UnicodeString[3];
          ++v5;
          ComputerId = PipCreateComputerId(v39);
          if ( ComputerId < 0 )
            goto LABEL_111;
          Buffer = UnicodeString[0].Buffer;
        }
        if ( !Buffer )
          goto LABEL_102;
        if ( UnicodeString[2].Buffer )
        {
          if ( UnicodeString[6].Buffer )
          {
            if ( UnicodeString[7].Buffer )
            {
              v79 = UnicodeString;
              v80 = &UnicodeString[2];
              v81 = &UnicodeString[6];
              v82 = &UnicodeString[7];
              ++v5;
              ComputerId = PipCreateComputerId(v39);
              if ( ComputerId < 0 )
                goto LABEL_111;
            }
          }
          v79 = UnicodeString;
          v80 = &UnicodeString[2];
          ++v5;
          ComputerId = PipCreateComputerId(v39);
          if ( ComputerId < 0 )
            goto LABEL_111;
          Buffer = UnicodeString[0].Buffer;
        }
        if ( !Buffer )
          goto LABEL_102;
        if ( UnicodeString[1].Buffer )
        {
          if ( UnicodeString[7].Buffer )
          {
            if ( UnicodeString[6].Buffer )
            {
              v67 = 2LL;
              v79 = UnicodeString;
              v68 = &UnicodeString[6];
              v80 = &UnicodeString[1];
              v69 = &v81;
              do
              {
                *v69++ = v68++;
                --v67;
              }
              while ( v67 );
              ++v5;
              ComputerId = PipCreateComputerId(v39);
              if ( ComputerId < 0 )
                goto LABEL_111;
            }
          }
          v79 = UnicodeString;
          v80 = &UnicodeString[1];
          ++v5;
          ComputerId = PipCreateComputerId(v39);
          if ( ComputerId < 0 )
            goto LABEL_111;
          Buffer = UnicodeString[0].Buffer;
        }
        if ( !Buffer )
          goto LABEL_102;
        if ( v73 )
        {
          ComputerId = RtlStringCchPrintfW(&SourceString, 4uLL, L"%x", v73);
          if ( ComputerId < 0 )
            goto LABEL_111;
          RtlInitUnicodeString(&v78, &SourceString);
          v79 = UnicodeString;
          v80 = &v78;
          ++v5;
          ComputerId = PipCreateComputerId(v39);
          if ( ComputerId < 0 )
            goto LABEL_111;
          Buffer = UnicodeString[0].Buffer;
        }
        if ( !Buffer )
          goto LABEL_102;
        if ( !UnicodeString[7].Buffer )
          goto LABEL_145;
        if ( !UnicodeString[6].Buffer )
          goto LABEL_145;
        v56 = 2LL;
        v79 = UnicodeString;
        v57 = &UnicodeString[6];
        v58 = &v80;
        do
        {
          *v58++ = v57++;
          --v56;
        }
        while ( v56 );
        ++v5;
        ComputerId = PipCreateComputerId(v39);
        if ( ComputerId >= 0 )
        {
LABEL_145:
          v79 = UnicodeString;
          ++v5;
          ComputerId = PipCreateComputerId(v39);
          if ( ComputerId >= 0 )
            goto LABEL_102;
        }
LABEL_111:
        v3 = v71;
      }
    }
  }
LABEL_112:
  v63 = UnicodeString;
  v64 = 8LL;
  do
  {
    RtlFreeAnsiString(v63++);
    --v64;
  }
  while ( v64 );
  v65 = Handle;
  if ( v2 )
    MmUnmapIoSpace(v2, v3);
  if ( v65 )
    ZwClose(v65);
  if ( v76 )
    ZwClose(v76);
  return (unsigned int)ComputerId;
}
