/*
 * XREFs of xxxMNSetTop @ 0x1C0217528
 * Callers:
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0106670 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 * Callees:
 *     ThreadLockExchange @ 0x1C0062A1C (ThreadLockExchange.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     xxxInvalidateRect @ 0x1C0215844 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C023EF28 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  signed int v8; // ebp
  int v9; // eax
  bool v10; // zf
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  struct tagWND *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // r8
  _QWORD v23[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-20h] BYREF

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
  v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v23;
  v23[1] = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v24[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v24;
  v13 = v8;
  v24[1] = v2;
  ++*(_DWORD *)(v2 + 8);
  if ( v8 <= 0 )
    v13 = -v8;
  v14 = *(struct tagWND **)(a1 + 16);
  if ( v13 <= *(_DWORD *)(v2 + 60) )
    xxxScrollWindowEx(v14, 0, v8, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v14, 0LL, 1);
  v17 = ThreadUnlock1(v16, v15);
  v20 = v17;
  if ( !v17 )
  {
    ThreadUnlock1(v19, v18);
    return 0LL;
  }
  *(_DWORD *)(v17 + 120) = v3;
  if ( !v3 )
  {
    v10 = *(_QWORD *)(v17 + 112) == 0LL;
    *(_DWORD *)(v17 + 128) = *(_DWORD *)(v17 + 128) & 0xFFFFFFFC | 2;
    if ( !v10 )
      goto LABEL_42;
    v22 = 4294967293LL;
    goto LABEL_40;
  }
  if ( v3 == *(_DWORD *)(v17 + 124) )
  {
    *(_DWORD *)(v17 + 128) |= 3u;
    if ( !*(_QWORD *)(v17 + 112) )
    {
      v22 = 4294967292LL;
LABEL_40:
      MNDrawArrow(0LL, a1, v22);
    }
  }
  if ( *(_QWORD *)(v20 + 112) )
  {
LABEL_42:
    v19 = *(_QWORD *)(a1 + 16);
    if ( v19 )
    {
      ThreadLockExchange(v19, (__int64)v23);
      xxxMNDrawFullNC(*(struct tagWND **)(a1 + 16));
    }
  }
  ThreadUnlock1(v19, v18);
  return 1LL;
}
