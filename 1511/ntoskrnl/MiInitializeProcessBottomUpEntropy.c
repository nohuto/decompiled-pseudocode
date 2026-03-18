/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x1404634D4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  char v1; // si
  char v2; // bp
  bool v3; // zf
  __int64 v5; // rax
  int v6; // ebx
  unsigned int v7; // eax
  int *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

  v1 = 0;
  v2 = 0;
  v3 = (*(_DWORD *)(a1 + 768) & 0x20000) == 0;
  v14 = 1;
  if ( !v3 )
    goto LABEL_16;
  v5 = ExGenRandom(1);
  v6 = (unsigned __int8)v5;
  if ( !(_DWORD)InitializationPhase )
    *(_DWORD *)(a1 + 768) |= 0x2000000u;
  if ( *(_QWORD *)(a1 + 1152) > 0x100000000uLL && (*(_DWORD *)(a1 + 768) & 0x2000000) != 0 )
  {
    v7 = v5 & 0xFFFFFF;
    v6 = 0x10000;
    v1 = 1;
    v2 = 1;
    if ( v7 > 0x10000 )
      v6 = v7;
  }
  if ( !v6 )
    v6 = 1;
  v14 = v6;
  if ( !v2 )
  {
LABEL_16:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 768), 0xFDFFFFFF);
    v6 = v14;
  }
  if ( v1 == 1 )
    v13 = v6 + (ExGenRandom(1) & 0xFFFFFF) + 0x1000000;
  else
    v13 = v6;
  v8 = &v13;
  v9 = (__int64 *)0xFFFFF58010804228LL;
  v10 = 2LL;
  do
  {
    v11 = (unsigned int)*v8++;
    *((_DWORD *)v9 - 1) = v11;
    result = v11 << 16;
    *v9 = result;
    v9 += 5;
    --v10;
  }
  while ( v10 );
  return result;
}
