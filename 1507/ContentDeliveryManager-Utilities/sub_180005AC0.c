/*
 * XREFs of sub_180005AC0 @ 0x180005AC0
 * Callers:
 *     sub_18000384C @ 0x18000384C (sub_18000384C.c)
 * Callees:
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180005AC0(int (__fastcall ***a1)(__int64, void *, __int64 *), HRESULT a2, __int64 a3)
{
  HANDLE *v4; // rdi
  _QWORD *v5; // rbx
  HANDLE Event; // rax
  signed int LastError; // eax
  signed int v8; // r15d
  __int64 v9; // rax
  char v10; // bl
  __int64 v11; // rsi
  int (__fastcall **v12)(__int64, void *, __int64 *); // rbx
  __int64 *v13; // rsi
  __int64 (__fastcall **v14)(__int64, void *, __int64 *); // rbx
  __int64 *v15; // rax
  int v16; // eax
  unsigned int v17; // esi
  HANDLE pHandles[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v20; // [rsp+90h] [rbp+38h] BYREF
  HRESULT v21; // [rsp+98h] [rbp+40h] BYREF
  __int64 dwindex; // [rsp+A0h] [rbp+48h] BYREF
  HANDLE *v23; // [rsp+A8h] [rbp+50h]

  dwindex = a3;
  v21 = a2;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64 *)))(*a1)[1])(a1);
  v4 = 0LL;
  v23 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v5 )
  {
    *v5 = &off_18002BFD8;
    sub_180002654(v5 + 1);
    *((_DWORD *)v5 + 9) = 1;
    *v5 = off_18002BD10;
    v5[1] = off_18002C0A8;
    if ( qword_18003AC80 )
    {
      _InterlockedIncrement(&dword_18003AC88);
      v4 = v23;
    }
    *v5 = off_18002C580;
    v5[1] = off_18002C0A8;
    *((_DWORD *)v5 + 10) = 0;
    v5[6] = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    v5[6] = Event;
    if ( Event )
    {
      v8 = 0;
    }
    else
    {
      LastError = GetLastError();
      v8 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v8 = LastError;
    }
    v9 = *v5;
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(v9 + 8))(v5);
      v4 = (HANDLE *)v5;
      v23 = (HANDLE *)v5;
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v8 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v9 + 16))(v5);
    }
    v21 = v8;
    if ( v8 >= 0 )
    {
      v21 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64 *), HANDLE *))(*a1)[6])(a1, v4);
      if ( v21 >= 0 )
      {
        pHandles[0] = v4[6];
        pHandles[1] = 0LL;
        v10 = 0;
        v21 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, pHandles, (LPDWORD)&dwindex);
        if ( v21 >= 0 && (_DWORD)dwindex )
        {
          v21 = -2147023673;
          v10 = 1;
        }
        v11 = 0LL;
        v20 = 0LL;
        if ( v10 )
        {
          v12 = *a1;
          v13 = sub_1800056F0(&v20);
          if ( (*v12)((__int64)a1, &unk_18002C3D0, v13) >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
          v11 = v20;
        }
        if ( v21 >= 0 && *((_DWORD *)v4 + 10) != 1 )
        {
          if ( v11
            || (v14 = (__int64 (__fastcall **)(__int64, void *, __int64 *))*a1,
                v15 = sub_1800056F0(&v20),
                v16 = (*v14)((__int64)a1, &unk_18002C3D0, v15),
                v11 = v20,
                v16 >= 0) )
          {
            (*(void (__fastcall **)(__int64, HRESULT *))(*(_QWORD *)v11 + 64LL))(v11, &v21);
            v11 = v20;
          }
        }
        if ( v11 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
  }
  else
  {
    v21 = -2147024882;
  }
  v17 = v21;
  if ( v4 )
    (*((void (__fastcall **)(HANDLE *))*v4 + 2))(v4);
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, void *, __int64 *)))(*a1)[2])(a1);
  return v17;
}
