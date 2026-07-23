/*
 * XREFs of EtwpFlushActiveBuffers @ 0x18005BE98
 * Callers:
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     EtwpSendSessionNotification @ 0x180044FB8 (EtwpSendSessionNotification.c)
 *     RtlWakeAllConditionVariable @ 0x18005C070 (RtlWakeAllConditionVariable.c)
 *     EtwpFlushBuffer @ 0x18005C0F4 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18005C284 (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(__int64 a1, int a2)
{
  unsigned int v2; // r15d
  _RTL_CRITICAL_SECTION *v3; // rbp
  unsigned int v4; // esi
  unsigned int v7; // edi
  unsigned __int16 v8; // r13
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int32 v12; // eax
  __int64 v13; // rcx
  _QWORD **v14; // rax
  _QWORD *v15; // rsi
  unsigned __int16 v16; // r14
  _QWORD *v17; // r15

  v2 = *(_DWORD *)(a1 + 208);
  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 88);
  v4 = *(_DWORD *)(a1 + 204);
  v7 = 0;
  v8 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  if ( a2 == 1 && v4 )
  {
    v9 = (__int64 *)(a1 + 536);
    v10 = v4;
    do
    {
      v11 = *v9;
      if ( *v9 && *(_DWORD *)(v11 + 8) != 72 )
      {
        *v9 = 0LL;
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), v2);
        if ( v12 <= v2 )
          *(_DWORD *)(v11 + 4) = v12;
        *(_DWORD *)(v11 + 44) = 3;
        v13 = v11 + 32;
        **(_QWORD **)(a1 + 288) = v13;
        *(_QWORD *)(a1 + 288) = v13;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  v14 = *(_QWORD ***)(a1 + 280);
  if ( v14 == *(_QWORD ***)(a1 + 288) )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = *v14;
    *v14 = 0LL;
    *(_QWORD *)(a1 + 288) = *(_QWORD *)(a1 + 280);
  }
  RtlLeaveCriticalSection(v3);
  if ( v15 )
  {
    v16 = a2 != 0;
    do
    {
      v17 = v15;
      v15 = (_QWORD *)*v15;
      if ( !v15 )
        v8 = v16;
      EtwpWaitForBufferReferenceCount(v17 - 4);
      v7 = EtwpFlushBuffer(a1, v17 - 4, v8);
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147483614 )
        EtwpSendSessionNotification(a1, 3, v7);
      RtlEnterCriticalSection(v3);
      *((_DWORD *)v17 + 3) = 0;
      *v17 = 0LL;
      *(v17 - 1) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 424));
      **(_QWORD **)(a1 + 264) = v17;
      *(_QWORD *)(a1 + 264) = v17;
      _InterlockedAdd((volatile signed __int32 *)(a1 + 232), 1u);
      RtlLeaveCriticalSection(v3);
      RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
      *(_DWORD *)(a1 + 40) = v7;
    }
    while ( v15 );
  }
  return v7;
}
