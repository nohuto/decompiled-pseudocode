/*
 * XREFs of IovpSessionDataCreate @ 0x140717840
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x14070E188 (IovUtilIsVerifiedDeviceStack.c)
 */

char *__fastcall IovpSessionDataCreate(__int64 a1, __int64 *a2, int a3)
{
  char *result; // rax
  __int64 v5; // r14
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // ebp
  char *PoolWithTag; // rax
  char *v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx

  if ( !a3 && !(unsigned int)IovUtilIsVerifiedDeviceStack(a1) )
    return 0LL;
  v5 = *a2;
  v6 = *(char *)(*a2 + 66);
  v7 = 120 * v6 + 200;
  if ( (char)v6 <= 20 && ViSessionDataInitialized )
  {
    v8 = 1;
    PoolWithTag = (char *)ExAllocateFromNPagedLookasideList(&ViSessionDataLookaside);
  }
  else
  {
    v8 = 0;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x73707249u);
  }
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v7);
  if ( v8 )
    *((_DWORD *)v10 + 8) |= 4u;
  v11 = v10 + 16;
  *((_DWORD *)v10 + 18) = MmVerifierData;
  v12 = a2 + 8;
  *(_QWORD *)v10 = a2;
  v13 = a2[8];
  if ( *(__int64 **)(v13 + 8) != a2 + 8 )
    __fastfail(3u);
  *((_QWORD *)v10 + 3) = v12;
  *v11 = v13;
  *(_QWORD *)(v13 + 8) = v11;
  *v12 = v11;
  a2[30] = (__int64)v10;
  *((_BYTE *)a2 + 184) = *(_BYTE *)(v5 + 67);
  *((_DWORD *)a2 + 14) = a2[7] & 0xFFFFFE2E | 1;
  result = v10;
  *((_QWORD *)v10 + 8) = v5;
  return result;
}
