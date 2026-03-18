/*
 * XREFs of KiInitializeIdt @ 0x1403B134C
 * Callers:
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 *     KiEnableKvaShadowing @ 0x1403B186C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiInitializeIdt(__int64 a1, char a2)
{
  int v2; // edi
  __int64 *v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  char *v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r11
  __int16 v12; // dx
  __int16 v13; // cx
  __int16 v14; // ax

  v2 = KiBootDebuggerActive;
  v3 = &KiInterruptInitTable;
  v4 = 0LL;
  v5 = a1 + 4;
  do
  {
    if ( v2 && (unsigned int)v4 <= 0x2D && (v7 = 0x30000000600ALL, _bittest64(&v7, v4)) )
    {
      result = *(unsigned __int8 *)v3;
      if ( (_DWORD)v4 == (_DWORD)result )
        v3 += 3;
    }
    else
    {
      v9 = (char *)KiIsrThunkShadow;
      if ( !a2 )
        v9 = (char *)KxUnexpectedInterrupt0;
      v10 = (unsigned __int64)&v9[8 * v4];
      if ( (_DWORD)v4 == *(unsigned __int8 *)v3 )
      {
        if ( a2 )
          v11 = v3[2];
        else
          v11 = v3[1];
        *(_WORD *)(v5 - 4) = v11;
        *(_WORD *)(v5 - 2) = 16;
        v12 = *(_WORD *)v5 & 0xEEF8 | *((_BYTE *)v3 + 2) & 7 | 0xE00;
        *(_WORD *)v5 = v12;
        v13 = v12 & 0x1FFF | ((*((_BYTE *)v3 + 1) & 3 | 4) << 13);
        result = v11 >> 16;
        v3 += 3;
        *(_WORD *)v5 = v13;
        *(_DWORD *)(v5 + 4) = HIDWORD(v11);
      }
      else
      {
        v14 = *(_WORD *)v5 & 0xF8;
        *(_WORD *)(v5 - 4) = v10;
        *(_WORD *)(v5 - 2) = 16;
        *(_WORD *)v5 = v14 | 0x8E00;
        result = v10 >> 16;
        *(_DWORD *)(v5 + 4) = HIDWORD(v10);
      }
      *(_WORD *)(v5 + 2) = result;
    }
    v4 = (unsigned int)(v4 + 1);
    v5 += 16LL;
  }
  while ( (unsigned int)v4 <= 0xFF );
  return result;
}
