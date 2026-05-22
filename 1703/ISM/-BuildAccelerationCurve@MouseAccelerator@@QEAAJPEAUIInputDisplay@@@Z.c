/*
 * XREFs of ?BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z @ 0x18005A018
 * Callers:
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x180058C14 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     ?GetDisplayInformation@MouseProcessor@@AEAAJXZ @ 0x180059AB8 (-GetDisplayInformation@MouseProcessor@@AEAAJXZ.c)
 *     ?OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z @ 0x180059E24 (-OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseAccelerator::BuildAccelerationCurve(MouseAccelerator *this, struct IInputDisplay *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  signed int v11; // edx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // r9d
  _QWORD *v17; // r8
  __int64 v18; // r10
  signed int LastError; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v24[24]; // [rsp+40h] [rbp-78h] BYREF

  memset(v24, 0, sizeof(v24));
  if ( !a2 )
  {
    v5 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 177;
LABEL_4:
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, v6, v5);
      return v5;
    }
    return v5;
  }
  (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = *((_QWORD *)this + 33);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 33) = a2;
  v8 = (*(__int64 (__fastcall **)(struct IInputDisplay *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v23);
  v5 = v8;
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 181, v8);
    return v5;
  }
  if ( !v23 )
  {
LABEL_13:
    v10 = ((__int64)*((int *)this + 65) << 16) / 10;
    v11 = (96 * v24[2] + 50) / 0x64u;
    if ( v11 < 96 )
      v11 = 96;
    v12 = (__int64 *)((char *)this + 120);
    v13 = ((__int64)v11 << 16) / 120;
    v14 = 0;
    do
    {
      ++v14;
      *v12 = (v10 * ((v13 * *(v12 - 10)) >> 16)) >> 16;
      v15 = 229376 * *(v12 - 15);
      *(++v12 - 6) = v15 >> 16;
    }
    while ( v14 < 5 );
    v16 = 1;
    v17 = (_QWORD *)((char *)this + 88);
    do
    {
      v18 = *v17 - *(v17 - 1);
      if ( *v17 == *(v17 - 1) )
      {
        v17[13] &= v18;
        v17[9] &= v18;
      }
      else
      {
        v20 = v17[4];
        v21 = ((v17[5] - v20) << 16) / v18;
        v17[9] = v21;
        v17[13] = v20 - ((*(v17 - 1) * v21) >> 16);
      }
      ++v16;
      ++v17;
    }
    while ( v16 < 5 );
    return v5;
  }
  if ( (unsigned int)GetCurrentDpiInfo(v23, v24) )
  {
    v5 = 0;
    goto LABEL_13;
  }
  LastError = GetLastError();
  v5 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v5 = LastError;
  if ( (v5 & 0x80000000) == 0 )
    v5 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 188;
    goto LABEL_4;
  }
  return v5;
}
