/*
 * XREFs of _CmGetInterfaceClassMappedPropertyKeys @ 0x1406DE570
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1404D95D4 (_PnpDispatchInterfaceClass.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1406D9468 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404D97CC (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1406DE46C (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        void *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 result; // rax
  char v10; // di
  __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // ebp
  __int64 *v14; // rsi
  __int64 v15; // r14
  char v16; // di
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ecx
  _DWORD v20[18]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a7;
  result = 0LL;
  *a7 = 0;
  v10 = 0;
  if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface )
  {
    if ( a4 )
      goto LABEL_37;
    result = CmGetInterfaceClassMappedPropertyFromRegValue(
               a1,
               a2,
               a3,
               (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
               v20,
               0LL,
               0,
               &a7);
    if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
    {
      v10 = 1;
    }
    else if ( (_DWORD)result == -1073741772 )
    {
LABEL_6:
      *v7 = 0;
      return result;
    }
    result = 0LL;
    if ( v10 )
    {
LABEL_37:
      if ( a5 )
      {
        v11 = *v7;
        if ( (unsigned int)v11 < a6 )
          *(DEVPROPKEY *)(a5 + 20 * v11) = DEVPKEY_DeviceInterfaceClass_DefaultInterface;
      }
      v12 = *v7 + 1;
      if ( v12 < *v7 )
      {
        *v7 = -1;
        result = 3221225621LL;
        *v7 = 0;
      }
      else
      {
        *v7 = v12;
        result = 0LL;
      }
    }
  }
  if ( (int)result >= 0 )
  {
    v13 = 0;
    v14 = (__int64 *)&off_1406E9978;
    while ( 1 )
    {
      v15 = *v14;
      v16 = 0;
      if ( a4 )
        goto LABEL_38;
      result = CmGetInterfaceClassMappedPropertyFromComposite(a1, a2, (__int64)a3, *v14, v20, 0LL, 0, &a7);
      if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
      {
        v16 = 1;
      }
      else if ( (_DWORD)result == -1073741772 )
      {
        goto LABEL_6;
      }
      result = 0LL;
      if ( v16 )
      {
LABEL_38:
        if ( a5 )
        {
          v17 = *v7;
          if ( (unsigned int)v17 < a6 )
          {
            v18 = 5 * v17;
            *(_OWORD *)(a5 + 4 * v18) = *(_OWORD *)v15;
            *(_DWORD *)(a5 + 4 * v18 + 16) = *(_DWORD *)(v15 + 16);
          }
        }
        v19 = *v7 + 1;
        if ( v19 < *v7 )
        {
          *v7 = -1;
          result = 3221225621LL;
          *v7 = 0;
LABEL_33:
          if ( (int)result >= 0 )
            return a6 < *v7 ? 0xC0000023 : 0;
          return result;
        }
        *v7 = v19;
        result = 0LL;
      }
      ++v13;
      v14 += 2;
      if ( v13 )
        goto LABEL_33;
    }
  }
  return result;
}
