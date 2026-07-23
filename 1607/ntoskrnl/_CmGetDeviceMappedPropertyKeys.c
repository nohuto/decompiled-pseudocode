/*
 * XREFs of _CmGetDeviceMappedPropertyKeys @ 0x1406DD574
 * Callers:
 *     _PnpDispatchDevice @ 0x1404E3594 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8A6C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404DE698 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14054F090 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  __int64 result; // rax
  unsigned int v11; // ebp
  __int64 v12; // rsi
  char v13; // di
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  __int64 *v18; // r14
  __int64 v19; // rsi
  char v20; // di
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned int v24; // ebp
  __int64 *v25; // rsi
  __int64 v26; // r14
  char v27; // di
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ecx
  _DWORD v31[18]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+8h]
  const wchar_t *v33; // [rsp+A8h] [rbp+10h]
  void *v34; // [rsp+B0h] [rbp+18h]

  v34 = (void *)a3;
  v33 = (const wchar_t *)a2;
  v32 = a1;
  v7 = a7;
  v8 = (__int64 *)&CmDeviceRegPropMap;
  result = 0LL;
  v11 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v12 = *v8;
    v13 = 0;
    if ( !*v8 )
      goto LABEL_16;
    if ( a4 )
      break;
    result = CmGetDeviceMappedPropertyFromRegProp(a1, a2, a3, v12, v31, 0LL, 0, (int *)&a7, 0);
    if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
    {
      v13 = 1;
    }
    else if ( (_DWORD)result == -1073741632 )
    {
LABEL_7:
      *v7 = 0;
      return result;
    }
    result = 0LL;
    if ( v13 )
      break;
LABEL_15:
    a1 = v32;
LABEL_16:
    ++v11;
    v8 += 3;
    if ( v11 >= 0x21 )
      goto LABEL_19;
    a3 = (__int64)v34;
    a2 = (__int64)v33;
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
  result = 3221225621LL;
  *v7 = 0;
LABEL_19:
  if ( (int)result < 0 )
    return result;
  v17 = 0;
  v18 = (__int64 *)&off_1406E9ED0;
  while ( 2 )
  {
    v19 = *v18;
    v20 = 0;
    if ( !*v18 )
      goto LABEL_34;
    if ( !a4 )
    {
      result = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(v32, (__int64)v33, v34, v19, v31, 0LL, 0, &a7);
      if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
      {
        v20 = 1;
      }
      else if ( (_DWORD)result == -1073741632 )
      {
        goto LABEL_7;
      }
      result = 0LL;
      if ( !v20 )
      {
LABEL_34:
        ++v17;
        v18 += 4;
        if ( v17 >= 2 )
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
  result = 3221225621LL;
  *v7 = 0;
LABEL_37:
  if ( (int)result < 0 )
    return result;
  v24 = 0;
  v25 = (__int64 *)&off_1406EB930;
  while ( 2 )
  {
    v26 = *v25;
    v27 = 0;
    if ( !a4 )
    {
      result = CmGetDeviceMappedPropertyFromComposite(v32, v33, (size_t)v34, v26, v31, 0LL, 0, (int *)&a7, 0);
      if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
      {
        v27 = 1;
      }
      else if ( (_DWORD)result == -1073741632 )
      {
        goto LABEL_7;
      }
      result = 0LL;
      if ( !v27 )
      {
LABEL_51:
        ++v24;
        v25 += 2;
        if ( v24 >= 0x18 )
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
  result = 3221225621LL;
  *v7 = 0;
LABEL_54:
  if ( (int)result >= 0 )
    return a6 < *v7 ? 0xC0000023 : 0;
  return result;
}
