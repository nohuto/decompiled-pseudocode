/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x1404E18C0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDmGetObjectList @ 0x1404C5A54 (PiDmGetObjectList.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404E1C44 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1404E1DD4 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1404E2934 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404E2C6C (PiDmObjectUpdateCachedObjectProperty.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // r14
  int AggregatedBooleanPropertyData; // eax
  int v12; // r8d
  unsigned int v14; // eax
  PVOID PoolWithTag; // r12
  int ObjectProperty; // ebx
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  _WORD *v19; // r9
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-70h]
  size_t Size; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h] BYREF
  __int64 v23; // [rsp+70h] [rbp-38h]
  int v24; // [rsp+C8h] [rbp+20h] BYREF

  v9 = -1073741822;
  if ( a4 == 8 )
  {
    if ( a5 == 1 )
    {
      v10 = a6;
      AggregatedBooleanPropertyData = PiDmObjectGetAggregatedBooleanPropertyData(
                                        a3,
                                        a2,
                                        a3,
                                        *(_QWORD *)(a6 + 24),
                                        *(_QWORD *)(a6 + 32),
                                        *(_QWORD *)(a6 + 40),
                                        *(_QWORD *)(a6 + 48),
                                        *(_DWORD *)(a6 + 56),
                                        *(_QWORD *)(a6 + 64));
      if ( AggregatedBooleanPropertyData != -1073741802 )
        goto LABEL_31;
      v9 = 0;
      if ( (*(_DWORD *)(v10 + 72) & 0x10000) == 0 )
      {
        AggregatedBooleanPropertyData = PiDmObjectGetCachedObjectProperty(
                                          a3,
                                          a2,
                                          v12,
                                          *(_QWORD *)(v10 + 24),
                                          *(_QWORD *)(v10 + 32),
                                          *(_QWORD *)(v10 + 40),
                                          *(_QWORD *)(v10 + 48),
                                          *(_DWORD *)(v10 + 56),
                                          *(_QWORD *)(v10 + 64));
        if ( AggregatedBooleanPropertyData < 0
          && AggregatedBooleanPropertyData != -1073741275
          && AggregatedBooleanPropertyData != -1073741789 )
        {
          if ( AggregatedBooleanPropertyData == -1073741772 )
          {
            *(_DWORD *)v10 = -1073741772;
            return (unsigned int)-1073741536;
          }
          goto LABEL_9;
        }
LABEL_31:
        *(_DWORD *)v10 = AggregatedBooleanPropertyData;
        return (unsigned int)-1073741536;
      }
LABEL_9:
      if ( !*(_QWORD *)(v10 + 16) )
        PiPnpRtlCacheObjectBaseKey(a1, a2, (unsigned int)a3);
      return v9;
    }
    if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
      return v9;
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
      {
        LODWORD(NumberOfBytes) = 0;
        PiDmObjectUpdateCachedObjectProperty(
          a3,
          a2,
          a3,
          *(_QWORD *)(a6 + 24),
          *(_QWORD *)(a6 + 32),
          0,
          0LL,
          NumberOfBytes);
      }
    }
    else
    {
      LODWORD(NumberOfBytes) = **(_DWORD **)(a6 + 64);
      PiDmObjectUpdateCachedObjectProperty(
        a3,
        a2,
        a3,
        *(_QWORD *)(a6 + 24),
        *(_QWORD *)(a6 + 32),
        **(_DWORD **)(a6 + 40),
        *(void **)(a6 + 48),
        NumberOfBytes);
    }
    return 0;
  }
  if ( a4 == 5 )
  {
    if ( a5 != 1 )
      return v9;
    v10 = a6;
    if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    v17 = *(_DWORD **)(a6 + 48);
    v18 = *(_DWORD *)(a6 + 40);
    v19 = *(_WORD **)(a6 + 32);
    v22 = 0LL;
    v23 = 0LL;
    if ( a3 < 6 )
    {
      v22 = *(_QWORD *)(a6 + 16);
      v23 = *(_QWORD *)(a6 + 24);
      AggregatedBooleanPropertyData = PiDmGetObjectList(
                                        (unsigned int)a3,
                                        (__int64)PiDmPnpObjectMatchCallback,
                                        (__int64)&v22,
                                        v19,
                                        v18,
                                        v17);
      if ( AggregatedBooleanPropertyData != -1073741802 )
        goto LABEL_31;
    }
    return 0;
  }
  if ( a4 != 9 )
    return v9;
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
      return v9;
    LODWORD(NumberOfBytes) = *(_DWORD *)(a6 + 56);
    PiDmObjectUpdateCachedObjectProperty(
      a3,
      a2,
      a3,
      *(_QWORD *)(a6 + 24),
      *(_QWORD *)(a6 + 32),
      *(_DWORD *)(a6 + 40),
      *(void **)(a6 + 48),
      NumberOfBytes);
    return 0;
  }
  v10 = a6;
  v9 = 0;
  if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
    goto LABEL_9;
  v14 = *(_DWORD *)(a6 + 56);
  PoolWithTag = 0LL;
  if ( !v14 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x47706E50u)) != 0LL )
  {
    if ( (ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             a2,
                             a3,
                             *(_QWORD *)(v10 + 16),
                             *(_QWORD *)(v10 + 24),
                             *(_QWORD *)(v10 + 32),
                             (__int64)&v24,
                             (__int64)PoolWithTag,
                             *(_DWORD *)(v10 + 56),
                             (__int64)&Size,
                             0),
          ObjectProperty >= 0)
      && v24 == *(_DWORD *)(v10 + 40)
      && (_DWORD)Size == *(_DWORD *)(v10 + 56)
      && !memcmp(PoolWithTag, *(const void **)(v10 + 48), (unsigned int)Size)
      || ObjectProperty == -1073741275 && !*(_DWORD *)(v10 + 40) && !*(_DWORD *)(v10 + 56) )
    {
      *(_DWORD *)v10 = ObjectProperty;
      v9 = -1073741536;
    }
    else
    {
      v9 = 0;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
    if ( !v9 )
      goto LABEL_9;
  }
  return v9;
}
