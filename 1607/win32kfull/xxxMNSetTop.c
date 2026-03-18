/*
 * XREFs of xxxMNSetTop @ 0x1C020FF28
 * Callers:
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C014052C (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 * Callees:
 *     ThreadLockExchange @ 0x1C00777C4 (ThreadLockExchange.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     xxxInvalidateRect @ 0x1C020E55C (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C0236A44 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  int v9; // eax
  bool v10; // zf
  __int64 v11; // r8
  __int64 v12; // rdx
  struct tagWND *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v21; // r8
  _QWORD v22[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v23[3]; // [rsp+58h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  if ( !v2 )
    return 0LL;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(v2 + 124) )
      v3 = *(_DWORD *)(v2 + 124);
  }
  else
  {
    v3 = 0;
  }
  v5 = *(unsigned int *)(v2 + 120);
  if ( v3 == (_DWORD)v5 )
    return 0LL;
  v6 = (_DWORD)v5 == -1 || (unsigned int)v5 >= *(_DWORD *)(v2 + 52) ? 0LL : *(_QWORD *)(v2 + 80) + 152 * v5;
  v7 = v3 == -1 || v3 >= *(_DWORD *)(v2 + 52) ? 0LL : *(_QWORD *)(v2 + 80) + 152LL * v3;
  if ( !v6 || !v7 )
    return 0LL;
  v8 = *(_DWORD *)(v6 + 76) - *(_DWORD *)(v7 + 76);
  v9 = *(_DWORD *)(v2 + 128);
  if ( (v9 & 3) == 2 )
  {
    v10 = *(_QWORD *)(v2 + 112) == 0LL;
    *(_DWORD *)(v2 + 128) = v9 & 0xFFFFFFFC | 1;
    if ( !v10 )
      goto LABEL_24;
    v11 = 4294967293LL;
    goto LABEL_23;
  }
  if ( (v9 & 3) == 3 )
  {
    v10 = *(_QWORD *)(v2 + 112) == 0LL;
    *(_DWORD *)(v2 + 128) = v9 & 0xFFFFFFFC | 1;
    if ( v10 )
    {
      v11 = 4294967292LL;
LABEL_23:
      MNDrawArrow(0LL, a1, v11);
    }
  }
LABEL_24:
  v12 = *(_QWORD *)(a1 + 16);
  v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v22;
  v22[1] = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v23;
  v23[1] = v2;
  ++*(_DWORD *)(v2 + 8);
  v13 = *(struct tagWND **)(a1 + 16);
  if ( (signed int)abs32(v8) <= *(_DWORD *)(v2 + 60) )
    xxxScrollWindowEx(v13, 0, v8, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v13, 0LL, 1);
  v16 = ThreadUnlock1(v15, v14);
  v19 = v16;
  if ( !v16 )
  {
    ThreadUnlock1(v18, v17);
    return 0LL;
  }
  *(_DWORD *)(v16 + 120) = v3;
  if ( !v3 )
  {
    v10 = *(_QWORD *)(v16 + 112) == 0LL;
    *(_DWORD *)(v16 + 128) = *(_DWORD *)(v16 + 128) & 0xFFFFFFFC | 2;
    if ( !v10 )
      goto LABEL_40;
    v21 = 4294967293LL;
    goto LABEL_38;
  }
  if ( v3 == *(_DWORD *)(v16 + 124) )
  {
    *(_DWORD *)(v16 + 128) |= 3u;
    if ( !*(_QWORD *)(v16 + 112) )
    {
      v21 = 4294967292LL;
LABEL_38:
      MNDrawArrow(0LL, a1, v21);
    }
  }
  if ( *(_QWORD *)(v19 + 112) )
  {
LABEL_40:
    v18 = *(_QWORD *)(a1 + 16);
    if ( v18 )
    {
      ThreadLockExchange(v18, (__int64)v22);
      xxxMNDrawFullNC(*(struct tagWND **)(a1 + 16));
    }
  }
  ThreadUnlock1(v18, v17);
  return 1LL;
}
