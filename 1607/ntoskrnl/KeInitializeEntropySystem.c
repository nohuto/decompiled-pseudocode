/*
 * XREFs of KeInitializeEntropySystem @ 0x14057E110
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeEntropySystem(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD),
        void (__fastcall *a2)(__int64, __int64, __int64),
        __int64 a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rsi

  if ( KiEntropyTimingRoutine )
    return 3221225485LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v6 = KiProcessorBlock;
    v7 = (unsigned int)KeNumberProcessors_0;
    do
    {
      a2(*v6++ + 25380, 256LL, a3);
      --v7;
    }
    while ( v7 );
  }
  KiEntropyTimingRoutine = a1;
  return 0LL;
}
