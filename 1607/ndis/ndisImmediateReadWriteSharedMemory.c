/*
 * XREFs of ndisImmediateReadWriteSharedMemory @ 0x1C00CDA58
 * Callers:
 *     NdisImmediateReadSharedMemory @ 0x1C00CD480 (NdisImmediateReadSharedMemory.c)
 *     NdisImmediateWriteSharedMemory @ 0x1C00CD530 (NdisImmediateWriteSharedMemory.c)
 * Callees:
 *     ndisTranslateResources @ 0x1C00B2498 (ndisTranslateResources.c)
 *     ndisEndMapping @ 0x1C00CD8EC (ndisEndMapping.c)
 *     ndisStartMapping @ 0x1C00CDB2C (ndisStartMapping.c)
 */

__int64 __fastcall ndisImmediateReadWriteSharedMemory(__int64 a1, unsigned int a2, void *a3, unsigned int a4, char a5)
{
  __int64 v5; // rcx
  int v9; // r14d
  int v10; // r15d
  __int64 result; // rax
  int v12; // ecx
  void *v13; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  void *v17; // [rsp+80h] [rbp+30h] BYREF
  char v18; // [rsp+88h] [rbp+38h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v15 = 0LL;
  v9 = *(_DWORD *)(v5 + 3768);
  v10 = *(_DWORD *)(v5 + 3772);
  result = ndisTranslateResources(v5, 3, a2, &v16, &v15);
  if ( !(_DWORD)result )
  {
    v12 = -1;
    LODWORD(v17) = v16;
    if ( !v15 )
      v12 = v9;
    result = ndisStartMapping(v12, v10, a2, a4, 0, (__int64)&v17, (__int64)&v18);
    if ( (int)result >= 0 )
    {
      if ( a5 )
      {
        v13 = v17;
        qmemcpy(a3, v17, a4);
      }
      else
      {
        qmemcpy(v17, a3, a4);
        _InterlockedOr(v14, 0);
        v13 = v17;
      }
      return ndisEndMapping(v13, a4, v18);
    }
  }
  return result;
}
