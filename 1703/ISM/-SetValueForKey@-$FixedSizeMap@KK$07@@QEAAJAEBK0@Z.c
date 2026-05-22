/*
 * XREFs of ?SetValueForKey@?$FixedSizeMap@KK$07@@QEAAJAEBK0@Z @ 0x18003C320
 * Callers:
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18003BF8C (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18003C228 (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(__int64 a1, int *a2, _DWORD *a3)
{
  int v3; // r10d
  unsigned int v4; // ebx
  _DWORD *v5; // r9
  unsigned int v6; // r11d
  int v7; // edi
  int v8; // r9d
  unsigned int v9; // eax
  _DWORD *v10; // rdx

  v3 = *a2;
  v4 = 0;
  v5 = (_DWORD *)a1;
  v6 = 0;
  LOBYTE(a1) = 0;
  v7 = v5[16];
  if ( *a2 == v7 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 133;
LABEL_4:
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v8, v4);
    }
  }
  else
  {
    v9 = 0;
    v10 = v5;
    do
    {
      if ( *v10 == v3 )
      {
        v5[2 * v9 + 1] = *a3;
        return v4;
      }
      if ( !(_BYTE)a1 && *v10 == v7 )
      {
        v6 = v9;
        LOBYTE(a1) = 1;
      }
      ++v9;
      v10 += 2;
    }
    while ( v9 < 8 );
    if ( (_BYTE)a1 )
    {
      v5[2 * v6] = v3;
      v5[2 * v6 + 1] = *a3;
      return v4;
    }
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 163;
      goto LABEL_4;
    }
  }
  return v4;
}
