/*
 * XREFs of sub_1800079F0 @ 0x1800079F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180004490 @ 0x180004490 (sub_180004490.c)
 *     sub_180006CE0 @ 0x180006CE0 (sub_180006CE0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_1800079F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // rdi
  int v7; // edx
  void *v8; // rcx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  v4 = (__int64)v3;
  if ( v3 )
  {
    v6 = v3 + 1;
    sub_180002654(v3 + 1);
    v9 = qword_18003AC80 == 0;
    *(_QWORD *)v4 = off_18002C858;
    *v6 = off_18002CA80;
    *(_QWORD *)(v4 + 32) = off_18002CE38;
    *(_QWORD *)(v4 + 40) = off_18002C9F8;
    *(_QWORD *)(v4 + 56) = 1LL;
    if ( !v9 )
      _InterlockedIncrement(&dword_18003AC88);
    *(_QWORD *)v4 = &off_18002C6E0;
    *v6 = off_18002CCB0;
    *(_QWORD *)(v4 + 32) = off_18002C738;
    *(_QWORD *)(v4 + 40) = off_18002CBA8;
    v10 = sub_180002F48(v8, v7);
    v5 = v10;
    if ( v10 >= 0 )
      v5 = sub_180006CE0(v4, &xmmword_18002BAA8, a2);
    else
      sub_1800025D0(
        retaddr,
        168,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        v10);
    sub_180004490((volatile signed __int64 *)v4, v11, v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
