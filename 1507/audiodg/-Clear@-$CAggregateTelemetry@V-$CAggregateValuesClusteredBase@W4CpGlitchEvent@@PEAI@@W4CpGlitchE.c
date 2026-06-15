/*
 * XREFs of ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140026B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Clear(
        __int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rsi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*(_QWORD *)(a1 + 8));
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
