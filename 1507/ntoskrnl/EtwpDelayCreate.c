/*
 * XREFs of EtwpDelayCreate @ 0x1404AC7C0
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwpCreateDirectoryFile @ 0x1404AC88C (EtwpCreateDirectoryFile.c)
 *     EtwpCreateNtFileName @ 0x1404AC9D0 (EtwpCreateNtFileName.c)
 */

__int64 __fastcall EtwpDelayCreate(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, char a5, char a6)
{
  int v8; // eax
  WCHAR *v9; // rsi
  int v10; // edi
  __int64 v12; // rax
  WCHAR *i; // rbx
  int v14; // [rsp+30h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-18h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  P = 0LL;
  v8 = EtwpCreateNtFileName(*(_QWORD *)(a2 + 8), &P, &v17);
  v9 = (WCHAR *)P;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v10 = EtwpCreateDirectoryFile((PCWSTR)P, a1, &IoStatusBlock, (unsigned __int8)*a3);
    if ( v10 == -1073741766 && a6 == 1 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( aDosdevices[v12] );
      if ( v17 == 2 * v12 )
      {
        for ( i = &v9[v12]; *i != 92; ++i )
        {
          if ( !*i )
            goto LABEL_22;
        }
        while ( *i )
        {
          if ( *++i == 92 )
          {
            v14 = (unsigned __int8)*a3;
            *i = 0;
            v10 = EtwpCreateDirectoryFile(v9, 0LL, &IoStatusBlock, v14);
            if ( v10 < 0 )
              goto LABEL_3;
            *i = 92;
          }
        }
LABEL_22:
        v10 = EtwpCreateDirectoryFile(v9, a1, &IoStatusBlock, (unsigned __int8)*a3);
      }
    }
  }
LABEL_3:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 >= 0 && *a3 == 1 && IoStatusBlock.Information == 2 )
    *a3 = 0;
  return (unsigned int)v10;
}
