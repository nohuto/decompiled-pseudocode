/*
 * XREFs of ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00B8330
 * Callers:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00B8870 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B5350 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00B53A4 (_CcdOpenRegistrySubkey_0.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00B755C (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00B7580 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C00B8568 (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B85CC (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C00B9078 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4)
{
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  ULONG v26; // [rsp+30h] [rbp-B1h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-A9h] BYREF
  HANDLE v28; // [rsp+40h] [rbp-A1h] BYREF
  struct _UNICODE_STRING v29; // [rsp+48h] [rbp-99h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v31[112]; // [rsp+70h] [rbp-71h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-1h] BYREF
  int v33; // [rsp+E8h] [rbp+7h]

  v28 = 0LL;
  v7 = CcdOpenRegistrySubkey(
         (int)&v28,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
         &v26);
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v22[3] = v9;
    v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v22[5] = a2;
    v22[6] = a3;
    v22[7] = a4;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v9;
  }
  Handle = 0LL;
  *(_QWORD *)&v29.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v29.Buffer + 2) = 0;
  HIWORD(v29.Buffer) = 0;
  v29.Length = 0;
  v10 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v29, a2);
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_9;
  v26 = 2;
  v9 = CcdOpenRegistrySubkey_0(&Handle, 0xF003Fu, v28, &v29, &v26);
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v29);
  if ( (int)v9 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    v24[3] = v9;
    v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v24[5] = a2;
    v24[6] = a3;
    v24[7] = a4;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_6;
  }
  if ( v26 == 1 )
  {
    v33 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v32;
    v32 = *(_QWORD *)L"SetId";
    *(_DWORD *)&ValueName.Length = 786442;
    v25 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v9 = v25;
    if ( v25 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v23[3] = v9;
      v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
      v23[5] = a2;
      v23[6] = a3;
      v23[7] = a4;
      WdLogEvent5_WdError(v23);
      goto LABEL_6;
    }
  }
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v31, Handle, a2);
  v9 = a3(v31, a4);
  ZwClose(Handle);
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
  v20[3] = v9;
  v20[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
  v20[5] = a2;
  v20[6] = a3;
  v20[7] = a4;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v31);
LABEL_6:
  ZwClose(v28);
  return (unsigned int)v9;
}
