/*
 * XREFs of HvWriteLogFile @ 0x1403F4934
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x1403F48CC (CmpTraceHiveFlushWroteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14047FB48 (HvpLogTypeToLogArrayIndex.c)
 *     HvpGenerateLogEntry @ 0x140480044 (HvpGenerateLogEntry.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvWriteLogFile(__int64 a1, char a2, unsigned int a3, unsigned int *a4)
{
  void *v4; // rsi
  bool v6; // zf
  __int64 v9; // rax
  unsigned int v10; // edi
  signed __int64 *v11; // rdx
  signed __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // edi
  int v17; // eax
  void *v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h] BYREF
  void *v20; // [rsp+40h] [rbp-28h]
  unsigned int v21; // [rsp+48h] [rbp-20h]
  char v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = a3;
  v4 = 0LL;
  v6 = (*(_DWORD *)(a1 + 144) & 0x8001) == 0;
  v18 = 0LL;
  if ( v6 )
  {
    v9 = *(unsigned int *)(a1 + 148);
    if ( !(_DWORD)v9 || !*(_QWORD *)(a1 + 8 * v9 + 2664) )
      return (unsigned int)-1073741811;
    if ( a2 )
    {
      v4 = *(void **)(a1 + 2880);
      v10 = *(_DWORD *)(a1 + 2888);
    }
    else
    {
      v17 = HvpGenerateLogEntry(a1, &v18, &v23);
      v4 = v18;
      v15 = v17;
      if ( v17 < 0 )
        goto LABEL_15;
      v10 = v23;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 || *(_DWORD *)(a1 + 148) == 4 )
    {
      v11 = (signed __int64 *)(a1 + 2976);
    }
    else if ( *(_DWORD *)(a1 + 148) == 5 )
    {
      v11 = (signed __int64 *)(a1 + 2984);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = v10 + (unsigned __int64)*(unsigned int *)(a1 + 160);
    if ( v12 > *v11 )
      CmpDoFileSetSizeEx(a1, *(unsigned int *)(a1 + 148), v12, 1LL);
    v13 = *(unsigned int *)(a1 + 148);
    v19 = *(_DWORD *)(a1 + 160);
    v20 = v4;
    v21 = v10;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, int *, __int64, char *, _DWORD))(a1 + 40))(
            a1,
            v13,
            &v19,
            1LL,
            &v22,
            0) )
    {
      v15 = -1073741491;
      goto LABEL_15;
    }
    if ( !(unsigned __int8)CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 148)) )
    {
      v15 = -1073741823;
      goto LABEL_15;
    }
    ++*(_DWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 160) += v10;
    v14 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 148));
    *(_BYTE *)(v14 + a1 + 172) = 1;
    CmpTraceHiveFlushWroteLogFile(v14, v10);
    *a4 = v10;
  }
  v15 = 0;
LABEL_15:
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return v15;
}
