/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x1800497D4
 * Callers:
 *     ?GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x1800499A0 (-GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180025E3C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, char *a2, unsigned __int16 *a3, unsigned int *a4)
{
  NTSTATUS v6; // esi
  unsigned int v7; // edi
  unsigned __int16 *v8; // rbp
  HANDLE v9; // r14
  signed int LastError; // eax
  int v11; // ebx
  unsigned int v12; // ebx
  __int16 v13; // cx
  __int64 v14; // rdx
  unsigned int v15; // r9d
  _WORD *v16; // rax
  char *v17; // r8
  __int64 v18; // rdx
  ULONG ProcessInformationLength; // [rsp+68h] [rbp+10h] BYREF

  ProcessInformationLength = 512;
  v6 = -1073741820;
  v7 = 0;
  v8 = 0LL;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *(_WORD *)a2 = 0;
  v9 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v9 )
    goto LABEL_17;
  LastError = GetLastError();
  v11 = LastError;
  if ( LastError > 0 )
    v11 = (unsigned __int16)LastError | 0x80070000;
  if ( v11 >= 0 )
  {
LABEL_17:
    v12 = 0;
    do
    {
      if ( v12 >= 2 || ProcessInformationLength > 0x10000 )
        break;
      operator delete(v8);
      v8 = (unsigned __int16 *)operator new[](
                                 ProcessInformationLength + 2LL,
                                 (const struct std::nothrow_t *)&std::nothrow);
      v6 = v8
         ? NtQueryInformationProcess(
             v9,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v8,
             ProcessInformationLength,
             &ProcessInformationLength)
         : -1073741801;
      ++v12;
    }
    while ( v6 == -1073741820 );
    v11 = v6 >= 0 ? 0 : v6 | 0x10000000;
    if ( v11 >= 0 )
    {
      v13 = 34;
      v14 = *v8 >> 1;
      v8[v14 + 8] = 0;
      if ( v8[8] != 34 )
        v13 = 32;
      v15 = 1;
      if ( (unsigned int)v14 > 1 )
      {
        v16 = v8 + 9;
        while ( *v16 != v13 )
        {
          ++v15;
          ++v16;
          if ( v15 >= (unsigned int)v14 )
            goto LABEL_32;
        }
        v7 = v14 - v15;
        v17 = (char *)&v8[v15 + 9];
        if ( v17 && v7 )
        {
          do
          {
            if ( *(_WORD *)v17 != 32 )
              break;
            v17 += 2;
            --v7;
          }
          while ( v7 );
          v18 = *(unsigned int *)a3;
          if ( v7 >= (int)v18 - 1 )
            v7 = v18 - 1;
          v11 = StringCchCopyNW(a2, v18, v17, v7);
        }
      }
LABEL_32:
      *(_DWORD *)a3 = v7;
    }
  }
  operator delete(v8);
  if ( v9 )
    CloseHandle(v9);
  return (unsigned int)v11;
}
