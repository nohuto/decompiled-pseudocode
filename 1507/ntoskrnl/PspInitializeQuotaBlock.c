/*
 * XREFs of PspInitializeQuotaBlock @ 0x1405BE3DC
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140543A18 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspInsertExpansionEntry @ 0x14016E910 (PspInsertExpansionEntry.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspExpandLimit @ 0x14024368C (PspExpandLimit.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14053B960 (KeSynchronizeWithDynamicProcessors.c)
 *     IopQueryProcessorInitValues @ 0x1405C21E8 (IopQueryProcessorInitValues.c)
 */

__int64 __fastcall PspInitializeQuotaBlock(__int64 a1, int *a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  signed int v8; // esi
  __int64 *v9; // rdi
  int *v10; // r15
  __int64 i; // r14
  __int64 v12; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ecx
  __int64 *v19; // rax
  char v20[28]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-2Ch]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  memset(a3, 0, 0x240uLL);
  *((_DWORD *)a3 + 129) = 1;
  *((_DWORD *)a3 + 128) = 1;
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    if ( *(_QWORD *)a1 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    a1 = 0LL;
    a2 = &PspDefaultResourceLimits;
  }
  v8 = 0;
  v9 = a3 + 8;
  v10 = a2;
  for ( i = 0LL; ; ++i )
  {
    LOBYTE(v6) = PspResourceFlags[i * 8];
    if ( (v6 & 2) != 0 )
      goto LABEL_9;
    *v9 = a2 ? *v10 : *(_QWORD *)(a1 + PspQuotaLimitOffsets[i]);
    if ( (v6 & 1) == 0 )
      goto LABEL_9;
    v12 = *v9;
    if ( *v9 != -1 )
      break;
    *v9 = 0LL;
    PspInsertExpansionEntry((__int64)&PspQuotaExpansionDescriptors + 56 * v8, (__int64)(v9 - 8), -1LL, v7);
LABEL_9:
    ++v8;
    v9 += 16;
    ++v10;
    if ( v8 >= 4 )
      return 0LL;
  }
  if ( !v12 )
    goto LABEL_9;
  v22 = 0LL;
  if ( PspExpandLimit(v8, v6, v12, (__int64)&v22) )
  {
    if ( !v8 && IopIrpCreditsEnabled < 1 && !_InterlockedCompareExchange(&IopIrpCreditsEnabled, 1, 0) )
    {
      IopQueryProcessorInitValues(v20);
      KeSynchronizeWithDynamicProcessors(v15, v14, v16, v17);
      v6 = (unsigned int)KeNumberProcessors_0;
      v18 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v7 = v21;
        v19 = KiProcessorBlock;
        do
        {
          if ( *(_DWORD *)(*v19 + 11548) != 0x7FFFFFFF )
            break;
          ++v18;
          *(_DWORD *)(*v19++ + 11548) = v7;
        }
        while ( v18 < (unsigned int)v6 );
      }
      _InterlockedAdd(&IopIrpCreditsEnabled, 1u);
    }
    goto LABEL_9;
  }
  return 3221225626LL;
}
