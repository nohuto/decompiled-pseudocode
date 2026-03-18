/*
 * XREFs of ?HMGrowHandleTable@@YAHXZ @ 0x1C0053DE0
 * Callers:
 *     HMCreateHandleForObject @ 0x1C000E8E0 (HMCreateHandleForObject.c)
 *     HMAllocObject @ 0x1C0038CC0 (HMAllocObject.c)
 *     HMInitHandleTable @ 0x1C0155508 (HMInitHandleTable.c)
 * Callees:
 *     CommitReadOnlyMemory @ 0x1C0053F40 (CommitReadOnlyMemory.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 HMGrowHandleTable(void)
{
  unsigned __int64 v0; // rax
  _QWORD *v1; // rax
  __int64 v2; // rbx
  _QWORD *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)gpsi + 1) == 65534LL )
    return 0LL;
  v0 = qword_1C011A128 + *((unsigned int *)gpsi + 212);
  if ( v0 >= (unsigned __int64)gpvSharedAlloc )
    return 0LL;
  v7 = 4096LL;
  if ( (int)CommitReadOnlyMemory(ghSectionShared, &v7, (unsigned int)(v0 - (_DWORD)gpvSharedBase), 0LL) < 0 )
    return 0LL;
  *((_DWORD *)gpsi + 212) += 4096;
  *((_QWORD *)gpsi + 1) = *((unsigned int *)gpsi + 212) / 0x18uLL;
  v1 = gpsi;
  if ( *((_QWORD *)gpsi + 1) > 0xFFFEuLL )
  {
    *((_QWORD *)gpsi + 1) = 65534LL;
    v1 = gpsi;
  }
  v2 = gHandlePages;
  memset((void *)(qword_1C011A128 + 24LL * gHandlePages), 0, 24LL * (v1[1] - gHandlePages));
  v3 = gpsi;
  v4 = *((_QWORD *)gpsi + 1) - 1LL;
  v5 = qword_1C011A128 + 24 * v4;
  if ( v4 >= v2 )
  {
    do
    {
      *(_WORD *)(v5 + 18) = 1;
      if ( (v4 & 1) != 0 )
      {
        *(_QWORD *)v5 = qword_1C011A940;
        qword_1C011A940 = v4;
      }
      else
      {
        *(_QWORD *)v5 = qword_1C011A938;
        qword_1C011A938 = v4;
      }
      --v4;
      v5 -= 24LL;
    }
    while ( v4 >= v2 );
    v3 = gpsi;
  }
  result = 1LL;
  gHandlePages = v3[1];
  return result;
}
