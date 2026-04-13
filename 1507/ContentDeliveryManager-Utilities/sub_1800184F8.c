/*
 * XREFs of sub_1800184F8 @ 0x1800184F8
 * Callers:
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180019218 @ 0x180019218 (sub_180019218.c)
 *     sub_18001DE54 @ 0x18001DE54 (sub_18001DE54.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800184F8(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  void *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // r14
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v13[1] = -2LL;
  v7 = operator new(0x70uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v7 )
    v8 = (void (__fastcall ***)(_QWORD, __int64))sub_180019218(v7, a4);
  else
    v8 = 0LL;
  v15 = 0;
  v13[0] = L"Windows.Foundation.IAsyncAction";
  *a2 = 0LL;
  v9 = v8 == 0LL ? 0x8007000E : 0;
  if ( !v8 )
    return v9;
  ((void (__fastcall *)(__int64 *, __int64, _QWORD *, int *))sub_18001DE54)(&v14, a1, v13, &v15);
  v10 = v14;
  v9 = v14 == 0 ? 0x8007000E : 0;
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 224) = v8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
  v8 = 0LL;
  if ( (v9 & 0x80000000) == 0 )
  {
    v11 = v10;
    v10 = 0LL;
    v14 = 0LL;
    if ( v11 )
      v11 += 152LL;
    *a2 = v11;
LABEL_10:
    if ( v8 )
      (**v8)(v8, 1LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
  return v9;
}
