/*
 * XREFs of sub_180004FEC @ 0x180004FEC
 * Callers:
 *     sub_1800031A8 @ 0x1800031A8 (sub_1800031A8.c)
 * Callees:
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 *     sub_180002AEC @ 0x180002AEC (sub_180002AEC.c)
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180004FEC(int (__fastcall ***a1)(__int64, void *, __int64), int a2, __int64 a3)
{
  HANDLE *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  signed int v7; // r14d
  _QWORD *v8; // rsi
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  DWORD v13; // r9d
  int v14; // eax
  __int64 v15; // rsi
  int (__fastcall **v16)(__int64, void *, __int64); // rbx
  __int64 v17; // rsi
  APTTYPE v19; // [rsp+20h] [rbp-38h]
  APTTYPEQUALIFIER v20; // [rsp+28h] [rbp-30h]
  HANDLE v21[4]; // [rsp+38h] [rbp-20h] BYREF
  int v22; // [rsp+98h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+48h] BYREF
  int (__fastcall ***v24)(__int64, void *, __int64); // [rsp+A8h] [rbp+50h]

  v23 = a3;
  v22 = a2;
  v24 = a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64)))(*a1)[1])(a1);
  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  v6 = v5;
  if ( v5 )
  {
    v8 = v5 + 1;
    sub_180002654(v5 + 1);
    *((_DWORD *)v6 + 9) = 1;
    *v6 = off_18002BEE0;
    *v8 = off_18002C438;
    if ( qword_18003AC80 )
    {
      _InterlockedIncrement(&dword_18003AC88);
      v4 = 0LL;
    }
    *v6 = off_18002C5F0;
    *v8 = off_18002C438;
    *((_DWORD *)v6 + 10) = 0;
    v6[6] = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    v6[6] = Event;
    if ( Event )
    {
      v7 = 0;
    }
    else
    {
      LastError = GetLastError();
      v7 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v7 = LastError;
    }
    v11 = *v6;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(v11 + 8))(v6);
      v4 = (HANDLE *)v6;
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v7 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v11 + 16))(v6);
    }
    v22 = v7;
    if ( v7 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64), HANDLE *))(*a1)[6])(a1, v4);
      v22 = v7;
      if ( v7 >= 0 )
      {
        v21[0] = v4[6];
        v21[1] = 0LL;
        v14 = sub_180002AEC(v12, v21, 1u, v13, v19, v20);
        v7 = v22;
        if ( v14 == -1 )
          v7 = -2147467259;
        v22 = v7;
        v15 = 0LL;
        v23 = 0LL;
        if ( v7 >= 0 && *((_DWORD *)v4 + 10) != 1 )
        {
          v16 = *a1;
          v17 = sub_1800056F0(&v23);
          if ( (*v16)((__int64)a1, &unk_18002C3D0, v17) >= 0 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 64LL))(v23, &v22);
          v15 = v23;
          v7 = v22;
        }
        if ( v15 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          v7 = v22;
        }
      }
    }
  }
  else
  {
    v7 = -2147024882;
    v22 = -2147024882;
  }
  if ( v4 )
    (*((void (__fastcall **)(HANDLE *))*v4 + 2))(v4);
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64)))(*a1)[2])(a1);
  return (unsigned int)v7;
}
