/*
 * XREFs of GreUpdatePointerState @ 0x14029093C
 * Callers:
 *     GreHidePointer @ 0x1400A4E00 (GreHidePointer.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreUpdatePointerState(__int64 a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  __int128 v3; // rax
  int v4; // ecx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // eax
  int v9; // ecx
  int v10; // ecx

  v1 = a1;
  v2 = 0;
  *(_QWORD *)&v3 = PsGetCurrentProcessWin32Process(a1);
  v5 = v3;
  if ( (_QWORD)v3 )
  {
    v3 = -(__int128)*(unsigned __int64 *)v3;
    v5 &= *((_QWORD *)&v3 + 1);
  }
  v6 = *(_QWORD *)(W32GetSessionState(v4, *((_QWORD *)&v3 + 1)) + 96);
  if ( v5 )
  {
    if ( v1 )
    {
      if ( (*(_DWORD *)(v5 + 12) & 0x40000000) == 0 )
      {
        v7 = *(_DWORD *)(v6 + 72);
        if ( v7 != -1 )
        {
          *(_DWORD *)(v6 + 72) = v7 + 1;
          *(_DWORD *)(v5 + 12) |= 0x40000000u;
          LOBYTE(v2) = v7 == 0;
        }
      }
    }
    else
    {
      v8 = *(_DWORD *)(v5 + 12);
      if ( (v8 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v5 + 12) = v8 & 0xBFFFFFFF;
        v9 = *(_DWORD *)(v6 + 72);
        if ( v9 )
        {
          v10 = v9 - 1;
          *(_DWORD *)(v6 + 72) = v10;
          if ( !v10 )
            return 1;
        }
      }
    }
  }
  return v2;
}
