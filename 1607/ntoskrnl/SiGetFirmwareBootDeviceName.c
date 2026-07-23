/*
 * XREFs of SiGetFirmwareBootDeviceName @ 0x1405425BC
 * Callers:
 *     SiGetSystemPartition @ 0x140542570 (SiGetSystemPartition.c)
 *     SiGetSystemDisk @ 0x1406D60EC (SiGetSystemDisk.c)
 * Callees:
 *     SiValidateSystemPartition @ 0x14012F318 (SiValidateSystemPartition.c)
 *     wcsstr @ 0x14014F70C (wcsstr.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     _snwscanf_s @ 0x1401527FC (_snwscanf_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SiTranslateSymbolicLink @ 0x140542818 (SiTranslateSymbolicLink.c)
 *     SiGetFirmwareBootDeviceNameFromRegistry @ 0x14054298C (SiGetFirmwareBootDeviceNameFromRegistry.c)
 */

__int64 __fastcall SiGetFirmwareBootDeviceName(int a1, _QWORD *a2)
{
  WCHAR *v2; // r15
  WCHAR *v3; // rsi
  PVOID v4; // rdi
  int FirmwareBootDeviceNameFromRegistry; // eax
  wchar_t *v7; // r12
  int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // rbx
  size_t v11; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v14; // rax
  SIZE_T v15; // r14
  WCHAR *v16; // rax
  char v17; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h]
  wchar_t *Src; // [rsp+50h] [rbp-18h] BYREF
  int v21; // [rsp+B8h] [rbp+50h] BYREF
  int v22; // [rsp+C0h] [rbp+58h] BYREF
  char v23; // [rsp+C8h] [rbp+60h] BYREF

  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  Src = 0LL;
  v4 = 0LL;
  *a2 = 0LL;
  FirmwareBootDeviceNameFromRegistry = SiGetFirmwareBootDeviceNameFromRegistry(&Src);
  v7 = Src;
  v8 = FirmwareBootDeviceNameFromRegistry;
  if ( FirmwareBootDeviceNameFromRegistry < 0 )
    goto LABEL_17;
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( Src[v10] );
  if ( snwscanf_s(Src, v10 + 1, L"multi(%d)disk(%d)rdisk(%d)partition(%d)", &v21, &v22, &v17, &v23) != 4 )
  {
    v8 = -1073741823;
    goto LABEL_17;
  }
  if ( !v21 && !v22 )
  {
    v11 = v10 + 11;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v11, 0x4B505953u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_17;
    }
    swprintf_s(PoolWithTag, v11, L"%s%s", L"\\ArcName\\", v7);
    v8 = SiTranslateSymbolicLink(v3);
    if ( v8 >= 0 )
    {
      v4 = P;
      v8 = SiValidateSystemPartition((const WCHAR *)P);
      if ( v8 < 0 )
        goto LABEL_28;
      if ( a1 )
        goto LABEL_11;
      v14 = wcsstr(v3, L"partition");
      if ( v14 )
        *v14 = 0;
      do
        ++v9;
      while ( v3[v9] );
      v15 = 2 * (v9 + 1);
      v16 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v15, 0x4B505953u);
      v2 = v16;
      if ( !v16 )
      {
        v8 = -1073741670;
LABEL_28:
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        goto LABEL_13;
      }
      memmove(v16, v3, v15);
      ExFreePoolWithTag(v4, 0);
      P = 0LL;
      v8 = SiTranslateSymbolicLink(v2);
      if ( v8 >= 0 )
      {
        v4 = P;
LABEL_11:
        *a2 = v4;
        goto LABEL_12;
      }
    }
    v4 = P;
    goto LABEL_28;
  }
  v8 = -1073741823;
LABEL_12:
  if ( v8 < 0 )
    goto LABEL_28;
LABEL_13:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_17:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
