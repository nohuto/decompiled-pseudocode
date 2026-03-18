/*
 * XREFs of PnpBuildUnsafeRemovalDeviceList @ 0x1404C5190
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopEnumerateRelations @ 0x1404C5848 (IopEnumerateRelations.c)
 *     PnpIsBeingRemovedSafely @ 0x1404C7AF4 (PnpIsBeingRemovedSafely.c)
 */

void __fastcall PnpBuildUnsafeRemovalDeviceList(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // r9
  SIZE_T v7; // r14
  _WORD *PoolWithTag; // rax
  _WORD *v9; // rbx
  __int64 v10; // rdi
  const void *v11; // rdx
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF

  v12 = a1;
  *a3 = 0LL;
  v4 = a2;
  if ( a2 )
  {
    v5 = 0;
    v13 = 0LL;
    while ( (unsigned __int8)IopEnumerateRelations(v4, (unsigned int)&v13, (unsigned int)&v14, (unsigned int)&v12, 0LL) )
    {
      if ( (_DWORD)v12 && !(unsigned __int8)PnpIsBeingRemovedSafely(*(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL)) )
      {
        if ( *(_QWORD *)(v6 + 48) )
          v5 += *(unsigned __int16 *)(v6 + 40) + 2;
      }
    }
    if ( v5 )
    {
      v7 = (unsigned int)(v5 + 2);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x4B706E50u);
      *a3 = PoolWithTag;
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, (unsigned int)v7);
        v13 = 2LL;
        while ( (unsigned __int8)IopEnumerateRelations(
                                   v4,
                                   (unsigned int)&v13,
                                   (unsigned int)&v14,
                                   (unsigned int)&v12,
                                   0LL) )
        {
          if ( (_DWORD)v12 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
            if ( !(unsigned __int8)PnpIsBeingRemovedSafely(v10) )
            {
              v11 = *(const void **)(v10 + 48);
              if ( v11 )
              {
                memmove(v9, v11, *(unsigned __int16 *)(v10 + 40));
                v9 += ((unsigned __int64)*(unsigned __int16 *)(v10 + 40) >> 1) + 1;
              }
            }
          }
        }
        *v9 = 0;
      }
    }
  }
}
