/*
 * XREFs of ?ConnectToSaDevice@CFormatConverterPipe@@QEAAJPEAUISaDeviceInternal@@_N@Z @ 0x1400344E4
 * Callers:
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140003760 (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverterPipe::ConnectToSaDevice(
        CFormatConverterPipe *this,
        struct ISaDeviceInternal *a2,
        char a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)a2;
  if ( a3 )
    result = (*(__int64 (__fastcall **)(struct ISaDeviceInternal *, _QWORD))(v3 + 32))(a2, *(_QWORD *)this);
  else
    result = (*(__int64 (__fastcall **)(struct ISaDeviceInternal *, _QWORD))(v3 + 24))(a2, *(_QWORD *)this);
  *((_BYTE *)this + 24) = (int)result >= 0;
  return result;
}
