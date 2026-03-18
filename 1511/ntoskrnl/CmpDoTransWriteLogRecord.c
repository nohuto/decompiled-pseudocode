/*
 * XREFs of CmpDoTransWriteLogRecord @ 0x1403D6580
 * Callers:
 *     CmpTransWriteLog @ 0x1403D63A8 (CmpTransWriteLog.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpDoTransWriteLogRecord(__int64 a1, char *a2, ULONG a3, ULONG fFlags, PCLFS_LSN plsn)
{
  char *v5; // r14
  void *v6; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // esi
  _DWORD *PoolWithTag; // rdi
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // ecx
  __int128 v14; // xmm0
  int v15; // r12d
  CLFS_WRITE_ENTRY rgWriteEntries; // [rsp+50h] [rbp-48h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+A8h] [rbp+10h] BYREF
  ULONG v19; // [rsp+B8h] [rbp+20h]

  v19 = fFlags;
  v5 = a2;
  v6 = *(void **)(a1 + 96);
  plsnUndoNext.ullOffset = (unsigned __int64)CLFS_LSN_NULL_EXT;
  rgWriteEntries.Buffer = a2;
  rgWriteEntries.ByteLength = a3;
  result = ClfsReserveAndAppendLog(v6, &rgWriteEntries, 1u, &plsnUndoNext, &plsnUndoNext, 0, 0LL, fFlags, plsn);
  appended = result;
  if ( result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC00uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      v10 = *((_DWORD *)v5 + 1);
      v11 = 3008;
      v12 = v10;
      if ( v10 >= 0xBC0 )
      {
        v13 = 0;
        do
        {
          ++v13;
          if ( v12 < 0xBC0 )
            break;
          v12 -= 3008;
        }
        while ( v12 );
        *(_OWORD *)PoolWithTag = *(_OWORD *)v5;
        *((_OWORD *)PoolWithTag + 1) = *((_OWORD *)v5 + 1);
        v14 = *((_OWORD *)v5 + 2);
        PoolWithTag[12] = v13;
        *((_OWORD *)PoolWithTag + 2) = v14;
        PoolWithTag[3] |= 0x80000000;
        v15 = 0;
        rgWriteEntries.Buffer = PoolWithTag;
        do
        {
          memmove(PoolWithTag + 16, v5, v11);
          PoolWithTag[13] = v15;
          PoolWithTag[14] = v11;
          rgWriteEntries.ByteLength = v11 + 64;
          ++v15;
          appended = ClfsReserveAndAppendLog(
                       *(PVOID *)(a1 + 96),
                       &rgWriteEntries,
                       1u,
                       &plsnUndoNext,
                       &plsnUndoNext,
                       0,
                       0LL,
                       v19,
                       plsn);
          if ( appended < 0 )
            break;
          v10 -= v11;
          v5 += v11;
          if ( v10 < v11 )
            v11 = v10;
        }
        while ( v10 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      return appended;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
