/*
 * XREFs of EtwpCCSwapTrace @ 0x1400D4430
 * Callers:
 *     EtwTraceContextSwap @ 0x1400D4300 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpCCSwapFlush @ 0x14007369C (EtwpCCSwapFlush.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

struct _KPRCB *__fastcall EtwpCCSwapTrace(__int64 a1, __int64 a2, unsigned int a3, struct _KPRCB **a4)
{
  struct _KPRCB *result; // rax
  __int64 v6; // r13
  _QWORD *EtwSupport; // r12
  unsigned int *v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // r9
  unsigned int v13; // edi
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  char v16; // r10
  unsigned int v17; // r8d
  char v18; // al
  unsigned int v19; // eax
  unsigned int v20; // ebx
  char v21; // al
  unsigned int v22; // eax
  struct _KPRCB *v23; // rcx
  unsigned int v24; // eax
  struct _KPRCB *v25; // rcx
  unsigned int v26; // eax
  int Src; // [rsp+20h] [rbp-48h] BYREF
  int v28; // [rsp+24h] [rbp-44h]
  unsigned int v29; // [rsp+80h] [rbp+18h]

  v29 = a3;
  result = KeGetCurrentPrcb();
  v6 = a3;
  EtwSupport = result->EtwSupport;
  v10 = (unsigned int *)EtwSupport[a3 + 356];
  if ( v10 )
  {
    v11 = 0;
    if ( *v10 )
    {
      v12 = (__int64)*a4 - *((_QWORD *)v10 + 1);
    }
    else
    {
      v25 = *a4;
      v26 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v10 + 1) = *a4;
      *((_QWORD *)v10 + 2) = v25;
      v10[1] = v26;
      *v10 = 104;
      memset(v10 + 6, 0, 0x40uLL);
      a3 = v29;
      v12 = 0LL;
    }
    v13 = *(_DWORD *)(a1 + 1592);
    v14 = 0;
    if ( v13 )
    {
      v15 = v10 + 6;
      while ( *v15 != v13 )
      {
        if ( !*v15 )
        {
          v10[v14 + 6] = v13;
          *((_BYTE *)v10 + v14 + 88) = *(_BYTE *)(a1 + 563);
          break;
        }
        ++v14;
        ++v15;
        if ( v14 >= 0x10 )
          break;
      }
    }
    if ( v14 == 16
      || MEMORY[0xFFFFF78000000320] - v10[1] > 0x1F4
      || (unsigned __int64)*v10 + 8 > 0x400
      || v12 > 0x40000000
      || *((_BYTE *)EtwSupport + v6 + 2840) )
    {
      EtwpCCSwapFlush((int *)v10, a3);
      v23 = *a4;
      v24 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v10 + 1) = *a4;
      *((_QWORD *)v10 + 2) = v23;
      v10[1] = v24;
      *v10 = 104;
      memset(v10 + 6, 0, 0x40uLL);
      *((_BYTE *)EtwSupport + v6 + 2840) = 0;
      v12 = 0LL;
      v10[6] = v13;
      v14 = 0;
    }
    if ( v13 )
    {
      if ( *(_DWORD *)(a2 + 1592) )
        v11 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      v16 = *(_BYTE *)(a1 + 195);
      v17 = v16 - *((char *)v10 + v14 + 88);
      if ( v17 > 7 || v11 > 1 || v12 >= 0x20000 )
      {
        Src = (4 * v12) | 3;
        if ( v11 >= 0x1FFFF )
          v11 = 0x1FFFF;
        v21 = *(_BYTE *)(a1 + 388);
        v28 = ((v16 & 0x1F) << 10) ^ ((((unsigned __int8)v14 ^ (unsigned __int8)v28) & 0xF ^ (unsigned __int16)v28) & 0x3FF | (v11 << 15));
        if ( v21 == 5 )
          v22 = ((unsigned __int16)v28 ^ (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 643))) & 0x3F0 ^ v28;
        else
          v22 = (16 * *(unsigned __int8 *)(a1 + 388) - 385) & 0x3F0 | v28 & 0xFFFFFC0F;
        v28 = v22;
        v20 = 8;
      }
      else
      {
        v18 = *(_BYTE *)(a1 + 388);
        Src = ((_DWORD)v12 << 15) | Src & 0x7E00 | (4 * (v14 & 0xF | (16 * (v17 & 7)))) | 2;
        if ( v18 == 5 )
          v19 = ((unsigned __int16)Src ^ (unsigned __int16)(*(unsigned __int8 *)(a1 + 643) << 9)) & 0x7E00 ^ Src;
        else
          v19 = ((*(unsigned __int8 *)(a1 + 388) << 9) - 12289) & 0x7E00 | Src & 0xFFFF81FF;
        Src = v19;
        v20 = 4;
      }
    }
    else if ( v12 >= 0x4000 )
    {
      v20 = 4;
      Src = (4 * v12) | 1;
    }
    else
    {
      v20 = 2;
      LOWORD(Src) = 4 * v12;
    }
    memmove((char *)v10 + *v10, &Src, v20);
    *v10 += v20;
    result = *a4;
    *((_QWORD *)v10 + 1) = *a4;
  }
  return result;
}
