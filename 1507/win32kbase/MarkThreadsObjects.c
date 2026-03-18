/*
 * XREFs of MarkThreadsObjects @ 0x1C004FE30
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThread @ 0x1C00142F0 (HMChangeOwnerThread.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // rdi

  v1 = qword_1C01003E8;
  result = (unsigned int)giheLast;
  v4 = qword_1C01003E8 + 24LL * (unsigned int)giheLast;
  if ( qword_1C01003E8 <= v4 )
  {
    do
    {
      result = *(unsigned __int8 *)(v1 + 16);
      if ( (_BYTE)result )
      {
        result = *((unsigned __int8 *)&unk_1C00E9F6C + 16 * (unsigned __int8)result);
        if ( (result & 2) == 0 && *(_QWORD *)(v1 + 8) == a1 )
          result = HMChangeOwnerThread(*(_QWORD *)v1, gptiRit);
      }
      v1 += 24LL;
    }
    while ( v1 <= v4 );
  }
  return result;
}
