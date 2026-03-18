/*
 * XREFs of xxxEnsureMonitorCursors @ 0x1C01DD64C
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000D308 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C008F454 (xxxSetMonitorIcoCurIndex.c)
 *     GetCursorForDim @ 0x1C008F7BC (GetCursorForDim.c)
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 *     xxxClientCopyImage @ 0x1C00A9BF0 (xxxClientCopyImage.c)
 */

__int64 xxxEnsureMonitorCursors()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  void *v2; // rsi
  int v3; // edx
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 result; // rax
  _BYTE *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // r14
  __int64 v11; // rcx
  unsigned int i; // ebp
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD v17[4]; // [rsp+30h] [rbp-38h] BYREF

  v0 = 0;
  v1 = &unk_1C0328F88;
  v2 = &gastrSystemCursorPaths;
  do
  {
    v3 = 33024;
    if ( (*v1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v3 = 33040;
    xxxSetMonitorIcoCurIndex((int)v2, v3, v0++, 0);
    v1 += 2;
    LODWORD(v2) = (_DWORD)v2 + 16;
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
        v9 = *(_QWORD *)(v8 + 24);
        if ( !v9 || (result = *(unsigned int *)(v9 + 768), (result & 0x400000) == 0) )
        {
          v10 = &gfCursorSizeNeeded;
          v11 = gptiCurrent;
          v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v17;
          v17[1] = v8;
          ++*(_DWORD *)(v8 + 8);
          for ( i = 0; i < 5; ++i )
          {
            if ( *v10 )
            {
              if ( i )
              {
                if ( i == 1 )
                {
                  v13 = 48;
                }
                else if ( i == 2 )
                {
                  v13 = 64;
                }
                else
                {
                  v13 = i == 3 ? 96 : 128;
                }
              }
              else
              {
                v13 = 32;
              }
              if ( !GetCursorForDim(v8, v13) )
              {
                v14 = xxxClientCopyImage(
                        *(_QWORD *)v8,
                        2LL,
                        (unsigned int)(v13 * *(_DWORD *)(v8 + 140)) / *(_DWORD *)(v8 + 76),
                        ((unsigned int)(v13 * *(_DWORD *)(v8 + 144)) / *(_DWORD *)(v8 + 76)) >> 1,
                        0x40000);
                if ( v14 )
                {
                  v15 = *(_QWORD *)(v8 + 24);
                  if ( v15
                    && *(_QWORD *)(v15 + 288)
                    && (*(_DWORD *)(v14 + 80) & 0x1000) != 0
                    && *(_QWORD *)(v14 + 48) == v14 )
                  {
                    *(_DWORD *)(v14 + 76) = v13;
                    *(_QWORD *)(v14 + 48) = v8;
                    *(_QWORD *)(v14 + 40) = *(_QWORD *)(v8 + 40);
                    v16 = *(_QWORD *)(v8 + 24);
                    *(_QWORD *)(v8 + 40) = v14;
                    HMChangeOwnerPheProcess(
                      gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v14,
                      *(_QWORD *)(v16 + 288));
                  }
                  else
                  {
                    DestroyCursor((struct tagCURSOR *)v14, 0LL);
                  }
                }
              }
            }
            ++v10;
          }
          result = ThreadUnlock1(v11, v4);
        }
      }
    }
    v5 += 24;
  }
  return result;
}
