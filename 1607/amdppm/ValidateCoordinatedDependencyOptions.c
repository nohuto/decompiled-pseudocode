/*
 * XREFs of ValidateCoordinatedDependencyOptions @ 0x1C001C174
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1C00151DC (PepNotifyQueryCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     ValidateCoordinatedDependencyOptionsPlatform @ 0x1C001C32C (ValidateCoordinatedDependencyOptionsPlatform.c)
 */

__int64 __fastcall ValidateCoordinatedDependencyOptions(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // r14
  unsigned int v7; // eax
  __int64 result; // rax
  int v9; // r8d
  __int64 v10; // rsi
  char v11; // r8
  unsigned int v12; // r9d
  _DWORD *v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ecx
  char v17; // al
  _BYTE *v18; // rdi
  __int64 v19; // rdx
  bool v20; // zf
  char v21[16]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v22[176]; // [rsp+40h] [rbp-D8h] BYREF

  v6 = a2;
  v7 = *(_DWORD *)(a5 + 12);
  if ( v7 > a4 )
    KeBugCheckEx(0x143u, 2uLL, 0LL, v7, 0LL);
  if ( !v7 )
    return 3221225485LL;
  KeInitializeAffinityEx(v22);
  v10 = *(_QWORD *)(a5 + 16);
  if ( v10 )
  {
    KeAddProcessorAffinityEx(v22, *(unsigned int *)(v10 + 56));
    v12 = *(_DWORD *)(a5 + 12);
    v11 = 0;
    v13 = *(_DWORD **)(v10 + 1096);
    v14 = 0LL;
    if ( v12 )
    {
      while ( 1 )
      {
        v15 = *(unsigned __int8 *)(a5 + 4 * v14 + 24);
        if ( (unsigned int)v15 >= *v13 )
          break;
        if ( *(_BYTE *)(a5 + 4 * v14 + 27) )
        {
          if ( SLOBYTE(v13[3 * v15 + 1]) < 0 )
            v11 = 1;
          if ( !*(_BYTE *)(a5 + 4 * v14 + 25) )
            break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v12 )
          goto LABEL_14;
      }
      result = 3221225485LL;
    }
    else
    {
LABEL_14:
      result = 0LL;
    }
  }
  else
  {
    result = ValidateCoordinatedDependencyOptionsPlatform(a1, v6, v9, a5, (__int64)v22, (__int64)v21);
    v11 = v21[0];
  }
  if ( (int)result >= 0 )
  {
    v16 = *(_DWORD *)(a5 + 12);
    v17 = 0;
    if ( !v16 )
      return 3221225659LL;
    v18 = (_BYTE *)(a5 + 27);
    v19 = v16;
    do
    {
      if ( *(v18 - 1) )
        v17 = 1;
      v20 = *v18 == 0;
      v18 += 4;
      if ( !v20 )
        v17 = 1;
      --v19;
    }
    while ( v19 );
    if ( !v17 )
      return 3221225659LL;
    if ( v11 )
      *(_BYTE *)(216 * v6 + a1 + 48 + 201) = 1;
    if ( !(unsigned int)KeAndAffinityEx(v22, 216 * v6 + a1 + 48, 0LL) )
    {
      KeOrAffinityEx(v22, 216 * v6 + a1 + 48, 216 * v6 + a1 + 48);
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
