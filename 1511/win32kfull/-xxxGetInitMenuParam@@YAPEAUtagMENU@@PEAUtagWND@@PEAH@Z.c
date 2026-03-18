/*
 * XREFs of ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01FD368
 * Callers:
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 * Callees:
 *     <none>
 */

struct tagMENU *__fastcall xxxGetInitMenuParam(struct tagWND *a1, int *a2)
{
  char v2; // al
  __int64 v3; // rax

  v2 = *((_BYTE *)a1 + 55);
  if ( (v2 & 0x20) != 0 || (v2 & 0xC0) == 0x40 || (v3 = *((_QWORD *)a1 + 24)) == 0 || !*(_DWORD *)(v3 + 52) )
  {
    if ( a2 )
      *a2 = 1;
    return (struct tagMENU *)xxxGetSysMenu(a1, 0);
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return (struct tagMENU *)*((_QWORD *)a1 + 24);
  }
}
