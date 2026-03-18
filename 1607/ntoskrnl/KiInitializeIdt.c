/*
 * XREFs of KiInitializeIdt @ 0x1403DD83C
 * Callers:
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 *     KiEnableKvaShadowing @ 0x1403DDF40 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiInitializeIdt(__int64 a1, char a2)
{
  int v2; // esi
  __int64 *v3; // r9
  int v4; // ebp
  __int64 v5; // r8
  __int64 v6; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  char *v11; // rcx
  unsigned __int64 v12; // rcx
  __int16 v13; // ax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int16 v16; // dx
  __int16 v17; // cx
  __int16 v18; // ax

  v2 = KiBootDebuggerActive;
  v3 = &KiInterruptInitTable;
  v4 = KiSystemCallSelector;
  v5 = a1 + 4;
  v6 = 0LL;
  KiDebugTrapIndex = 0;
  v8 = 0LL;
  do
  {
    if ( v2 )
    {
      if ( (unsigned int)v8 <= 0x2D )
      {
        v9 = 0x30000000600ALL;
        if ( _bittest64(&v9, v8) )
        {
          result = *(unsigned __int8 *)v3;
          if ( (_DWORD)v8 != (_DWORD)result )
            goto LABEL_20;
          goto LABEL_6;
        }
      }
    }
    v11 = (char *)KiIsrThunkShadow;
    if ( !a2 )
      v11 = (char *)KxUnexpectedInterrupt0;
    v12 = (unsigned __int64)&v11[8 * v8];
    if ( v4 == 1 || (_DWORD)v8 != 46 )
    {
      if ( (_DWORD)v8 == *(unsigned __int8 *)v3 )
      {
        if ( a2 )
          v15 = v3[2];
        else
          v15 = v3[1];
        *(_WORD *)(v5 - 4) = v15;
        *(_WORD *)(v5 - 2) = 16;
        v16 = *(_WORD *)v5 & 0xEEF8 | *((_BYTE *)v3 + 2) & 7 | 0xE00;
        *(_WORD *)v5 = v16;
        v17 = v16 & 0x1FFF | ((*((_BYTE *)v3 + 1) & 3 | 4) << 13);
        *(_WORD *)(v5 + 2) = WORD1(v15);
        result = HIDWORD(v15);
        *(_DWORD *)(v5 + 4) = HIDWORD(v15);
        *(_WORD *)v5 = v17;
        if ( *((_BYTE *)v3 + 1) )
        {
          KiDebugTraps[v6] = v15;
          v6 = (unsigned int)(v6 + 1);
        }
LABEL_6:
        v3 += 3;
        goto LABEL_20;
      }
      v18 = *(_WORD *)v5 & 0xF8;
      *(_WORD *)(v5 - 4) = v12;
      *(_WORD *)v5 = v18 | 0x8E00;
      result = v12 >> 16;
      v14 = HIDWORD(v12);
    }
    else
    {
      v13 = *(_WORD *)v5 & 0xF8;
      *(_WORD *)(v5 - 4) = v12;
      *(_WORD *)v5 = v13 | 0x8E00;
      result = v12 >> 16;
      v14 = HIDWORD(v12);
      v3 += 3;
    }
    *(_DWORD *)(v5 + 4) = v14;
    *(_WORD *)(v5 + 2) = result;
    *(_WORD *)(v5 - 2) = 16;
LABEL_20:
    v8 = (unsigned int)(v8 + 1);
    v5 += 16LL;
  }
  while ( (unsigned int)v8 <= 0xFF );
  KiDebugTrapIndex = v6;
  return result;
}
