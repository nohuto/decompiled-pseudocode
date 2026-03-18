/*
 * XREFs of MiMarkPfnVerified @ 0x1400FE088
 * Callers:
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiCompleteSecureProcessFault @ 0x1401DECFC (MiCompleteSecureProcessFault.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x14074B6E4 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1401C3384 (KeSetPagePrivilege.c)
 */

char __fastcall MiMarkPfnVerified(__int64 a1, char a2)
{
  char v2; // bl
  ULONG_PTR v4; // rbp
  unsigned __int8 v5; // si
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

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
    if ( (v2 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    {
      v9[1] = 0LL;
      if ( (MiFlags & 0x80000) != 0 )
        v9[0] = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
      v7 = 2LL;
      if ( (v2 & 1) != 0 )
      {
        v7 = 6LL;
        v2 &= ~1u;
      }
      if ( (v2 & 0x20) != 0 )
        v7 = (unsigned int)v7 | 0x40;
      if ( (int)KeSetPagePrivilege(v4, v9, v7) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
    }
  }
  LOBYTE(v6) = (*(_QWORD *)(a1 + 40) >> 54) & 7;
  if ( (_BYTE)v6 != 3 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    if ( (v6 & 0x400) != 0 )
    {
      LOBYTE(v6) = (unsigned __int8)v6 >> 5;
      if ( (v6 & 2) != 0 )
        v2 |= 2u;
    }
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x10000) != 0 )
  {
    MiGetPagePrivilege(a1, 1, v9);
    LOBYTE(v6) = KeSetPagePrivilege(v4, v9, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v6) = v5;
    __writecr8(v5);
  }
  return v6;
}
