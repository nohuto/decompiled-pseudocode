/*
 * XREFs of DwmAsyncActivationChange @ 0x140122DE0
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncActivationChange(PVOID Object, __int64 a2, __int64 a3)
{
  int v3; // ebp
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
    v9 = 0LL;
    WORD2(v8[0]) = 0x8000;
    LODWORD(v8[0]) = 3670032;
    v10 = 1073741836;
    v11 = a2;
    v12 = v3;
    EtwUpdateEvent(a2);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
