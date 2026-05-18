/*
 * XREFs of sub_180005540 @ 0x180005540
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800010DC @ 0x1800010DC (sub_1800010DC.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

int __fastcall sub_180005540(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+50h] [rbp-48h]
  __int64 v8; // [rsp+58h] [rbp-40h]
  __int64 v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  __int64 v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]

  if ( *(_DWORD *)a2 > 5u && (*(_QWORD *)(a2 + 16) & 0x400000000000LL) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 24) & 0x400000000000LL;
    if ( v4 == *(_QWORD *)(a2 + 24) )
    {
      v8 = 16LL;
      v7 = a1 + 16;
      v9 = a1 + 32;
      v11 = a1 + 36;
      v10 = 4LL;
      v12 = 4LL;
      LODWORD(v4) = sub_1800010DC(a2, (unsigned __int8 *)dword_180009990, a2, a4, 5u, &v6);
    }
  }
  return v4;
}
