/*
 * XREFs of RtlEnterUmsSchedulingMode @ 0x1800EC830
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentUmsThread @ 0x180061970 (RtlGetCurrentUmsThread.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 *     RtlpUmsPrimaryContextWrap @ 0x1800AAC70 (RtlpUmsPrimaryContextWrap.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800ECCB0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800ECD74 (RtlpDetachThreadFromUmsCompletionList.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x1800FCBA4 (RtlpSaveUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlEnterUmsSchedulingMode(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  int CurrentUmsThread; // ebx
  int v7; // eax
  struct _TEB **v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 != 256 )
    return 3221225485LL;
  if ( (int)RtlGetCurrentUmsThread(&v8) >= 0 )
    return 3221225659LL;
  result = RtlpAttachThreadToUmsCompletionList(v4, v1);
  if ( (int)result >= 0 )
  {
    CurrentUmsThread = RtlGetCurrentUmsThread(&v8);
    if ( CurrentUmsThread >= 0 )
    {
      CurrentUmsThread = RtlpSaveUmsDebugRegisterState(v8);
      if ( CurrentUmsThread >= 0 )
      {
        RtlpUmsPrimaryContextWrap(v2, v3);
        CurrentUmsThread = 0;
      }
    }
    v7 = RtlpDetachThreadFromUmsCompletionList();
    if ( v7 < 0 && CurrentUmsThread >= 0 )
      return (unsigned int)v7;
    return (unsigned int)CurrentUmsThread;
  }
  return result;
}
