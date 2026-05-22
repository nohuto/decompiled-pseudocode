/*
 * XREFs of ?Initialize@InputStateManager@@IEAAJXZ @ 0x180005DF8
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180009B80 (--0TestCommandHost@@AEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18000A280 (--1-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessage.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003088C (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::Initialize(InputStateManager *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r9d
  _QWORD *v5; // rsi
  HKEY v6; // rcx
  TestCommandHost *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  DWORD TickCount; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  char v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+88h] [rbp+10h] BYREF
  TestCommandHost *v18; // [rsp+90h] [rbp+18h]

  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v2 = InputSecurityDescriptor::QueryDescriptor(&v15, 8LL, c_wszMessagePortNames);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v4 = 109;
    goto LABEL_4;
  }
  v5 = (_QWORD *)((char *)this + 48);
  v2 = CoreUICreate((char *)this + 48);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 111;
LABEL_4:
      Template_qqq(v3, &MinInput_Warning_CheckResult, 1, v4, v2);
      goto LABEL_5;
    }
    goto LABEL_5;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v5 + 56LL))(*v5, v15, (char *)this + 56);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 115;
      goto LABEL_4;
    }
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD, char *))(*(_QWORD *)*v5 + 80LL))(
         *v5,
         InputStateManager::OnDeviceCommandStatic,
         this,
         *((_QWORD *)this + 7),
         (char *)this + 64);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 121;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v5 + 24LL))(*v5, &v17);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 124;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v17 + 40LL))(
         v17,
         L"System\\Input\\DeviceCommandEndpoint",
         *((unsigned int *)this + 16),
         1LL);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 129;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  ControllerNavigationManager::GetInstance();
  if ( !TestCommandHost::m_instance )
  {
    v18 = (TestCommandHost *)operator new(0x88uLL);
    v7 = TestCommandHost::TestCommandHost(v18);
    v8 = (__int64 *)TestCommandHost::m_instance;
    TestCommandHost::m_instance = v7;
    if ( v8 )
    {
      std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>(v8 + 9);
      v9 = v8[2];
      if ( v9 )
      {
        v8[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v10 = *v8;
      if ( *v8 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      operator delete(v8);
    }
  }
  v11 = RegistryWatcher::Create(
          v6,
          L"System\\Input",
          this,
          (void (*)(void *, HKEY))InputStateManager::OnInputRegistryKeyChangeStatic,
          (struct RegistryWatcher **)this + 1036);
  if ( v11 < 0 )
  {
    *((_DWORD *)this + 2074) = 6;
    *((_DWORD *)this + 2075) = 0xFFFF;
    v11 = 0;
  }
  TickCount = GetTickCount();
  MITUpdateInputGlobals(TickCount, 0LL, 0LL, 0xFFFFFFFFLL, 0);
  v13 = v17;
  v17 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v15);
  return (unsigned int)v11;
}
