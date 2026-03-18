/*
 * XREFs of MiUpdateLargePagePfns @ 0x1401E2B64
 * Callers:
 *     MiFindLargePageMemory @ 0x14062B53C (MiFindLargePageMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 */

__int64 __fastcall MiUpdateLargePagePfns(__int64 a1, __int64 a2)
{
  int v2; // edi
  _KPROCESS *Process; // rbp
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // r14
  unsigned __int8 v8; // r9
  unsigned __int64 v9; // r8
  bool v10; // zf
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = 48 * a2 - 0x58000000000LL;
  v6 = 0;
  v7 = v5 + 24576;
  do
  {
    v8 = MiLockPageInline(v5);
    v9 = *(_QWORD *)(v5 + 40) & 0xFE3FFFF000000000uLL | 0x40000FFFFFFFFDLL;
    *(_QWORD *)(v5 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
    v10 = *(_QWORD *)(v5 + 16) == 128LL;
    *(_QWORD *)(v5 + 40) = v9;
    if ( v10 )
    {
      v6 = 1;
      v11 = v2 & (unsigned int)dword_1402FE708 | (((v9 >> 36) & 3) << byte_1402FE6E8) | ((unsigned __int8)((v9 >> 58) & 0x3F) << byte_1402FE6D9);
      v12 = 3 * v11;
      *(_QWORD *)v5 = *(_QWORD *)(a1 + 24 * v11 + 16);
      ++*(_QWORD *)(a1 + 8 * v12 + 8);
      *(_QWORD *)(a1 + 8 * v12 + 16) = v5;
    }
    else
    {
      *(_QWORD *)v5 = Process;
      *(_QWORD *)(v5 + 16) = 128LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
    ++v2;
    v5 += 48LL;
  }
  while ( v5 != v7 );
  return v6;
}
