/*
 * XREFs of ACPIVectorGetEntry @ 0x1C004180C
 * Callers:
 *     ACPIVectorInstall @ 0x1C0041920 (ACPIVectorInstall.c)
 * Callees:
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

char __fastcall ACPIVectorGetEntry(_DWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // esi
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  PVOID v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // rcx
  char v11; // dl
  char result; // al

  LOBYTE(v1) = GpeVectorFree;
  if ( GpeVectorFree )
  {
    v7 = GpeVectorTable;
  }
  else
  {
    v1 = GpeVectorTableSize;
    v3 = (unsigned int)(GpeVectorTableSize + 4);
    if ( (unsigned int)v3 < GpeVectorTableSize )
      return 0;
    v4 = 16 * v3;
    if ( v4 > 0xFFFFFFFF )
      return 0;
    v5 = v4;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v4, 0x67706341u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return 0;
    memset(PoolWithTag, 0, v5);
    v8 = GpeVectorTable;
    if ( GpeVectorTable )
    {
      memmove(v7, GpeVectorTable, 16LL * v1);
      ExFreePoolWithTag(v8, 0);
    }
    GpeVectorTableSize += 4;
    v9 = 0;
    GpeVectorTable = v7;
    do
    {
      v10 = 2LL * (v9 + v1);
      v11 = v9++ + v1 + 1;
      *((_BYTE *)v7 + 8 * v10) = v11;
    }
    while ( v9 < 4 );
    *((_BYTE *)v7 + 16 * v9 + 16 * v1 - 16) = 0;
  }
  result = 1;
  *a1 = (unsigned __int8)v1;
  GpeVectorFree = *((_BYTE *)v7 + 16 * (unsigned __int8)v1);
  return result;
}
