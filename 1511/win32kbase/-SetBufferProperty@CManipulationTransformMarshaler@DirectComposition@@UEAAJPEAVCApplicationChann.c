/*
 * XREFs of ?SetBufferProperty@CManipulationTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0014340
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetBufferProperty(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d

  v6 = 0;
  if ( a5 != 12 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    *((_QWORD *)this + 7) = *(_QWORD *)a4;
    *((_DWORD *)this + 16) = a4[2];
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x100u;
    goto LABEL_7;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    *(_QWORD *)((char *)this + 68) = *(_QWORD *)a4;
    *((_DWORD *)this + 19) = a4[2];
    goto LABEL_6;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      *(_QWORD *)((char *)this + 92) = *(_QWORD *)a4;
      *((_DWORD *)this + 25) = a4[2];
      goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  *((_QWORD *)this + 10) = *(_QWORD *)a4;
  *((_DWORD *)this + 22) = a4[2];
LABEL_6:
  *a6 = 1;
  *((_DWORD *)this + 4) &= ~0x100u;
LABEL_7:
  Win32FreePool(a4);
  return v6;
}
