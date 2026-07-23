/*
 * XREFs of HvpViewRemapViewOfPrimaryFile @ 0x140610338
 * Callers:
 *     HvpViewMapGrowFile @ 0x140610018 (HvpViewMapGrowFile.c)
 * Callees:
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     CcMapData @ 0x1404464C0 (CcMapData.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 *     CmpClaimGlobalQuota @ 0x1404F7320 (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x1404F7960 (CmpReleaseGlobalQuota.c)
 */

__int64 __fastcall HvpViewRemapViewOfPrimaryFile(
        __int64 a1,
        __int64 a2,
        struct _FILE_OBJECT *a3,
        unsigned int a4,
        ULONG Length)
{
  unsigned int v6; // r15d
  PVOID v7; // r12
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  PVOID Bcb; // [rsp+38h] [rbp-40h] BYREF
  PVOID Buffer; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]

  v6 = 0;
  v7 = 0LL;
  Bcb = 0LL;
  v20 = *(_QWORD *)(a2 + 8LL * (HIBYTE(a4) & 0x7F)) + 32LL * ((a4 >> 18) & 0x3F);
  v8 = v20;
  FileOffset.QuadPart = a4;
  v9 = *(_DWORD *)(v20 + 24);
  if ( Length > v9 )
  {
    if ( !CmpClaimGlobalQuota(Length - v9, a2) )
    {
      v10 = -1073741670;
      goto LABEL_16;
    }
    v6 = Length - *(_DWORD *)(v20 + 24);
  }
  if ( !CcMapData(a3, &FileOffset, Length, 0x11u, &Bcb, &Buffer) )
  {
    v10 = -1073741670;
    v7 = Bcb;
    goto LABEL_16;
  }
  v11 = (unsigned __int64)Buffer;
  v12 = (Length + 4095) & 0xFFFFF000;
  if ( *(_QWORD *)(v8 + 16) )
  {
    v10 = MmProtectSystemCacheView((unsigned __int64)Buffer, v12, 4u);
    if ( v10 < 0 )
    {
      v7 = Bcb;
      goto LABEL_16;
    }
  }
  else
  {
    MmProtectSystemCacheView((unsigned __int64)Buffer, v12, 2u);
  }
  v13 = *(_DWORD *)(v8 + 24);
  if ( v13 > Length )
    MmProtectSystemCacheView(Length + (*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFEuLL), v13 - Length, 4u);
  CcUnpinData(*(PVOID *)(v8 + 8));
  v14 = *(_DWORD *)(v8 + 24);
  if ( v14 > Length )
    CmpReleaseGlobalQuota(v14 - Length);
  *(_QWORD *)v8 = v11 ^ ((unsigned __int8)v11 ^ (*(_QWORD *)(v8 + 16) != 0LL)) & 1;
  *(_QWORD *)(v8 + 8) = Bcb;
  *(_DWORD *)(v8 + 24) = Length;
  v7 = 0LL;
  v10 = 0;
LABEL_16:
  if ( v7 )
    CcUnpinData(v7);
  if ( v10 < 0 )
  {
    v15 = *(_DWORD *)(v8 + 24);
    if ( v15 > Length )
    {
      CmpReleaseGlobalQuota(v15 - Length);
      *(_DWORD *)(v8 + 24) = Length;
      v10 = 0;
    }
    if ( v10 < 0 && v6 )
      CmpReleaseGlobalQuota(v6);
  }
  return (unsigned int)v10;
}
