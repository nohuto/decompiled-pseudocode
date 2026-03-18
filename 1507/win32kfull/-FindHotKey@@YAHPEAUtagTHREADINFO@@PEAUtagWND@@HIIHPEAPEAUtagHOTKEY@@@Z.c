/*
 * XREFs of ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C003DC18
 * Callers:
 *     _UnregisterHotKey @ 0x1C003D884 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall FindHotKey(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        struct tagHOTKEY **a7)
{
  struct tagHOTKEY * near *v7; // rsi
  unsigned __int8 v8; // r10
  unsigned int v10; // r11d
  struct tagHOTKEY *v11; // rdi
  struct tagHOTKEY * near *i; // rbx
  __int64 result; // rax
  struct tagHOTKEY **v14; // rax
  __int64 v15; // rcx
  struct tagSASKEY near **v16; // rax

  v7 = 0LL;
  v8 = a5 & 0x7F;
  v10 = 0;
  v11 = 0LL;
LABEL_2:
  for ( i = (&gphkHashTable)[v8]; ; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( !i )
    {
      if ( !a6 || (++v8, v8 >= 0x80u) )
      {
        result = v10;
        *a7 = v11;
        return result;
      }
      goto LABEL_2;
    }
    if ( *i == a1 && i[2] == a2 && *((_DWORD *)i + 8) == a3 )
      break;
LABEL_5:
    if ( *((_WORD *)i + 12) == (_WORD)a4 && *((_DWORD *)i + 7) == a5 )
      v10 = 1;
    v7 = i;
  }
  if ( !a6 )
  {
    v11 = (struct tagHOTKEY *)i;
    goto LABEL_5;
  }
  v14 = (struct tagHOTKEY **)i[5];
  if ( i == (&gphkHashTable)[v8] )
    (&gphkHashTable)[v8] = v14;
  else
    v7[5] = (struct tagHOTKEY *)v14;
  if ( a2 != (struct tagWND *)1 )
    HMAssignmentUnlock(i + 2);
  if ( *((__int16 *)i + 13) < 0 )
  {
    v15 = 0LL;
    v16 = &gSasKeyList;
    while ( *((_DWORD *)v16 + 1) != a5 || *(_DWORD *)v16 != a4 )
    {
      v15 = (unsigned int)(v15 + 1);
      ++v16;
      if ( (unsigned int)v15 >= 4 )
        goto LABEL_18;
    }
    if ( (unsigned int)v15 < 2 )
      memmove(&gSasKeyList + v15, &gSasKeyList + (unsigned int)(v15 + 1), 8LL * (unsigned int)(3 - v15));
    dword_1C032351C = 0;
    dword_1C0323518 = 0;
  }
LABEL_18:
  Win32FreePool(i);
  return 1LL;
}
