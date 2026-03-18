/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x14055146C
 * Callers:
 *     EtwpUpdateDisallowList @ 0x1405513E4 (EtwpUpdateDisallowList.c)
 * Callees:
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpDisallowedGuidAddition @ 0x140551628 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14058D7E4 (EtwpDisallowedGuidRemoval.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        unsigned __int16 *a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char *v10; // r14
  unsigned int v11; // edi
  SIZE_T v12; // rbx
  char *PoolWithTag; // rax
  char *v14; // rsi
  int v15; // r8d
  __int64 v16; // rcx
  char *v17; // rbx
  char *v18; // rbp
  char *v19; // rdi
  int v20; // eax
  void *v21; // rcx

  if ( a2 > 0x200u )
    return 3221225485LL;
  v10 = 0LL;
  if ( a2 )
  {
    v11 = a2;
    v12 = 16LL * a2;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x64777445u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, a3, v12);
    qsort(v14, v11, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    v15 = 0;
    if ( a2 != 1 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)&v14[16 * v15] - *(_QWORD *)&v14[16 * v15 + 16];
        if ( !v16 )
          v16 = *(_QWORD *)&v14[16 * v15 + 8] - *(_QWORD *)&v14[16 * v15 + 24];
        if ( !v16 )
          break;
        if ( ++v15 >= (unsigned int)a2 - 1 )
          goto LABEL_9;
      }
      ExFreePoolWithTag(v14, 0);
      return 3221225485LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
LABEL_9:
  if ( *a1 )
  {
    v17 = (char *)*((_QWORD *)a1 + 1);
    v18 = &v17[16 * *a1];
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  if ( a2 )
  {
    v19 = v14;
    v10 = &v14[16 * a2];
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17 < v18 )
  {
    while ( 1 )
    {
      if ( v19 >= v10 )
      {
LABEL_19:
        while ( v17 < v18 )
        {
          EtwpDisallowedGuidRemoval(v17, a7);
          v17 += 16;
        }
        break;
      }
      v20 = memcmp(v17, v19, 0x10uLL);
      if ( v20 )
      {
        if ( v20 < 0 )
        {
          EtwpDisallowedGuidRemoval(v17, a7);
          v17 += 16;
          goto LABEL_18;
        }
        EtwpDisallowedGuidAddition(v19, a7);
      }
      else
      {
        v17 += 16;
      }
      v19 += 16;
LABEL_18:
      if ( v17 >= v18 )
        goto LABEL_19;
    }
  }
  while ( v19 < v10 )
  {
    EtwpDisallowedGuidAddition(v19, a7);
    v19 += 16;
  }
  v21 = (void *)*((_QWORD *)a1 + 1);
  *a1 = a2;
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  *((_QWORD *)a1 + 1) = v14;
  return 0LL;
}
