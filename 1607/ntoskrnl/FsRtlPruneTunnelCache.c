/*
 * XREFs of FsRtlPruneTunnelCache @ 0x14050466C
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x140501A80 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x1405030D8 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     FsRtlRemoveNodeFromTunnel @ 0x1400C46CC (FsRtlRemoveNodeFromTunnel.c)
 */

__int64 __fastcall FsRtlPruneTunnelCache(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  struct _RTL_SPLAY_LINKS *v7; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rax
  __int64 result; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 1;
  v3 = (_QWORD *)(a1 + 64);
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = MEMORY[0xFFFFF78000000014] - (unsigned int)TunnelMaxAge;
  while ( (_QWORD *)*v3 != v3 )
  {
    v7 = (struct _RTL_SPLAY_LINKS *)(*v3 - 24LL);
    RightChild = v7[1].RightChild;
    if ( (__int64)RightChild >= v6 && (__int64)RightChild <= v5 )
      break;
    FsRtlRemoveNodeFromTunnel(a1, v7, a2, &v10);
  }
  while ( 1 )
  {
    result = *(unsigned __int16 *)(a1 + 80);
    if ( (unsigned int)result <= TunnelMaxEntries )
      break;
    FsRtlRemoveNodeFromTunnel(a1, (struct _RTL_SPLAY_LINKS *)(*v3 - 24LL), a2, &v10);
  }
  return result;
}
