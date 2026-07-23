/*
 * XREFs of PopCheckForIdleness @ 0x1400086B0
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceIdleCheck @ 0x1400085E0 (PopDiagTraceIdleCheck.c)
 *     PopGetPolicyWorker @ 0x140008680 (PopGetPolicyWorker.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 */

__int64 PopCheckForIdleness()
{
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // cl
  int v2; // edx
  __int64 v3; // rbx
  unsigned int v4; // r14d
  int v5; // edi
  int v6; // r15d
  signed int v7; // esi
  __int64 v8; // rcx
  signed int v9; // eax
  int v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  int *v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int16 v15; // [rsp+40h] [rbp-10h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = qword_1403032F8;
  v3 = MEMORY[0xFFFFF78000000320];
  v12 = MEMORY[0xFFFFF78000000320];
  __writecr8(CurrentIrql);
  if ( dword_1403032CC )
  {
    if ( byte_1403032F5 )
    {
      v4 = v3 - v2;
      if ( (int)v3 - v2 <= 0 )
      {
        byte_1403032F5 = 0;
        goto LABEL_19;
      }
      v5 = 100;
      v15 = 0;
      v14 = qword_1403AA618;
      v6 = 0;
      v7 = 100;
      v13 = &KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v13) )
      {
        v9 = 100
           * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v11] + 24028))
           / v4;
        if ( v9 < v7 )
          v7 = 100
             * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v11] + 24028))
             / v4;
        v6 += v9;
      }
      if ( v7 > 100 )
      {
        v7 = 100;
      }
      else if ( v7 < 0 )
      {
        v7 = 0;
      }
      if ( v6 / ActiveProcessorCount <= 100 )
      {
        v5 = v6 / ActiveProcessorCount;
        if ( v6 / ActiveProcessorCount < 0 )
          v5 = 0;
      }
      dword_1403032C8 += PopIdleScanInterval;
      dword_1403032C4 = v7;
      PopSIdle = v5;
      PopDiagTraceIdleCheck(v8, v7, v5);
      v3 = v12;
    }
    v14 = qword_1403AA618;
    qword_1403032F8 = v3;
    byte_1403032F5 = 1;
    v15 = 0;
    v13 = &KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v13) )
      *(_DWORD *)(KiProcessorBlock[v11] + 24028) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v11] + 24) + 652LL);
  }
LABEL_19:
  PopGetPolicyWorker(8);
  return PopCheckForWork();
}
