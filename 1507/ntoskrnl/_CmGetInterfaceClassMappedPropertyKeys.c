/*
 * XREFs of _CmGetInterfaceClassMappedPropertyKeys @ 0x1407189AC
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140458418 (_PnpDispatchInterfaceClass.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140713FA0 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140458610 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1407188A8 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyKeys(
        __int64 *a1,
        __int64 a2,
        char *a3,
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
  char v13; // di
  __int64 v14; // rax
  unsigned int v15; // ecx
  _DWORD v16[18]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a7;
  result = 0LL;
  *a7 = 0;
  v10 = 0;
  if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface )
  {
    if ( a4 )
      goto LABEL_35;
    result = CmGetInterfaceClassMappedPropertyFromRegValue(
               a1,
               a2,
               a3,
               (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
               v16,
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
LABEL_35:
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
    if ( a4 )
      goto LABEL_36;
    result = CmGetInterfaceClassMappedPropertyFromComposite(
               (__int64)a1,
               a2,
               (__int64)a3,
               (__int64)&DEVPKEY_NAME,
               v16,
               0LL,
               0,
               &a7);
    if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
    {
      v13 = 1;
    }
    else if ( (_DWORD)result == -1073741772 )
    {
      goto LABEL_6;
    }
    result = 0LL;
    if ( v13 )
    {
LABEL_36:
      if ( a5 )
      {
        v14 = *v7;
        if ( (unsigned int)v14 < a6 )
          *(DEVPROPKEY *)(a5 + 20 * v14) = DEVPKEY_NAME;
      }
      v15 = *v7 + 1;
      if ( v15 < *v7 )
      {
        *v7 = -1;
        result = 3221225621LL;
        *v7 = 0;
      }
      else
      {
        *v7 = v15;
        result = 0LL;
      }
    }
    if ( (int)result >= 0 )
      return a6 < *v7 ? 0xC0000023 : 0;
  }
  return result;
}
