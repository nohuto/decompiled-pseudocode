/*
 * XREFs of sub_18000EDF0 @ 0x18000EDF0
 * Callers:
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 *     sub_180019690 @ 0x180019690 (sub_180019690.c)
 *     sub_180027029 @ 0x180027029 (sub_180027029.c)
 * Callees:
 *     sub_180007270 @ 0x180007270 (sub_180007270.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

HRESULT __fastcall sub_18000EDF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  HRESULT result; // eax
  __int64 v6; // rsi
  HSTRING v7; // rcx
  HSTRING v8; // rcx
  HSTRING v9; // rcx
  HSTRING v10; // rcx
  volatile signed __int64 *v11; // rcx

  v3 = a1[12];
  if ( v3 )
  {
    a1[12] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v6 = a1[11];
  if ( v6 )
  {
    a1[11] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (HSTRING)a1[9];
  if ( v7 )
    result = WindowsDeleteString(v7);
  v8 = (HSTRING)a1[7];
  if ( v8 )
    result = WindowsDeleteString(v8);
  v9 = (HSTRING)a1[5];
  if ( v9 )
    result = WindowsDeleteString(v9);
  v10 = (HSTRING)a1[3];
  if ( v10 )
    result = WindowsDeleteString(v10);
  v11 = (volatile signed __int64 *)a1[1];
  if ( v11 )
  {
    a1[1] = 0LL;
    return sub_180007270(v11, a2, a3);
  }
  return result;
}
