/*
 * XREFs of AllocQueue @ 0x1C0041270
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 * Callees:
 *     IsIsKeyStateCachedSupported_0 @ 0x1C0001D90 (IsIsKeyStateCachedSupported_0.c)
 *     IsKeyStateCached_0 @ 0x1C0001D98 (IsKeyStateCached_0.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C002A260 (Win32AllocateFromPagedLookasideList.c)
 *     HMAssignmentLock @ 0x1C0041430 (HMAssignmentLock.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall AllocQueue(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rbp
  __int64 result; // rax
  int v6; // edi
  unsigned __int64 v7; // r9
  char v8; // r8
  __int128 v9; // xmm1
  __int64 v10; // rax

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 340);
  }
  else
  {
    result = Win32AllocateFromPagedLookasideList();
    v3 = result;
    if ( !result )
      return result;
    v6 = 0;
  }
  memset((void *)v3, 0, 0x1B0uLL);
  *(_DWORD *)(v3 + 340) = v6;
  *(_DWORD *)(v3 + 20) = 2;
  *(_DWORD *)(v3 + 360) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 384);
    *(_OWORD *)(v3 + 184) = *(_OWORD *)(v10 + 184);
    *(_OWORD *)(v3 + 200) = *(_OWORD *)(v10 + 200);
    *(_OWORD *)(v3 + 216) = *(_OWORD *)(v10 + 216);
    v9 = *(_OWORD *)(v10 + 232);
  }
  else
  {
    if ( *((_QWORD *)gptiCurrent + 51) != grpdeskRitInput )
    {
      do
      {
        if ( (int)IsIsKeyStateCachedSupported_0() >= 0 && (unsigned int)IsKeyStateCached_0() )
        {
          v7 = (unsigned __int64)(unsigned __int8)v2 >> 2;
          v8 = v2 & 3;
          if ( ((unsigned __int8)(1 << (2 * (v2 & 3))) & *((_BYTE *)&gafAsyncKeyState + v7)) != 0 )
            *(_BYTE *)(v7 + v3 + 184) |= 1 << (2 * v8);
          if ( ((unsigned __int8)(1 << (2 * v8 + 1)) & *((_BYTE *)&gafAsyncKeyState + v7)) != 0 )
            *(_BYTE *)(v7 + v3 + 184) |= 1 << (2 * v8 + 1);
        }
        ++v2;
      }
      while ( v2 < 256 );
      goto LABEL_9;
    }
    *(_OWORD *)(v3 + 184) = gafAsyncKeyState;
    *(_OWORD *)(v3 + 200) = xmmword_1C01097E0;
    *(_OWORD *)(v3 + 216) = xmmword_1C01097F0;
    v9 = xmmword_1C0109800;
  }
  *(_OWORD *)(v3 + 232) = v9;
LABEL_9:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*(_DWORD *)(v3 + 328);
  HMAssignmentLock(v3 + 320, qword_1C0102238);
  return v3;
}
