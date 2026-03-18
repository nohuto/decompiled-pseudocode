/*
 * XREFs of ?SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DD8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002E0B4 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveColorMarshaler::SetBufferProperty(
        DirectComposition::CPrimitiveColorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rdx

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a4 && a5 == 16 )
  {
    v9 = *((_QWORD *)this + 5) - *a4;
    if ( !v9 )
      v9 = *((_QWORD *)this + 6) - a4[1];
    if ( v9 )
    {
      *(_OWORD *)((char *)this + 40) = *(_OWORD *)a4;
      *a6 = 1;
    }
    if ( *((_QWORD *)this + 4) )
    {
      DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
      *a6 = 1;
    }
    Win32FreePool();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
