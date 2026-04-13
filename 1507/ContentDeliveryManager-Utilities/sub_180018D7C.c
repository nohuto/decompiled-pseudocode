/*
 * XREFs of sub_180018D7C @ 0x180018D7C
 * Callers:
 *     sub_18001865C @ 0x18001865C (sub_18001865C.c)
 * Callees:
 *     sub_18000A968 @ 0x18000A968 (sub_18000A968.c)
 *     sub_18000AA04 @ 0x18000AA04 (sub_18000AA04.c)
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180018D7C(__int64 *a1, __int64 *a2)
{
  char v4; // si
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // rdx
  _BYTE v9[104]; // [rsp+28h] [rbp-70h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = sub_180021148(0x10uLL);
    if ( v5 )
    {
      v6 = *a2;
      if ( *a2 )
      {
        v7 = *(void **)(v6 + 40);
        if ( !v7 )
          v7 = (void *)(v6 + 48);
      }
      else
      {
        v7 = &unk_18002B658;
      }
      sub_18000A968((__int64)v9, (__int64)v7);
      v4 = 1;
      *(_DWORD *)(v5 + 8) = 0;
      *(_QWORD *)v5 = off_18002DDA0;
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      sub_18000AA04((std::_Lockit *)v9);
  }
  return 4LL;
}
