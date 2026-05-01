/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x1800445FC
 * Callers:
 *     ?GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x1800447AC (-GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18002229C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, char *a2, unsigned __int16 *a3, unsigned int *a4)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  unsigned __int16 *v8; // rsi
  HANDLE v9; // rbp
  signed int LastError; // eax
  int v11; // ebx
  unsigned __int16 *v12; // rax
  NTSTATUS InformationProcess; // ebx
  __int16 v14; // cx
  __int64 v15; // rdx
  unsigned int v16; // r9d
  _WORD *v17; // rax
  char *v18; // r8
  __int64 v19; // rdx

  v6 = 0;
  v7 = 256;
  v8 = 0LL;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *(_WORD *)a2 = 0;
  v9 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v9 )
    goto LABEL_15;
  LastError = GetLastError();
  v11 = LastError;
  if ( LastError > 0 )
    v11 = (unsigned __int16)LastError | 0x80070000;
  if ( v11 >= 0 )
  {
LABEL_15:
    do
    {
      operator delete(v8);
      v12 = (unsigned __int16 *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v12;
      if ( v12 )
        InformationProcess = NtQueryInformationProcess(
                               v9,
                               ProcessImageFileMapping|ProcessUserModeIOPL,
                               v12,
                               v7 - 2,
                               0LL);
      else
        InformationProcess = -1073741801;
      v7 *= 2;
    }
    while ( InformationProcess == -1073741820 && v7 <= 0x4000 );
    v11 = InformationProcess >= 0 ? 0 : InformationProcess | 0x10000000;
    if ( v11 >= 0 )
    {
      v14 = 34;
      v15 = *v8 >> 1;
      v8[v15 + 8] = 0;
      if ( v8[8] != 34 )
        v14 = 32;
      v16 = 1;
      if ( (unsigned int)v15 > 1 )
      {
        v17 = v8 + 9;
        while ( *v17 != v14 )
        {
          ++v16;
          ++v17;
          if ( v16 >= (unsigned int)v15 )
            goto LABEL_30;
        }
        v6 = v15 - v16;
        v18 = (char *)&v8[v16 + 9];
        if ( v18 && v6 )
        {
          do
          {
            if ( *(_WORD *)v18 != 32 )
              break;
            v18 += 2;
            --v6;
          }
          while ( v6 );
          v19 = *(unsigned int *)a3;
          if ( v6 >= (int)v19 - 1 )
            v6 = v19 - 1;
          v11 = StringCchCopyNW(a2, v19, v18, v6);
        }
      }
LABEL_30:
      *(_DWORD *)a3 = v6;
    }
  }
  operator delete(v8);
  if ( v9 )
    CloseHandle(v9);
  return (unsigned int)v11;
}
