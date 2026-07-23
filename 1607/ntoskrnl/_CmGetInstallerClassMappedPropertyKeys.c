/*
 * XREFs of _CmGetInstallerClassMappedPropertyKeys @ 0x1406DDFF0
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1404BB7AC (_PnpDispatchInstallerClass.c)
 *     _CmDeleteInstallerClassWorker @ 0x1406D90AC (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404BBA40 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1404BBC3C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406DDAC4 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDDA0 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyKeys(
        __int64 *a1,
        __int64 a2,
        void *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  __int64 result; // rax
  unsigned int v11; // r15d
  __int64 v12; // rbp
  char v13; // si
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  __int64 *v18; // r14
  __int64 v19; // rbp
  char v20; // si
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned int v24; // ebp
  __int64 *v25; // r14
  __int64 v26; // r15
  char v27; // si
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ecx
  int InstallerClassMappedPropertyFromCoInstallers; // eax
  __int64 v32; // rax
  unsigned int v33; // ecx
  _DWORD v34[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v35; // [rsp+90h] [rbp+8h]
  __int64 v36; // [rsp+98h] [rbp+10h]
  void *v37; // [rsp+A0h] [rbp+18h]

  v37 = a3;
  v36 = a2;
  v35 = (__int64)a1;
  v7 = a7;
  v8 = (__int64 *)&CmClassRegPropMap;
  result = 0LL;
  *a7 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = *v8;
    v13 = 0;
    if ( !*v8 )
      goto LABEL_16;
    if ( a4 )
      break;
    result = CmGetInstallerClassMappedPropertyFromRegProp(a1, a2, a3, *v8, v34, 0LL, 0, (unsigned int *)&a7);
    if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
    {
      v13 = 1;
    }
    else if ( (_DWORD)result == -1073741772 )
    {
      goto LABEL_65;
    }
    result = 0LL;
    if ( v13 )
      break;
LABEL_15:
    a1 = (__int64 *)v35;
LABEL_16:
    ++v11;
    v8 += 3;
    if ( v11 >= 9 )
      goto LABEL_19;
    a2 = v36;
    a3 = v37;
  }
  if ( a5 )
  {
    v14 = *v7;
    if ( (unsigned int)v14 < a6 )
    {
      v15 = 5 * v14;
      *(_OWORD *)(a5 + 4 * v15) = *(_OWORD *)v12;
      *(_DWORD *)(a5 + 4 * v15 + 16) = *(_DWORD *)(v12 + 16);
    }
  }
  v16 = *v7 + 1;
  if ( v16 >= *v7 )
  {
    *v7 = v16;
    result = 0LL;
    goto LABEL_15;
  }
  *v7 = -1;
  result = 3221225621LL;
  *v7 = 0;
LABEL_19:
  if ( (int)result < 0 )
    return result;
  v17 = 0;
  v18 = (__int64 *)&off_1406EB3D0;
  while ( 2 )
  {
    v19 = *v18;
    v20 = 0;
    if ( !*v18 )
      goto LABEL_34;
    if ( !a4 )
    {
      result = CmGetInstallerClassMappedPropertyFromRegValue(v35, v36, v37, *v18, v34, 0LL, 0, (int *)&a7);
      if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
      {
        v20 = 1;
      }
      else if ( (_DWORD)result == -1073741772 )
      {
        goto LABEL_65;
      }
      result = 0LL;
      if ( !v20 )
      {
LABEL_34:
        ++v17;
        v18 += 4;
        if ( v17 >= 0xD )
          goto LABEL_37;
        continue;
      }
    }
    break;
  }
  if ( a5 )
  {
    v21 = *v7;
    if ( (unsigned int)v21 < a6 )
    {
      v22 = 5 * v21;
      *(_OWORD *)(a5 + 4 * v22) = *(_OWORD *)v19;
      *(_DWORD *)(a5 + 4 * v22 + 16) = *(_DWORD *)(v19 + 16);
    }
  }
  v23 = *v7 + 1;
  if ( v23 >= *v7 )
  {
    *v7 = v23;
    result = 0LL;
    goto LABEL_34;
  }
  *v7 = -1;
  result = 3221225621LL;
  *v7 = 0;
LABEL_37:
  if ( (int)result < 0 )
    return result;
  v24 = 0;
  v25 = (__int64 *)&off_1406E9B50;
  while ( 2 )
  {
    v26 = *v25;
    v27 = 0;
    if ( !a4 )
    {
      result = CmGetInstallerClassMappedPropertyFromComposite(
                 v35,
                 v36,
                 (__int64)v37,
                 *v25,
                 v34,
                 0LL,
                 0,
                 (unsigned int *)&a7);
      if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
      {
        v27 = 1;
      }
      else if ( (_DWORD)result == -1073741772 )
      {
        goto LABEL_65;
      }
      result = 0LL;
      if ( !v27 )
      {
LABEL_51:
        ++v24;
        v25 += 2;
        if ( v24 >= 2 )
          goto LABEL_54;
        continue;
      }
    }
    break;
  }
  if ( a5 )
  {
    v28 = *v7;
    if ( (unsigned int)v28 < a6 )
    {
      v29 = 5 * v28;
      *(_OWORD *)(a5 + 4 * v29) = *(_OWORD *)v26;
      *(_DWORD *)(a5 + 4 * v29 + 16) = *(_DWORD *)(v26 + 16);
    }
  }
  v30 = *v7 + 1;
  if ( v30 >= *v7 )
  {
    *v7 = v30;
    result = 0LL;
    goto LABEL_51;
  }
  *v7 = -1;
  result = 3221225621LL;
  *v7 = 0;
LABEL_54:
  if ( (int)result >= 0 )
  {
    if ( a4
      || (InstallerClassMappedPropertyFromCoInstallers = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                           v35,
                                                           v36,
                                                           (__int64)a3,
                                                           v34,
                                                           0LL,
                                                           0,
                                                           &a7),
          InstallerClassMappedPropertyFromCoInstallers == -1073741789)
      || !InstallerClassMappedPropertyFromCoInstallers )
    {
      if ( a5 )
      {
        v32 = *v7;
        if ( (unsigned int)v32 < a6 )
          *(DEVPROPKEY *)(a5 + 20 * v32) = DEVPKEY_DeviceClass_ClassCoInstallers;
      }
      v33 = *v7 + 1;
      if ( v33 >= *v7 )
      {
        *v7 = v33;
        return a6 < *v7 ? 0xC0000023 : 0;
      }
      result = 3221225621LL;
LABEL_65:
      *v7 = 0;
    }
    else
    {
      return a6 < *v7 ? 0xC0000023 : 0;
    }
  }
  return result;
}
