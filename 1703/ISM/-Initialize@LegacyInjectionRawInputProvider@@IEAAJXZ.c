/*
 * XREFs of ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006F240
 * Callers:
 *     ?Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006F150 (-Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x1800700D8 (-FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LegacyInjectionRawInputProvider::Initialize(LegacyInjectionRawInputProvider *this)
{
  int Descriptor; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v8; // [rsp+48h] [rbp-18h] BYREF
  char v9; // [rsp+50h] [rbp-10h]
  unsigned int v10; // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+88h] [rbp+28h] BYREF

  v8 = 0LL;
  v9 = 0;
  v11 = 0LL;
  v10 = 0;
  Descriptor = CoreUICreate((char *)this + 48);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_22;
    v5 = 92;
    goto LABEL_4;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v8, 8u, (__int64)L"Input\\Injection.AlpcPort\\Server");
  v4 = Descriptor;
  if ( Descriptor >= 0 )
  {
    Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, char *))(**((_QWORD **)this + 6) + 48LL))(
                   *((_QWORD *)this + 6),
                   v8,
                   L"Input\\Injection.AlpcPort\\Server",
                   (char *)this + 56);
    v4 = Descriptor;
    if ( Descriptor >= 0 )
    {
      Descriptor = CoreUIFactoryCreate(&v11);
      v4 = Descriptor;
      if ( Descriptor >= 0 )
      {
        Descriptor = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v11 + 24LL))(
                       v11,
                       &GUID_9978c53c_56b6_4c55_ba5f_5495e889e2fe,
                       &v10);
        v4 = Descriptor;
        if ( Descriptor >= 0 )
        {
          Descriptor = (*(__int64 (__fastcall **)(__int64, LegacyInjectionRawInputProvider *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v11 + 32LL))(
                         v11,
                         this,
                         0LL,
                         v10,
                         L"IRemoteInputInjectionApi",
                         *((_QWORD *)this + 7),
                         (char *)this + 64);
          v4 = Descriptor;
          if ( Descriptor >= 0 )
          {
            if ( (int)LegacyInjectionRawInputProvider::FindRemoteProxy(this) < 0 )
              *((_BYTE *)this + 89) = 1;
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v5 = 115;
            goto LABEL_4;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v5 = 107;
          goto LABEL_4;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 103;
        goto LABEL_4;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 101;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 96;
LABEL_4:
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, v5, Descriptor);
  }
LABEL_22:
  v6 = v11;
  v11 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v8);
  return v4;
}
