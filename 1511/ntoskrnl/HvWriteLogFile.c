/*
 * XREFs of HvWriteLogFile @ 0x1403D27F0
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x1403D29C0 (CmpTraceHiveFlushWroteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1403D43F4 (HvpLogTypeToLogArrayIndex.c)
 *     HvpGenerateLogEntry @ 0x1403ED278 (HvpGenerateLogEntry.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvWriteLogFile(ULONG_PTR a1, char a2, unsigned int a3, unsigned int *a4)
{
  void *v4; // rsi
  __int64 v8; // rax
  unsigned int v9; // edi
  signed __int64 *v10; // rdx
  signed __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // eax
  int LogEntry; // edi
  int v16; // [rsp+38h] [rbp-30h] BYREF
  void *v17; // [rsp+40h] [rbp-28h]
  unsigned int v18; // [rsp+48h] [rbp-20h]
  char v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v4 = 0LL;
  if ( (*(_DWORD *)(a1 + 144) & 0x8001) == 0 )
  {
    v8 = *(unsigned int *)(a1 + 148);
    if ( !(_DWORD)v8 || !*(_QWORD *)(a1 + 8 * v8 + 2664) )
      return (unsigned int)-1073741811;
    if ( a2 )
    {
      v4 = *(void **)(a1 + 2880);
      v9 = *(_DWORD *)(a1 + 2888);
    }
    else
    {
      v4 = 0LL;
      LogEntry = HvpGenerateLogEntry(a1);
      if ( LogEntry < 0 )
        goto LABEL_15;
      v9 = v20;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 || *(_DWORD *)(a1 + 148) == 4 )
    {
      v10 = (signed __int64 *)(a1 + 2976);
    }
    else if ( *(_DWORD *)(a1 + 148) == 5 )
    {
      v10 = (signed __int64 *)(a1 + 2984);
    }
    else
    {
      v10 = 0LL;
    }
    v11 = v9 + (unsigned __int64)*(unsigned int *)(a1 + 160);
    if ( v11 > *v10 )
      CmpDoFileSetSizeEx(a1, *(unsigned int *)(a1 + 148), v11, 1LL);
    v12 = *(unsigned int *)(a1 + 148);
    v16 = *(_DWORD *)(a1 + 160);
    v17 = v4;
    v18 = v9;
    if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, __int64, int *, __int64, char *, _DWORD))(a1 + 40))(
            a1,
            v12,
            &v16,
            1LL,
            &v19,
            0) )
    {
      LogEntry = -1073741491;
      goto LABEL_15;
    }
    if ( !(unsigned __int8)CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 148)) )
    {
      LogEntry = -1073741823;
      goto LABEL_15;
    }
    ++*(_DWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 160) += v9;
    v13 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 148));
    *(_BYTE *)(v13 + a1 + 172) = 1;
    CmpTraceHiveFlushWroteLogFile(v13, v9);
    *a4 = v9;
  }
  LogEntry = 0;
LABEL_15:
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)LogEntry;
}
