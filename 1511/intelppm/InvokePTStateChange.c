/*
 * XREFs of InvokePTStateChange @ 0x1C00021C0
 * Callers:
 *     PerfControlPTStates @ 0x1C0002130 (PerfControlPTStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokePTStateChange(__int64 a1, _QWORD *a2)
{
  if ( *((_BYTE *)a2 + 25) == 1 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))a1)(*(_QWORD *)(a1 + 16), *a2, a2[1]);
  else
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 8))(*(_QWORD *)(a1 + 24), *a2, a2[1]);
}
