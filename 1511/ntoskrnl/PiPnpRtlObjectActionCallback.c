/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x14043CD30
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14043D0A0 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14043D254 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043DD68 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14043DF10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmGetObjectList @ 0x140496EF0 (PiDmGetObjectList.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(__int64 a1, __int64 a2, signed int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rdi
  int AggregatedBooleanPropertyData; // eax
  int v12; // r8d
  unsigned int v14; // eax
  PVOID PoolWithTag; // r12
  int ObjectProperty; // ebx
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // r9
  size_t Size; // [rsp+60h] [rbp-48h] BYREF
  __int64 v21; // [rsp+68h] [rbp-40h] BYREF
  __int64 v22; // [rsp+70h] [rbp-38h]
  int v23; // [rsp+C8h] [rbp+20h] BYREF

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
        goto LABEL_16;
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
LABEL_16:
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
        PiDmObjectUpdateCachedObjectProperty(a3, a2, a3, *(_QWORD *)(a6 + 24), *(_QWORD *)(a6 + 32), 0, 0LL, 0);
    }
    else
    {
      PiDmObjectUpdateCachedObjectProperty(
        a3,
        a2,
        a3,
        *(_QWORD *)(a6 + 24),
        *(_QWORD *)(a6 + 32),
        **(_DWORD **)(a6 + 40),
        *(_QWORD *)(a6 + 48),
        **(_DWORD **)(a6 + 64));
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
    v17 = *(_QWORD *)(a6 + 48);
    v18 = *(_DWORD *)(a6 + 40);
    v19 = *(_QWORD *)(a6 + 32);
    v21 = 0LL;
    v22 = 0LL;
    if ( a3 < 6 )
    {
      v21 = *(_QWORD *)(a6 + 16);
      v22 = *(_QWORD *)(a6 + 24);
      AggregatedBooleanPropertyData = PiDmGetObjectList(
                                        a3,
                                        (unsigned int)PiDmPnpObjectMatchCallback,
                                        (unsigned int)&v21,
                                        v19,
                                        v18,
                                        v17);
      if ( AggregatedBooleanPropertyData != -1073741802 )
        goto LABEL_16;
    }
    return 0;
  }
  if ( a4 != 9 )
    return v9;
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
      return v9;
    PiDmObjectUpdateCachedObjectProperty(
      a3,
      a2,
      a3,
      *(_QWORD *)(a6 + 24),
      *(_QWORD *)(a6 + 32),
      *(_DWORD *)(a6 + 40),
      *(_QWORD *)(a6 + 48),
      *(_DWORD *)(a6 + 56));
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
                             (__int64)&v23,
                             (__int64)PoolWithTag,
                             *(_DWORD *)(v10 + 56),
                             (__int64)&Size,
                             0),
          ObjectProperty >= 0)
      && v23 == *(_DWORD *)(v10 + 40)
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
