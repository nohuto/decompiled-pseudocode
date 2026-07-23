/*
 * XREFs of EtwGetInterruptTimeStamp @ 0x140091920
 * Callers:
 *     KiScanInterruptObjectList @ 0x14015F2D0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14015F4A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F5D0 (KiInterruptSubDispatchNoLock.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwGetInterruptTimeStamp(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // esi
  __int64 v3; // rbp
  bool i; // zf
  char *v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]

  v1 = EtwpActiveSystemLoggers;
  v2 = 0;
  v3 = a1;
  for ( i = !_BitScanForward((unsigned int *)&a1, EtwpActiveSystemLoggers);
        !i;
        i = !_BitScanForward((unsigned int *)&a1, v1) )
  {
    v1 &= v1 - 1;
    v5 = (char *)&EtwpGroupMasks + 32 * (unsigned int)a1;
    if ( v5 && (*((_DWORD *)v5 + 1) & 0x4000) != 0 )
      v2 |= 1 << LOBYTE(word_1402FD342[2 * a1]);
  }
  v6 = 0;
  v7 = 0LL;
  do
  {
    if ( _bittest(&v2, v6) )
      *(__int64 *)((char *)&v9 + v7 * 8) = ((__int64 (__fastcall *)(__int64))EtwpSystemTimeStamp[v7])(a1);
    else
      *(__int64 *)((char *)&v9 + v7 * 8) = 0LL;
    ++v6;
    ++v7;
  }
  while ( v6 < 2 );
  *(_QWORD *)(v3 + 352) = v9;
  result = v10;
  *(_QWORD *)(v3 + 208) = v10;
  return result;
}
