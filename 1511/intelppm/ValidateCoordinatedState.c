/*
 * XREFs of ValidateCoordinatedState @ 0x1C001B950
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1C0020C0C (PepNotifyQueryCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateCoordinatedState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  char v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v9; // r10
  _BYTE *v10; // rcx
  bool v11; // zf
  _BYTE v13[176]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = a1 + 216LL * a2;
  KeCopyAffinityEx(v13, &unk_1C000DF98);
  v3 = *(_DWORD *)(v2 + 244);
  v4 = 0;
  v5 = 0;
  if ( !v3 )
    return (unsigned int)-1073741811;
  v6 = (_QWORD *)(*(_QWORD *)(v2 + 256) + 8LL);
  v7 = v3;
  do
  {
    v8 = *((_DWORD *)v6 - 1);
    if ( v8 )
    {
      v9 = v8;
      v10 = (_BYTE *)(*v6 + 2LL);
      do
      {
        v11 = *v10 == 0;
        v10 += 4;
        if ( !v11 )
          v5 = 1;
        --v9;
      }
      while ( v9 );
    }
    v6 += 2;
    --v7;
  }
  while ( v7 );
  if ( v5 )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(v2 + 48, &unk_1C000DF98) )
      *(_BYTE *)(v2 + 248) = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
