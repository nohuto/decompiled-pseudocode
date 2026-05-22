/*
 * XREFs of ?Create@OrientationWatcher@@SAJPEAXP6AX0W4DISPLAYCONFIG_ROTATION@@@ZPEAPEAV1@@Z @ 0x18005A8B4
 * Callers:
 *     ?GetRotation@DWMInputDisplay@@UEAA?AW4DISPLAYCONFIG_ROTATION@@XZ @ 0x18001B080 (-GetRotation@DWMInputDisplay@@UEAA-AW4DISPLAYCONFIG_ROTATION@@XZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall OrientationWatcher::Create(
        __int64 a1,
        void (*a2)(void *, enum DISPLAYCONFIG_ROTATION),
        struct OrientationWatcher **a3)
{
  __int64 v4; // rdi
  int v5; // edi
  int v6; // r9d
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  _QWORD *v13; // r14
  __int64 v14; // rcx
  void (*v16)(void *, enum DISPLAYCONFIG_ROTATION); // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  char *v18; // [rsp+88h] [rbp+20h]

  v16 = a2;
  v4 = a1;
  if ( a3 )
  {
    v7 = (char *)malloc(0x48uLL);
    v8 = v7;
    if ( v7 )
      memset(v7, 0, 0x48uLL);
    v18 = v8;
    if ( v8 )
    {
      *(_QWORD *)v8 = &RefCountedObject::`vftable';
      *((_DWORD *)v8 + 2) = 1;
      *(_QWORD *)v8 = &OrientationWatcher::`vftable'{for `RefCountedObject'};
      *((_QWORD *)v8 + 2) = &OrientationWatcher::`vftable'{for `IMessageProxyListener'};
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      *((_QWORD *)v8 + 6) = v4;
      *((_QWORD *)v8 + 7) = DWMInputDisplay::OnOrientationChangeStatic;
      v9 = *((_QWORD *)v8 + 3);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      *((_QWORD *)v8 + 3) = 0LL;
      a1 = *((_QWORD *)v8 + 4);
      if ( a1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      *((_QWORD *)v8 + 4) = 0LL;
      v8[40] = 0;
      *((_DWORD *)v8 + 16) = 1;
    }
    if ( !v8 )
    {
      v5 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v5;
      v6 = 89;
      goto LABEL_4;
    }
    LODWORD(v16) = 0;
    v17 = 0LL;
    v10 = CoreUIFactoryCreate(&v17);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, void (**)(void *, enum DISPLAYCONFIG_ROTATION)))(*(_QWORD *)v17 + 24LL))(
              v17,
              &GUID_5dd528e4_51e6_4b28_89a2_71173f3b8f1d,
              &v16);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v13 = v8 + 24;
        v10 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)v17 + 40LL))(
                v17,
                L"System\\RotationManager",
                (unsigned int)v16,
                v8 + 24);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*v13)(
                  *v13,
                  &GUID_5dd528e4_51e6_4b28_89a2_71173f3b8f1d,
                  (__int64)(v8 + 32));
          v5 = v10;
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v13 + 56LL))(*v13, v8 + 16);
            v5 = v10;
            if ( v10 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_32;
            v12 = 65;
            goto LABEL_31;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v12 = 62;
            goto LABEL_31;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v12 = 58;
          goto LABEL_31;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 53;
        goto LABEL_31;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v12 = 49;
LABEL_31:
      Template_qqq(v11, &MinInput_Warning_CheckResult, 0, v12, v10);
    }
LABEL_32:
    v14 = v17;
    v17 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v5 >= 0 )
    {
      *a3 = (struct OrientationWatcher *)v8;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 92, v5);
    }
    if ( v5 < 0 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
    return (unsigned int)v5;
  }
  v5 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 82;
LABEL_4:
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v6, v5);
  }
  return (unsigned int)v5;
}
