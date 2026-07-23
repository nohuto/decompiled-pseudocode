/*
 * XREFs of ExpCallProcessing @ 0x1400099D4
 * Callers:
 *     ExNotifyWithProcessing @ 0x1400098E0 (ExNotifyWithProcessing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCallProcessing(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, __int64, _QWORD, _QWORD); // r10
  __int64 result; // rax

  if ( a5 )
  {
    if ( a1 )
      v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))a5;
    else
      v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(a5 + 8);
    if ( v5 )
      return v5(a2, a3, a4, *(_QWORD *)(a5 + 16), *(_QWORD *)(a5 + 24));
  }
  return result;
}
