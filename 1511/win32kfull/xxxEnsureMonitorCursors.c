/*
 * XREFs of xxxEnsureMonitorCursors @ 0x1C01E6EA4
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C0098A7C (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     xxxClientCopyImage @ 0x1C0080648 (xxxClientCopyImage.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     GetCursorForDim @ 0x1C012391C (GetCursorForDim.c)
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 */

__int64 xxxEnsureMonitorCursors()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  char **v2; // rsi
  int v3; // edx
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  __int64 result; // rax
  _BYTE *v7; // r15
  __int64 v8; // rbx
  _DWORD *v9; // r14
  __int64 v10; // rcx
  unsigned int i; // ebp
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD v16[4]; // [rsp+30h] [rbp-38h] BYREF

  v0 = 0;
  v1 = &unk_1C03238F8;
  v2 = (char **)&gastrSystemCursorPaths;
  do
  {
    v3 = 33024;
    if ( (*v1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v3 = 33040;
    xxxSetMonitorIcoCurIndex(v2, v3, v0++, 0);
    v1 += 2;
    v2 += 2;
  }
  while ( v0 < 0x11 );
  v5 = (_BYTE *)gSharedInfo[1];
  result = 3LL * giheLast;
  v7 = &v5[24 * giheLast];
  while ( v5 <= v7 )
  {
    if ( v5[16] == 3 )
    {
      v8 = *(_QWORD *)v5;
      if ( *(_WORD *)(*(_QWORD *)v5 + 74LL) == 1 && (*(_DWORD *)(v8 + 80) & 0x1240) == 0 )
      {
        v9 = &gfCursorSizeNeeded;
        v10 = gptiCurrent;
        v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v16;
        v16[1] = v8;
        ++*(_DWORD *)(v8 + 8);
        for ( i = 0; i < 5; ++i )
        {
          if ( *v9 )
          {
            if ( i )
            {
              if ( i == 1 )
              {
                v12 = 48;
              }
              else if ( i == 2 )
              {
                v12 = 64;
              }
              else
              {
                v12 = i == 3 ? 96 : 128;
              }
            }
            else
            {
              v12 = 32;
            }
            if ( !GetCursorForDim(v8, v12) )
            {
              v13 = xxxClientCopyImage(
                      *(_QWORD *)v8,
                      2LL,
                      (unsigned int)(v12 * *(_DWORD *)(v8 + 140)) / *(_DWORD *)(v8 + 76),
                      ((unsigned int)(v12 * *(_DWORD *)(v8 + 144)) / *(_DWORD *)(v8 + 76)) >> 1,
                      0x40000);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v8 + 24);
                if ( v14
                  && *(_QWORD *)(v14 + 296)
                  && (*(_DWORD *)(v13 + 80) & 0x1000) != 0
                  && *(_QWORD *)(v13 + 48) == v13 )
                {
                  *(_DWORD *)(v13 + 76) = v12;
                  *(_QWORD *)(v13 + 48) = v8;
                  *(_QWORD *)(v13 + 40) = *(_QWORD *)(v8 + 40);
                  v15 = *(_QWORD *)(v8 + 24);
                  *(_QWORD *)(v8 + 40) = v13;
                  HMChangeOwnerPheProcess(
                    gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v13,
                    *(_QWORD *)(v15 + 296));
                }
                else
                {
                  DestroyCursor(v13, 0);
                }
              }
            }
          }
          ++v9;
        }
        result = ThreadUnlock1(v10, v4);
      }
    }
    v5 += 24;
  }
  return result;
}
