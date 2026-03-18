/*
 * XREFs of ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01EF908
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EF020 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF6EC (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01EF784 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C01EF868 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED374 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 */

void __fastcall xxxUpdateModifierState(int a1, int a2)
{
  _DWORD *v2; // rbx
  int v4; // esi
  int v6; // edi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE v9[2]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v10; // [rsp+32h] [rbp-46h]

  v2 = &unk_1C02EAA94;
  v4 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits;
  v6 = 0;
  do
  {
    v7 = v4 & *(v2 - 1);
    if ( v7 != (a1 & *(v2 - 1)) )
    {
      v9[0] = *(_BYTE *)v2;
      v8 = *((_WORD *)v2 + 1);
      v10 = v8;
      if ( v7 )
        v10 = v8 | 0x8000;
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v9, 0, a2) )
        xxxProcessKeyEvent((struct tagKE *)v9, 0LL, 0, 0, 0LL);
    }
    ++v6;
    v2 += 2;
  }
  while ( (unsigned __int64)v6 < 8 );
}
