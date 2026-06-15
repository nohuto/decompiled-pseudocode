/*
 * XREFs of ?DisconnectFromSaDevice@CFormatConverterPipe@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140002438
 * Callers:
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x1400036BC (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverterPipe::DisconnectFromSaDevice(
        CFormatConverterPipe *this,
        struct ISaDeviceInternal *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)this && *((_BYTE *)this + 24) )
    result = (*(__int64 (__fastcall **)(struct ISaDeviceInternal *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(_QWORD *)this);
  else
    result = 0LL;
  *((_BYTE *)this + 24) = (int)result < 0;
  return result;
}
