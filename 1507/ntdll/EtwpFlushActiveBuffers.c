/*
 * XREFs of EtwpFlushActiveBuffers @ 0x180009858
 * Callers:
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x180009A40 (RtlWakeAllConditionVariable.c)
 *     EtwpFlushBuffer @ 0x180009AB4 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180009C44 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpSendSessionNotification @ 0x18000A7A8 (EtwpSendSessionNotification.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(__int64 a1, int a2)
{
  unsigned int v2; // r15d
  _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v4; // rsi
  unsigned int v7; // edi
  unsigned __int16 v8; // r13
  _QWORD **v9; // rax
  _QWORD *v10; // rsi
  unsigned __int16 v11; // r14
  _QWORD *v12; // r15
  __int64 *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int32 v17; // eax
  __int64 v18; // rcx

  v2 = *(_DWORD *)(a1 + 208);
  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 88);
  v4 = *(unsigned int *)(a1 + 204);
  v7 = 0;
  v8 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  if ( a2 == 1 && (_DWORD)v4 )
  {
    v14 = (__int64 *)(a1 + 536);
    v15 = v4;
    do
    {
      v16 = *v14;
      if ( *v14 && *(_DWORD *)(v16 + 8) != 72 )
      {
        *v14 = 0LL;
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), v2);
        if ( v17 <= v2 )
          *(_DWORD *)(v16 + 4) = v17;
        *(_DWORD *)(v16 + 44) = 3;
        v18 = v16 + 32;
        **(_QWORD **)(a1 + 288) = v18;
        *(_QWORD *)(a1 + 288) = v18;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  v9 = *(_QWORD ***)(a1 + 280);
  if ( v9 == *(_QWORD ***)(a1 + 288) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)(a1 + 288) = *(_QWORD *)(a1 + 280);
  }
  RtlLeaveCriticalSection(v3);
  if ( v10 )
  {
    v11 = a2 != 0;
    do
    {
      v12 = v10;
      v10 = (_QWORD *)*v10;
      if ( !v10 )
        v8 = v11;
      EtwpWaitForBufferReferenceCount(v12 - 4);
      v7 = EtwpFlushBuffer(a1, v12 - 4, v8);
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147483614 )
        EtwpSendSessionNotification(a1, 3LL, v7);
      RtlEnterCriticalSection(v3);
      *((_DWORD *)v12 + 3) = 0;
      *v12 = 0LL;
      *(v12 - 1) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 424));
      **(_QWORD **)(a1 + 264) = v12;
      *(_QWORD *)(a1 + 264) = v12;
      _InterlockedAdd((volatile signed __int32 *)(a1 + 232), 1u);
      RtlLeaveCriticalSection(v3);
      RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
      *(_DWORD *)(a1 + 40) = v7;
    }
    while ( v10 );
  }
  return v7;
}
