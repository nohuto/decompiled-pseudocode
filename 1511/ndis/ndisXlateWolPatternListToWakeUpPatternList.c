/*
 * XREFs of ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00C61A0
 * Callers:
 *     ndisOidPostWakeUpPatternList @ 0x1C00464E0 (ndisOidPostWakeUpPatternList.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisCreatePMPacketPattern @ 0x1C00C2EB4 (ndisCreatePMPacketPattern.c)
 */

void __fastcall ndisXlateWolPatternListToWakeUpPatternList(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r10d
  SIZE_T v4; // r9
  char *v5; // rbp
  char *v6; // r8
  __int64 v7; // rax
  size_t v8; // r8
  size_t v9; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // r15
  int v12; // r12d
  _DWORD *v13; // rsi
  _DWORD *PMPacketPattern; // rax
  void *v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rax
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v4 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
  {
    if ( (unsigned __int8)byte_1C0083712 >= 2u )
      WPP_SF_(0x73u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids);
    return;
  }
  if ( !(_DWORD)v4 )
    return;
  v5 = *(char **)(v1 + 40);
  *(_DWORD *)(v1 + 52) = 0;
  v6 = v5;
  *(_DWORD *)(v1 + 56) = 0;
  while ( v6 )
  {
    if ( *((_DWORD *)v6 + 3) == 1 )
    {
      LODWORD(Size) = *((_DWORD *)v6 + 43) + *((_DWORD *)v6 + 41) + 24;
      v2 += Size;
    }
    v7 = *((unsigned int *)v6 + 38);
    if ( (_DWORD)v7 )
      v6 = &v5[v7];
    else
      v6 = 0LL;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < v2 )
  {
    *(_DWORD *)(v1 + 56) = v2;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    v8 = v4;
LABEL_16:
    memset(v5, 0, v8);
    return;
  }
  v9 = v4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x7877444Eu);
  v11 = PoolWithTag;
  v8 = v9;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_16;
  }
  memmove(PoolWithTag, v5, v9);
  memset(v5, 0, *(unsigned int *)(v1 + 48));
  v12 = 0;
  v13 = v11;
  while ( v13[3] != 1 )
  {
LABEL_23:
    v17 = (unsigned int)v13[38];
    if ( (_DWORD)v17 )
      v13 = (_DWORD *)((char *)v11 + v17);
    else
      v13 = 0LL;
    if ( !v13 )
      goto LABEL_29;
  }
  PMPacketPattern = ndisCreatePMPacketPattern(v13, (unsigned int *)&Size);
  v15 = PMPacketPattern;
  if ( PMPacketPattern )
  {
    v16 = (unsigned int)Size;
    memmove(v5, PMPacketPattern, (unsigned int)Size);
    ExFreePoolWithTag(v15, 0);
    v12 += Size;
    v5 += v16;
    goto LABEL_23;
  }
  *(_DWORD *)(a1 + 40) = -1073741670;
LABEL_29:
  *(_DWORD *)(v1 + 52) = v12;
  *(_DWORD *)(v1 + 56) = v12;
  ExFreePoolWithTag(v11, 0);
}
