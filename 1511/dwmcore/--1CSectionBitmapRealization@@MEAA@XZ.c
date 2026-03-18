/*
 * XREFs of ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18015BEDC
 * Callers:
 *     ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x18015C060 (--_ECSectionBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CSectionBitmapRealization::~CSectionBitmapRealization(CSectionBitmapRealization *this)
{
  __int64 v1; // rsi
  void *v3; // rbx
  HANDLE CurrentProcess; // rax
  void *v5; // rcx

  v1 = *((_QWORD *)this + 65);
  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = (void *)*((_QWORD *)this + 60);
  if ( v3 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v3);
    *((_QWORD *)this + 60) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 57);
  if ( v5 )
    CloseHandle(v5);
  CBitmapRealization::~CBitmapRealization(this);
}
