/*
 * XREFs of ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX_KPEA_N@Z @ 0x1C0030478
 * Callers:
 *     NtDCompositionSetResourceBufferProperty @ 0x1C002C9E0 (NtDCompositionSetResourceBufferProperty.c)
 * Callees:
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEAX_K@Z @ 0x1C002E38C (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceBufferProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  __int64 result; // rax

  v9 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( !v9 )
    return 3221225506LL;
  result = DirectComposition::CApplicationChannel::SetResourceBufferProperty(this, v9, a3, a4, a5);
  if ( (int)result >= 0 )
    *a6 = *((_DWORD *)this + 131) != 0;
  return result;
}
