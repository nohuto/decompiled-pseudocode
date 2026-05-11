/*
 * XREFs of TopologyProcessMixerUnit @ 0x1C0016330
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008000 (memset.c)
 *     PropertyInitializeMixerControlRange @ 0x1C00196E0 (PropertyInitializeMixerControlRange.c)
 */

__int64 __fastcall TopologyProcessMixerUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rsi
  __int64 v8; // rbp
  unsigned int v9; // r8d
  _DWORD *v10; // r14
  int v11; // ecx
  int v12; // r10d
  __int64 v13; // r9
  int *v14; // rdx
  int v15; // eax
  SIZE_T v16; // rbx
  char *v17; // r15
  NTSTATUS v18; // ebx
  char *v19; // r13
  unsigned int v20; // r12d
  int v21; // r8d
  __int64 v22; // r9
  char *v23; // rdx
  char *v24; // rsi
  unsigned int v25; // r15d
  int v26; // r14d
  unsigned int v27; // r12d
  unsigned int v28; // r13d
  NTSTATUS v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  unsigned int v34; // eax
  int v36; // [rsp+20h] [rbp-88h]
  char *v37; // [rsp+28h] [rbp-80h]
  char *PoolWithTag; // [rsp+30h] [rbp-78h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 v40; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  __int64 v42; // [rsp+50h] [rbp-58h]
  _DWORD *v43; // [rsp+58h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp+10h]
  unsigned int v46; // [rsp+C0h] [rbp+18h]
  int i; // [rsp+C8h] [rbp+20h]

  v6 = a5;
  v46 = 0;
  v45 = 7;
  v8 = a3 + 152LL * *a5;
  v9 = *(_DWORD *)(a2 + 32);
  v41 = v8;
  v10 = (_DWORD *)(a4 + 16LL * (unsigned int)*a6);
  v42 = *(_QWORD *)(a2 + 72);
  if ( !v9 )
    return (unsigned int)-1073741438;
  v11 = 0;
  v12 = *(_DWORD *)(a2 + 24);
  v13 = v9;
  v14 = (int *)(*(_QWORD *)(a2 + 56) + 4LL);
  do
  {
    v15 = *v14;
    v14 += 3;
    v11 += v12 * v15;
    --v13;
  }
  while ( v13 );
  if ( v11 )
  {
    v16 = 32 * v11 + 24 * v9;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x41627845u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      v19 = &PoolWithTag[24 * *(unsigned int *)(a2 + 32)];
      v37 = v19;
      memset(PoolWithTag, 0, v16);
      *(_DWORD *)(v8 + 88) = *(_DWORD *)(a2 + 28);
      v18 = 0;
      v20 = 0;
      v36 = 0;
      v21 = 0;
      for ( i = 0; v20 < *(_DWORD *)(a2 + 32); v36 = ++v20 )
      {
        if ( v18 < 0 )
          break;
        v22 = 3LL * v20;
        *v10 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20);
        v10[1] = 0;
        v10[2] = *v6;
        v10[3] = 1;
        v10 += 4;
        ++*v6;
        ++*a6;
        v40 = v22;
        v39 = v8 + 152LL * v20;
        v43 = v10;
        *(_DWORD *)(v39 + 76) = 4;
        *(_DWORD *)(v39 + 80) = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(v39 + 8) = &KSNODETYPE_SUPERMIX;
        *(_QWORD *)(v39 + 16) = &KSNODETYPE_SUPERMIX;
        *(_QWORD *)(v39 + 136) = USBCntrlGetSetMixerLevels;
        v23 = &v17[24 * v20];
        *(_QWORD *)(v39 + 128) = v23;
        *(_DWORD *)v23 = v20;
        *((_DWORD *)v23 + 1) = v21;
        *((_DWORD *)v23 + 2) = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20 + 4);
        *((_DWORD *)v23 + 3) = *(_DWORD *)(a2 + 24);
        *((_QWORD *)v23 + 2) = v19;
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20 + 4) )
        {
          v24 = v37;
          v25 = 0;
          v26 = v45;
          v27 = v46;
          do
          {
            if ( v18 < 0 )
              break;
            v28 = 0;
            if ( *(_DWORD *)(a2 + 24) )
            {
              do
              {
                if ( v18 < 0 )
                  break;
                *((_DWORD *)v24 + 1) = v25 + 1;
                *((_DWORD *)v24 + 2) = ++v28;
                v24[1] = (*(_BYTE *)(v27 + v42) & (unsigned __int8)(1 << v26)) != 0;
                v29 = PropertyInitializeMixerControlRange(a1, v39, v24);
                v30 = v26--;
                v18 = v29;
                if ( !v30 )
                {
                  ++v27;
                  v26 = 7;
                }
                v24 += 32;
              }
              while ( v28 < *(_DWORD *)(a2 + 24) );
              v21 = i;
              v22 = v40;
              v46 = v27;
              v45 = v26;
              v37 = v24;
            }
            ++v21;
            ++v25;
            i = v21;
          }
          while ( v25 < *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4 * v22 + 4) );
          v6 = a5;
          v8 = v41;
          v10 = v43;
          v17 = PoolWithTag;
          v20 = v36;
          v19 = v37;
        }
      }
      v31 = 0;
      v32 = 152LL * v20;
      *(_DWORD *)(v32 + v8 + 76) = 6;
      *(_DWORD *)(v32 + v8 + 80) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v32 + v8 + 8) = &KSNODETYPE_SUM;
      if ( *(_DWORD *)(a2 + 32) )
      {
        v33 = v10 + 2;
        do
        {
          v34 = *v6 - v31;
          *(v33 - 1) = 0;
          *(v33 - 2) = (v34 - 1) | 0x80000000;
          ++v31;
          *v33 = *v6;
          v33[1] = v31;
          v33 += 4;
          ++*a6;
        }
        while ( v31 < *(_DWORD *)(a2 + 32) );
        v17 = PoolWithTag;
      }
      ++*v6;
      if ( v18 < 0 || (v18 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v17, ExFreePool), v18 < 0) )
        ExFreePool(v17);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v18;
}
