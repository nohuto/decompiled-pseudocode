/*
 * XREFs of BiGetSystemStorePath @ 0x14053BCA4
 * Callers:
 *     BiLoadSystemStore @ 0x14053BB20 (BiLoadSystemStore.c)
 * Callees:
 *     wcscat_s @ 0x1401535B8 (wcscat_s.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiGetSystemPartition @ 0x14053BD8C (BiGetSystemPartition.c)
 *     BiGetFirmwareType @ 0x14053C62C (BiGetFirmwareType.c)
 */

__int64 __fastcall BiGetSystemStorePath(wchar_t **a1)
{
  wchar_t *v2; // rdi
  int FirmwareType; // eax
  const wchar_t *v4; // rbp
  int SystemPartition; // eax
  wchar_t *v6; // rsi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r14d
  wchar_t *PoolWithTag; // rax
  wchar_t *Src; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  Src = 0LL;
  FirmwareType = BiGetFirmwareType();
  if ( FirmwareType == 1 )
  {
    v4 = L"\\Boot\\BCD";
  }
  else
  {
    if ( (unsigned int)(FirmwareType - 2) > 1 )
      return (unsigned int)-1073741637;
    v4 = L"\\EFI\\Microsoft\\Boot\\BCD";
  }
  SystemPartition = BiGetSystemPartition(&Src);
  v6 = Src;
  v7 = SystemPartition;
  if ( SystemPartition >= 0 )
  {
    v8 = -1LL;
    v9 = -1LL;
    do
      ++v9;
    while ( Src[v9] );
    do
      ++v8;
    while ( v4[v8] );
    v10 = (unsigned int)(v9 + 1 + v8);
    v11 = v10;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v10, 0x4B444342u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      wcscpy_s(PoolWithTag, v11, v6);
      wcscat_s(v2, v11, v4);
      *a1 = v2;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v7 < 0 && v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v7;
}
