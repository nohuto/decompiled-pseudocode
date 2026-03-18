/*
 * XREFs of KiExpireTimerTable @ 0x140115548
 * Callers:
 *     KiTimerExpiration @ 0x1401153FC (KiTimerExpiration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x1400EF780 (KiRemoveEntryTimer.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiProcessExpiredTimerList @ 0x1401CB088 (KiProcessExpiredTimerList.c)
 */

__int64 __fastcall KiExpireTimerTable(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        __int64 a7)
{
  int v8; // edx
  int v9; // r15d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // rsi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  char v19; // al
  __int64 v20; // rcx
  char v21; // al
  unsigned int v22; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+18h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]

  v8 = a5;
  v9 = a3 - 1;
  v10 = a3 + a4 - 1;
  LOBYTE(a5) = -64;
  v11 = v10 + v8;
  v25 = v10;
  v12 = 0;
  v26 = v11;
  v13 = 0LL;
  do
  {
    v14 = 32 * ((unsigned __int8)++v9 + 16LL);
    if ( v12 > v10 )
    {
      result = a6;
      if ( *(_QWORD *)(v14 + a2 + 24) > a6 )
        continue;
    }
    v15 = (_QWORD *)(v14 + a2 + 8);
    if ( v15 != (_QWORD *)*v15 )
    {
      do
      {
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), 0LL) )
        {
          do
          {
            KeYieldProcessorEx(&v24, v11, a3);
            result = *(_QWORD *)(v14 + a2);
          }
          while ( result );
        }
        do
        {
          if ( v15 == (_QWORD *)*v15 )
            goto LABEL_13;
          v16 = *v15 - 32LL;
          if ( *(_QWORD *)(v16 + 24) > a6 )
          {
            result = *(_QWORD *)(v16 + 24);
            *(_QWORD *)(v14 + a2 + 24) = result;
LABEL_13:
            _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
            goto LABEL_14;
          }
          KiRemoveEntryTimer(a2, v16, (unsigned __int8)v9);
          BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v13), v16);
          if ( BugCheckParameter4 )
            KeBugCheckEx(0xC7u, 8uLL, 1uLL, v16, BugCheckParameter4);
          v22 = 0;
          v19 = (a5 ^ v13) & 0x3F;
          v13 = (unsigned int)(v13 + 1);
          v20 = (unsigned __int8)(v19 ^ a5);
          v21 = v19 ^ a5 ^ *(_BYTE *)(v16 + 3);
          LOBYTE(a5) = v20;
          HIBYTE(v22) = v21;
          result = v22;
          _InterlockedXor((volatile signed __int32 *)v16, v22);
        }
        while ( (_DWORD)v13 != 64 );
        _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
        result = KiProcessExpiredTimerList(a1, a7, a2, 64LL);
        v13 = 0LL;
      }
      while ( v15 != (_QWORD *)*v15 );
LABEL_14:
      v11 = v26;
      v10 = v25;
    }
    ++v12;
  }
  while ( v9 != (_DWORD)v11 );
  if ( (_DWORD)v13 )
    return KiProcessExpiredTimerList(a1, a7, a2, (unsigned int)v13);
  return result;
}
