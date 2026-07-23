/*
 * XREFs of EtwpDelayCreate @ 0x14049553C
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1404910B8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x140494FA8 (EtwpCreateLogFile.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpCreateDirectoryFile @ 0x140495608 (EtwpCreateDirectoryFile.c)
 *     EtwpCreateNtFileName @ 0x14049574C (EtwpCreateNtFileName.c)
 */

__int64 __fastcall EtwpDelayCreate(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, char a5, char a6)
{
  __int64 v8; // rcx
  int v9; // eax
  WCHAR *v10; // rsi
  int v11; // edi
  int v12; // eax
  _WORD *i; // rbx
  int v15; // [rsp+30h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+98h] [rbp+38h] BYREF

  IoStatusBlock.Information = 0LL;
  v8 = *(_QWORD *)(a2 + 8);
  IoStatusBlock.Pointer = 0LL;
  P = 0LL;
  v9 = EtwpCreateNtFileName(v8, &P, &v18);
  v10 = (WCHAR *)P;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = EtwpCreateDirectoryFile((PCWSTR)P, a1, &IoStatusBlock, (unsigned __int8)*a3);
    v11 = v12;
    if ( a6 == 1 && v12 == -1073741766 && v18 == 24 )
    {
      for ( i = v10 + 12; *i != 92; ++i )
      {
        if ( !*i )
          goto LABEL_21;
      }
      while ( *i )
      {
        if ( *++i == 92 )
        {
          v15 = (unsigned __int8)*a3;
          *i = 0;
          v11 = EtwpCreateDirectoryFile(v10, 0LL, &IoStatusBlock, v15);
          if ( v11 < 0 )
            goto LABEL_3;
          *i = 92;
        }
      }
LABEL_21:
      v11 = EtwpCreateDirectoryFile(v10, a1, &IoStatusBlock, (unsigned __int8)*a3);
    }
  }
LABEL_3:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v11 >= 0 && *a3 == 1 && IoStatusBlock.Information == 2 )
    *a3 = 0;
  return (unsigned int)v11;
}
