/*
 * XREFs of MiMapNewSession @ 0x140536ED4
 * Callers:
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 * Callees:
 *     MiMarkPageActive @ 0x140021054 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiGetSystemPage @ 0x1400FB9D4 (MiGetSystemPage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1)
{
  unsigned __int64 *v1; // r14
  __int64 v2; // rbx
  unsigned __int64 *SystemPage; // rax
  unsigned __int64 PdeAddress; // rax
  __int64 v5; // rbx
  unsigned __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r12
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rsi
  unsigned __int64 *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r11
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // ebp
  unsigned __int64 v22; // r13
  _QWORD *v23; // rsi
  unsigned __int64 *v24; // r11
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r11
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  _WORD *v31; // rax
  __int64 v34; // [rsp+28h] [rbp-70h]
  _WORD *v35; // [rsp+30h] [rbp-68h] BYREF
  __int16 v36; // [rsp+38h] [rbp-60h]
  unsigned __int16 v37; // [rsp+3Ah] [rbp-5Eh]
  unsigned __int64 PteAddress; // [rsp+40h] [rbp-58h]
  _QWORD v39[3]; // [rsp+48h] [rbp-50h] BYREF

  v1 = 0LL;
  PteAddress = MiGetPteAddress(a1);
  MiInitializePageColorBase(0LL, 0, (__int64)&v35);
  v2 = 7LL;
  do
  {
    SystemPage = (unsigned __int64 *)MiGetSystemPage((__int64)MiSystemPartition, (__int64)&v35);
    *SystemPage = (unsigned __int64)v1;
    v1 = SystemPage;
    --v2;
  }
  while ( v2 );
  PdeAddress = MiGetPdeAddress(qword_140326958);
  LODWORD(v5) = 3;
  v6 = v39;
  do
  {
    *v6 = PdeAddress;
    PdeAddress = MiGetPteAddress(PdeAddress);
    v6 = (unsigned __int64 *)(v7 + 8);
  }
  while ( v8 != 1 );
  v9 = -1LL;
  v10 = MiGetPteAddress(0LL);
  v34 = v10;
  do
  {
    v5 = (unsigned int)(v5 - 1);
    v11 = 0LL;
    v12 = v1;
    v1 = (unsigned __int64 *)*v1;
    if ( (_DWORD)v5 == 2 )
      v11 = a1;
    v13 = (unsigned __int64 *)v39[v5];
    *v12 = v11;
    v14 = qword_1403A9350;
    if ( v10 )
      MiGetPdeAddress(0LL);
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v15 |= 0x100uLL;
    *v13 = ~v14 & (v15 & 0xFFFFFFFFFFFFFE3DuLL | 0x42);
    if ( MiPteInShadowRange((unsigned __int64)v13) )
      MiWritePteShadow(v16, v17);
    MiInitializePfnForOtherProcess((__int64)(v12 + 0xB000000000LL) / 48, (__int64)v13, v9, 0);
    if ( (_DWORD)v5 == 2 )
      v12[5] |= 0xFFFFFFFFFuLL;
    MiMarkPageActive((__int64)v12);
    v10 = v34;
    v9 = (__int64)(v12 + 0xB000000000LL) / 48;
  }
  while ( (_DWORD)v5 );
  v18 = PteAddress;
  v19 = MiMakeValidKernelPte(0LL, 4, PteAddress) | 0x42;
  v20 = MiGetPteAddress(qword_140326958);
  v21 = 0;
  v22 = v18 - v20;
  v23 = (_QWORD *)v20;
  do
  {
    v24 = v1;
    v1 = (unsigned __int64 *)*v1;
    v25 = (__int64)(v24 + 0xB000000000LL) / 48;
    if ( v21 < 2 )
    {
      *v24 = a1;
      v19 ^= (v19 ^ (v25 << 12)) & 0xFFFFFFFFF000LL;
      *(_QWORD *)((char *)v23 + v22) = v19;
      if ( MiPteInShadowRange((unsigned __int64)v23 + v22) )
        MiWritePteShadow(v26, v19);
    }
    v27 = qword_1403A9360 ^ (qword_1403A9360 ^ (v25 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( !v34 || !MiGetPdeAddress(0LL) )
      v27 |= 4uLL;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v27 |= 0x100uLL;
    v29 = v27 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    MiInitializePfn(v28, (__int64)v23, 4LL, 4);
    *v23 = v29;
    if ( MiPteInShadowRange((unsigned __int64)v23) )
      MiWritePteShadow(v30, v29);
    ++v23;
    ++v21;
  }
  while ( v21 < 4 );
  v31 = v35;
  ++*v35;
  return v37 | (unsigned int)(unsigned __int16)(v36 & *v31);
}
