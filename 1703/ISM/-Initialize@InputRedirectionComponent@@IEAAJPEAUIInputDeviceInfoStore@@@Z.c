/*
 * XREFs of ?Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180082770
 * Callers:
 *     ?Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAUIInputTargetingComponent@@@Z @ 0x180082920 (-Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAUIInputTargetingComponent.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionComponent::Initialize(
        InputRedirectionComponent *this,
        struct IInputDeviceInfoStore *a2)
{
  int Descriptor; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  _QWORD *v7; // rsi
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  char v10; // [rsp+50h] [rbp-18h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF

  v11 = 0;
  v9 = 0LL;
  v10 = 0;
  *((_QWORD *)this + 9) = a2;
  Descriptor = CoreUICreate((char *)this + 40);
  v5 = Descriptor;
  if ( Descriptor >= 0 )
  {
    Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v9, 8u, (__int64)L"System\\TouchInputRedirection");
    v5 = Descriptor;
    if ( Descriptor >= 0 )
    {
      Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, char *))(**((_QWORD **)this + 5) + 48LL))(
                     *((_QWORD *)this + 5),
                     v9,
                     L"System\\TouchInputRedirection",
                     (char *)this + 56);
      v5 = Descriptor;
      if ( Descriptor >= 0 )
      {
        v7 = (_QWORD *)((char *)this + 48);
        Descriptor = CoreUIFactoryCreate((char *)this + 48);
        v5 = Descriptor;
        if ( Descriptor >= 0 )
        {
          Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v7 + 24LL))(
                         *v7,
                         &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb,
                         &v11);
          v5 = Descriptor;
          if ( Descriptor >= 0 )
          {
            Descriptor = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)*v7 + 32LL))(
                           *v7,
                           (char *)this + 8,
                           0LL,
                           v11,
                           L"TouchInputRedirection",
                           *((_QWORD *)this + 7),
                           (char *)this + 64);
            v5 = Descriptor;
            if ( Descriptor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v6 = 74;
              goto LABEL_19;
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v6 = 66;
            goto LABEL_19;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v6 = 62;
          goto LABEL_19;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 60;
        goto LABEL_19;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 55;
      goto LABEL_19;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 51;
LABEL_19:
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, v6, Descriptor);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v9);
  return v5;
}
