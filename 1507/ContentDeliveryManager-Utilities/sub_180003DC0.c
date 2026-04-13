/*
 * XREFs of sub_180003DC0 @ 0x180003DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002568 @ 0x180002568 (sub_180002568.c)
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180003DC0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  int v10; // r9d
  int v11; // edx
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, void *, _QWORD *); // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, void *, _QWORD *); // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+18h]
  _QWORD *v18; // [rsp+68h] [rbp+20h]

  *a2 = 0LL;
  v16 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  v4 = v3;
  v17 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_11:
    v10 = v5;
    v11 = 186;
LABEL_14:
    sub_1800025D0(retaddr, v11, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v10);
    goto LABEL_16;
  }
  v6 = v3 + 1;
  sub_180002654(v3 + 1);
  v4[7] = 1LL;
  *v4 = off_18002C398;
  *v6 = off_18002C238;
  v7 = v4 + 4;
  v4[4] = off_18002BC90;
  v8 = v4 + 5;
  v4[5] = off_18002BDA0;
  if ( qword_18003AC80 )
  {
    _InterlockedIncrement(&dword_18003AC88);
    v4 = v17;
  }
  *v4 = off_18002BB50;
  *v6 = off_18002BE78;
  *v7 = off_18002BEC0;
  *v8 = &off_18002BAB8;
  v18 = v4;
  v17 = 0LL;
  v9 = sub_180002F48(v8, (int)off_18002BEC0);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD *, void *, _QWORD))*v4)(v4, &unk_18002C570, &v16);
  }
  else
  {
    sub_180002568(retaddr, 146, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v9);
    if ( !v4 )
      goto LABEL_10;
  }
  (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
LABEL_10:
  if ( v5 < 0 )
    goto LABEL_11;
  v12 = (**v16)(v16, &unk_18002C570, a2);
  v5 = v12;
  if ( v12 < 0 )
  {
    v10 = v12;
    v11 = 187;
    goto LABEL_14;
  }
  v5 = 0;
LABEL_16:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v13)[2])(v13);
  }
  return (unsigned int)v5;
}
