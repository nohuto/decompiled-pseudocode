/*
 * XREFs of ?SetBufferProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00EDED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetBufferProperty(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d

  v6 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  v7 = *((_DWORD *)this + 4);
  if ( (v7 & 0x20) == 0 )
  {
    if ( a5 == 8 )
    {
      *((_QWORD *)this + 5) = *a4;
    }
    else if ( a5 )
    {
      return (unsigned int)-1073741811;
    }
    *((_DWORD *)this + 4) = v7 | 0x20;
    *a6 = 1;
    return v6;
  }
  return (unsigned int)-1073741790;
}
