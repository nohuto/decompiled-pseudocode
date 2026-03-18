/*
 * XREFs of ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18018E4D0
 * Callers:
 *     ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x18018E580 (--_ECSectionBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSectionBitmapRealization::~CSectionBitmapRealization(
        CSectionBitmapRealization *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  void *v5; // rdi
  HANDLE CurrentProcess; // rax
  void *v7; // rcx

  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  v4 = *((_QWORD *)this + 60);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (void *)*((_QWORD *)this + 55);
  if ( v5 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v5);
    *((_QWORD *)this + 55) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 52);
  if ( v7 )
    CloseHandle(v7);
  CBitmapRealization::~CBitmapRealization(this, a2, a3);
}
