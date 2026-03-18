/*
 * XREFs of ldevLoadImage @ 0x1C005EC70
 * Callers:
 *     ldevLoadDriver @ 0x1C005EA30 (ldevLoadDriver.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     MakeSystemRelativePath @ 0x1C005EEB0 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C005EFB0 (FreeSystemRelativePath.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C008487C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     MakeSystemDriversRelativePath @ 0x1C00BFEA8 (MakeSystemDriversRelativePath.c)
 */

struct _LDEV *__fastcall ldevLoadImage(PCWSTR Source, __int64 a2, _DWORD *a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v8; // r12
  struct _LDEV *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ULONG v14; // esi
  int v15; // r14d
  struct _LDEV *i; // rbx
  const UNICODE_STRING *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  int v24; // ebx
  UNICODE_STRING *v25; // r13
  _DWORD *v26; // rax
  _DWORD *v27; // rsi
  SYSTEM_INFORMATION_CLASS v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  NTSTATUS v32; // r14d
  int v33; // eax
  struct _LDEV *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // r12d
  wchar_t *v37; // rax
  const WCHAR *v38; // rax
  int v39; // ebx
  _DWORD *v40; // rax
  _DWORD *v41; // r15
  _DWORD *j; // rbx
  unsigned int v43; // eax
  char *v44; // rbx
  __int64 AddressOfEntryPoint; // rcx
  int v47; // [rsp+20h] [rbp-E0h]
  ULONG ReturnLength; // [rsp+24h] [rbp-DCh] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-D8h] BYREF
  ULONG Size; // [rsp+38h] [rbp-C8h] BYREF
  struct _STRING AnsiString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int SystemInformation[76]; // [rsp+60h] [rbp-A0h] BYREF

  v5 = a4;
  v8 = (int)a2;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(Source, a2);
  v10[3] = Source;
  v10[4] = v8;
  v10[5] = v5;
  WdLogEvent5_WdEvent(v10);
  *a3 = 0;
  if ( (unsigned int)MakeSystemRelativePath(Source, &String2) )
  {
    v14 = ReturnLength;
    v15 = 1;
    while ( 1 )
    {
      for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
      {
        v17 = (const UNICODE_STRING *)*((_QWORD *)i + 2);
        if ( v17
          && (*((_DWORD *)i + 6) == 5) == (_DWORD)v8
          && (unsigned __int8)(*((_BYTE *)i + 32) & 4) >> 2 == a5
          && RtlEqualUnicodeString(v17, &String2, 1u) )
        {
          v21 = WdLogNewEntry5_WdTrace(v19, v18, v20);
          WdLogEvent5_WdTrace(v21);
          ++*((_DWORD *)i + 7);
          v9 = i;
          *a3 = 1;
          goto LABEL_11;
        }
      }
      v24 = a4;
      if ( a4 )
        break;
      if ( !v15 )
      {
        if ( v14 )
        {
          FreeSystemRelativePath(&String2);
          if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
            goto LABEL_11;
        }
        break;
      }
      v15 = 0;
      FreeSystemRelativePath(&String2);
      if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
        break;
      v14 = 1;
    }
    v25 = (UNICODE_STRING *)PALLOCMEM2(0x38uLL, 1986292807LL, 0);
    v26 = PALLOCMEM2(0x388uLL, 1986292807LL, 1);
    v47 = 1;
    v27 = v26;
    if ( v25 )
    {
      if ( v26 )
      {
        v26[224] = 0;
        *((_QWORD *)v26 + 111) = v26 + 16;
        while ( 1 )
        {
          gulDriverFailureReason = 0;
          v28 = SystemLoadGdiDriverInformation;
          *v25 = String2;
          if ( !v24 )
            v28 = SystemLoadGdiDriverInSystemSpaceInformation;
          v32 = ZwSetSystemInformation(v28, v25, 0x38uLL);
          if ( v32 >= 0 )
            goto LABEL_20;
          if ( v32 != -1073741554 )
            gulDriverFailureReason = 3;
          if ( v24 )
            goto LABEL_59;
          if ( v32 != -1073741772 )
            break;
          if ( v47 )
          {
            v47 = 0;
            FreeSystemRelativePath(&String2);
            if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
              continue;
          }
          goto LABEL_61;
        }
        if ( v32 == -1073741554 )
        {
          v36 = 0;
          v37 = wcsrchr(Source, 0x5Cu);
          v38 = v37 ? v37 + 1 : Source;
          RtlInitUnicodeString(&DestinationString, v38);
          v32 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
          if ( v32 >= 0 )
          {
            v32 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
            if ( (int)(v32 + 0x80000000) < 0 || v32 == -1073741820 )
            {
              v39 = 296 * SystemInformation[0];
              v40 = PALLOCMEM2((unsigned int)(296 * SystemInformation[0] + 8), 1886221383LL, 0);
              v41 = v40;
              if ( v40 )
              {
                v32 = ZwQuerySystemInformation(SystemModuleInformation, v40, v39 + 8, &ReturnLength);
                if ( v32 >= 0 )
                {
                  if ( *v41 )
                  {
                    while ( _strnicmp(
                              (const char *)&v41[74 * v36 + 12] + HIWORD(v41[74 * v36 + 11]),
                              AnsiString.Buffer,
                              AnsiString.Length) )
                    {
                      if ( ++v36 >= *v41 )
                        goto LABEL_48;
                    }
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v43 = j[3];
                      if ( !v43 || !*j )
                        break;
                      if ( !_strnicmp((const char *)gpvWin32kImageBase + v43, AnsiString.Buffer, AnsiString.Length) )
                      {
                        v44 = *(char **)&v41[74 * v36 + 6];
                        v25[2].Buffer = (PWSTR)RtlImageDirectoryEntryToData(v44, 1u, 0, &Size);
                        v36 = 1;
                        AddressOfEntryPoint = RtlImageNtHeader(v44)->OptionalHeader.AddressOfEntryPoint;
                        *(_QWORD *)&v25[1].Length = v44;
                        *(_QWORD *)&v25[2].Length = &v44[AddressOfEntryPoint];
                        v25[1].Buffer = 0LL;
                        goto LABEL_49;
                      }
                    }
                  }
LABEL_48:
                  v36 = 0;
                }
LABEL_49:
                Win32FreePool();
              }
            }
            RtlFreeAnsiString(&AnsiString);
            if ( v36 )
            {
              v27[8] |= 2u;
LABEL_20:
              v27[14] = -1;
              v33 = (v27[8] ^ (4 * a5)) & 4;
              *((_QWORD *)v27 + 2) = v25;
              v27[8] ^= v33;
              v27[7] = 1;
              v27[6] = 5;
              v34 = gpldevDrivers;
              if ( gpldevDrivers )
              {
                *((_QWORD *)gpldevDrivers + 1) = v27;
                v34 = gpldevDrivers;
              }
              *(_QWORD *)v27 = v34;
              *((_QWORD *)v27 + 1) = 0LL;
              gpldevDrivers = (struct _LDEV *)v27;
              v35 = WdLogNewEntry5_WdTrace(v30, v29, v31);
              *(_QWORD *)(v35 + 24) = v27;
              WdLogEvent5_WdTrace(v35);
              return (struct _LDEV *)v27;
            }
          }
        }
LABEL_59:
        if ( v32 == -1073741702 )
          DrvLogDisplayDriverEvent(3LL);
      }
LABEL_61:
      Win32FreePool();
    }
    if ( v27 )
      Win32FreePool();
LABEL_11:
    FreeSystemRelativePath(&String2);
  }
  v22 = WdLogNewEntry5_WdTrace(v12, v11, v13);
  *(_QWORD *)(v22 + 24) = v9;
  WdLogEvent5_WdTrace(v22);
  return v9;
}
