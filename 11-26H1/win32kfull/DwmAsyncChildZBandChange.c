/*
 * XREFs of DwmAsyncChildZBandChange @ 0x140179E1C
 * Callers:
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x140179DA0 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncChildZBandChange(PVOID Object, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v6; // ebx
  _OWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+4Ch] [rbp-1Ch]
  int v12; // [rsp+54h] [rbp-14h]

  v3 = a3;
  v6 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    memset(v8, 0, sizeof(v8));
    WORD2(v8[0]) = 0x8000;
    v9 = 0LL;
    LODWORD(v8[0]) = 3670032;
    v10 = 1073741847;
    v11 = a2;
    v12 = v3;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
