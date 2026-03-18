/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00F6C00
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     IsSAS @ 0x1C00499E8 (IsSAS.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1)
{
  __int16 v2; // si
  unsigned __int8 v4; // di
  signed __int16 v5; // cx
  __int16 v6; // cx
  unsigned __int8 v7; // dl
  void *v8; // rax
  int v9; // ecx
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  int v12; // [rsp+78h] [rbp+10h] BYREF

  if ( byte_1C0328AF4 )
  {
    if ( byte_1C0328AF4 == *((_BYTE *)a1 + 2) )
    {
      v5 = *((_WORD *)a1 + 1);
      if ( v5 < 0 )
      {
        xxxKeyEvent(
          v5,
          *(unsigned __int8 *)a1,
          *((_DWORD *)a1 + 1),
          0LL,
          *((void **)a1 + 1),
          (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + 16),
          0,
          0,
          0LL);
        *((_WORD *)a1 + 1) = word_1C032F2AC;
        *(_BYTE *)a1 = byte_1C032F2AE;
        byte_1C0328AF4 = 0;
      }
      return 1LL;
    }
    xxxKeyEvent(
      word_1C032F2AC,
      (unsigned __int8)byte_1C032F2AE | 0x200,
      *((_DWORD *)a1 + 1),
      0LL,
      *((void **)a1 + 1),
      (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + 16),
      0,
      0,
      0LL);
    byte_1C0328AF4 = 0;
  }
  v2 = *((_WORD *)a1 + 1);
  if ( (v2 & 0x800) != 0 )
  {
    v4 = *((_BYTE *)a1 + 2);
    if ( !(unsigned int)IsSAS(v4, &v12) && (byte_1C03230F4 & 2) != 0 )
    {
      if ( (byte_1C03230D4 & 1) != 0 )
      {
        byte_1C0328AF4 = v4;
        if ( (byte_1C03230F8 & 4) != 0 )
        {
          v6 = 417;
          v7 = 54;
        }
        else
        {
          v6 = 160;
          v7 = 42;
        }
        byte_1C032F2AE = v7;
        v8 = (void *)*((_QWORD *)a1 + 1);
        word_1C032F2AC = v6;
        xxxKeyEvent(
          v6 | 0x8000,
          v7 | 0x200,
          *((_DWORD *)a1 + 1),
          0LL,
          v8,
          (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + 16),
          0,
          0,
          0LL);
      }
      else if ( (v2 & 0x2000) == 0 )
      {
        v9 = 0;
        v10 = ausNumPadCvt;
        v11 = 0LL;
        while ( *v10 != v4 )
        {
          ++v11;
          ++v9;
          v10 = &ausNumPadCvt[2 * v11];
          if ( !*(_WORD *)v10 )
            return 1LL;
        }
        *((_BYTE *)a1 + 2) = 0;
        *((_WORD *)a1 + 1) |= ausNumPadCvt[2 * v9 + 1];
      }
    }
  }
  return 1LL;
}
