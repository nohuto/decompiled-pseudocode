/*
 * XREFs of sub_1800199B8 @ 0x1800199B8
 * Callers:
 *     sub_18000DF5C @ 0x18000DF5C (sub_18000DF5C.c)
 * Callees:
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 *     sub_180002AEC @ 0x180002AEC (sub_180002AEC.c)
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800199B8(int (__fastcall ***a1)(__int64, void *, __int64 *), int a2, __int64 a3)
{
  HANDLE *v4; // rdi
  _QWORD *v5; // rbx
  signed int v6; // r14d
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  DWORD v11; // r9d
  int v12; // eax
  __int64 v13; // rsi
  int (__fastcall **v14)(__int64, void *, __int64 *); // rbx
  __int64 *v15; // rsi
  APTTYPE v17; // [rsp+20h] [rbp-38h]
  APTTYPEQUALIFIER v18; // [rsp+28h] [rbp-30h]
  HANDLE v19[4]; // [rsp+38h] [rbp-20h] BYREF
  int v20; // [rsp+98h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+48h] BYREF
  int (__fastcall ***v22)(__int64, void *, __int64 *); // [rsp+A8h] [rbp+50h]

  v21 = a3;
  v20 = a2;
  v22 = a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64 *)))(*a1)[1])(a1);
  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v5 )
  {
    *v5 = &off_18002BFD8;
    sub_180002654(v5 + 1);
    *((_DWORD *)v5 + 9) = 1;
    *v5 = off_18002DB88;
    v5[1] = off_18002CF80;
    if ( qword_18003AC80 )
    {
      _InterlockedIncrement(&dword_18003AC88);
      v4 = 0LL;
    }
    *v5 = off_18002E130;
    v5[1] = off_18002CF80;
    *((_DWORD *)v5 + 10) = 0;
    v5[6] = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    v5[6] = Event;
    if ( Event )
    {
      v6 = 0;
    }
    else
    {
      LastError = GetLastError();
      v6 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v6 = LastError;
    }
    v9 = *v5;
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(v9 + 8))(v5);
      v4 = (HANDLE *)v5;
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v6 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v9 + 16))(v5);
    }
    v20 = v6;
    if ( v6 >= 0 )
    {
      v6 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64 *), HANDLE *))(*a1)[6])(a1, v4);
      v20 = v6;
      if ( v6 >= 0 )
      {
        v19[0] = v4[6];
        v19[1] = 0LL;
        v12 = sub_180002AEC(v10, v19, 1u, v11, v17, v18);
        v6 = v20;
        if ( v12 == -1 )
          v6 = -2147467259;
        v20 = v6;
        v13 = 0LL;
        v21 = 0LL;
        if ( v6 >= 0 && *((_DWORD *)v4 + 10) != 1 )
        {
          v14 = *a1;
          v15 = sub_1800056F0(&v21);
          if ( (*v14)((__int64)a1, &unk_18002C3D0, v15) >= 0 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 64LL))(v21, &v20);
          v13 = v21;
          v6 = v20;
        }
        if ( v13 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v6 = v20;
        }
      }
    }
  }
  else
  {
    v6 = -2147024882;
    v20 = -2147024882;
  }
  if ( v4 )
    (*((void (__fastcall **)(HANDLE *))*v4 + 2))(v4);
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64 *)))(*a1)[2])(a1);
  return (unsigned int)v6;
}
