/*
 * XREFs of CmpInitializeActualFileSizes @ 0x14047F2D0
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 * Callees:
 *     CmpGetFileSize @ 0x14047F3D4 (CmpGetFileSize.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14047FB48 (HvpLogTypeToLogArrayIndex.c)
 *     CmpLogFailureToGetFileSize @ 0x140606CA8 (CmpLogFailureToGetFileSize.c)
 */

__int64 __fastcall CmpInitializeActualFileSizes(__int64 a1, _DWORD *a2)
{
  int FileSize; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  FileSize = CmpGetFileSize(*(_QWORD *)(a1 + 2664), &v19);
  v6 = FileSize;
  if ( FileSize < 0 )
  {
    CmpLogFailureToGetFileSize(v5, 0LL, (unsigned int)FileSize);
    return v6;
  }
  v7 = v19;
  *(_QWORD *)(a1 + 2968) = v19;
  if ( !v7 || *(int *)(a1 + 2972) > 0 )
    *(_QWORD *)(a1 + 2968) = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096);
  v8 = 1;
  *a2 = *(_DWORD *)(a1 + 2968);
  v9 = *(_DWORD *)(a1 + 148);
  if ( v9 == 1 )
  {
    v14 = CmpGetFileSize(*(_QWORD *)(a1 + 2672), &v19);
LABEL_9:
    if ( v14 < 0 )
      CmpLogFailureToGetFileSize(v15, v8, (unsigned int)v14);
    v16 = HvpLogTypeToLogArrayIndex(v8);
    *(_QWORD *)(a1 + 8LL * v16 + 2976) = v17;
    return 0;
  }
  if ( (unsigned int)(v9 - 4) <= 1 )
  {
    v10 = CmpGetFileSize(*(_QWORD *)(a1 + 2696), &v19);
    if ( v10 < 0 )
    {
      CmpLogFailureToGetFileSize(v11, 4LL, (unsigned int)v10);
      v19 = 0LL;
    }
    v12 = HvpLogTypeToLogArrayIndex(4LL);
    *(_QWORD *)(a1 + 8LL * v12 + 2976) = v13;
    v14 = CmpGetFileSize(*(_QWORD *)(a1 + 2704), &v19);
    v8 = 5;
    goto LABEL_9;
  }
  return 0;
}
