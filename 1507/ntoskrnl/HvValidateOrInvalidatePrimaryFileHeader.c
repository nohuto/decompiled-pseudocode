/*
 * XREFs of HvValidateOrInvalidatePrimaryFileHeader @ 0x1404AFEC4
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1404AFFCC (HvpHeaderCheckSum.c)
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvValidateOrInvalidatePrimaryFileHeader(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // bp
  char v5; // si
  BOOL v7; // r14d
  _DWORD *v8; // rdi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  _DWORD *PoolWithTag; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  int v17; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+70h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  if ( *(_QWORD *)(a1 + 2664) )
  {
    v7 = (a4 & 1) != 0;
    if ( (_BYTE)a3 )
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
      a2 = 4LL;
      v15 = v8;
      a3 = 128LL;
      do
      {
        *v15 = *v14;
        v15[1] = v14[1];
        v15[2] = v14[2];
        v15[3] = v14[3];
        v15[4] = v14[4];
        v15[5] = v14[5];
        v15[6] = v14[6];
        v15 += 8;
        v16 = v14[7];
        v14 += 8;
        *(v15 - 1) = v16;
        --a2;
      }
      while ( a2 );
    }
    v9 = *(_DWORD *)(a1 + 152);
    if ( v5 )
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
    v8[127] = HvpHeaderCheckSum(v8, a2, a3);
    v20 = 0;
    v17 = 0;
    v18 = v8;
    v19 = 4096;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, __int64, int *, BOOL))(a1 + 40))(
           a1,
           0LL,
           &v17,
           1LL,
           &v20,
           v7)
      && (unsigned __int8)CmpFileFlushAndPurge(a1, 0LL) )
    {
      *(_BYTE *)(a1 + 174) = v5;
      *(_DWORD *)(a1 + 164) = v8[2];
      v11 = 0;
    }
    else
    {
      v11 = -1073741491;
    }
    if ( !v4 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return 0;
  }
  return v11;
}
