/*
 * XREFs of sub_18000AC84 @ 0x18000AC84
 * Callers:
 *     sub_180018340 @ 0x180018340 (sub_180018340.c)
 * Callees:
 *     sub_18000A968 @ 0x18000A968 (sub_18000A968.c)
 *     sub_18000AA04 @ 0x18000AA04 (sub_18000AA04.c)
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 *     sub_180021180 @ 0x180021180 (sub_180021180.c)
 *     sub_180022284 @ 0x180022284 (sub_180022284.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000AC84(__int64 *a1, __int64 *a2)
{
  char v4; // si
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // rdx
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  _BYTE v11[32]; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v12[48]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v13[104]; // [rsp+78h] [rbp-70h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = sub_180021148(0x60uLL);
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
      sub_18000A968((__int64)v13, (__int64)v7);
      v4 = 1;
      *(_DWORD *)(v5 + 8) = 0;
      *(_QWORD *)v5 = off_18002E1F0;
      v8 = (_OWORD *)sub_180022284(v11);
      *(_OWORD *)(v5 + 16) = *v8;
      *(_OWORD *)(v5 + 32) = v8[1];
      v9 = (_OWORD *)sub_180021180(v12);
      *(_OWORD *)(v5 + 48) = *v9;
      *(_OWORD *)(v5 + 64) = v9[1];
      *(_OWORD *)(v5 + 80) = v9[2];
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      sub_18000AA04((std::_Lockit *)v13);
  }
  return 2LL;
}
