/*
 * XREFs of ?Initialize@InputEdgyNotifier@@QEAAJXZ @ 0x180024CD8
 * Callers:
 *     ?Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAUIInputTargetingComponent@@@Z @ 0x180022984 (-Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAUIInputTargetingCo.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputEdgyNotifier::Initialize(InputEdgyNotifier *this)
{
  _QWORD *v2; // rsi
  int v3; // eax
  __int64 v4; // rcx
  signed int LastError; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  HANDLE v18; // rdi
  __int64 v19; // rcx
  int v20; // r9d
  void *v22; // [rsp+38h] [rbp-38h] BYREF
  char v23; // [rsp+40h] [rbp-30h]
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  char v25; // [rsp+50h] [rbp-20h]
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+20h] BYREF

  v24 = 0LL;
  v25 = 0;
  v22 = 0LL;
  v23 = 0;
  v2 = (_QWORD *)((char *)this + 16);
  v3 = CoreUICreate((char *)this + 16);
  LastError = v3;
  if ( v3 >= 0 )
  {
    v6 = InputSecurityDescriptor::QueryDescriptor(&v24, 8LL, L"System\\InputEdgyNotifier");
    LastError = v6;
    if ( v6 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, char *))(*(_QWORD *)*v2 + 48LL))(
             *v2,
             v24,
             L"System\\InputEdgyNotifier",
             (char *)this + 32);
      LastError = v8;
      if ( v8 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, const void *, int), InputEdgyNotifier *, _QWORD, unsigned int *))(*(_QWORD *)*v2 + 80LL))(
                *v2,
                InputEdgyNotifier::OnMessageCallbackStatic,
                this,
                *((_QWORD *)this + 4),
                &v27);
        LastError = v10;
        if ( v10 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 24LL))(*v2, (char *)this + 24);
          LastError = v12;
          if ( v12 >= 0 )
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64))(**((_QWORD **)this + 3) + 40LL))(
                    *((_QWORD *)this + 3),
                    L"InputEdgyNotifier",
                    v27,
                    1LL);
            LastError = v14;
            if ( v14 >= 0 )
            {
              v16 = InputSecurityDescriptor::QueryDescriptor(&v22, 1LL, L"EdgyNotifier Started");
              LastError = v16;
              if ( v16 >= 0 )
              {
                EventAttributes.nLength = 24;
                EventAttributes.lpSecurityDescriptor = v22;
                EventAttributes.bInheritHandle = 0;
                v18 = CreateEventW(&EventAttributes, 1, 0, L"EdgyNotifier Started");
                if ( v18
                  || ((int)GetLastError() > 0
                    ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
                    : (LastError = GetLastError()),
                      LastError >= 0) )
                {
                  if ( SetEvent(v18) )
                    goto LABEL_33;
                  LastError = -2147467259;
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    goto LABEL_33;
                  v20 = 121;
                }
                else
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    goto LABEL_33;
                  v20 = 116;
                }
                Template_qqq(v19, &MinInput_Warning_CheckResult, 0, v20, LastError);
                goto LABEL_33;
              }
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 102, v16);
            }
            else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 93, v14);
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 88, v12);
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 86, v10);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 80, v8);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 75, v6);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 71, v3);
  }
LABEL_33:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v22);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v24);
  return (unsigned int)LastError;
}
