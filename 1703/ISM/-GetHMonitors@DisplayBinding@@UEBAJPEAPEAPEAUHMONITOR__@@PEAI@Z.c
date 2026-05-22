/*
 * XREFs of ?GetHMonitors@DisplayBinding@@UEBAJPEAPEAPEAUHMONITOR__@@PEAI@Z @ 0x18001C0D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z @ 0x180027ECC (-GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z.c)
 *     ?EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV?$function@$$A6A_NPEAVPropertyNode@Input@@PEAXK@Z@std@@PEAXK@Z @ 0x1800288DC (-EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV-$function@$$A6A_NPEAVPropertyNode@I.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayBinding::GetHMonitors(DisplayBinding *this, HMONITOR **a2, unsigned int *a3)
{
  int v3; // eax
  void **v4; // rcx
  int v5; // r9d
  struct Input::PropertyNode *v6; // rbx
  HMONITOR *v7; // rax
  int v8; // edx
  _BYTE *v9; // r8
  _BYTE *v10; // rdx
  unsigned int v11; // ebx
  __int64 (__fastcall ***v12)(); // rdx
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  HMONITOR **v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *v16; // [rsp+40h] [rbp-C0h] BYREF
  struct Input::PropertyNode *v17; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B0h]
  int *v19; // [rsp+60h] [rbp-A0h]
  _BYTE v20[56]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v21; // [rsp+A0h] [rbp-60h]
  _BYTE v22[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall **v24)(); // [rsp+110h] [rbp+10h] BYREF
  __int128 v25; // [rsp+118h] [rbp+18h]
  int *v26; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall ***v27)(); // [rsp+148h] [rbp+48h]

  v15 = a2;
  *(_QWORD *)&v18 = &v15;
  v16 = a3;
  *a3 = 0;
  v14 = 0;
  *((_QWORD *)&v18 + 1) = &v16;
  v19 = &v14;
  v24 = off_1800A4FA0;
  v27 = &v24;
  v25 = v18;
  v26 = &v14;
  v3 = Input::PropertyMap::GetAt((DisplayBinding *)((char *)this + 64), &DISPLAYBINDING_MONITORS, &v17);
  v14 = v3;
  if ( v3 >= 0 )
  {
    v6 = v17;
    if ( (unsigned int)((__int64)(*((_QWORD *)v17 + 5) - *((_QWORD *)v17 + 4)) >> 3) )
    {
      v7 = (HMONITOR *)operator new[](
                         saturated_mul(
                           (unsigned int)((__int64)(*((_QWORD *)v17 + 5) - *((_QWORD *)v17 + 4)) >> 3),
                           8uLL));
      *v15 = v7;
      v4 = (void **)v15;
      if ( !*v15 )
      {
        LOBYTE(v3) = 14;
        v14 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_21;
        v5 = 131;
        goto LABEL_4;
      }
      v9 = 0LL;
      v21 = 0LL;
      if ( v27 )
      {
        v9 = (_BYTE *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _BYTE *))**v27)(v27, v20);
        v21 = v9;
      }
      v23 = 0LL;
      if ( v9 )
        v23 = (**(__int64 (__fastcall ***)(_BYTE *, _BYTE *))v9)(v9, v22);
      Input::EnumeratePropertiesWorker((_DWORD)v6, v8, (unsigned int)v22, 0, 0);
      if ( v21 )
      {
        v10 = v20;
        LOBYTE(v10) = v21 != v20;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v10);
      }
    }
    if ( *v16 != (unsigned int)((__int64)(*((_QWORD *)v6 + 5) - *((_QWORD *)v6 + 4)) >> 3) )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    goto LABEL_19;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 123;
LABEL_4:
    Template_qqq((__int64)v4, &MinInput_Warning_CheckResult, 0, v5, v3);
  }
LABEL_19:
  if ( v14 >= 0 )
    goto LABEL_22;
  v4 = (void **)v15;
LABEL_21:
  operator delete(*v4);
  *v16 = 0;
LABEL_22:
  v11 = v14;
  if ( v27 )
  {
    v12 = &v24;
    LOBYTE(v12) = v27 != &v24;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v27)[4])(v27, v12);
  }
  return v11;
}
