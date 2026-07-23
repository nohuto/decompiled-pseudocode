/*
 * XREFs of RtlpHpTagContextGetTag @ 0x1800EE940
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x18004FC48 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTagContextAllocateTag @ 0x180059F30 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagContextFindMapping @ 0x18005A2B0 (RtlpHpTagContextFindMapping.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTagContextGetTag(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int16 v4; // bx
  __int128 *v5; // r8
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 Mapping; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  *((_QWORD *)&v12 + 1) = 0LL;
  *(_QWORD *)&v12 = NtCurrentTeb()->SubProcessTag;
  v3 = v12 - RtlpHpNullGUID;
  if ( (_QWORD)v12 == RtlpHpNullGUID )
    v3 = *((_QWORD *)&v12 + 1) - qword_180146270;
  if ( v3 )
  {
    v5 = &v12;
    v6 = 314159LL;
    v7 = 2LL;
    do
    {
      v8 = *(unsigned __int8 *)v5;
      v5 = (__int128 *)((char *)v5 + 8);
      v6 = *((unsigned __int8 *)v5 - 1)
         + 37
         * (*((unsigned __int8 *)v5 - 2)
          + 37
          * (*((unsigned __int8 *)v5 - 3)
           + 37
           * (*((unsigned __int8 *)v5 - 4)
            + 37
            * (*((unsigned __int8 *)v5 - 5)
             + 37 * (*((unsigned __int8 *)v5 - 6) + 37 * (*((unsigned __int8 *)v5 - 7) + 37 * (v8 + 37 * v6)))))));
      --v7;
    }
    while ( v7 );
    if ( !a2 )
      v2 = 16LL;
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, &v12, v6);
    if ( Mapping )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), v2);
      v4 = *(_WORD *)(Mapping + 40);
    }
    else
    {
      v4 = 0;
    }
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
    if ( !v4 )
      return (unsigned __int16)RtlpHpTagContextAllocateTag(v10, &v12, v6, v2);
  }
  else
  {
    return 0;
  }
  return v4;
}
