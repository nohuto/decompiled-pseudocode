/*
 * XREFs of MiValidVirtualizationFault @ 0x140224154
 * Callers:
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiLargePageFault @ 0x140223C5C (MiLargePageFault.c)
 * Callees:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiCompleteSecureProcessFault @ 0x140223B8C (MiCompleteSecureProcessFault.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiValidVirtualizationFault(__int64 a1, volatile __int64 *a2, unsigned __int8 a3)
{
  __int64 PteShadow; // rbx
  unsigned __int8 v4; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  PteShadow = *a2;
  v4 = a3;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, *a2);
  v12 = PteShadow;
  v7 = PteShadow;
  if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8 )
    v7 = MiReadPteShadow(&v12, PteShadow);
  v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
  if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
  {
    v9 = 48 * v8 - 0x58000000000LL;
    if ( *(__int64 *)(v9 + 8) >= 0 )
    {
      if ( !(unsigned int)MiCopyOnWriteEx((__int64)((_QWORD)a2 << 25) >> 16, a2, -1LL, v4, 0) )
        return;
      v10 = *a2;
      if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
        v10 = MiReadPteShadow(a2, *a2);
      v8 = (v10 >> 12) & 0xFFFFFFFFFLL;
      v9 = 48 * v8 - 0x58000000000LL;
    }
    MiCompleteSecureProcessFault(v9);
  }
  *(_QWORD *)(a1 + 40) = v8;
  if ( (PteShadow & 0x20) == 0 )
  {
    v11 = PteShadow | 0x20;
    v12 = v11;
    *a2 = v11;
    if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(a2, v11);
  }
}
