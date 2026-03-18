/*
 * XREFs of ldevLoadImage @ 0x1C005C640
 * Callers:
 *     ldevLoadDriver @ 0x1C005C400 (ldevLoadDriver.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     MakeSystemRelativePath @ 0x1C005C880 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C005C980 (FreeSystemRelativePath.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005CE5C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     MakeSystemDriversRelativePath @ 0x1C00C0868 (MakeSystemDriversRelativePath.c)
 */

struct _LDEV *__fastcall ldevLoadImage(PCWSTR Source, __int64 a2, _DWORD *a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v8; // r12
  struct _LDEV *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  ULONG v12; // esi
  int v13; // r14d
  struct _LDEV *i; // rbx
  const UNICODE_STRING *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  int v20; // ebx
  UNICODE_STRING *v21; // r13
  _DWORD *v22; // rax
  _DWORD *v23; // rsi
  SYSTEM_INFORMATION_CLASS v24; // ecx
  __int64 v25; // rcx
  NTSTATUS v26; // r14d
  int v27; // eax
  struct _LDEV *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r12d
  wchar_t *v31; // rax
  const WCHAR *v32; // rax
  int v33; // ebx
  _DWORD *v34; // rax
  _DWORD *v35; // r15
  _DWORD *j; // rbx
  unsigned int v37; // eax
  char *v38; // rbx
  __int64 AddressOfEntryPoint; // rcx
  int v41; // [rsp+20h] [rbp-E0h]
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
    v12 = ReturnLength;
    v13 = 1;
    while ( 1 )
    {
      for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
      {
        v15 = (const UNICODE_STRING *)*((_QWORD *)i + 2);
        if ( v15
          && (*((_DWORD *)i + 6) == 5) == (_DWORD)v8
          && (unsigned __int8)(*((_BYTE *)i + 32) & 4) >> 2 == a5
          && RtlEqualUnicodeString(v15, &String2, 1u) )
        {
          v17 = WdLogNewEntry5_WdTrace(v16);
          WdLogEvent5_WdTrace(v17);
          ++*((_DWORD *)i + 7);
          v9 = i;
          *a3 = 1;
          goto LABEL_11;
        }
      }
      v20 = a4;
      if ( a4 )
        break;
      if ( !v13 )
      {
        if ( v12 )
        {
          FreeSystemRelativePath(&String2);
          if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
            goto LABEL_11;
        }
        break;
      }
      v13 = 0;
      FreeSystemRelativePath(&String2);
      if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
        break;
      v12 = 1;
    }
    v21 = (UNICODE_STRING *)PALLOCMEM2(0x38uLL, 1986292807LL, 0);
    v22 = PALLOCMEM2(0x388uLL, 1986292807LL, 1);
    v41 = 1;
    v23 = v22;
    if ( v21 )
    {
      if ( v22 )
      {
        v22[224] = 0;
        *((_QWORD *)v22 + 111) = v22 + 16;
        while ( 1 )
        {
          gulDriverFailureReason = 0;
          v24 = SystemLoadGdiDriverInformation;
          *v21 = String2;
          if ( !v20 )
            v24 = SystemLoadGdiDriverInSystemSpaceInformation;
          v26 = ZwSetSystemInformation(v24, v21, 0x38uLL);
          if ( v26 >= 0 )
            goto LABEL_20;
          if ( v26 != -1073741554 )
            gulDriverFailureReason = 3;
          if ( v20 )
            goto LABEL_59;
          if ( v26 != -1073741772 )
            break;
          if ( v41 )
          {
            v41 = 0;
            FreeSystemRelativePath(&String2);
            if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
              continue;
          }
          goto LABEL_61;
        }
        if ( v26 == -1073741554 )
        {
          v30 = 0;
          v31 = wcsrchr(Source, 0x5Cu);
          v32 = v31 ? v31 + 1 : Source;
          RtlInitUnicodeString(&DestinationString, v32);
          v26 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
          if ( v26 >= 0 )
          {
            v26 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
            if ( (int)(v26 + 0x80000000) < 0 || v26 == -1073741820 )
            {
              v33 = 296 * SystemInformation[0];
              v34 = PALLOCMEM2((unsigned int)(296 * SystemInformation[0] + 8), 1886221383LL, 0);
              v35 = v34;
              if ( v34 )
              {
                v26 = ZwQuerySystemInformation(SystemModuleInformation, v34, v33 + 8, &ReturnLength);
                if ( v26 >= 0 )
                {
                  if ( *v35 )
                  {
                    while ( _strnicmp(
                              (const char *)&v35[74 * v30 + 12] + HIWORD(v35[74 * v30 + 11]),
                              AnsiString.Buffer,
                              AnsiString.Length) )
                    {
                      if ( ++v30 >= *v35 )
                        goto LABEL_48;
                    }
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v37 = j[3];
                      if ( !v37 || !*j )
                        break;
                      if ( !_strnicmp((const char *)gpvWin32kImageBase + v37, AnsiString.Buffer, AnsiString.Length) )
                      {
                        v38 = *(char **)&v35[74 * v30 + 6];
                        v21[2].Buffer = (PWSTR)RtlImageDirectoryEntryToData(v38, 1u, 0, &Size);
                        v30 = 1;
                        AddressOfEntryPoint = RtlImageNtHeader(v38)->OptionalHeader.AddressOfEntryPoint;
                        *(_QWORD *)&v21[1].Length = v38;
                        *(_QWORD *)&v21[2].Length = &v38[AddressOfEntryPoint];
                        v21[1].Buffer = 0LL;
                        goto LABEL_49;
                      }
                    }
                  }
LABEL_48:
                  v30 = 0;
                }
LABEL_49:
                Win32FreePool();
              }
            }
            RtlFreeAnsiString(&AnsiString);
            if ( v30 )
            {
              v23[8] |= 2u;
LABEL_20:
              v23[14] = -1;
              v27 = (v23[8] ^ (4 * a5)) & 4;
              *((_QWORD *)v23 + 2) = v21;
              v23[8] ^= v27;
              v23[7] = 1;
              v23[6] = 5;
              v28 = gpldevDrivers;
              if ( gpldevDrivers )
              {
                *((_QWORD *)gpldevDrivers + 1) = v23;
                v28 = gpldevDrivers;
              }
              *(_QWORD *)v23 = v28;
              *((_QWORD *)v23 + 1) = 0LL;
              gpldevDrivers = (struct _LDEV *)v23;
              v29 = WdLogNewEntry5_WdTrace(v25);
              *(_QWORD *)(v29 + 24) = v23;
              WdLogEvent5_WdTrace(v29);
              return (struct _LDEV *)v23;
            }
          }
        }
LABEL_59:
        if ( v26 == -1073741702 )
          DrvLogDisplayDriverEvent(3LL);
      }
LABEL_61:
      Win32FreePool();
    }
    if ( v23 )
      Win32FreePool();
LABEL_11:
    FreeSystemRelativePath(&String2);
  }
  v18 = WdLogNewEntry5_WdTrace(v11);
  *(_QWORD *)(v18 + 24) = v9;
  WdLogEvent5_WdTrace(v18);
  return v9;
}
