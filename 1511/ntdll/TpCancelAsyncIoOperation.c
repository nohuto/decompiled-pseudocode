/*
 * XREFs of TpCancelAsyncIoOperation @ 0x18007C3B0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppIopValidateIo @ 0x18000ABB0 (TppIopValidateIo.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TpCancelAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax
  signed __int32 v3; // ecx
  bool v4; // zf
  signed __int32 v5; // eax

  result = TppIopValidateIo((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    _m_prefetchw((const void *)(a1 + 272));
    v3 = *(_DWORD *)(a1 + 272);
    while ( v3 > 0 )
    {
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 272), v3 - 1, v3);
      v4 = v3 == v5;
      v3 = v5;
      if ( v4 )
      {
        TppBarrierAdjust((unsigned __int64 *)(a1 + 56), -1, 0);
        break;
      }
    }
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a1);
    if ( !(_DWORD)result )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
