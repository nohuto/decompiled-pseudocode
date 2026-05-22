/*
 * XREFs of ?Initialize@ControllerNavigationManager@@AEAAJXZ @ 0x180030BD0
 * Callers:
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003088C (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::Initialize(ControllerNavigationManager *this)
{
  struct ControllerNavigationManager *v1; // rdi
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r9d
  _QWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  char v9; // [rsp+50h] [rbp-18h]
  ControllerNavigationManager *v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = this;
  v1 = ControllerNavigationManager::s_instance;
  v8 = 0LL;
  v9 = 0;
  v2 = CoreUICreate((char *)ControllerNavigationManager::s_instance + 120);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v4 = 127;
    goto LABEL_19;
  }
  v5 = (_QWORD *)((char *)v1 + 128);
  v2 = CoreUIFactoryCreate((char *)v1 + 128);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v4 = 130;
    goto LABEL_19;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, ControllerNavigationManager **))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         &GUID_656bebd9_ea24_478d_90ff_8f5a94ff8f09,
         &v10);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v4 = 134;
    goto LABEL_19;
  }
  v2 = InputSecurityDescriptor::QueryDescriptor(&v8, 8LL, L"ControllerNavigationManagerPort");
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v4 = 138;
    goto LABEL_19;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)v1 + 15) + 48LL))(
         *((_QWORD *)v1 + 15),
         v8,
         L"ControllerNavigationManagerPort",
         (__int64)v1 + 136);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v4 = 143;
    goto LABEL_19;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, const wchar_t *, _QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(
         *v5,
         (__int64)v1 + 16,
         0LL,
         (unsigned int)v10,
         L"System\\RemoteControllerNavigationManager",
         *((_QWORD *)v1 + 17),
         (__int64)v1 + 144);
  v6 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v4 = 151;
LABEL_19:
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, v4, v2);
LABEL_20:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v8);
  return v6;
}
