/*
 * XREFs of TpCancelAsyncIoOperation @ 0x18007C3B0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppIopValidateIo @ 0x18000ABB0 (TppIopValidateIo.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpCancelAsyncIoOperation(PTP_IO Io)
{
  signed __int32 v2; // ecx
  bool v3; // zf
  signed __int32 v4; // eax

  if ( (unsigned int)TppIopValidateIo((_PEB_LDR_DATA *)Io, 0LL, 0LL) )
  {
    _m_prefetchw((char *)Io + 272);
    v2 = *((_DWORD *)Io + 68);
    while ( v2 > 0 )
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)Io + 68, v2 - 1, v2);
      v3 = v2 == v4;
      v2 = v4;
      if ( v3 )
      {
        TppBarrierAdjust((_RTL_SRWLOCK *)Io + 7, -1, 0);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}
