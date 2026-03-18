/*
 * XREFs of BcpGetMessageOffsets @ 0x140220240
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x140220678 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BcpDisplayProgress @ 0x14022005C (BcpDisplayProgress.c)
 *     BcpSetCursorPosition @ 0x1402204A4 (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpGetMessageOffsets(unsigned int *a1, _DWORD *a2, unsigned int a3, char a4)
{
  int v5; // r10d
  _DWORD *v7; // rdi
  int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // ebx
  int v12; // ecx
  __int64 v14; // [rsp+20h] [rbp-38h]

  v5 = 0;
  v7 = (_DWORD *)((char *)&unk_1402CF700 + 56 * (int)a3);
  *(_QWORD *)a1 = BcpCursor;
  v9 = dword_1403352A0;
  a1[2] = dword_1403352A0;
  v14 = *(_QWORD *)a1;
  if ( a4 )
  {
    dword_1402D4BB0 |= 0x1000000u;
    v10 = HIDWORD(v14);
    v11 = 0;
    while ( 1 )
    {
      v5 = BcpDisplayProgress(v11, a3, a3);
      if ( v5 < 0 )
        break;
      if ( __PAIR64__(v10, v14) < ProgressEnd )
      {
        v9 = dword_1402D4A88;
        LODWORD(v14) = ProgressEnd;
        v10 = HIDWORD(ProgressEnd);
      }
      BcpSetCursorPosition(*a1, a1[1], a1 + 2);
      if ( ++v11 > 0x64 )
      {
        dword_1402D4BB0 &= ~0x1000000u;
        goto LABEL_8;
      }
    }
  }
  else
  {
LABEL_8:
    *a2 = v7[3] + v7[7];
    v12 = v9 + v7[10];
    a2[1] = v12;
    a2[2] = v12;
  }
  return (unsigned int)v5;
}
