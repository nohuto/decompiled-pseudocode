/*
 * XREFs of sub_18001D700 @ 0x18001D700
 * Callers:
 *     sub_18001A160 @ 0x18001A160 (sub_18001A160.c)
 *     sub_18001A250 @ 0x18001A250 (sub_18001A250.c)
 *     sub_18001A400 @ 0x18001A400 (sub_18001A400.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001AD40 @ 0x18001AD40 (sub_18001AD40.c)
 *     sub_18001D5FC @ 0x18001D5FC (sub_18001D5FC.c)
 */

char __fastcall sub_18001D700(__int64 a1, int a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  __int64 v5; // r12
  bool v6; // cl
  bool v7; // zf
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  int v9; // eax
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( a2 == 2 )
  {
    LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
    if ( (_DWORD)v3 == 1 )
    {
      v5 = a1 + 248;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 224) + 8LL))(
        *(_QWORD *)(a1 + 224),
        2LL,
        a3,
        a1 + 248);
      v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 220), 0xFFFFFFFF) == 1;
      LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
      if ( (_DWORD)v3 == 1 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 224) + 8LL))(
          *(_QWORD *)(a1 + 224),
          1LL,
          2147943623LL,
          v5);
        LODWORD(v3) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 220), 0xFFFFFFFF);
        v7 = (_DWORD)v3 == 1;
        LOBYTE(v3) = (_BYTE)v3 - 1;
        v6 = v7;
      }
      if ( v6 )
      {
        v8 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 224);
        if ( v8 )
          (**v8)(*(_QWORD *)(a1 + 224), 1LL);
        *(_QWORD *)(a1 + 224) = 0LL;
        if ( GetCurrentThreadId() != *(_DWORD *)(a1 + 280) )
          dword_18003AC28 = GetCurrentThreadId();
        _InterlockedAdd((volatile signed __int32 *)(a1 + 232), 1u);
        LOBYTE(v3) = sub_18001AD40(a1 + 8);
      }
    }
  }
  else if ( a2 == 1 )
  {
    LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
    if ( (_DWORD)v3 == 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 224) + 8LL))(
             *(_QWORD *)(a1 + 224),
             1LL,
             a3,
             a1 + 248);
      if ( v9 >= 0 && *(_BYTE *)(a1 + 257) )
      {
        LODWORD(v3) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 240), 0xFFFFFFFF);
        v7 = (_DWORD)v3 == 1;
        LOBYTE(v3) = (_BYTE)v3 - 1;
        if ( !v7 )
          return (char)v3;
        v10 = *(unsigned int *)(a1 + 244);
      }
      else
      {
        v10 = (unsigned int)v9;
      }
      LOBYTE(v3) = sub_18001D5FC(a1, v10);
    }
  }
  return (char)v3;
}
