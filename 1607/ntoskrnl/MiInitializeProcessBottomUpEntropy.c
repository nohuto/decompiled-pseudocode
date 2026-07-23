/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x14046C0A4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  __int64 v1; // rdi
  bool v3; // zf
  char v4; // bp
  char v5; // r14
  __int64 v6; // rax
  int v7; // ebx
  unsigned int v8; // eax
  int *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v1 = 0LL;
  v3 = (*(_DWORD *)(a1 + 768) & 0x20000) == 0;
  v4 = 0;
  v5 = 0;
  v15 = 1;
  if ( !v3 )
    goto LABEL_16;
  v6 = ExGenRandom(1);
  v7 = (unsigned __int8)v6;
  if ( !(_DWORD)InitializationPhase )
    *(_DWORD *)(a1 + 768) |= 0x2000000u;
  if ( *(_QWORD *)(a1 + 1152) > 0x100000000uLL && (*(_DWORD *)(a1 + 768) & 0x2000000) != 0 )
  {
    v8 = v6 & 0xFFFFFF;
    v7 = 0x10000;
    v4 = 1;
    v5 = 1;
    if ( v8 > 0x10000 )
      v7 = v8;
  }
  if ( !v7 )
    v7 = 1;
  v15 = v7;
  if ( !v5 )
  {
LABEL_16:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 768), 0xFDFFFFFF);
    v7 = v15;
  }
  if ( v4 == 1 )
    v14 = v7 + (ExGenRandom(1) & 0xFFFFFF) + 0x1000000;
  else
    v14 = v7;
  v9 = &v14;
  v10 = 2LL;
  do
  {
    v11 = (unsigned int)*v9;
    v1 += 40LL;
    v12 = qword_140327FD0;
    ++v9;
    *(_DWORD *)(v1 + qword_140327FD0 + 276840452) = v11;
    result = v11 << 16;
    *(_QWORD *)(v1 + v12 + 276840456) = result;
    --v10;
  }
  while ( v10 );
  return result;
}
