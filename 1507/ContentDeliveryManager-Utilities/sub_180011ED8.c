/*
 * XREFs of sub_180011ED8 @ 0x180011ED8
 * Callers:
 *     sub_18000DDA8 @ 0x18000DDA8 (sub_18000DDA8.c)
 * Callees:
 *     sub_18000B37C @ 0x18000B37C (sub_18000B37C.c)
 *     sub_18000B438 @ 0x18000B438 (sub_18000B438.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800146D4 @ 0x1800146D4 (sub_1800146D4.c)
 *     sub_18001865C @ 0x18001865C (sub_18001865C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180011ED8(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r14
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  char v19; // [rsp+58h] [rbp-60h]
  __int64 v20; // [rsp+60h] [rbp-58h] BYREF
  bool v21; // [rsp+68h] [rbp-50h]
  __int64 v22; // [rsp+70h] [rbp-48h]
  _BYTE v24[56]; // [rsp+80h] [rbp-38h] BYREF
  int v26; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v26 = 0;
  v22 = a1;
  v4 = *(int *)(*(_QWORD *)a1 + 4LL);
  v5 = *(_QWORD *)(v4 + a1 + 72);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(v4 + a1 + 72));
  if ( (unsigned __int8)sub_1800146D4(v3) )
  {
    v6 = sub_18000B438(v3 + *(int *)(*(_QWORD *)v3 + 4LL), &v27);
    v7 = sub_18001865C(v6);
    if ( v27 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    try
    {
      v9 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
      v18 = 0LL;
      v19 = 1;
      v20 = *(_QWORD *)(v9 + 72);
      v21 = v20 == 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64 *, __int64 *, __int64, int *, __int64))(*(_QWORD *)v7 + 88LL))(
        v7,
        v24,
        &v20,
        &v18,
        v9,
        &v26,
        a2);
    }
    catch ( ... )
    {
      v15 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v16 = *(_DWORD *)(v15 + 16) | 4;
      v17 = v16 & 0x17;
      *(_DWORD *)(v15 + 16) = v17;
      if ( (v17 & *(_DWORD *)(v15 + 20)) != 0 )
        throw;
      v3 = a1;
    }
  }
  v10 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
  if ( v26 )
  {
    v11 = v26 | *(_DWORD *)(v10 + 16);
    if ( !*(_QWORD *)(v10 + 72) )
      LOBYTE(v11) = v11 | 4;
    sub_18000B37C(v10, v11, 0);
  }
  v12 = *(int *)(*(_QWORD *)v3 + 4LL);
  v13 = *(_QWORD *)(v12 + v3 + 72);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(*(_QWORD *)(v12 + v3 + 72));
  return v3;
}
