/*
 * XREFs of MiMarkPfnVerified @ 0x140108054
 * Callers:
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiRevertValidPte @ 0x1400DF690 (MiRevertValidPte.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiCompleteSecureProcessFault @ 0x1401EF570 (MiCompleteSecureProcessFault.c)
 *     MmChangeImageProtection @ 0x140481ECC (MmChangeImageProtection.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1407A5FDC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     KeSetPagePrivilege @ 0x140147314 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

char __fastcall MiMarkPfnVerified(__int64 a1, char a2)
{
  char v2; // bl
  ULONG_PTR v4; // rsi
  unsigned __int8 v5; // bp
  __int64 v6; // r8
  int v7; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = (a1 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = MiLockPageInline(a1);
  if ( (v2 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
      v2 &= ~2u;
    if ( (v2 & 2) != 0 && (MiFlags & 0x4000) != 0 )
    {
      v9[1] = 0LL;
      if ( (MiFlags & 0x20000) != 0 )
        v9[0] = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
      v6 = 2LL;
      if ( (v2 & 1) != 0 )
      {
        v6 = 6LL;
        v2 &= ~1u;
      }
      if ( (v2 & 0x20) != 0 )
        v6 = (unsigned int)v6 | 0x40;
      if ( (int)KeSetPagePrivilege(v4, v9, v6) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
    }
  }
  LOBYTE(v7) = (*(_QWORD *)(a1 + 40) >> 54) & 7;
  if ( (_BYTE)v7 != 3 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    v7 = *(_DWORD *)(a1 + 16);
    if ( (v7 & 0x400) != 0 )
    {
      LOBYTE(v7) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
      if ( (v7 & 2) != 0 )
        v2 |= 2u;
    }
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x4000) != 0 )
  {
    MiGetPagePrivilege(a1, 1, (unsigned __int64)v9);
    LOBYTE(v7) = KeSetPagePrivilege(v4, v9, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v7) = v5;
    __writecr8(v5);
  }
  return v7;
}
