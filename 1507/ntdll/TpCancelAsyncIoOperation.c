/*
 * XREFs of TpCancelAsyncIoOperation @ 0x18006F720
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003CD08 (TppIopValidateIo.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
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
        TppBarrierAdjust((char *)Io + 56, 0xFFFFFFFFLL);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}
