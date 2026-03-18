/*
 * XREFs of QueryAndAllocString @ 0x1C000E5D0
 * Callers:
 *     GetImageName @ 0x1C000E28C (GetImageName.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

__int64 __fastcall QueryAndAllocString(
        void *Key,
        _FX_DRIVER_GLOBALS *Globals,
        _UNICODE_STRING *ValueName,
        _KEY_VALUE_PARTIAL_INFORMATION **Info)
{
  _KEY_VALUE_PARTIAL_INFORMATION *v4; // rdi
  NTSTATUS v9; // ebx
  unsigned int v10; // ecx
  ULONG Tag; // eax
  _KEY_VALUE_PARTIAL_INFORMATION *v12; // rax
  unsigned int DataLength; // ecx
  void *Caller; // [rsp+48h] [rbp+0h]
  unsigned int length; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  *Info = 0LL;
  v9 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, 0LL, 0, &length);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
    goto $cleanup;
  v10 = length + 12;
  if ( length + 12 < length )
    return (unsigned int)-1073741675;
  Tag = Globals->Tag;
  length += 12;
  v12 = (_KEY_VALUE_PARTIAL_INFORMATION *)FxPoolAllocator(Globals, &Globals->FxPoolFrameworks, 1u, v10, Tag, Caller);
  v4 = v12;
  if ( !v12 )
    return (unsigned int)-1073741670;
  memset(v12, 0, length);
  v9 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, v4, length, &length);
  if ( v9 >= 0 )
  {
    if ( v4->Type - 1 <= 1 )
    {
      DataLength = v4->DataLength;
      if ( !DataLength || (DataLength & 1) != 0 || DataLength > length - 12 )
        v9 = -1073741811;
      else
        *Info = v4;
$cleanup:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_17;
    }
    v9 = -1073741788;
  }
LABEL_17:
  if ( v4 )
    FxPoolFree(v4);
  return (unsigned int)v9;
}
