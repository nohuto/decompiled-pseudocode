/*
 * XREFs of ?SetModeBehavior@DXGADAPTER@@AEAAXE@Z @ 0x1C00E71A4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C00E397C (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C00E4648 (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

void __fastcall DXGADAPTER::SetModeBehavior(DXGADAPTER *this)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // [rsp+20h] [rbp-79h] BYREF
  struct _UNICODE_STRING v7; // [rsp+28h] [rbp-71h] BYREF
  struct _UNICODE_STRING v8; // [rsp+38h] [rbp-61h] BYREF
  _DXGKARG_CONTROLMODEBEHAVIOR v9; // [rsp+48h] [rbp-51h] BYREF
  __int128 v10; // [rsp+58h] [rbp-41h] BYREF
  int v11; // [rsp+68h] [rbp-31h]
  _OWORD v12[6]; // [rsp+70h] [rbp-29h] BYREF
  wchar_t v13; // [rsp+D0h] [rbp+37h]

  v13 = aRegistryMachin_16[48];
  v12[0] = *(_OWORD *)L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
  v8.Buffer = (wchar_t *)v12;
  v12[2] = *(_OWORD *)L"e\\SOFTWARE\\Microsoft\\Windows\\DWM";
  v11 = *(_DWORD *)L"r";
  v12[1] = *(_OWORD *)L"y\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
  v12[4] = *(_OWORD *)L"soft\\Windows\\DWM";
  v7.Buffer = (wchar_t *)&v10;
  v12[3] = *(_OWORD *)L"RE\\Microsoft\\Windows\\DWM";
  v10 = *(_OWORD *)L"HighColor";
  *(_QWORD *)&v9.Request.0 = 0LL;
  v9.NotSatisfied.Value = 0;
  v12[5] = *(_OWORD *)L"dows\\DWM";
  *(_DWORD *)&v8.Length = 6422624;
  *(_DWORD *)&v7.Length = 1310738;
  if ( (int)ReadRegistryDwordKeyValue(&v8, &v7, &v6) >= 0 )
    v9.Request.Value ^= (*(_BYTE *)&v9.Request.0 ^ (v6 != 0)) & 1;
  v3 = (int)DXGADAPTER::DdiControlModeBehavior(this, &v9, v2);
  v4 = (unsigned int)v3 + 0x80000000;
  if ( (int)v4 >= 0 && (_DWORD)v3 != -1073741637 )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v5 + 24) = v3;
    WdLogEvent5_WdError(v5);
  }
}
