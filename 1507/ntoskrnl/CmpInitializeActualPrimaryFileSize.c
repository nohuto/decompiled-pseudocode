/*
 * XREFs of CmpInitializeActualPrimaryFileSize @ 0x1404AF970
 * Callers:
 *     HvLoadHive @ 0x1404AE98C (HvLoadHive.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 * Callees:
 *     CmpGetFileSize @ 0x1404AF9D0 (CmpGetFileSize.c)
 */

__int64 __fastcall CmpInitializeActualPrimaryFileSize(__int64 a1, unsigned int *a2)
{
  int FileSize; // r9d
  unsigned int v5; // r8d
  unsigned int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  FileSize = CmpGetFileSize(*(_QWORD *)(a1 + 2664), &v8);
  if ( FileSize >= 0 )
  {
    v5 = v8;
    *(_QWORD *)(a1 + 2968) = v8;
    *a2 = v5;
  }
  if ( !*(_QWORD *)(a1 + 2968) || *(int *)(a1 + 2972) > 0 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096;
    *(_QWORD *)(a1 + 2968) = v7;
    *a2 = v7;
  }
  return (unsigned int)FileSize;
}
