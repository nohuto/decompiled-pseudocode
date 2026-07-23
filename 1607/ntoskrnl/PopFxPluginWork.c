/*
 * XREFs of PopFxPluginWork @ 0x1400C11C0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopPepWork @ 0x1400BFC34 (PopPepWork.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxPluginWork(__int64 a1)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR v3; // rdi
  bool v4; // zf
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int8 (__fastcall *v7)(__int64, int **); // rax
  unsigned __int8 (__fastcall *v8)(__int64, int **); // rax
  int *v9; // [rsp+30h] [rbp-58h] BYREF
  char v10; // [rsp+38h] [rbp-50h]
  int v11[16]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  do
  {
    v3 = 0LL;
    if ( PopFxWatchdogWorkOrderTimeout )
    {
      v3 = *(_QWORD *)(a1 + 48);
      if ( v3 )
        KeSetCoalescableTimer(
          (PKTIMER)v3,
          (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxWatchdogWorkOrderTimeout),
          0,
          PopFxWatchdogWorkOrderTimeout / 0xAu,
          (PKDPC)(v3 + 64));
    }
    memset(v11, 0, sizeof(v11));
    v10 = 0;
    v9 = v11;
    if ( !v1 )
    {
      v4 = PopPepWork((__int64)v11) == 0;
      goto LABEL_7;
    }
    v7 = *(unsigned __int8 (__fastcall **)(__int64, int **))(v1 + 96);
    if ( v7 && v7(13LL, &v9) )
    {
      v4 = v10 == 0;
LABEL_7:
      if ( v4 )
        goto LABEL_9;
      goto LABEL_8;
    }
    v8 = *(unsigned __int8 (__fastcall **)(__int64, int **))(v1 + 112);
    if ( !v8 || !v8(10LL, &v9) )
      PopFxBugCheck(0x605uLL, 0xDuLL, v1, 0LL);
    if ( v10 )
    {
      if ( (unsigned int)(v11[0] - 7) > 1 )
        PopFxBugCheck(0x612uLL, v1, 0LL, 0LL);
LABEL_8:
      PopFxProcessWork(v1, v11, v5);
    }
LABEL_9:
    if ( v3 )
    {
      if ( !KeCancelTimer((PKTIMER)v3) )
        PopFxBugCheck(0x618uLL, v3, 0LL, 0LL);
    }
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
