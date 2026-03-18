/*
 * XREFs of MiLargePageFault @ 0x140223C5C
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiNoFaultFound @ 0x14007EB84 (MiNoFaultFound.c)
 *     MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x14007ECA0 (MI_CHECK_KERNEL_NOEXECUTE_FAULT.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiCanGrantExecute @ 0x140223AF4 (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x140224154 (MiValidVirtualizationFault.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiLargePageFault(char a1, unsigned __int64 a2, ULONG_PTR a3, char a4, __int64 a5)
{
  __int64 v6; // r9
  volatile signed __int64 *v7; // r14
  ULONG_PTR v8; // rsi
  signed __int64 PteShadow; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  signed __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+44h] [rbp-BCh]
  int v21; // [rsp+48h] [rbp-B8h]
  int v22; // [rsp+4Ch] [rbp-B4h]
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]

  v6 = a5;
  v7 = (volatile signed __int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v8 = a3;
  PteShadow = *v7;
  if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v7, *v7);
  v18 = PteShadow;
  if ( (v8 & 1) == 0 || *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( (a1 & 2) != 0 )
    {
      if ( (PteShadow & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)MiNoFaultFound(a1, v7, a2, v6, 0, ZeroPte) )
      {
        v22 = 0;
        v23 = 0LL;
        v24 = 0LL;
        v19 = 1;
        v20 = 0;
        v21 = 20;
        MiInsertTbFlushEntry((__int64)&v19, a2 & 0xFFFFFFFFFFE00000uLL, 1LL, 1);
        MiFlushTbList((__int64)&v19);
      }
    }
    if ( (a1 & 0x10) != 0 )
    {
      if ( PteShadow >= 0 )
      {
        if ( !a4 )
          MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, v8, PteShadow, 7u);
      }
      else
      {
        if ( !MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, a2) )
          return 3221225477LL;
        v13 = PteShadow;
        if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
          v13 = MiReadPteShadow(&v18, PteShadow);
        if ( !MI_IS_PFN((v13 >> 12) & 0xFFFFFFFFFLL) )
          return 3221225477LL;
        v16 = qword_1403D0220 | PteShadow & 0x7FFFFFFFFFFFFFFFLL;
        v18 = v16;
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        {
          v16 |= 0x20uLL;
          v18 = v16;
        }
        *v7 = v16;
        if ( (unsigned __int64)v7 + v15 <= v14 )
          MiWritePteShadow(v7, v16);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(a2, 1, 0);
      }
    }
    if ( (v8 & 1) != 0 )
    {
      v17 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v17 == 5 )
      {
        LOBYTE(a3) = 17;
        MiValidVirtualizationFault(v17, v7, a3);
        *(_QWORD *)(v17 + 40) += (a2 - (a2 & 0xFFFFFFFFFFE00000uLL)) >> 12;
      }
    }
  }
  return 0LL;
}
