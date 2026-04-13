/*
 * XREFs of ??$?0PEBD@?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAPEBD@Z @ 0x18004A224
 * Callers:
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x180049E98 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 * Callees:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18004653C (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
        __int64 a1,
        const char **a2)
{
  struct TraceLoggingCorrelationVector **v2; // rdi
  const char *v4; // rcx
  struct TraceLoggingCorrelationVector *v5; // rbx
  struct TraceLoggingCorrelationVector *v6; // rcx
  struct TraceLoggingCorrelationVector *v7; // rbp
  struct TraceLoggingCorrelationVector *v8; // rbx
  _BYTE *v9; // r14
  signed __int64 v10; // rdi
  struct TraceLoggingCorrelationVector *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct TraceLoggingCorrelationVector **)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::`vftable';
  if ( a1 == -16 )
    return a1;
  v4 = *a2;
  *v2 = 0LL;
  v5 = TraceLoggingCorrelationVector::Set(v4);
  v12 = v5;
  if ( v2 == &v12 )
    goto LABEL_7;
  v6 = *v2;
  v7 = v5;
  v5 = 0LL;
  v12 = 0LL;
  if ( v7 != v6 )
  {
    if ( v6 )
      operator delete(v6);
    *v2 = v7;
LABEL_7:
    if ( v5 )
      operator delete(v5);
  }
  v8 = *v2;
  v9 = v2 + 1;
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)*v2 + 18, 0LL);
  if ( v9 )
  {
    *v9 = 0;
    if ( !memcpy_s(v9, *((_QWORD *)v8 + 19), v8, WORD2(v10)) )
      sprintf_s(&v9[*((_QWORD *)v8 + 17)], *((_QWORD *)v8 + 19) - *((_QWORD *)v8 + 17), "%u", v10);
  }
  return a1;
}
