/*
 * XREFs of PinValidateDataFormat @ 0x1C0015108
 * Callers:
 *     PinCreate @ 0x1C0015430 (PinCreate.c)
 *     PinSetDataFormat @ 0x1C0015930 (PinSetDataFormat.c)
 *     PinMIDIDataFormatIntersection @ 0x1C0015C00 (PinMIDIDataFormatIntersection.c)
 * Callees:
 *     IsSampleRateInRange @ 0x1C0015008 (IsSampleRateInRange.c)
 *     PinMatchChannelConfigToFormat @ 0x1C001505C (PinMatchChannelConfigToFormat.c)
 */

__int64 __fastcall PinValidateDataFormat(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // r8
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // ebp
  __int64 v12; // r10

  v3 = *(_DWORD *)a3;
  v5 = *(_QWORD *)(a3 + 48);
  v8 = -1073741811;
  if ( v5 == *(_QWORD *)&KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data1
    && (v9 = *(_QWORD *)(a3 + 56), v9 == *(_QWORD *)KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data4) )
  {
    if ( v3 < 0x52 || *(_WORD *)(a3 + 64) == 0xFFFE && v3 < 0x68 )
      return v8;
  }
  else
  {
    if ( v5 != *(_QWORD *)&KSDATAFORMAT_SPECIFIER_NONE.Data1 )
      return v8;
    v9 = *(_QWORD *)(a3 + 56);
    if ( v9 != *(_QWORD *)KSDATAFORMAT_SPECIFIER_NONE.Data4 || v3 != 64 )
      return v8;
  }
  v8 = 0;
  if ( a2 )
  {
    v8 = -1073741198;
    if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(a3 + 16)
      && *(_QWORD *)(a2 + 24) == *(_QWORD *)(a3 + 24)
      && *(_QWORD *)(a2 + 32) == *(_QWORD *)(a3 + 32)
      && *(_QWORD *)(a2 + 40) == *(_QWORD *)(a3 + 40)
      && *(_QWORD *)(a2 + 48) == v5
      && *(_QWORD *)(a2 + 56) == *(_QWORD *)(a3 + 56) )
    {
      if ( v5 != *(_QWORD *)&KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data1
        || v9 != *(_QWORD *)KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data4 )
      {
        return 0;
      }
      v10 = *(unsigned __int16 *)(a3 + 66);
      if ( *(_DWORD *)(a2 + 64) == v10 )
      {
        v11 = *(unsigned __int16 *)(a3 + 78);
        if ( *(_DWORD *)(a2 + 72) == v11 && IsSampleRateInRange(a2, *(_DWORD *)(a3 + 68)) )
        {
          if ( *(_WORD *)(a3 + 64) == 0xFFFE )
          {
            if ( *(unsigned __int16 *)(a3 + 82) == *(_DWORD *)(v12 + 104)
              && *(_DWORD *)(a3 + 84) == (unsigned int)PinMatchChannelConfigToFormat(v10, *(_DWORD *)(a1 + 144)) )
            {
              return 0;
            }
          }
          else if ( v10 <= 2 && v11 <= 0x10 )
          {
            return 0;
          }
        }
      }
    }
  }
  return v8;
}
