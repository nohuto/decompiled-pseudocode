/*
 * XREFs of ?AddData@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x140014940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
ULONGLONG __fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::AddData(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 v4; // rbp
  ULONGLONG result; // rax
  __int64 v7; // rdx
  ULONGLONG v8; // rdi
  __int64 v9; // r9
  __int64 (__fastcall *v10)(); // rax

  v4 = a2;
  result = GetTickCount64();
  v8 = result;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( result - *(_QWORD *)(a1 + 72) > *(_QWORD *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 32) = 0;
      if ( result - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
      {
        LOBYTE(v7) = 1;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v7);
        *(_QWORD *)(a1 + 48) = v8;
      }
    }
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 64) = v8;
      *(_QWORD *)(a1 + 88) = v8;
    }
    *(_QWORD *)(a1 + 72) = v8;
    v9 = *(_QWORD *)(a1 + 8);
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)())(*(_QWORD *)v9 + 8LL);
      if ( v10 == CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::AddData )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4 * v4 + 48), *a3);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, unsigned int *))v10)(*(_QWORD *)(a1 + 8), (unsigned int)v4, a3);
      *(_BYTE *)(a1 + 16) = 1;
    }
    result = v8 - *(_QWORD *)(a1 + 88);
    if ( result > *(_QWORD *)(a1 + 80) )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0LL);
      *(_QWORD *)(a1 + 88) = v8;
    }
  }
  return result;
}
