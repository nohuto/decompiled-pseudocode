/*
 * XREFs of KdpSysReadControlSpace @ 0x1406F343C
 * Callers:
 *     KdSystemDebugControl @ 0x14064E93C (KdSystemDebugControl.c)
 *     KdpReadControlSpace @ 0x1406F33A8 (KdpReadControlSpace.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysReadControlSpace(ULONG a1, unsigned __int64 a2, char *a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // rsi
  __int64 v7; // rdi
  __int64 v10; // rax
  int v11; // ebx
  int v12; // ebx
  __int64 *v13; // rdx
  unsigned int v14; // r8d
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  v7 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  v10 = KiProcessorBlock[v7];
  if ( !v10 )
    return 3221225473LL;
  a5 = (_DWORD *)KiProcessorBlock[v7];
  if ( a2 > 3 )
    return 3221225473LL;
  if ( !(_DWORD)a2 )
  {
    v13 = &v16;
    v16 = v10 - 384;
    goto LABEL_12;
  }
  v11 = a2 - 1;
  if ( !v11 )
  {
    v13 = (__int64 *)&a5;
LABEL_12:
    v14 = 8;
    goto LABEL_8;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v13 = (__int64 *)(v10 + 8);
      goto LABEL_12;
    }
    return 3221225473LL;
  }
  v13 = (__int64 *)(v10 + 64);
  v14 = 224;
LABEL_8:
  if ( v14 > a4 )
    v14 = a4;
  return KdpCopyMemoryChunks(a3, (__int64)v13, v14, 0, 5, v5);
}
