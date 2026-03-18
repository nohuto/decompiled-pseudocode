/*
 * XREFs of ?SetBufferProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D9E70
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetBufferProperty(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    if ( a5 == 8 )
    {
      *((_QWORD *)this + 5) = *a4;
      Win32FreePool();
    }
    else if ( a5 )
    {
      return (unsigned int)-1073741811;
    }
    *((_DWORD *)this + 4) |= 0x40u;
    *a6 = 1;
    return v6;
  }
  return (unsigned int)-1073741790;
}
