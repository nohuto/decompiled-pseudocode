/*
 * XREFs of ValidateCoordinatedDependencyOptions @ 0x1C001B6B0
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1C0020C0C (PepNotifyQueryCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     ValidateCoordinatedDependencyOptionsPlatform @ 0x1C001B804 (ValidateCoordinatedDependencyOptionsPlatform.c)
 *     ValidateCoordinatedDependencyOptionsProcessor @ 0x1C001B8C4 (ValidateCoordinatedDependencyOptionsProcessor.c)
 */

__int64 __fastcall ValidateCoordinatedDependencyOptions(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // ecx
  char v13; // al
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  bool v16; // zf
  _BYTE v17[16]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v18[176]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = a2;
  v7 = *(_DWORD *)(a5 + 12);
  if ( v7 > a4 )
    KeBugCheckEx(0x143u, 2uLL, 0LL, v7, 0LL);
  if ( !v7 )
    return 3221225485LL;
  KeInitializeAffinityEx(v18);
  if ( *(_QWORD *)(a5 + 16) )
    result = ValidateCoordinatedDependencyOptionsProcessor(v10, v9, a5, (unsigned int)v18, (__int64)v17);
  else
    result = ValidateCoordinatedDependencyOptionsPlatform(a1, v6, v11, a5, (__int64)v18, (__int64)v17);
  if ( (int)result >= 0 )
  {
    v12 = *(_DWORD *)(a5 + 12);
    v13 = 0;
    if ( !v12 )
      return 3221225659LL;
    v14 = (_BYTE *)(a5 + 27);
    v15 = v12;
    do
    {
      if ( *(v14 - 1) )
        v13 = 1;
      v16 = *v14 == 0;
      v14 += 4;
      if ( !v16 )
        v13 = 1;
      --v15;
    }
    while ( v15 );
    if ( !v13 )
      return 3221225659LL;
    if ( v17[0] )
      *(_BYTE *)(216 * v6 + a1 + 48 + 201) = 1;
    if ( !(unsigned int)KeAndAffinityEx(v18, 216 * v6 + a1 + 48, 0LL) )
    {
      KeOrAffinityEx(v18, 216 * v6 + a1 + 48, 216 * v6 + a1 + 48);
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
