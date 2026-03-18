/*
 * XREFs of sub_1404AE668 @ 0x1404AE668
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     sub_1404AE888 @ 0x1404AE888 (sub_1404AE888.c)
 */

__int64 __fastcall sub_1404AE668(__int64 a1, unsigned __int64 a2)
{
  int v3; // edi
  void *v4; // r14
  int v5; // r12d
  int v6; // ebx
  _BYTE *v7; // rcx
  __int128 v8; // xmm1
  unsigned __int64 v9; // r9
  PVOID PoolWithTag; // rax
  volatile void *v11; // r15
  unsigned int v12; // r12d
  void *Src[2]; // [rsp+48h] [rbp-50h]
  SIZE_T Length; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp+10h]
  PVOID P; // [rsp+B0h] [rbp+18h] BYREF

  v16 = a2;
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
  v7 = (_BYTE *)MmUserProbeAddress;
  if ( a2 + 32 > MmUserProbeAddress || a2 + 32 < a2 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    v7 = (_BYTE *)MmUserProbeAddress;
  }
  *(_OWORD *)Src = *(_OWORD *)a2;
  v8 = *(_OWORD *)(a2 + 16);
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned __int64)Src[0] + (unsigned int)v8;
    if ( v9 > (unsigned __int64)v7 || (void *)v9 < Src[0] )
      *v7 = 0;
  }
  if ( Src[0] && (_DWORD)v8 )
  {
    v5 = v8;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v8, 0x20534C53u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, Src[0], (unsigned int)v8);
      v11 = Src[1];
      if ( Src[1] )
        v6 = DWORD1(v8);
      goto LABEL_17;
    }
    v3 = -1073741801;
  }
  else
  {
    v3 = -1073741789;
  }
  v11 = Src[1];
LABEL_17:
  if ( v3 >= 0 )
  {
    v3 = sub_1404AE888((_DWORD)v4, v5, v6, (unsigned int)&P, (__int64)&Length);
    if ( v3 >= 0 )
    {
      if ( v11 )
      {
        v12 = Length;
        if ( DWORD1(v8) < (unsigned int)Length )
        {
          v3 = -1073741789;
        }
        else
        {
          ProbeForWrite(v11, (unsigned int)Length, 1u);
          memmove((void *)v11, P, v12);
          *(_DWORD *)(a2 + 20) = v12;
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
