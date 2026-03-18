/*
 * XREFs of AllocQueue @ 0x1C00151C0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 * Callees:
 *     IsIsKeyStateCachedSupported_0 @ 0x1C0002078 (IsIsKeyStateCachedSupported_0.c)
 *     IsKeyStateCached_0 @ 0x1C0002080 (IsKeyStateCached_0.c)
 *     HMAssignmentLock @ 0x1C0015370 (HMAssignmentLock.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C0034560 (Win32AllocateFromPagedLookasideList.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall AllocQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v5; // edi
  int i; // edi
  char v7; // r9
  unsigned __int64 v8; // r8
  __int128 v9; // xmm1
  _OWORD *v10; // rax

  v2 = a2;
  if ( a2 )
  {
    v5 = *(_DWORD *)(a2 + 348);
  }
  else
  {
    result = Win32AllocateFromPagedLookasideList(QLookaside);
    v2 = result;
    if ( !result )
      return result;
    v5 = 0;
  }
  memset((void *)v2, 0, 0x1B8uLL);
  *(_DWORD *)(v2 + 348) = v5;
  *(_DWORD *)(v2 + 20) = 2;
  *(_DWORD *)(v2 + 368) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v10 = *(_OWORD **)(a1 + 384);
    *(_OWORD *)(v2 + 192) = v10[12];
    *(_OWORD *)(v2 + 208) = v10[13];
    *(_OWORD *)(v2 + 224) = v10[14];
    v9 = v10[15];
  }
  else
  {
    if ( *((_QWORD *)gptiCurrent + 51) != grpdeskRitInput )
    {
      for ( i = 0; i < 256; ++i )
      {
        if ( (int)IsIsKeyStateCachedSupported_0() >= 0 && (unsigned int)IsKeyStateCached_0() )
        {
          v7 = i & 3;
          v8 = (unsigned __int64)(unsigned __int8)i >> 2;
          if ( ((unsigned __int8)(1 << (2 * (i & 3))) & *((_BYTE *)&gafAsyncKeyState + v8)) != 0 )
            *(_BYTE *)(v8 + v2 + 192) |= 1 << (2 * v7);
          if ( ((unsigned __int8)(1 << (2 * v7 + 1)) & *((_BYTE *)&gafAsyncKeyState + v8)) != 0 )
            *(_BYTE *)(v8 + v2 + 192) |= 1 << (2 * v7 + 1);
        }
      }
      goto LABEL_10;
    }
    *(_OWORD *)(v2 + 192) = gafAsyncKeyState;
    *(_OWORD *)(v2 + 208) = xmmword_1C0120C10;
    *(_OWORD *)(v2 + 224) = xmmword_1C0120C20;
    v9 = xmmword_1C0120C30;
  }
  *(_OWORD *)(v2 + 240) = v9;
LABEL_10:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*(_DWORD *)(v2 + 336);
  HMAssignmentLock(v2 + 328, qword_1C0119858);
  return v2;
}
