/*
 * XREFs of UpdateCursorSizes @ 0x1C008ED20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?UnlockDpiCursors@@YAXK@Z @ 0x1C008E174 (-UnlockDpiCursors@@YAXK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rcx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // [rsp+20h] [rbp-28h]
  __int64 v45; // [rsp+24h] [rbp-24h]
  __int64 v46; // [rsp+2Ch] [rbp-1Ch]

  v44 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v0 = *(_QWORD *)(gpDispInfo + 96LL);
  while ( v0 )
  {
    v5 = *(_WORD *)(v0 + 154);
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
    v20 = v7 - 16;
    if ( v20 )
    {
      v21 = v20 - 16;
      if ( v21 )
      {
        v22 = v21 - 32;
        if ( v22 )
        {
          if ( v22 != 32 )
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
    *(&v44 + v8) = 1;
  }
  v1 = 0;
  v2 = 0LL;
  while ( 2 )
  {
    v3 = *(int *)((char *)&v44 + v2);
    result = &gfCursorSizeNeeded;
    if ( v3 == *(_DWORD *)((char *)&gfCursorSizeNeeded + v2) )
      goto LABEL_5;
    if ( !v3 )
    {
      UnlockDpiCursors(v1);
      goto LABEL_21;
    }
    if ( !(unsigned int)IsDPIAbsoluteSysMet(0xDuLL) )
    {
      if ( !IsDPIDWMSysMet(v10) || (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) != 0 )
        goto LABEL_15;
      if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
        || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32)
                                               + 408)
                                   + 8LL)
                       + 244LL) & 1) )
      {
        goto LABEL_15;
      }
      goto LABEL_42;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) == 0 )
    {
LABEL_42:
      v17 = (_DWORD *)(gpsi + 2320LL);
      goto LABEL_17;
    }
LABEL_15:
    if ( IsDPIDWMSysMet(0xDuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 408)
        ? (v40 = 0)
        : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v37,
                                                       v38,
                                                       v39)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v40) )
    {
      v17 = (_DWORD *)(gpsi + 2708LL);
    }
    else
    {
      v17 = (_DWORD *)(gpsi + 1932LL);
    }
LABEL_17:
    v18 = *v17 - 32;
    if ( v18 )
    {
      v41 = v18 - 16;
      if ( v41 )
      {
        v42 = v41 - 16;
        if ( v42 )
        {
          v43 = v42 - 32;
          if ( v43 )
          {
            if ( v43 != 32 )
              goto LABEL_18;
            v19 = 4;
          }
          else
          {
            v19 = 3;
          }
        }
        else
        {
          v19 = 2;
        }
      }
      else
      {
        v19 = 1;
      }
    }
    else
    {
LABEL_18:
      v19 = 0;
    }
    if ( v1 != v19 )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
    }
LABEL_21:
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
