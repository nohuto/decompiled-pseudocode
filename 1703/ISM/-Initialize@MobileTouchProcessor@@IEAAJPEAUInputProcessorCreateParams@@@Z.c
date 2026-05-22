/*
 * XREFs of ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x180057D04
 * Callers:
 *     ?Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180057C30 (-Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001D40 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002C8B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?ConvertVirtualKeyToButtonType@MobileTouchProcessor@@IEAAJKPEAK@Z @ 0x180057B48 (-ConvertVirtualKeyToButtonType@MobileTouchProcessor@@IEAAJKPEAK@Z.c)
 *     ?Initialize@PointerProcessor@@IEAAJXZ @ 0x18005D9F8 (-Initialize@PointerProcessor@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileTouchProcessor::Initialize(MobileTouchProcessor *this, struct InputProcessorCreateParams *a2)
{
  int ChildInputProcessor; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r9d
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 v10; // rcx
  int v11; // r14d
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  __int16 v16; // ax
  __int16 v17; // ax
  LSTATUS v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  signed int v21; // eax
  LSTATUS v22; // eax
  signed int v23; // ecx
  int v24; // eax
  int v25; // r14d
  __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // rax
  _DWORD *v29; // rcx
  PHKEY phkResult; // [rsp+20h] [rbp-E0h]
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  DWORD Type; // [rsp+34h] [rbp-CCh] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  BYTE Data[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-BCh] BYREF
  BYTE v37[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  BYTE v39[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  WCHAR SubKey[264]; // [rsp+90h] [rbp-70h] BYREF

  hKey = 0LL;
  LODWORD(v42) = -1;
  v40 = 0LL;
  v41 = 0LL;
  BYTE4(v42) = 1;
  ChildInputProcessor = PointerProcessor::Initialize(this);
  v6 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_77;
    v7 = 340;
    goto LABEL_76;
  }
  v8 = *((_OWORD *)a2 + 1);
  v40 = *(_OWORD *)a2;
  v9 = *((_QWORD *)a2 + 4);
  *((_QWORD *)&v41 + 1) = *((_QWORD *)&v8 + 1);
  *(_QWORD *)&v41 = this;
  v42 = v9;
  ChildInputProcessor = CreateChildInputProcessor(8, (__int64)&v40, (__int64)this + 192);
  v6 = ChildInputProcessor;
  if ( ChildInputProcessor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_77;
    v7 = 348;
    goto LABEL_76;
  }
  v10 = *((_QWORD *)this + 5);
  if ( !v10 )
  {
    LOBYTE(v11) = 3;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 708, 3);
    v6 = -2147467261;
LABEL_16:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 364, v11);
    goto LABEL_77;
  }
  v38 = 0;
  v36 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v10 + 32LL))(v10, &v38, &v36);
  v11 = v12;
  if ( v12 >= 0 )
  {
    *((_DWORD *)this + 50) = v38;
    *((_DWORD *)this + 51) = v36;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 715, v12);
  }
  v6 = v11;
  if ( v11 < 0 )
    goto LABEL_16;
  v13 = *((__int16 *)this + 100);
  *((_DWORD *)this + 64) = 0x7FFFFFFF;
  v14 = (unsigned __int64)(1431655766LL * v13) >> 32;
  LOWORD(v13) = *((_WORD *)this + 102);
  *((_BYTE *)this + 260) = 0;
  LOWORD(v13) = v13 + 50;
  *((_DWORD *)this + 52) = 2;
  v15 = v14 + (v14 >> 31);
  *((_WORD *)this + 107) = v13;
  *((_DWORD *)this + 56) = 1;
  *((_WORD *)this + 115) = v13;
  v16 = (__int16)(v14 + (v14 >> 31)) / 2;
  *((_WORD *)this + 106) = v16;
  v17 = v15 + v16;
  *((_WORD *)this + 114) = v17;
  *((_WORD *)this + 122) = v15 + v17;
  *((_DWORD *)this + 60) = 3;
  *((_WORD *)this + 123) = v13;
  if ( *((_QWORD *)this + 23) )
  {
    *(_QWORD *)&v40 = *((_QWORD *)this + 23);
    *((_QWORD *)&v40 + 1) = *((_QWORD *)this + 3);
    ChildInputProcessor = CreateChildInputProcessor(128, (__int64)&v40, (__int64)this + 168);
    v6 = ChildInputProcessor;
    if ( ChildInputProcessor < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_77;
      v7 = 425;
      goto LABEL_76;
    }
  }
  v18 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\Touch\\Buttons", 0, 0x20019u, &hKey);
  v6 = (unsigned __int16)v18 | 0x80070000;
  if ( v18 <= 0 )
    v6 = v18;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 442, v6);
    goto LABEL_77;
  }
  cbData = 4;
  v20 = RegQueryValueExW(hKey, L"Count", 0LL, &Type, Data, &cbData);
  v5 = v20;
  if ( v20 == 2 )
  {
    *(_DWORD *)Data = 0;
  }
  else
  {
    v21 = (unsigned __int16)v20 | 0x80070000;
    if ( (int)v5 <= 0 )
      v21 = v5;
    if ( v21 < 0 || *(_DWORD *)Data > 3u || Type != 4 )
    {
      LOBYTE(ChildInputProcessor) = -1;
      v6 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_77;
      v7 = 469;
LABEL_76:
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v7, ChildInputProcessor);
LABEL_77:
      if ( hKey )
        RegCloseKey(hKey);
      return (unsigned int)v6;
    }
  }
  cbData = 4;
  v22 = RegQueryValueExW(hKey, L"Vibrate", 0LL, &Type, v39, &cbData);
  v23 = (unsigned __int16)v22 | 0x80070000;
  if ( v22 <= 0 )
    v23 = v22;
  if ( v23 >= 0 && Type == 4 )
  {
    v24 = *(_DWORD *)v39;
  }
  else
  {
    v24 = 0;
    *(_DWORD *)v39 = 0;
  }
  *((_BYTE *)this + 260) = v24 && !*(_DWORD *)Data;
  RegCloseKey(hKey);
  hKey = 0LL;
  v25 = 0;
  if ( *(_DWORD *)Data )
  {
    while ( 1 )
    {
      LODWORD(phkResult) = v25;
      ChildInputProcessor = StringCchPrintfW(SubKey, 260LL, L"%s\\%d", L"System\\Touch\\Buttons", phkResult);
      v6 = ChildInputProcessor;
      if ( ChildInputProcessor < 0 )
        break;
      if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey) > 0 )
        v6 = (unsigned __int16)RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey) | 0x80070000;
      else
        v6 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey);
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v26, &MinInput_Warning_CheckResult, 0, 527, v6);
        goto LABEL_77;
      }
      cbData = 4;
      if ( RegQueryValueExW(hKey, L"VKey", 0LL, &Type, v37, &cbData) > 0 )
        v6 = (unsigned __int16)RegQueryValueExW(hKey, L"VKey", 0LL, &Type, v37, &cbData) | 0x80070000;
      else
        v6 = RegQueryValueExW(hKey, L"VKey", 0LL, &Type, v37, &cbData);
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 537, v6);
        goto LABEL_77;
      }
      if ( Type != 4 )
      {
        LOBYTE(ChildInputProcessor) = -1;
        v6 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_77;
        v7 = 541;
        goto LABEL_76;
      }
      ChildInputProcessor = MobileTouchProcessor::ConvertVirtualKeyToButtonType(
                              (MobileTouchProcessor *)v5,
                              *(unsigned int *)v37,
                              &v36);
      v6 = ChildInputProcessor;
      if ( ChildInputProcessor < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_77;
        v7 = 544;
        goto LABEL_76;
      }
      v27 = 0;
      v28 = 0LL;
      v29 = (_DWORD *)((char *)this + 208);
      while ( v29[3] || *v29 != v36 )
      {
        ++v27;
        ++v28;
        v29 += 4;
        if ( v27 >= 3 )
          goto LABEL_62;
      }
      *((_DWORD *)this + 4 * v28 + 55) = 1;
LABEL_62:
      RegCloseKey(hKey);
      hKey = 0LL;
      if ( (unsigned int)++v25 >= *(_DWORD *)Data )
        return (unsigned int)v6;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_77;
    v7 = 520;
    goto LABEL_76;
  }
  return (unsigned int)v6;
}
