/*
 * XREFs of ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01E897C
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 * Callees:
 *     <none>
 */

void CleanupDirtyDesktops(void)
{
  __int64 i; // rbx
  _DWORD *v1; // rdi
  __int64 v2; // rcx
  _QWORD *v3; // rcx
  _DWORD *v4; // rcx

  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    v1 = (_DWORD *)(i + 16);
    while ( 1 )
    {
      v4 = *(_DWORD **)v1;
      if ( !*(_QWORD *)v1 )
        break;
      if ( (v4[8] & 0x10) != 0 )
      {
        v1 = v4 + 4;
      }
      else
      {
        if ( grpdeskLogon == v4 )
          UnlockObjectAssignment(&grpdeskLogon);
        v2 = *(_QWORD *)(*(_QWORD *)(i + 24) + 8LL);
        if ( v2 )
        {
          v3 = (_QWORD *)(v2 + 24);
          if ( *v3 == *(_QWORD *)v1 )
            UnlockObjectAssignment(v3);
        }
        LockObjectAssignment(v1, *(_QWORD *)(*(_QWORD *)v1 + 16LL));
      }
    }
  }
}
