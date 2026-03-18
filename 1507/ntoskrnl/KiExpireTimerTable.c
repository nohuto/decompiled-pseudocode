/*
 * XREFs of KiExpireTimerTable @ 0x14014ABA0
 * Callers:
 *     KiTimerExpiration @ 0x14014AA34 (KiTimerExpiration.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiProcessExpiredTimerList @ 0x140209C50 (KiProcessExpiredTimerList.c)
 */

void __fastcall KiExpireTimerTable(__int64 a1, __int64 a2, int a3, int a4, int a5, unsigned __int64 a6, __int64 a7)
{
  __int64 v7; // r10
  int v8; // r14d
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 **v15; // r15
  unsigned int v16; // esi
  char v17; // r11
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 **v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edx
  volatile signed __int32 *v23; // rcx
  ULONG_PTR BugCheckParameter4; // rcx
  char v25; // al
  unsigned int v26; // [rsp+30h] [rbp-68h]
  unsigned int v28; // [rsp+B0h] [rbp+18h]
  int v29; // [rsp+B8h] [rbp+20h]
  char v30[8]; // [rsp+C0h] [rbp+28h]

  v7 = a1;
  v8 = a3 - 1;
  v10 = a3 + a4 - 1;
  v11 = v10 + a5;
  v28 = v10;
  v12 = 0;
  v29 = v10 + a5;
  v13 = 0LL;
  v30[0] = -64;
  do
  {
    v14 = 32 * ((unsigned __int8)++v8 + 16LL);
    if ( v12 <= v10 || *(_QWORD *)(v14 + a2 + 24) <= a6 )
    {
      v15 = (__int64 **)(v14 + a2 + 8);
      if ( v15 != (__int64 **)*v15 )
      {
        do
        {
          v16 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), 0LL) )
          {
            do
            {
              if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v16);
            }
            while ( *(_QWORD *)(v14 + a2) );
          }
          v17 = v30[0];
          do
          {
            if ( v15 == (__int64 **)*v15 )
              goto LABEL_14;
            v18 = (__int64)(*v15 - 4);
            if ( *(_QWORD *)(v18 + 24) > a6 )
            {
              *(_QWORD *)(v14 + a2 + 24) = *(_QWORD *)(v18 + 24);
LABEL_14:
              _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
              goto LABEL_15;
            }
            v19 = **v15;
            v20 = *(__int64 ***)(v18 + 40);
            if ( *(__int64 **)(v19 + 8) != *v15 || *v20 != *v15 )
              __fastfail(3u);
            *v20 = (__int64 *)v19;
            *(_QWORD *)(v19 + 8) = v20;
            if ( v20 == (__int64 **)v19 )
            {
              *(_DWORD *)(v14 + a2 + 28) = -1;
              v21 = qword_1403D2238[2 * *(unsigned __int8 *)(a2 - 12208)];
              if ( KiSerializeTimerExpiration )
              {
                v22 = v8 & 0x3F;
                v23 = (volatile signed __int32 *)(v21 + 8 * ((unsigned __int64)(unsigned __int8)v8 >> 6));
              }
              else
              {
                v22 = *(unsigned __int8 *)(a2 - 12207);
                v23 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v8 << 6) + v21);
              }
              _interlockedbittestandreset64(v23, v22);
            }
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v13), v18);
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v18, BugCheckParameter4);
            v26 = 0;
            v25 = v17 ^ v13;
            v13 = (unsigned int)(v13 + 1);
            v17 ^= v25 & 0x3F;
            v30[0] = v17;
            HIBYTE(v26) = v17 ^ *(_BYTE *)(v18 + 3);
            _InterlockedXor((volatile signed __int32 *)v18, v26);
          }
          while ( (_DWORD)v13 != 64 );
          _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
          KiProcessExpiredTimerList(a1, a7, a2, 64LL);
          v13 = 0LL;
        }
        while ( v15 != (__int64 **)*v15 );
LABEL_15:
        v11 = v29;
        v10 = v28;
        v7 = a1;
      }
      ++v12;
    }
  }
  while ( v8 != v11 );
  if ( (_DWORD)v13 )
    KiProcessExpiredTimerList(v7, a7, a2, (unsigned int)v13);
}
