/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x180058C14
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180058B10 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18005B160 (-Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002C8B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z @ 0x18005A018 (-BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ?Initialize@PointerProcessor@@IEAAJXZ @ 0x18005D9F8 (-Initialize@PointerProcessor@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::Initialize(MouseProcessor *this, const unsigned __int16 *a2, int a3)
{
  int ChildInputProcessor; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rcx
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+50h] [rbp-18h]
  char v16; // [rsp+54h] [rbp-14h]

  v15 = -1;
  v16 = 1;
  v13 = 0LL;
  v14 = 0LL;
  ChildInputProcessor = PointerProcessor::Initialize(this);
  v8 = ChildInputProcessor;
  if ( ChildInputProcessor >= 0 )
  {
    if ( (int)RegistryWatcher::Create(
                v7,
                L"SYSTEM\\MOUSE",
                this,
                (void (*)(void *, HKEY))MouseProcessor::OnMouseRegistryKeyChangeStatic,
                (struct RegistryWatcher **)this + 30) < 0 )
      *((_BYTE *)this + 272) = 0;
    ChildInputProcessor = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 6)
                                                                                            + 24LL))(
                            *((_QWORD *)this + 6),
                            *((_QWORD *)this + 4),
                            *((_QWORD *)this + 5),
                            0LL,
                            (char *)this + 248);
    v8 = ChildInputProcessor;
    if ( ChildInputProcessor >= 0 )
    {
      (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 31))(
        *((_QWORD *)this + 31),
        &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b,
        (char *)this + 256);
      if ( (gdwMitConfig & 4) != 0 || !*((_BYTE *)this + 568) )
        goto LABEL_16;
      *((_QWORD *)this + 67) = a2;
      *((_DWORD *)this + 136) = a3;
      if ( (int)RegistryWatcher::Create(
                  v10,
                  L"SYSTEM\\Mouse",
                  (char *)this + 288,
                  (void (*)(void *, HKEY))MouseAccelerator::OnMouseRegistryKeyChangeStatic,
                  (struct RegistryWatcher **)this + 70) < 0 )
      {
        v11 = *((_DWORD *)this + 136);
        *((_OWORD *)this + 18) = xmmword_1800D2CF8;
        *((_OWORD *)this + 19) = xmmword_1800D2D08;
        *((_QWORD *)this + 40) = qword_1800D2D18;
        *(_OWORD *)((char *)this + 328) = xmmword_1800D2CD0;
        *(_OWORD *)((char *)this + 344) = xmmword_1800D2CE0;
        *((_QWORD *)this + 45) = qword_1800D2CF0;
        *((_DWORD *)this + 137) = v11;
      }
      ChildInputProcessor = MouseAccelerator::BuildAccelerationCurve(
                              (MouseProcessor *)((char *)this + 288),
                              *((struct IInputDisplay **)this + 5));
      v8 = ChildInputProcessor;
      if ( ChildInputProcessor >= 0 )
      {
LABEL_16:
        *(_DWORD *)(*((_QWORD *)this + 4) + 4LL) |= 4u;
        *(_QWORD *)&v13 = *((_QWORD *)this + 4);
        *((_QWORD *)&v13 + 1) = *((_QWORD *)this + 3);
        *(_QWORD *)&v14 = this;
        ChildInputProcessor = CreateChildInputProcessor(4, (__int64)&v13, (__int64)this + 576);
        v8 = ChildInputProcessor;
        if ( ChildInputProcessor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v9 = 227;
          goto LABEL_19;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 209;
        goto LABEL_19;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 196;
      goto LABEL_19;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 180;
LABEL_19:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v9, ChildInputProcessor);
  }
  return v8;
}
