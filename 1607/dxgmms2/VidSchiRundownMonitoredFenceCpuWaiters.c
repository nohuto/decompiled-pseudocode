/*
 * XREFs of VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C000E5CC
 * Callers:
 *     VidSchDestroyDeviceSyncObject @ 0x1C000E640 (VidSchDestroyDeviceSyncObject.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiRundownMonitoredFenceCpuWaiters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  unsigned int i; // ebp
  _QWORD *v10; // rdi
  _QWORD *v11; // rax

  v4 = *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD **)(v4 + 1000);
  while ( v7 != (_QWORD *)(v4 + 1000) )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    if ( v8[3] == a2 )
    {
      for ( i = 0; i < *((_DWORD *)v8 + 26); ++i )
      {
        v10 = (_QWORD *)(v8[4] + 16LL * i);
        if ( *v10 == a1 || !a1 )
        {
          v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
          v11[3] = *v10;
          v11[4] = a2;
          v11[5] = **(_QWORD **)(*v10 + 56LL);
          v11[6] = v10[1];
          v11[7] = *(unsigned __int8 *)(*v10 + 28LL);
          WdLogEvent5_WdEvent(v11);
          *v10 = 0LL;
        }
      }
    }
  }
  VidSchiUnwaitMonitoredFences(v4, a2, a3, a4);
}
