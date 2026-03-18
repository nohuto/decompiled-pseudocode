/*
 * XREFs of PspSetEffectiveJobLimits @ 0x1404B7374
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     PspSetJobLimitsJobPreCallback @ 0x1404B7344 (PspSetJobLimitsJobPreCallback.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KeAndAffinityEx @ 0x140094120 (KeAndAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeIsEqualAffinityEx @ 0x1401C4D04 (KeIsEqualAffinityEx.c)
 *     PspSetEffectiveLimit @ 0x1404B75F8 (PspSetEffectiveLimit.c)
 */

__int64 __fastcall PspSetEffectiveJobLimits(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // al
  int v4; // ecx
  unsigned int v5; // r12d
  __int64 v6; // r15
  unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  _OWORD *v22; // rbp
  unsigned __int8 v23; // r8
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int16 v27[88]; // [rsp+20h] [rbp-E8h] BYREF

  v1 = *(_QWORD *)(a1 + 1064);
  v3 = PspSetEffectiveLimit(16LL);
  v5 = v4 - 15;
  v6 = (unsigned int)(v4 + 112);
  if ( v3 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v4) != 0 )
    {
      if ( !v1 || (v22 = (_OWORD *)(v1 + 616), (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v1 + 616))) )
      {
        v7 = (unsigned __int16 *)(a1 + 264);
      }
      else
      {
        KeAndAffinityEx((__int16 *)(v1 + 616), (__int16 *)(a1 + 264), v27);
        if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(a1 + 264), v27)
          || (unsigned int)KeIsEmptyAffinityEx(v27) )
        {
          *(_OWORD *)(a1 + 616) = *v22;
          *(_OWORD *)(a1 + 632) = *(_OWORD *)(v1 + 632);
          *(_OWORD *)(a1 + 648) = *(_OWORD *)(v1 + 648);
          *(_OWORD *)(a1 + 664) = *(_OWORD *)(v1 + 664);
          *(_OWORD *)(a1 + 680) = *(_OWORD *)(v1 + 680);
          *(_OWORD *)(a1 + 696) = *(_OWORD *)(v1 + 696);
          *(_OWORD *)(a1 + 712) = *(_OWORD *)(v1 + 712);
          v8 = v6 + a1 + 616;
          *(_OWORD *)(v8 - 16) = *(_OWORD *)(v1 + 728);
          *(_OWORD *)v8 = *(_OWORD *)((char *)v22 + v6);
          *(_OWORD *)(v8 + 16) = *(_OWORD *)((char *)v22 + v6 + 16);
          v9 = *(_QWORD *)((char *)v22 + v6 + 32);
          goto LABEL_6;
        }
        v7 = v27;
      }
LABEL_5:
      *(_OWORD *)(a1 + 616) = *(_OWORD *)v7;
      *(_OWORD *)(a1 + 632) = *((_OWORD *)v7 + 1);
      *(_OWORD *)(a1 + 648) = *((_OWORD *)v7 + 2);
      *(_OWORD *)(a1 + 664) = *((_OWORD *)v7 + 3);
      *(_OWORD *)(a1 + 680) = *((_OWORD *)v7 + 4);
      *(_OWORD *)(a1 + 696) = *((_OWORD *)v7 + 5);
      *(_OWORD *)(a1 + 712) = *((_OWORD *)v7 + 6);
      v8 = v6 + a1 + 616;
      *(_OWORD *)(v8 - 16) = *((_OWORD *)v7 + 7);
      *(_OWORD *)v8 = *(_OWORD *)((char *)v7 + v6);
      *(_OWORD *)(v8 + 16) = *(_OWORD *)((char *)v7 + v6 + 16);
      v9 = *(_QWORD *)((char *)v7 + v6 + 32);
LABEL_6:
      *(_QWORD *)(v8 + 32) = v9;
      goto LABEL_7;
    }
    if ( v1 )
    {
      v7 = (unsigned __int16 *)(v1 + 616);
      goto LABEL_5;
    }
    *(_DWORD *)(a1 + 620) = 0;
    *(_DWORD *)(a1 + 616) = 1310721;
    memset((void *)(a1 + 624), 0, 0xA0uLL);
  }
LABEL_7:
  if ( (unsigned __int8)PspSetEffectiveLimit(32LL) )
  {
    if ( v1 )
      v11 = *(_BYTE *)(v1 + 880);
    else
      v11 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & v10) != 0 )
    {
      v23 = *(_BYTE *)(a1 + 881);
      if ( *((_BYTE *)&PspPriorityClassRank + v11) < *((_BYTE *)&PspPriorityClassRank + v23) )
        v23 = v11;
      *(_BYTE *)(a1 + 880) = v23;
    }
    else
    {
      *(_BYTE *)(a1 + 880) = v11;
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit((unsigned int)v6) )
  {
    if ( v1 )
      v12 = *(_DWORD *)(v1 + 860);
    else
      v12 = 10;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 && (v24 = *(_DWORD *)(a1 + 484), v24 < v12) )
      *(_DWORD *)(a1 + 860) = v24;
    else
      *(_DWORD *)(a1 + 860) = v12;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(v5) )
  {
    if ( v1 )
    {
      v13 = *(_QWORD *)(v1 + 792);
      v14 = *(_QWORD *)(v1 + 800);
    }
    else
    {
      v13 = 0LL;
      v14 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v5) == 0
      || (v25 = *(_QWORD *)(a1 + 248), v25 >= v14) && v14 )
    {
      *(_QWORD *)(a1 + 800) = v14;
      *(_QWORD *)(a1 + 792) = v13;
    }
    else
    {
      *(_QWORD *)(a1 + 800) = v25;
      *(_QWORD *)(a1 + 792) = *(_QWORD *)(a1 + 240);
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(256LL) )
  {
    if ( v1 )
    {
      v16 = *(_QWORD *)(v1 + 808);
      v17 = *(_QWORD *)(v1 + 816);
    }
    else
    {
      v16 = 0LL;
      v17 = 0LL;
    }
    if ( (v15 & *(_DWORD *)(a1 + 256)) == 0 || (v21 = *(_QWORD *)(a1 + 576), v21 >= v16) && v16 )
    {
      *(_QWORD *)(a1 + 808) = v16;
      *(_QWORD *)(a1 + 816) = v17;
    }
    else
    {
      *(_QWORD *)(a1 + 808) = v21;
      *(_QWORD *)(a1 + 816) = a1;
    }
  }
  result = PspSetEffectiveLimit(2LL);
  if ( (_BYTE)result )
  {
    if ( v1 )
    {
      result = *(_QWORD *)(v1 + 784);
      v19 = *(_QWORD *)(v1 + 824);
    }
    else
    {
      result = 0LL;
      v19 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v26 = *(_QWORD *)(a1 + 224), v26 >= result) && result )
    {
      *(_QWORD *)(a1 + 784) = result;
      *(_QWORD *)(a1 + 824) = v19;
    }
    else
    {
      *(_QWORD *)(a1 + 784) = v26;
      *(_QWORD *)(a1 + 824) = a1;
    }
  }
  v20 = *(_DWORD *)(a1 + 256);
  *(_DWORD *)(a1 + 856) = v20;
  if ( v1 )
  {
    result = v20 | *(_DWORD *)(v1 + 856);
    *(_DWORD *)(a1 + 856) = result;
  }
  return result;
}
