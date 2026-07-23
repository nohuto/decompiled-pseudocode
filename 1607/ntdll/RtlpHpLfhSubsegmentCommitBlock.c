/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x18003F7C0
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x180041C38 (RtlpHpLfhSubsegmentAllocateBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18003F8BC (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C390 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r14
  int v9; // edi
  unsigned __int64 v11; // rdx
  _WORD *v12; // r9
  unsigned __int64 v13; // rax
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  v6 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12));
  v7 = RtlpHpLfhSubsegmentIncBlockCounts(a2, a3, v6, &v14);
  v8 = v7;
  if ( v7 == -1 )
  {
    return 0;
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           a2 + (v7 << *(_BYTE *)(a2 + 44)),
           v14 << *(_BYTE *)(a2 + 44));
    if ( v9 < 0 )
    {
      RtlpHpLfhSubsegmentDecBlockCounts(a2, a3, (unsigned int)v6);
    }
    else
    {
      v11 = 0LL;
      v12 = (_WORD *)(a2 + *(unsigned __int16 *)(a2 + 46) + 2 * v8);
      v13 = (2 * (unsigned __int64)v14 + 1) >> 1;
      if ( v12 > &v12[v14] )
        v13 = 0LL;
      if ( v13 )
      {
        do
        {
          if ( !*v12 )
            *v12 = 1;
          ++v12;
          ++v11;
        }
        while ( v11 < v13 );
      }
      v9 = 0;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
  }
  return (unsigned int)v9;
}
