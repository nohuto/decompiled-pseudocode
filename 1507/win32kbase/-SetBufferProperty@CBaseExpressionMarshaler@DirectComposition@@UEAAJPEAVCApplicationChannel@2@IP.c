/*
 * XREFs of ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D7170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx

  v6 = 0;
  if ( a3 != 5 )
    return (unsigned int)-1073741811;
  if ( ((a5 - 12) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
  {
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_QWORD *)this + 8) = a4;
    *a6 = 1;
    return v6;
  }
  if ( a5 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_QWORD *)this + 8) = 0LL;
    *a6 = 1;
  }
  return v6;
}
