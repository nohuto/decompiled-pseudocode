/*
 * XREFs of MiMapNewSession @ 0x1404FFD90
 * Callers:
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 * Callees:
 *     MiGetSystemPage @ 0x140011A30 (MiGetSystemPage.c)
 *     MiMarkPageActive @ 0x140018440 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 *v2; // r14
  __int64 v3; // rbx
  unsigned __int64 *SystemPage; // rax
  unsigned __int64 PdeAddress; // rax
  __int64 v6; // rdi
  unsigned __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rdi
  unsigned __int64 *v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // r12
  _QWORD *v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r15
  unsigned __int64 *v22; // r8
  __int64 v23; // rbp
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // r13
  unsigned __int64 *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  _WORD *v31; // rax
  __int64 v34; // [rsp+20h] [rbp-88h]
  unsigned __int64 PteAddress; // [rsp+28h] [rbp-80h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  _WORD *v37; // [rsp+38h] [rbp-70h] BYREF
  __int16 v38; // [rsp+40h] [rbp-68h]
  unsigned __int16 v39; // [rsp+42h] [rbp-66h]
  __int64 v40; // [rsp+48h] [rbp-60h]
  __int64 v41; // [rsp+50h] [rbp-58h]
  _QWORD v42[3]; // [rsp+58h] [rbp-50h] BYREF

  v1 = a1;
  v2 = 0LL;
  PteAddress = MiGetPteAddress(a1);
  MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v37);
  v3 = 7LL;
  do
  {
    SystemPage = (unsigned __int64 *)MiGetSystemPage((__int64)MiSystemPartition, (__int64)&v37);
    *SystemPage = (unsigned __int64)v2;
    v2 = SystemPage;
    --v3;
  }
  while ( v3 );
  PdeAddress = MiGetPdeAddress(0xFFFFF90000000000uLL);
  v6 = 3LL;
  v7 = v42;
  LODWORD(v8) = 3;
  do
  {
    *v7 = PdeAddress;
    PdeAddress = MiGetPteAddress(PdeAddress);
    ++v7;
    --v6;
  }
  while ( v6 );
  v9 = -1LL;
  v36 = MiGetPteAddress(0LL);
  v41 = 2LL;
  v10 = v36;
  do
  {
    v11 = 0LL;
    v8 = (unsigned int)(v8 - 1);
    v12 = v2;
    v2 = (unsigned __int64 *)*v2;
    if ( (_DWORD)v8 == 2 )
      v11 = v1;
    v13 = (unsigned __int64 *)v42[v8];
    *v12 = v11;
    v14 = (__int64)(v12 + 0xB000000000LL) / 48;
    v15 = qword_140381330 ^ (qword_140381330 ^ (v14 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( !v10 || !MiGetPdeAddress(0LL) )
      v15 |= 4uLL;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v15 |= 0x100uLL;
    v16 = ~qword_140381310 & (v15 & 0xFFFFFFFFFFFFFE3DuLL | 0x42);
    *v13 = v16;
    if ( MiPteInShadowRange((__int64)v13) )
      MiWritePteShadow((__int64)v13, v16);
    MiInitializePfnForOtherProcess(v14, (__int64)v13, v9, 0);
    if ( (_DWORD)v8 == 2 )
      v12[5] |= 0xFFFFFFFFFuLL;
    MiMarkPageActive((__int64)v12);
    v10 = v36;
    v9 = (__int64)(v12 + 0xB000000000LL) / 48;
    v1 = a1;
  }
  while ( (_DWORD)v8 );
  v17 = MiMakeValidKernelPte(0LL, 4, PteAddress, 0xFFFFFFFFF000LL) | 0x42;
  v40 = MiGetPteAddress(0xFFFFF90000000000uLL);
  v18 = 2LL;
  v19 = (_QWORD *)v40;
  v20 = PteAddress - v40;
  v21 = a1;
  do
  {
    v22 = v2;
    v34 = (__int64)v2;
    v2 = (unsigned __int64 *)*v2;
    *v22 = v21;
    v23 = (((__int64)(v22 + 0xB000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
    v17 = v23 | v17 & 0xFFFF000000000FFFuLL;
    *(_QWORD *)((char *)v19 + v20) = v17;
    if ( MiPteInShadowRange((__int64)v19 + v20) )
      MiWritePteShadow((__int64)v19 + v20, v17);
    v24 = v23 | qword_140381320 & 0xFFFF000000000FFFuLL | 0x21;
    if ( !v36 || !MiGetPdeAddress(0LL) )
      v24 |= 4uLL;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v24 |= 0x100uLL;
    v25 = v24 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    MiInitializePfn(v34, (unsigned __int64)v19, 4u, 4);
    *v19 = v25;
    if ( MiPteInShadowRange((__int64)v19) )
      MiWritePteShadow((__int64)v19, v25);
    ++v19;
    --v18;
  }
  while ( v18 );
  v26 = v41;
  v27 = (unsigned __int64 *)(v40 + 16);
  do
  {
    v28 = (__int64)v2;
    v2 = (unsigned __int64 *)*v2;
    v29 = qword_140381320 ^ (qword_140381320 ^ (((v28 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( !v36 || !MiGetPdeAddress(0LL) )
      v29 |= 4uLL;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v29 |= 0x100uLL;
    v30 = v29 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    MiInitializePfn(v28, (unsigned __int64)v27, 4u, 4);
    *v27 = v30;
    if ( MiPteInShadowRange((__int64)v27) )
      MiWritePteShadow((__int64)v27, v30);
    ++v27;
    --v26;
  }
  while ( v26 );
  v31 = v37;
  ++*v37;
  return v39 | (unsigned int)(unsigned __int16)(v38 & *v31);
}
