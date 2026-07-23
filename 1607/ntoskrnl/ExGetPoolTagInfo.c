/*
 * XREFs of ExGetPoolTagInfo @ 0x1404AF594
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExGetPoolTagInfo(_DWORD *a1, unsigned int a2, int *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  SIZE_T v8; // rdx
  char *PoolWithTag; // rax
  void *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v15; // [rsp+20h] [rbp-68h]
  unsigned int v16; // [rsp+24h] [rbp-64h]
  unsigned __int64 i; // [rsp+28h] [rbp-60h]
  _DWORD *v18; // [rsp+30h] [rbp-58h]
  _QWORD v19[10]; // [rsp+38h] [rbp-50h] BYREF

  v16 = 0;
  v18 = a1 + 2;
  v15 = 8;
  *a1 = 0;
  v6 = PoolTrackTableSize;
  v7 = PoolTrackTableExpansionSize;
  v8 = 40 * PoolTrackTableSize + 40 * PoolTrackTableExpansionSize;
  if ( v8 < 40 * PoolTrackTableSize )
    return 3221225626LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x6F666E49u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v19[0] = PoolWithTag;
  v19[1] = PoolTrackTableSize;
  v19[2] = &PoolWithTag[40 * PoolTrackTableSize];
  v19[3] = v7;
  KeGenericCallDpc((__int64)ExpGetPoolTagInfoTarget, (__int64)v19);
  for ( i = (unsigned __int64)v10; i < (unsigned __int64)v10 + 40 * v7 + 40 * v6; i += 40LL )
  {
    if ( *(_DWORD *)i )
    {
      ++*a1;
      v11 = v15 + 40;
      v15 = v11;
      if ( v11 < 0x28 )
      {
        v16 = -1073741675;
        break;
      }
      if ( a2 < v11 )
      {
        v16 = -1073741820;
      }
      else
      {
        v12 = *(_DWORD *)(i + 28);
        if ( *(_DWORD *)(i + 24) < v12 )
          *(_DWORD *)(i + 24) = v12;
        v13 = *(_DWORD *)(i + 8);
        if ( *(_DWORD *)(i + 4) < v13 )
          *(_DWORD *)(i + 4) = v13;
        *v18 = *(_DWORD *)i;
        v18[1] = *(_DWORD *)(i + 24);
        v18[2] = *(_DWORD *)(i + 28);
        *((_QWORD *)v18 + 2) = *(_QWORD *)(i + 32);
        v18[6] = *(_DWORD *)(i + 4);
        v18[7] = *(_DWORD *)(i + 8);
        *((_QWORD *)v18 + 4) = *(_QWORD *)(i + 16);
        v18 += 10;
      }
    }
  }
  ExFreePoolWithTag(v10, 0);
  if ( a3 )
    *a3 = v15;
  return v16;
}
