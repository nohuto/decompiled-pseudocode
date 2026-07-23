/*
 * XREFs of MiLargePageFault @ 0x1401EF658
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x14001F078 (MiNoFaultFound.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiCheckSystemNxFault @ 0x1400AEE78 (MiCheckSystemNxFault.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiCanGrantExecute @ 0x1401EF4E0 (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x1401EFB2C (MiValidVirtualizationFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLargePageFault(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, char a4)
{
  unsigned int v7; // eax
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r10
  __int64 v13; // r11
  _KPROCESS *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r9d
  int v23; // r10d
  unsigned __int64 v24; // rsi
  signed __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-C0h]
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+54h] [rbp-ACh]
  int v30; // [rsp+58h] [rbp-A8h]
  int v31; // [rsp+5Ch] [rbp-A4h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]

  v7 = MI_IS_PHYSICAL_ADDRESS(a2);
  v27 = v7;
  v8 = 4096LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v7 )
  {
    v10 = v7;
    do
    {
      v8 <<= 9;
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v10;
    }
    while ( v10 );
  }
  v26 = MI_READ_PTE_LOCK_FREE(v9);
  if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( (a1 & 2) != 0 )
    {
      if ( (v26 & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)MiNoFaultFound(a1, (volatile signed __int64 *)v9, a2, 0LL, ZeroPte, v13) )
      {
        v31 = 0;
        v29 = 0;
        v32 = 0LL;
        v33 = 0LL;
        v28 = 1;
        v30 = 20;
        MiInsertTbFlushEntry((__int64)&v28, a2 & ~(v8 - 1), 1LL, v27);
        MiFlushTbList((__int64)&v28, v15, v16, v17);
      }
      v12 = a4;
    }
    if ( (a1 & 0x10) != 0 )
    {
      if ( v26 >= 0 )
      {
        if ( !v12 )
          MiCheckSystemNxFault(a1, a2, a3, v26, 7u);
      }
      else
      {
        if ( !(unsigned int)MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, a2) )
          return 3221225477LL;
        v18 = MI_GET_PAGE_FRAME_FROM_PTE(&v26);
        if ( !MiIsPfnInline(v18) )
          return 3221225477LL;
        v19 = qword_1403A9350 | v26 & 0x7FFFFFFFFFFFFFFFLL;
        v26 = v19;
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        {
          v19 |= 0x20uLL;
          v26 = v19;
        }
        *(_QWORD *)v9 = v19;
        if ( MiPteInShadowRange(v9) )
        {
          MiWritePteShadow(v21, v20);
          v11 = (unsigned int)MiFlags;
        }
        if ( ((unsigned int)v11 & v23) == 0 && ((unsigned int)v11 & v22) == 0 )
          KeFlushSingleTb(a2, 1u, 0);
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v24 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v24 == 5 )
      {
        LOBYTE(v11) = 17;
        MiValidVirtualizationFault(v24, v9, v11);
        *(_QWORD *)(v24 + 40) = MiVaToPfn(a2);
      }
    }
  }
  return 0LL;
}
