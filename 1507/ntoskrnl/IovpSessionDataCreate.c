/*
 * XREFs of IovpSessionDataCreate @ 0x14074BA70
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140743968 (IovUtilIsVerifiedDeviceStack.c)
 */

_DWORD *__fastcall IovpSessionDataCreate(__int64 a1, __int64 *a2, int a3)
{
  _DWORD *result; // rax
  __int64 v5; // rbp
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  char *v11; // rcx
  __int64 v12; // rdx

  if ( !a3 && !(unsigned int)IovUtilIsVerifiedDeviceStack(a1) )
    return 0LL;
  v5 = *a2;
  v6 = *(char *)(*a2 + 66);
  v7 = 120 * v6 + 200;
  if ( (char)v6 <= 20 && ViSessionDataInitialized )
  {
    v8 = 1;
    PoolWithTag = ExAllocateFromNPagedLookasideList(&ViSessionDataLookaside);
  }
  else
  {
    v8 = 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x73707249u);
  }
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v7);
  if ( v8 )
    v10[8] |= 4u;
  v11 = (char *)(v10 + 4);
  v10[18] = MmVerifierData;
  *(_QWORD *)v10 = a2;
  v12 = a2[8];
  *((_QWORD *)v10 + 2) = v12;
  *((_QWORD *)v10 + 3) = a2 + 8;
  if ( *(__int64 **)(v12 + 8) != a2 + 8 )
    __fastfail(3u);
  *(_QWORD *)(v12 + 8) = v11;
  a2[8] = (__int64)v11;
  a2[30] = (__int64)v10;
  *((_BYTE *)a2 + 184) = *(_BYTE *)(v5 + 67);
  *((_DWORD *)a2 + 14) = a2[7] & 0xFFFFFE2E | 1;
  result = v10;
  *((_QWORD *)v10 + 8) = v5;
  return result;
}
