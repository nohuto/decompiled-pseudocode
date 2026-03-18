/*
 * XREFs of ?SetBufferProperty@CBaseClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DB2B0
 * Callers:
 *     ?SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0014770 (-SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CBaseClipMarshaler::SetBufferProperty(
        DirectComposition::CBaseClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  _QWORD *v9; // rcx
  __int64 v10; // rdx

  v6 = 0;
  if ( a3 != 99999 || a5 != 24 || !a4 )
    return (unsigned int)-1073741811;
  v9 = (_QWORD *)*((_QWORD *)this + 7);
  if ( !v9 )
    goto LABEL_11;
  v10 = *v9 - *a4;
  if ( *v9 == *a4 )
  {
    v10 = v9[1] - a4[1];
    if ( !v10 )
      v10 = v9[2] - a4[2];
  }
  if ( v10 )
  {
    Win32FreePool();
LABEL_11:
    *((_QWORD *)this + 7) = a4;
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x100u;
    return v6;
  }
  Win32FreePool();
  return v6;
}
