/*
 * XREFs of ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C023C840
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlDevice *__fastcall InteractiveControlDevice::InteractiveControlDevice(InteractiveControlDevice *this)
{
  InteractiveControlDevice *result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 13) = 1LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_WORD *)this + 152) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *((union _LARGE_INTEGER *)this + 39) = PerformanceFrequency;
  *((_QWORD *)this + 50) = -1LL;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  result = this;
  *((_DWORD *)this + 8) = 0;
  return result;
}
