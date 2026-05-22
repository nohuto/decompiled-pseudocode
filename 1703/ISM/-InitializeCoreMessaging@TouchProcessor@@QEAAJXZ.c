/*
 * XREFs of ?InitializeCoreMessaging@TouchProcessor@@QEAAJXZ @ 0x180060210
 * Callers:
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18005FB60 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchProcessor::InitializeCoreMessaging(TouchProcessor *this)
{
  _QWORD *v2; // rdi
  int Descriptor; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v8; // [rsp+38h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp-10h]
  unsigned int v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  v11 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v2 = (_QWORD *)((char *)this + 576);
  Descriptor = CoreUICreate((char *)this + 576);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v6 = 289;
    goto LABEL_19;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v8, 8u, (__int64)L"System\\TouchProcessor");
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v6 = 293;
    goto LABEL_19;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, char *))(*(_QWORD *)*v2 + 48LL))(
                 *v2,
                 v8,
                 L"System\\TouchProcessor",
                 (char *)this + 584);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v6 = 298;
    goto LABEL_19;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, const void *, int), TouchProcessor *, _QWORD, unsigned int *))(*(_QWORD *)*v2 + 80LL))(
                 *v2,
                 TouchProcessor::OnMessageCallbackStatic,
                 this,
                 *((_QWORD *)this + 73),
                 &v10);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v6 = 304;
    goto LABEL_19;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v2 + 24LL))(*v2, &v11);
  v5 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v6 = 306;
    goto LABEL_19;
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v11 + 40LL))(
                 v11,
                 L"TouchProcessor",
                 v10,
                 1LL);
  v5 = Descriptor;
  if ( Descriptor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 311;
LABEL_19:
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, v6, Descriptor);
  }
LABEL_20:
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v11 = 0LL;
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v8);
  return v5;
}
