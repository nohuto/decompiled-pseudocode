/*
 * XREFs of HUBHSM_QueueingPortStatusChangeEvents @ 0x1C0007670
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHSM_QueueingPortStatusChangeEvents(__int64 a1)
{
  __int64 v1; // rbx
  ULONG v2; // eax
  signed int v3; // esi
  signed int v4; // edi
  __int64 i; // rcx
  __int64 v6; // rcx
  __int64 *v7; // r14

  v1 = *(_QWORD *)(a1 + 960);
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(v1 + 1080));
  v3 = 0;
  v4 = v2;
  if ( !v2 )
  {
    *(_BYTE *)(v1 + 1056) = 1;
LABEL_10:
    HUBSM_AddEvent(v1 + 1208, 2046LL);
    return 2053LL;
  }
  *(_DWORD *)(v1 + 2272) = v2;
  for ( i = *(_QWORD *)(v1 + 2304); ; i = *v7 )
  {
    v6 = i - 248;
    v7 = (__int64 *)(v6 + 248);
    if ( v1 + 2304 == v6 + 248 )
      break;
    if ( _bittest64(*(const signed __int64 **)(v1 + 1088), *(unsigned __int16 *)(v6 + 200)) )
    {
      _InterlockedOr((volatile signed __int32 *)(v6 + 264), 1u);
      ++v3;
      (*(void (__fastcall **)(__int64, __int64))(v6 + 1240))(v6, 3030LL);
    }
  }
  if ( v4 > v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2272), v3 - v4) == v4 - v3 )
    goto LABEL_10;
  return 2053LL;
}
