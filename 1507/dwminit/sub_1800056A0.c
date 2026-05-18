/*
 * XREFs of sub_1800056A0 @ 0x1800056A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800010DC @ 0x1800010DC (sub_1800010DC.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

int __fastcall sub_1800056A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  if ( *(_DWORD *)a2 > 5u && (*(_QWORD *)(a2 + 16) & 0x400000000000LL) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 24) & 0x400000000000LL;
    if ( v4 == *(_QWORD *)(a2 + 24) )
    {
      v7 = a1 + 16;
      v9 = 0;
      v8 = 16;
      v10 = a1 + 32;
      v12 = 0;
      v11 = 4;
      LODWORD(v4) = sub_1800010DC(a2, (unsigned __int8 *)dword_1800098FA, a2, a4, 4u, &v6);
    }
  }
  return v4;
}
