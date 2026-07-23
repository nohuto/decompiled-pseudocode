/*
 * XREFs of KiExpireTimerTable @ 0x140124234
 * Callers:
 *     KiTimerExpiration @ 0x1401240E8 (KiTimerExpiration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiProcessExpiredTimerList @ 0x14010D420 (KiProcessExpiredTimerList.c)
 *     KiRemoveEntryTimer @ 0x140111298 (KiRemoveEntryTimer.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall KiExpireTimerTable(__int64 a1, __int64 a2, int a3, int a4, int a5, unsigned __int64 a6, _DWORD *a7)
{
  int v8; // edx
  int v9; // r15d
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // rsi
  ULONG_PTR BugCheckParameter4; // rcx
  char v18; // al
  __int64 v19; // rcx
  char v20; // al
  unsigned int v21; // [rsp+30h] [rbp-68h]
  int v23; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+18h]
  int v25; // [rsp+B8h] [rbp+20h]

  v8 = a5;
  v9 = a3 - 1;
  v10 = a3 + a4 - 1;
  LOBYTE(a5) = -64;
  v11 = v10 + v8;
  v24 = v10;
  v12 = 0;
  v25 = v11;
  v13 = 0LL;
  do
  {
    v14 = 32 * ((unsigned __int8)++v9 + 16LL);
    if ( v12 <= v10 || *(_QWORD *)(v14 + a2 + 24) <= a6 )
    {
      v15 = (_QWORD *)(v14 + a2 + 8);
      if ( v15 != (_QWORD *)*v15 )
      {
        do
        {
          v23 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), 0LL) )
          {
            do
              KeYieldProcessorEx(&v23);
            while ( *(_QWORD *)(v14 + a2) );
          }
          do
          {
            if ( v15 == (_QWORD *)*v15 )
              goto LABEL_13;
            v16 = *v15 - 32LL;
            if ( *(_QWORD *)(v16 + 24) > a6 )
            {
              *(_QWORD *)(v14 + a2 + 24) = *(_QWORD *)(v16 + 24);
LABEL_13:
              _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
              goto LABEL_14;
            }
            KiRemoveEntryTimer(a2, v16, (unsigned __int8)v9);
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v13), v16);
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v16, BugCheckParameter4);
            v21 = 0;
            v18 = (a5 ^ v13) & 0x3F;
            v13 = (unsigned int)(v13 + 1);
            v19 = (unsigned __int8)(v18 ^ a5);
            v20 = v18 ^ a5 ^ *(_BYTE *)(v16 + 3);
            LOBYTE(a5) = v19;
            HIBYTE(v21) = v20;
            _InterlockedXor((volatile signed __int32 *)v16, v21);
          }
          while ( (_DWORD)v13 != 64 );
          _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
          KiProcessExpiredTimerList(a1, a7, a2, 0x40u);
          v13 = 0LL;
        }
        while ( v15 != (_QWORD *)*v15 );
LABEL_14:
        v11 = v25;
        v10 = v24;
      }
      ++v12;
    }
  }
  while ( v9 != v11 );
  if ( (_DWORD)v13 )
    KiProcessExpiredTimerList(a1, a7, a2, v13);
}
