/*
 * XREFs of QueryAndAllocString @ 0x1C0017A74
 * Callers:
 *     GetImageName @ 0x1C0017740 (GetImageName.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0017BB8 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

__int64 __fastcall QueryAndAllocString(
        void *Key,
        _FX_DRIVER_GLOBALS *Globals,
        const _UNICODE_STRING *ValueName,
        wchar_t **StringBuffer)
{
  _QWORD *v8; // rdi
  int v9; // ebx
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rax
  unsigned int dataType[4]; // [rsp+40h] [rbp-38h] BYREF
  void *Caller; // [rsp+78h] [rbp+0h]
  unsigned int dataLength; // [rsp+98h] [rbp+20h] BYREF

  *StringBuffer = 0LL;
  dataLength = 0;
  v8 = 0LL;
  v9 = FxRegKey::_QueryValue(Globals, Key, ValueName, 0, 0LL, &dataLength, 0LL);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147483643 )
    goto $cleanup;
  v10 = dataLength;
  v11 = FxPoolAllocator(Globals, &Globals->FxPoolFrameworks, 1u, dataLength, Globals->Tag, Caller);
  v8 = v11;
  if ( !v11 )
    return (unsigned int)-1073741670;
  memset(v11, 0, v10);
  v9 = FxRegKey::_QueryValue(Globals, Key, ValueName, dataLength, v8, &dataLength, dataType);
  if ( v9 >= 0 )
  {
    if ( dataType[0] - 1 <= 1 )
    {
      if ( !dataLength || (dataLength & 1) != 0 )
      {
        v9 = -1073741811;
      }
      else
      {
        v12 = (unsigned __int64)dataLength >> 1;
        *StringBuffer = (wchar_t *)v8;
        *((_WORD *)v8 + v12 - 1) = 0;
      }
$cleanup:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_15;
    }
    v9 = -1073741788;
  }
LABEL_15:
  if ( v8 )
    FxPoolFree(v8);
  return (unsigned int)v9;
}
