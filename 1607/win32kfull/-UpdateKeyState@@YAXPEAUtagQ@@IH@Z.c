/*
 * XREFs of ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C0114130
 * Callers:
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C00579F0 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateKeyState(struct tagQ *a1, unsigned int a2, int a3)
{
  int v5; // edx
  unsigned __int64 v6; // rcx
  char v7; // r8
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax

  if ( a3 )
  {
    v5 = a2 & 3;
    v6 = (unsigned __int64)(unsigned __int8)a2 >> 2;
    v7 = 2 * v5;
    v8 = *((unsigned __int8 *)a1 + v6 + 192);
    if ( !_bittest(&v8, 2 * v5) )
    {
      v9 = 2 * v5 + 1;
      if ( _bittest(&v8, v9) )
        v10 = v8 & ~(1 << v9);
      else
        v10 = v8 | (1 << v9);
      *((_BYTE *)a1 + v6 + 192) = v10;
    }
    *((_BYTE *)a1 + v6 + 192) |= 1 << v7;
  }
  else
  {
    *((_BYTE *)a1 + ((unsigned __int64)(unsigned __int8)a2 >> 2) + 192) &= ~(1 << (2 * (a2 & 3)));
  }
  if ( a2 < 0x20 )
    ++*(_DWORD *)(gpsi + 5640LL);
}
