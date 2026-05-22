/*
 * XREFs of ??0DWMInputTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x180019D80
 * Callers:
 *     ?CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x18001A10C (-CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180011584 (--0PropertyMap@Input@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
DWMInputTarget *__fastcall DWMInputTarget::DWMInputTarget(DWMInputTarget *this, const struct tagINPUTDEST *a2)
{
  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 12) = 1;
  *(_QWORD *)this = &DWMInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
  *((_QWORD *)this + 3) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 4) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 5) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 4);
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a2 + 40);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 56);
  *((_QWORD *)this + 15) = *((_QWORD *)a2 + 9);
  *((_DWORD *)this + 32) = -1;
  *((_BYTE *)this + 132) = 1;
  *((_QWORD *)this + 17) = *(_QWORD *)((char *)a2 + 4);
  *((_BYTE *)this + 144) = 1;
  Input::PropertyMap::PropertyMap((DWMInputTarget *)((char *)this + 152));
  return this;
}
