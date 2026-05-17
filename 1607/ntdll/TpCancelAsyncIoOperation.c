/*
 * XREFs of TpCancelAsyncIoOperation @ 0x18007E4E0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003C170 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpCancelAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  signed __int32 v4; // ecx
  bool v5; // zf
  signed __int32 v6; // eax

  result = TppIopValidateIo((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    _m_prefetchw((const void *)(a1 + 280));
    v4 = *(_DWORD *)(a1 + 280);
    while ( v4 > 0 )
    {
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), v4 - 1, v4);
      v5 = v4 == v6;
      v4 = v6;
      if ( v5 )
      {
        TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -1, 0LL, v3);
        break;
      }
    }
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
