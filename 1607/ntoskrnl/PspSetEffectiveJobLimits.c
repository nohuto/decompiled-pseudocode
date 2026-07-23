/*
 * XREFs of PspSetEffectiveJobLimits @ 0x1404D53D0
 * Callers:
 *     PspSetJobLimitsJobPreCallback @ 0x1404D53A0 (PspSetJobLimitsJobPreCallback.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14007DAF0 (KeAndAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140144778 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspSetEffectiveLimit @ 0x1404D5684 (PspSetEffectiveLimit.c)
 */

__int64 __fastcall PspSetEffectiveJobLimits(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // al
  int v4; // ecx
  unsigned int v5; // r12d
  __int64 v6; // r15
  unsigned __int8 v7; // cl
  int v8; // r8d
  __int64 result; // rax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _OWORD *v22; // rbp
  unsigned __int8 v23; // r8
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int16 v27[88]; // [rsp+20h] [rbp-E8h] BYREF

  v1 = *(_QWORD *)(a1 + 1056);
  v3 = PspSetEffectiveLimit(16LL);
  v5 = v4 - 15;
  v6 = (unsigned int)(v4 + 112);
  if ( v3 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v4) != 0 )
    {
      if ( !v1 || (v22 = (_OWORD *)(v1 + 616), (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v1 + 616))) )
      {
        v13 = (unsigned __int16 *)(a1 + 264);
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
          v14 = v6 + a1 + 616;
          *(_OWORD *)(v14 - 16) = *(_OWORD *)(v1 + 728);
          *(_OWORD *)v14 = *(_OWORD *)((char *)v22 + v6);
          *(_OWORD *)(v14 + 16) = *(_OWORD *)((char *)v22 + v6 + 16);
          v15 = *(_QWORD *)((char *)v22 + v6 + 32);
          goto LABEL_18;
        }
        v13 = v27;
      }
    }
    else
    {
      if ( !v1 )
      {
        *(_DWORD *)(a1 + 620) = 0;
        *(_DWORD *)(a1 + 616) = 1310721;
        memset((void *)(a1 + 624), 0, 0xA0uLL);
        goto LABEL_2;
      }
      v13 = (unsigned __int16 *)(v1 + 616);
    }
    *(_OWORD *)(a1 + 616) = *(_OWORD *)v13;
    *(_OWORD *)(a1 + 632) = *((_OWORD *)v13 + 1);
    *(_OWORD *)(a1 + 648) = *((_OWORD *)v13 + 2);
    *(_OWORD *)(a1 + 664) = *((_OWORD *)v13 + 3);
    *(_OWORD *)(a1 + 680) = *((_OWORD *)v13 + 4);
    *(_OWORD *)(a1 + 696) = *((_OWORD *)v13 + 5);
    *(_OWORD *)(a1 + 712) = *((_OWORD *)v13 + 6);
    v14 = v6 + a1 + 616;
    *(_OWORD *)(v14 - 16) = *((_OWORD *)v13 + 7);
    *(_OWORD *)v14 = *(_OWORD *)((char *)v13 + v6);
    *(_OWORD *)(v14 + 16) = *(_OWORD *)((char *)v13 + v6 + 16);
    v15 = *(_QWORD *)((char *)v13 + v6 + 32);
LABEL_18:
    *(_QWORD *)(v14 + 32) = v15;
  }
LABEL_2:
  if ( (unsigned __int8)PspSetEffectiveLimit(32LL) )
  {
    if ( v1 )
      v16 = *(_BYTE *)(v1 + 872);
    else
      v16 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & v7) != 0 )
    {
      v23 = *(_BYTE *)(a1 + 873);
      if ( *((_BYTE *)&PspPriorityClassRank + v16) < *((_BYTE *)&PspPriorityClassRank + v23) )
        v23 = v16;
      *(_BYTE *)(a1 + 872) = v23;
    }
    else
    {
      *(_BYTE *)(a1 + 872) = v16;
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit((unsigned int)v6) )
  {
    if ( v1 )
      v17 = *(_DWORD *)(v1 + 852);
    else
      v17 = 10;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 && (v24 = *(_DWORD *)(a1 + 484), v24 < v17) )
      *(_DWORD *)(a1 + 852) = v24;
    else
      *(_DWORD *)(a1 + 852) = v17;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(v5) )
  {
    if ( v1 )
    {
      v18 = *(_QWORD *)(v1 + 792);
      v19 = *(_QWORD *)(v1 + 800);
    }
    else
    {
      v18 = 0LL;
      v19 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v5) == 0
      || (v25 = *(_QWORD *)(a1 + 248), v25 >= v19) && v19 )
    {
      *(_QWORD *)(a1 + 800) = v19;
      *(_QWORD *)(a1 + 792) = v18;
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
      v11 = *(_QWORD *)(v1 + 808);
      v12 = *(_QWORD *)(v1 + 816);
    }
    else
    {
      v11 = 0LL;
      v12 = 0LL;
    }
    if ( (v8 & *(_DWORD *)(a1 + 256)) == 0 || (v21 = *(_QWORD *)(a1 + 576), v21 >= v11) && v11 )
    {
      *(_QWORD *)(a1 + 808) = v11;
      *(_QWORD *)(a1 + 816) = v12;
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
      v20 = *(_QWORD *)(v1 + 824);
    }
    else
    {
      result = 0LL;
      v20 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v26 = *(_QWORD *)(a1 + 224), v26 >= result) && result )
    {
      *(_QWORD *)(a1 + 784) = result;
      *(_QWORD *)(a1 + 824) = v20;
    }
    else
    {
      *(_QWORD *)(a1 + 784) = v26;
      *(_QWORD *)(a1 + 824) = a1;
    }
  }
  v10 = *(_DWORD *)(a1 + 256);
  *(_DWORD *)(a1 + 848) = v10;
  if ( v1 )
  {
    result = v10 | *(_DWORD *)(v1 + 848);
    *(_DWORD *)(a1 + 848) = result;
  }
  return result;
}
