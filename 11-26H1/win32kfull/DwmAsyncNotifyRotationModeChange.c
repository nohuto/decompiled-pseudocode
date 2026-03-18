/*
 * XREFs of DwmAsyncNotifyRotationModeChange @ 0x140347050
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncNotifyRotationModeChange(PVOID Object, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v5; // edi
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+48h] [rbp-10h]
  int v10; // [rsp+4Ch] [rbp-Ch]

  v3 = a2;
  v5 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    v8 = 0LL;
    LODWORD(v7[0]) = 3145736;
    WORD2(v7[0]) = 0x8000;
    v9 = 1073741880;
    v10 = v3;
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
