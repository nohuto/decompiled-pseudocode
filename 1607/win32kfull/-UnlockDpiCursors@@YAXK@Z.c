/*
 * XREFs of ?UnlockDpiCursors@@YAXK@Z @ 0x1C008E174
 * Callers:
 *     UpdateCursorSizes @ 0x1C008ED20 (UpdateCursorSizes.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlockDpiCursors(int a1)
{
  int v1; // ebx
  int v2; // esi
  unsigned __int16 v3; // ax
  __int64 v4; // rbp
  __int64 v5; // r14
  int v6; // ecx
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 i; // rax
  __int64 ProcessWin32Process; // rax
  _DWORD *v13; // rcx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v1 = 32;
  if ( a1 )
  {
    v8 = a1 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            v2 = 128;
          else
            v2 = 0;
        }
        else
        {
          v2 = 96;
        }
      }
      else
      {
        v2 = 64;
      }
    }
    else
    {
      v2 = 48;
    }
  }
  else
  {
    v2 = 32;
  }
  v3 = *(_WORD *)(gpsi + 8678LL);
  if ( v3 >= 0x90u )
  {
    if ( v3 >= 0xC0u )
    {
      if ( v3 >= 0x120u )
        v1 = v3 < 0x180u ? 96 : 128;
      else
        v1 = 64;
    }
    else
    {
      v1 = 48;
    }
  }
  v4 = 0LL;
  v5 = 17LL;
  do
  {
    v6 = v2;
    v7 = *(_QWORD *)(gasyscur[0] + v4 + 8);
    v14 = 0LL;
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 76) == v2 )
      {
        v6 = v1;
        *(_DWORD *)(v7 + 76) = v1;
      }
      for ( i = *(_QWORD *)(v7 + 40); i && *(_DWORD *)(i + 76) != v6; i = *(_QWORD *)(i + 40) )
        v7 = i;
      v14 = *(_QWORD *)(v7 + 40);
      if ( v14 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        FixupGlobalCursor(v14, ProcessWin32Process);
        v13 = *(_DWORD **)(v7 + 40);
        if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*v13
                       + *((_QWORD *)&gSharedInfo + 1)
                       + 17LL) & 1) == 0 )
          HMMarkObjectDestroy(v13);
        HMAssignmentUnlock(&v14);
      }
    }
    v4 += 16LL;
    --v5;
  }
  while ( v5 );
}
