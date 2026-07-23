/*
 * XREFs of HvValidateOrInvalidatePrimaryFileHeader @ 0x140482DBC
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvValidateOrInvalidatePrimaryFileHeader(__int64 a1, char a2, char a3, char a4)
{
  BOOL v7; // r14d
  _DWORD *v8; // rdi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  _DWORD *PoolWithTag; // rax
  _OWORD *v14; // rax
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  __int128 v17; // xmm1
  int v18; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+40h] [rbp-28h]
  int v21; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 2664) )
  {
    v7 = (a4 & 1) != 0;
    if ( a3 )
    {
      v8 = *(_DWORD **)(a1 + 2944);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F494D43u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, 0x1000uLL);
      v14 = *(_OWORD **)(a1 + 64);
      v15 = 4LL;
      v16 = v8;
      do
      {
        *v16 = *v14;
        v16[1] = v14[1];
        v16[2] = v14[2];
        v16[3] = v14[3];
        v16[4] = v14[4];
        v16[5] = v14[5];
        v16[6] = v14[6];
        v16 += 8;
        v17 = v14[7];
        v14 += 8;
        *(v16 - 1) = v17;
        --v15;
      }
      while ( v15 );
    }
    v9 = *(_DWORD *)(a1 + 152);
    if ( a2 )
    {
      v8[2] = v9;
    }
    else
    {
      v10 = v9 - 1;
      v8[2] = v10;
      v9 = v10 + 1;
    }
    v8[1] = v9;
    v8[127] = HvpHeaderCheckSum(v8);
    v21 = 0;
    v18 = 0;
    v19 = v8;
    v20 = 4096;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, __int64, int *, BOOL))(a1 + 40))(
           a1,
           0LL,
           &v18,
           1LL,
           &v21,
           v7)
      && (unsigned __int8)CmpFileFlushAndPurge(a1, 0LL) )
    {
      *(_BYTE *)(a1 + 174) = a2;
      *(_DWORD *)(a1 + 164) = v8[2];
      v11 = 0;
    }
    else
    {
      v11 = -1073741491;
    }
    if ( !a3 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return 0;
  }
  return v11;
}
