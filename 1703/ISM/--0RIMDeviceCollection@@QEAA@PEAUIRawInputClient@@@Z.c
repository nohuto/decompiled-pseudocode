/*
 * XREFs of ??0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180071D54
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18007DAE4 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 */

RIMDeviceCollection *__fastcall RIMDeviceCollection::RIMDeviceCollection(
        RIMDeviceCollection *this,
        struct IRawInputClient *a2)
{
  RIMDeviceCollection *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &RIMDeviceCollection::`vftable';
  *((_DWORD *)this + 8) = 0;
  memset((char *)this + 88, 0, 0x218uLL);
  memset((char *)this + 624, 0, 0x800uLL);
  *((_DWORD *)this + 668) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_DWORD *)this + 672) = 0;
  *((_QWORD *)this + 337) = 0LL;
  *((_QWORD *)this + 340) = 0LL;
  *((_QWORD *)this + 341) = 0LL;
  result = this;
  *((_BYTE *)this + 2736) = 0;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
