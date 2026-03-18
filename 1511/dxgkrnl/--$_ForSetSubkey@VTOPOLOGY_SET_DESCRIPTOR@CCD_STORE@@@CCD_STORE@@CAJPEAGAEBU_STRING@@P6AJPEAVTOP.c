/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C005E674
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C005E110 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     sub_1C005D888 @ 0x1C005D888 (sub_1C005D888.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C005E650 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C005EE74 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     sub_1C005F2F8 @ 0x1C005F2F8 (sub_1C005F2F8.c)
 *     sub_1C005F34C @ 0x1C005F34C (sub_1C005F34C.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C0060C00 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0061B74 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int v26; // eax
  ULONG v27; // [rsp+30h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-89h] BYREF
  HANDLE v29; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING v30; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v32[80]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-1h] BYREF
  int v34; // [rsp+C8h] [rbp+7h]

  v29 = 0LL;
  v8 = sub_1C005F2F8(
         (int)&v29,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &v27);
  v10 = v8;
  if ( v8 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v23[3] = v10;
    v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v23[5] = a2;
    v23[6] = a3;
    v23[7] = a4;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v10;
  }
  Handle = 0LL;
  *(_QWORD *)&v30.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v30.Buffer + 2) = 0;
  HIWORD(v30.Buffer) = 0;
  v30.Length = 0;
  v11 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v30, a2);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_9;
  v27 = 2;
  v10 = (int)sub_1C005F34C(
               (int)&Handle,
               983103,
               (int)v29,
               (int)&v30,
               (PULONG)((unsigned __int64)&v27 & -(__int64)(a5 != 0)));
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v30);
  if ( (int)v10 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v25[3] = v10;
    v25[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v25[5] = a2;
    v25[6] = a3;
    v25[7] = a4;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_6;
  }
  if ( v27 == 1 )
  {
    v34 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v33;
    v33 = *(_QWORD *)L"SetId";
    *(_DWORD *)&ValueName.Length = 786442;
    v26 = sub_1C005D888(Handle, &ValueName, a2);
    v10 = v26;
    if ( v26 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v24[3] = v10;
      v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
      v24[5] = a2;
      v24[6] = a3;
      v24[7] = a4;
      WdLogEvent5_WdError(v24);
      goto LABEL_6;
    }
  }
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR((CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v32, Handle, a2);
  v10 = a3(v32, a4);
  ZwClose(Handle);
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
  v21[3] = v10;
  v21[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
  v21[5] = a2;
  v21[6] = a3;
  v21[7] = a4;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v32);
LABEL_6:
  ZwClose(v29);
  return (unsigned int)v10;
}
