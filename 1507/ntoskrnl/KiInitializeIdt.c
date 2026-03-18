/*
 * XREFs of KiInitializeIdt @ 0x140401BAC
 * Callers:
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 *     KiEnableKvaShadowing @ 0x1404028EC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiInitializeIdt(__int64 a1, char a2)
{
  int v2; // esi
  __int64 *v3; // r9
  __int64 v4; // r11
  __int64 v5; // r10
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 result; // rax
  char *v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int16 v13; // dx
  __int16 v14; // cx
  __int16 v15; // ax

  v2 = KiBootDebuggerActive;
  v3 = &KiInterruptInitTable;
  v4 = 0LL;
  v5 = a1 + 4;
  KiDebugTrapIndex = 0;
  v7 = 0LL;
  do
  {
    if ( v2 )
    {
      if ( (unsigned int)v7 <= 0x2D )
      {
        v8 = 0x30000000600ALL;
        if ( _bittest64(&v8, v7) )
        {
          result = *(unsigned __int8 *)v3;
          if ( (_DWORD)v7 != (_DWORD)result )
            goto LABEL_16;
          goto LABEL_6;
        }
      }
    }
    v10 = (char *)KiIsrThunkShadow;
    if ( !a2 )
      v10 = (char *)KxUnexpectedInterrupt0;
    v11 = (unsigned __int64)&v10[8 * v7];
    if ( (_DWORD)v7 == *(unsigned __int8 *)v3 )
    {
      if ( a2 )
        v12 = v3[2];
      else
        v12 = v3[1];
      *(_WORD *)(v5 - 4) = v12;
      *(_WORD *)(v5 - 2) = 16;
      v13 = *(_WORD *)v5 & 0xEEF8 | *((_BYTE *)v3 + 2) & 7 | 0xE00;
      *(_WORD *)v5 = v13;
      v14 = v13 & 0x1FFF | ((*((_BYTE *)v3 + 1) & 3 | 4) << 13);
      *(_WORD *)(v5 + 2) = WORD1(v12);
      result = HIDWORD(v12);
      *(_DWORD *)(v5 + 4) = HIDWORD(v12);
      *(_WORD *)v5 = v14;
      if ( *((_BYTE *)v3 + 1) )
      {
        KiDebugTraps[v4] = v12;
        v4 = (unsigned int)(v4 + 1);
      }
LABEL_6:
      v3 += 3;
      goto LABEL_16;
    }
    v15 = *(_WORD *)v5 & 0xF8;
    *(_WORD *)(v5 - 4) = v11;
    *(_WORD *)(v5 - 2) = 16;
    *(_WORD *)v5 = v15 | 0x8E00;
    result = v11 >> 16;
    *(_DWORD *)(v5 + 4) = HIDWORD(v11);
    *(_WORD *)(v5 + 2) = WORD1(v11);
LABEL_16:
    v7 = (unsigned int)(v7 + 1);
    v5 += 16LL;
  }
  while ( (unsigned int)v7 <= 0xFF );
  KiDebugTrapIndex = v4;
  return result;
}
