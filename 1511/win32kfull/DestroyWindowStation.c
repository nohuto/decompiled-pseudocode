/*
 * XREFs of DestroyWindowStation @ 0x1C00F4680
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 20) == 1 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
    v5 = (_QWORD *)grpWinStaList;
    v6 = grpWinStaList;
    if ( grpWinStaList )
    {
      do
      {
        if ( v1 == v6 )
          break;
        v5 = (_QWORD *)(v6 + 8);
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v6 );
      if ( *v5 )
      {
        v7 = *(_QWORD *)(v1 + 176);
        if ( v7 )
        {
          Win32FreePool(v7);
          *(_QWORD *)(v1 + 176) = 0LL;
          *(_DWORD *)(v1 + 168) = 0;
        }
        UnlockObjectAssignment(v5);
        *v5 = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
    }
    *(_DWORD *)(v1 + 32) |= 0x100u;
    if ( !v8 )
      UserSessionSwitchLeaveCrit(v4, v3);
  }
  return 0LL;
}
