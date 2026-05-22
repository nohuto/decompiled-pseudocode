/*
 * XREFs of ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180019C5C
 * Callers:
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x180019FE4 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180011584 (--0PropertyMap@Input@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
DWMInputTarget *__fastcall DWMInputTarget::DWMInputTarget(
        DWMInputTarget *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3)
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
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 144) = 0;
  Input::PropertyMap::PropertyMap((DWMInputTarget *)((char *)this + 152));
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = a3;
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 1);
  *((_QWORD *)this + 15) = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 20) = 0;
  *((_BYTE *)this + 132) = 1;
  *((_DWORD *)this + 32) = -1;
  return this;
}
