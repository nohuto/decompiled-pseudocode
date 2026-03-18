/*
 * XREFs of ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18017C570
 * Callers:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x18017C720 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x18017361C (-CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::CreateLockableTexture(CHwSolidColorTextureSource *this)
{
  __int128 v1; // xmm0
  CD3DDeviceLevel1 *v3; // rcx
  int LockableTexture; // eax
  unsigned int v5; // ebx
  struct CD3DLockableTexture *v7[2]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp+7h] BYREF
  int v9; // [rsp+50h] [rbp+17h]
  int v10; // [rsp+54h] [rbp+1Bh]
  int v11; // [rsp+58h] [rbp+1Fh]
  int v12; // [rsp+5Ch] [rbp+23h]
  int v13; // [rsp+60h] [rbp+27h]
  int v14; // [rsp+64h] [rbp+2Bh]
  int v15; // [rsp+68h] [rbp+2Fh]
  __int128 v16; // [rsp+70h] [rbp+37h]

  LODWORD(v7[1]) = 15;
  v7[0] = (struct CD3DLockableTexture *)"DWM Solid Color";
  v1 = *(_OWORD *)v7;
  v7[0] = 0LL;
  v16 = v1;
  memset_0(v8, 0, 0x2CuLL);
  v3 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 2);
  v11 = 0;
  v15 = 0;
  v8[0] = 0x100000001LL;
  v8[1] = 0x100000001LL;
  v9 = 87;
  v10 = 1;
  v12 = 2;
  v13 = 8;
  v14 = 0x10000;
  LockableTexture = CD3DDeviceLevel1::CreateLockableTexture(v3, (const struct DWM_TEXTURE2D_DESC *)v8, v7);
  v5 = LockableTexture;
  if ( LockableTexture < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LockableTexture, 0xE6u);
  else
    *((struct CD3DLockableTexture **)this + 13) = v7[0];
  return v5;
}
