/*
 * XREFs of ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C008A958
 * Callers:
 *     _UnregisterHotKey @ 0x1C008A5A4 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C008A6EC (_RegisterHotKey.c)
 * Callees:
 *     <none>
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
  unsigned int v15; // ecx
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
    v15 = 0;
    v16 = &gSasKeyList;
    while ( *((_DWORD *)v16 + 1) != a5 || *(_DWORD *)v16 != a4 )
    {
      ++v15;
      ++v16;
      if ( v15 >= 2 )
        goto LABEL_18;
    }
    dword_1C03217AC = 0;
    dword_1C03217A8 = 0;
  }
LABEL_18:
  Win32FreePool(i);
  return 1LL;
}
