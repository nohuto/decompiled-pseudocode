/*
 * XREFs of HvpViewMapViewOfPrimaryFile @ 0x14061020C
 * Callers:
 *     HvViewMapStart @ 0x14060FD68 (HvViewMapStart.c)
 *     HvpViewMapGrowFile @ 0x140610018 (HvpViewMapGrowFile.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     CcMapData @ 0x1404464C0 (CcMapData.c)
 *     CmpClaimGlobalQuota @ 0x1404F7320 (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x1404F7960 (CmpReleaseGlobalQuota.c)
 */

__int64 __fastcall HvpViewMapViewOfPrimaryFile(
        __int64 a1,
        __int64 a2,
        struct _FILE_OBJECT *a3,
        unsigned int a4,
        ULONG Length)
{
  unsigned int v7; // edi
  LARGE_INTEGER v8; // r14
  __int64 v9; // rbx
  char *v10; // rsi
  char *v11; // rax
  int v12; // ebx
  char *Buffer; // rbx
  LARGE_INTEGER FileOffset; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0;
  v8.QuadPart = a4;
  v9 = HIBYTE(a4) & 0x7F;
  v10 = *(char **)(a2 + 8 * v9);
  if ( !v10 )
  {
    v11 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(2048LL, 0LL, 943017283LL);
    v10 = v11;
    if ( !v11 )
    {
LABEL_3:
      v12 = -1073741670;
LABEL_10:
      if ( v7 )
        CmpReleaseGlobalQuota(v7);
      return (unsigned int)v12;
    }
    memset(v11, 0, 0x800uLL);
    *(_QWORD *)(a2 + 8 * v9) = v10;
  }
  Buffer = &v10[32 * (((unsigned __int64)v8.QuadPart >> 18) & 0x3F)];
  FileOffset = v8;
  if ( !CmpClaimGlobalQuota(Length, a2) )
    goto LABEL_3;
  v7 = Length;
  if ( CcMapData(a3, &FileOffset, Length, 0x11u, (PVOID *)Buffer + 1, (PVOID *)Buffer) )
  {
    MmProtectSystemCacheView(*(_QWORD *)Buffer, (Length + 4095) & 0xFFFFF000, 2u);
    *((_DWORD *)Buffer + 6) = Length;
    v12 = 0;
  }
  else
  {
    v12 = -1073741670;
  }
  if ( v12 < 0 )
    goto LABEL_10;
  return (unsigned int)v12;
}
