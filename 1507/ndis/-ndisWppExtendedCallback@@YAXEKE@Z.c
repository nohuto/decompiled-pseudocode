/*
 * XREFs of ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C001F864
 * Callers:
 *     ndisEnableWppTracingCallback @ 0x1C0049F78 (ndisEnableWppTracingCallback.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1C006F668 (__report_rangecheckfailure.c)
 */

void __fastcall ndisWppExtendedCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 i; // al
  __int64 v4; // rcx
  int v5; // r10d

  if ( (_BYTE)a1 )
  {
    LOBYTE(a1) = 0;
    v5 = 1;
    do
    {
      if ( (v5 & (unsigned int)a2) != 0 )
      {
        *((_BYTE *)&ndisWppEnabledLevelPerFlag + (unsigned __int8)a1) = a3;
      }
      else
      {
        if ( (unsigned __int8)a1 >= 0x20uLL )
          _report_rangecheckfailure(a1, a2, a3, &ndisWppEnabledLevelPerFlag);
        *((_BYTE *)&ndisWppEnabledLevelPerFlag + (unsigned __int8)a1) = 0;
      }
      LOBYTE(a1) = a1 + 1;
      v5 *= 2;
    }
    while ( (unsigned __int8)a1 < 0x20u );
  }
  else
  {
    for ( i = 0; i < 0x20u; ++i )
    {
      v4 = i;
      if ( i >= 0x20uLL )
        _report_rangecheckfailure(i, a2, a3, &ndisWppEnabledLevelPerFlag);
      *((_BYTE *)&ndisWppEnabledLevelPerFlag + v4) = 0;
    }
  }
}
