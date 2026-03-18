/*
 * XREFs of UpdateCursorSizes @ 0x1C00FD160
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?UnlockDpiCursors@@YAXK@Z @ 0x1C0130F74 (-UnlockDpiCursors@@YAXK@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void *UpdateCursorSizes()
{
  __int64 v0; // rdx
  unsigned int v1; // ebx
  __int64 v2; // rdi
  int v3; // esi
  void *result; // rax
  unsigned __int16 v5; // ax
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // [rsp+20h] [rbp-28h]
  __int64 v26; // [rsp+24h] [rbp-24h]
  __int64 v27; // [rsp+2Ch] [rbp-1Ch]

  v25 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v0 = *(_QWORD *)(gpDispInfo + 96LL);
  while ( v0 )
  {
    v5 = *(_WORD *)(v0 + 152);
    if ( v5 >= 0x90u )
    {
      if ( v5 >= 0xC0u )
      {
        if ( v5 >= 0x120u )
          v6 = v5 < 0x180u ? 96 : 128;
        else
          v6 = 64;
      }
      else
      {
        v6 = 48;
      }
    }
    else
    {
      v6 = 32;
    }
    v7 = v6 - 32;
    if ( !v7 )
    {
LABEL_10:
      v8 = 0LL;
      goto LABEL_11;
    }
    v15 = v7 - 16;
    if ( v15 )
    {
      v16 = v15 - 16;
      if ( v16 )
      {
        v17 = v16 - 32;
        if ( v17 )
        {
          if ( v17 != 32 )
            goto LABEL_10;
          v8 = 4LL;
        }
        else
        {
          v8 = 3LL;
        }
      }
      else
      {
        v8 = 2LL;
      }
    }
    else
    {
      v8 = 1LL;
    }
LABEL_11:
    v0 = *(_QWORD *)(v0 + 16);
    *(&v25 + v8) = 1;
  }
  v1 = 0;
  v2 = 0LL;
  while ( 2 )
  {
    v3 = *(int *)((char *)&v25 + v2);
    result = &gfCursorSizeNeeded;
    if ( v3 == *(_DWORD *)((char *)&gfCursorSizeNeeded + v2) )
      goto LABEL_5;
    if ( !v3 )
    {
      UnlockDpiCursors(v1);
      goto LABEL_22;
    }
    if ( !(unsigned int)IsDPIAbsoluteSysMet(0xDuLL) )
    {
      if ( !IsDPIDWMSysMet(v9)
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
      {
        goto LABEL_16;
      }
      if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                       + 260LL) & 1) )
      {
        goto LABEL_16;
      }
      goto LABEL_44;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) == 0 )
    {
LABEL_44:
      v12 = (_DWORD *)(gpsi + 2320LL);
      goto LABEL_18;
    }
LABEL_16:
    if ( IsDPIDWMSysMet(0xDuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v21 = 0)
        : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v21) )
    {
      v12 = (_DWORD *)(gpsi + 2708LL);
    }
    else
    {
      v12 = (_DWORD *)(gpsi + 1932LL);
    }
LABEL_18:
    v13 = *v12 - 32;
    if ( v13 )
    {
      v22 = v13 - 16;
      if ( v22 )
      {
        v23 = v22 - 16;
        if ( v23 )
        {
          v24 = v23 - 32;
          if ( v24 )
          {
            if ( v24 != 32 )
              goto LABEL_19;
            v14 = 4;
          }
          else
          {
            v14 = 3;
          }
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
    }
    else
    {
LABEL_19:
      v14 = 0;
    }
    if ( v1 != v14 )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
    }
LABEL_22:
    result = &gfCursorSizeNeeded;
    *(_DWORD *)((char *)&gfCursorSizeNeeded + v2) = v3;
LABEL_5:
    ++v1;
    v2 += 4LL;
    if ( v1 < 5 )
      continue;
    return result;
  }
}
