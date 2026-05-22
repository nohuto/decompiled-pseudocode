/*
 * XREFs of ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18005854C
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180058B10 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??0PTPProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18005AD2C (--0PTPProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18005D78C (--0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
MouseProcessor *__fastcall MouseProcessor::MouseProcessor(MouseProcessor *this, struct DeviceInfo **a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  _DWORD *v6; // rsi
  __int64 v7; // rcx
  struct DeviceInfo *v8; // rcx

  PointerProcessor::PointerProcessor(this, *a2, a2[1]);
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 21) = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 22) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 23) = &MouseProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 24) = &MouseProcessor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_BYTE *)this + 236) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_BYTE *)this + 568) = *((_BYTE *)a2 + 36);
  *((_QWORD *)this + 72) = 0LL;
  *((_WORD *)this + 292) = 0;
  if ( (gdwMitConfig & 4) != 0 )
  {
    *((_QWORD *)this + 27) = 0LL;
  }
  else
  {
    v4 = *((_QWORD *)this + 5);
    if ( !v4
      || (v5 = (_DWORD *)((char *)this + 204),
          v6 = (_DWORD *)((char *)this + 200),
          (*(int (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v4 + 32LL))(
            v4,
            (char *)this + 200,
            (char *)this + 204) < 0)
      || (*(int (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           (char *)this + 208,
           (char *)this + 212) < 0 )
    {
      v6 = (_DWORD *)((char *)this + 200);
      *((_DWORD *)this + 50) = 1024;
      v5 = (_DWORD *)((char *)this + 204);
      *((_DWORD *)this + 51) = 768;
      *((_QWORD *)this + 26) = 0LL;
    }
    *((_DWORD *)this + 54) = *v6 / 2;
    *((_DWORD *)this + 55) = *v5 / 2;
  }
  *((_DWORD *)this + 58) = 0;
  *((_BYTE *)this + 272) = 0;
  *((_QWORD *)this + 35) = 0LL;
  v7 = *((_QWORD *)this + 72);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 72) = 0LL;
  v8 = a2[2];
  if ( v8
    && (**(int (__fastcall ***)(struct DeviceInfo *, GUID *, char *))v8)(
         v8,
         &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8,
         (char *)this + 264) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 16LL))(*((_QWORD *)this + 33));
  }
  return this;
}
