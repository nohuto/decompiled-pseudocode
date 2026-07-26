/*
 * XREFs of ndisClonePMPatternList @ 0x1C0045790
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C00010F8 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00048A8 (ndisPMAddWOLPattern.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 */

__int64 __fastcall ndisClonePMPatternList(unsigned int *Src, _QWORD **a2)
{
  unsigned int v2; // ebp
  unsigned int *v4; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi
  void *v7; // rcx

  v2 = 0;
  v4 = Src;
  if ( Src )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4[4], 0x6B70444Eu);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memmove(PoolWithTag, v4, v4[4]);
      *v6 = 0LL;
      v6[1] = 0LL;
      *v6 = *a2;
      *a2 = v6;
      v4 = *(unsigned int **)v4;
      if ( !v4 )
        return v2;
    }
    if ( (unsigned __int8)byte_1C0083712 >= 2u )
      WPP_SF_(0x61u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids);
    v2 = -1073741670;
    while ( *a2 )
    {
      v7 = *a2;
      *a2 = (_QWORD *)**a2;
      ExFreePoolWithTag(v7, 0);
    }
  }
  return v2;
}
