/*
 * XREFs of DxgkEngDetectGDIPath @ 0x1403487E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140348168 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x140348550 (-OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?StateFlags@PDEVOBJ@@QEBAKXZ @ 0x140348624 (-StateFlags@PDEVOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall DxgkEngDetectGDIPath(__int64 a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v9; // edi
  HDEV i; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  HDEV v13; // rbx
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)UserIsRemoteConnection(a1, a2) )
    return 1LL;
  if ( ((_DWORD)a2[10] & 0x20000) != 0 )
  {
    v9 = 0;
    for ( i = 0LL; ; i = v13 )
    {
      v12 = hdevEnumerateDisplayOnly(i);
      v13 = (HDEV)v12;
      if ( !v12 )
        break;
      v15 = v12;
      if ( *(HDEV *)(v12 + 24) == a2 && (*(_DWORD *)(v12 + 40) & 0x20400) == 0 && !v9 )
      {
        if ( (PDEVOBJ::StateFlags((PDEVOBJ *)&v15) & 9) == 9 )
        {
          v9 = 1;
        }
        else
        {
          if ( *(_QWORD *)(*((_QWORD *)v13 + 321) + 232LL) == a1 && *((_DWORD *)v13 + 536) > 8u )
            v11 = InternalSpritesCollision(v13, a3, a4);
          else
            v11 = OverlapCheck(v13, a4);
          v9 = v11;
        }
      }
    }
  }
  else if ( *(_QWORD *)(*((_QWORD *)a2 + 321) + 232LL) == a1 && *((_DWORD *)a2 + 536) > 8u )
  {
    return (unsigned int)InternalSpritesCollision(a2, a3, a4);
  }
  else
  {
    return OverlapCheck(a2, a4);
  }
  return v9;
}
