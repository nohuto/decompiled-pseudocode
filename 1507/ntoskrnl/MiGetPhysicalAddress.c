/*
 * XREFs of MiGetPhysicalAddress @ 0x1400DF980
 * Callers:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 * Callees:
 *     MiSetNonPagedPoolNoSteal @ 0x1400E01E0 (MiSetNonPagedPoolNoSteal.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 Process; // rcx
  __int64 v9; // r9
  unsigned __int64 *v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r10
  __int64 PteShadow; // r9
  unsigned __int64 v17; // rbx
  __int64 *v18; // r10
  unsigned __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]

  *a3 = 0;
  v3 = a1;
  if ( (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0 )
  {
    v6 = *(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v6 & 0x81) == 0x81 )
    {
      v7 = ((v6 >> 12) & 0xFFFFFFFFFLL) + ((v3 >> 12) & 0x1FF);
LABEL_32:
      *a3 = 1;
      goto LABEL_33;
    }
  }
  Process = 0x904C0000000LL;
  LODWORD(v9) = 3;
  v22 = ((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v9 = (unsigned int)(v9 - 1);
    v10 = (unsigned __int64 *)*(&v22 + v9);
    v11 = *v10;
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v11)
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v13 = *(_QWORD *)(Process + 1520);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8 * ((v12 >> 3) & 0x1FF));
        if ( (v14 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v14 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
    }
    v21 = v11;
    if ( (v11 & 1) == 0 )
      return 0LL;
  }
  while ( (_DWORD)v9 );
  if ( (v11 & 0x80u) != 0LL )
  {
    if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8 )
      v11 = MiReadPteShadow(&v21, v11);
    v7 = ((v11 >> 12) & 0xFFFFFFFFFLL) + ((v3 >> 12) & 0x1FF);
    goto LABEL_32;
  }
  v15 = (__int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v15;
  v17 = (unsigned __int64)(v15 + 0x12090482600LL);
  if ( (unsigned __int64)(v15 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v15, *v15);
  v21 = PteShadow;
  if ( (PteShadow & 1) == 0 )
    return 0LL;
  if ( v3 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
  {
    MiSetNonPagedPoolNoSteal(v15);
    PteShadow = *v18;
    if ( v17 <= 0x7F8 )
      PteShadow = MiReadPteShadow(v18, *v18);
    v21 = PteShadow;
  }
  v19 = PteShadow;
  if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8 )
    v19 = MiReadPteShadow(&v21, PteShadow);
  v7 = (v19 >> 12) & 0xFFFFFFFFFLL;
  if ( (PteShadow & 0x800) != 0 )
    goto LABEL_32;
LABEL_33:
  v21 = v7 << 12;
  result = 1LL;
  LODWORD(v21) = (v3 & 0xFFF) + v21;
  *a2 = v21;
  return result;
}
