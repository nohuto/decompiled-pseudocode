/*
 * XREFs of MiInitializeUnusablePfns @ 0x14013B8F0
 * Callers:
 *     MiInitializeDynamicPfnsTarget @ 0x1401E1D40 (MiInitializeDynamicPfnsTarget.c)
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 * Callees:
 *     MiPageToChannel @ 0x14001B5C0 (MiPageToChannel.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

unsigned __int64 __fastcall MiInitializeUnusablePfns(_QWORD *a1, unsigned __int64 a2, unsigned __int16 a3, char a4)
{
  _QWORD *v8; // rsi
  unsigned __int8 v9; // al
  char v10; // dl
  unsigned int v11; // r10d
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // al
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  __int16 v17; // r9
  unsigned __int64 result; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rbx
  _QWORD v26[6]; // [rsp+20h] [rbp-30h] BYREF

  memset(v26, 0, sizeof(v26));
  v8 = &a1[6 * a2];
  v9 = MiLockPageInline((__int64)v26);
  v10 = 6;
  v11 = 0;
  v12 = v9;
  if ( a4 >= 0 )
  {
    if ( (a4 & 0x40) != 0 )
    {
      v26[1] = 0xFFFFF68000000000uLL;
    }
    else
    {
      v10 = 5;
      if ( (a4 & 2) != 0 )
        v26[5] |= 0x10000000000000uLL;
    }
  }
  else
  {
    v26[1] = 0LL;
    v26[5] = v26[5] & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    _InterlockedIncrement64(&qword_140326AE0);
  }
  BYTE2(v26[4]) ^= (v10 ^ BYTE2(v26[4])) & 7;
  BYTE2(v26[4]) = BYTE2(v26[4]) & 0x3F | 0x40;
  v26[5] ^= (v26[5] ^ ((unsigned __int64)a3 << 40)) & 0x3FF0000000000LL;
  if ( (a4 & 2) != 0 )
  {
    v13 = 0;
  }
  else
  {
    MiPageToNode((__int64)(a1 + 0xB000000000LL) / 48, 0);
    v13 = MiPageToChannel((__int64)(a1 + 0xB000000000LL) / 48);
  }
  v26[5] = v26[5] & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v11 << 58);
  v14 = v26[5] ^ (v26[5] ^ ((unsigned __int64)v13 << 36)) & 0x3000000000LL;
  if ( (a4 & 0xC0) != 0 )
  {
    v26[3] = v26[3] & 0xC000000000000000uLL | 1;
    v26[2] = MiMakeDemandZeroPte(4LL, v26[3], v14, 2LL);
    v26[5] = v15 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    v26[0] = KeGetCurrentThread()->ApcState.Process;
    v26[3] = v16 | 0x4000000000000000LL;
    LOWORD(v26[4]) = v17;
    _InterlockedExchangeAdd64(&qword_140327928, a2);
    v14 = v26[5];
  }
  v26[5] = v14 | 0x20000000000000LL;
  _InterlockedAnd64(&v26[3], 0x7FFFFFFFFFFFFFFFuLL);
  result = v12;
  __writecr8(v12);
  if ( a1 != v8 )
  {
    v19 = v26[5];
    v20 = a1 + 2;
    v21 = v26[4];
    v22 = v26[3];
    v23 = v26[2];
    v24 = v26[1];
    v25 = v26[0];
    do
    {
      *(v20 - 2) = v25;
      *(v20 - 1) = v24;
      *v20 = v23;
      v20[1] = v22;
      v20[2] = v21;
      v20[3] = v19;
      v20 += 6;
      result = (unsigned __int64)(v20 - 2);
    }
    while ( v20 - 2 != v8 );
  }
  return result;
}
