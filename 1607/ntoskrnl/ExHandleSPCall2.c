/*
 * XREFs of ExHandleSPCall2 @ 0x1404B35D4
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     sub_1404B3800 @ 0x1404B3800 (sub_1404B3800.c)
 */

__int64 __fastcall ExHandleSPCall2(__int64 a1, unsigned __int64 a2)
{
  int v3; // edi
  void *v4; // rsi
  int v5; // r12d
  int v6; // ebx
  __int128 v7; // xmm1
  unsigned __int64 v8; // r8
  PVOID PoolWithTag; // rax
  volatile void *v10; // r15
  unsigned int v11; // r12d
  void *Src[2]; // [rsp+48h] [rbp-50h]
  SIZE_T Length; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+10h]
  PVOID P; // [rsp+B0h] [rbp+18h] BYREF

  v15 = a2;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  P = 0LL;
  LODWORD(Length) = 0;
  v6 = 0;
  if ( !a2 )
  {
    v3 = -1073741789;
    goto LABEL_24;
  }
  if ( a2 + 32 > 0x7FFFFFFF0000LL || a2 + 32 < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_OWORD *)Src = *(_OWORD *)a2;
  v7 = *(_OWORD *)(a2 + 16);
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned __int64)Src[0] + (unsigned int)v7;
    if ( v8 > 0x7FFFFFFF0000LL || (void *)v8 < Src[0] )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( Src[0] && (_DWORD)v7 )
  {
    v5 = v7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v7, 0x20534C53u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, Src[0], (unsigned int)v7);
      v10 = Src[1];
      if ( Src[1] )
        v6 = DWORD1(v7);
      goto LABEL_17;
    }
    v3 = -1073741801;
  }
  else
  {
    v3 = -1073741789;
  }
  v10 = Src[1];
LABEL_17:
  if ( v3 >= 0 )
  {
    v3 = sub_1404B3800((_DWORD)v4, v5, v6, (unsigned int)&P, (__int64)&Length);
    if ( v3 >= 0 )
    {
      if ( v10 )
      {
        v11 = Length;
        if ( DWORD1(v7) < (unsigned int)Length )
        {
          v3 = -1073741789;
        }
        else
        {
          ProbeForWrite(v10, (unsigned int)Length, 1u);
          memmove((void *)v10, P, v11);
          *(_DWORD *)(a2 + 20) = v11;
        }
      }
      else
      {
        *(_DWORD *)(a2 + 20) = Length;
      }
    }
  }
LABEL_24:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  return (unsigned int)v3;
}
