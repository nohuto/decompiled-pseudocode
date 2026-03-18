/*
 * XREFs of MiMapNewSession @ 0x14057A744
 * Callers:
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 * Callees:
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiMarkPageActive @ 0x14006A8A0 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetSystemPage @ 0x1400E1348 (MiGetSystemPage.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 *v2; // r15
  __int64 v3; // rbx
  unsigned __int64 *SystemPage; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 *v8; // rdx
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // r14
  unsigned __int64 *v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // r10
  __int64 *v17; // r14
  __int64 v18; // rbp
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r12
  unsigned __int64 *v21; // r13
  __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  __int64 v25; // r12
  __int64 *v26; // rdi
  unsigned __int64 *v27; // r10
  __int64 v28; // rbx
  __int64 v29; // r10
  unsigned __int64 v30; // rbx
  _WORD *v31; // rax
  __int16 v32; // cx
  unsigned __int64 v34; // [rsp+20h] [rbp-78h]
  _WORD *v36; // [rsp+30h] [rbp-68h] BYREF
  __int16 v37; // [rsp+38h] [rbp-60h]
  unsigned __int16 v38; // [rsp+3Ah] [rbp-5Eh]
  __int64 v39; // [rsp+40h] [rbp-58h]
  _QWORD v40[3]; // [rsp+48h] [rbp-50h] BYREF

  v1 = a1;
  v2 = 0LL;
  v34 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v36);
  v3 = 7LL;
  do
  {
    SystemPage = (unsigned __int64 *)MiGetSystemPage((__int64)&v36);
    *SystemPage = (unsigned __int64)v2;
    v2 = SystemPage;
    --v3;
  }
  while ( v3 );
  v5 = 3LL;
  v6 = 0xFFFFF6FB7E400000uLL;
  LODWORD(v7) = 3;
  v8 = v40;
  do
  {
    *v8++ = v6;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v5;
  }
  while ( v5 );
  v9 = -1LL;
  v39 = 2LL;
  do
  {
    v10 = 0LL;
    v11 = v2;
    v2 = (unsigned __int64 *)*v2;
    v7 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v7 == 2 )
      v10 = v1;
    v12 = (unsigned __int64 *)v40[v7];
    *v11 = v10;
    v13 = qword_1403D0240 ^ (qword_1403D0240 ^ (((__int64)(v11 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v13 |= 0x100uLL;
    v14 = ~qword_1403D0220 & (v13 & 0xFFFFFFFFFFFFFE3DuLL | 0x42);
    *v12 = v14;
    if ( MiPteInShadowRange((__int64)v12) )
      MiWritePteShadow((__int64)v12, v14);
    MiInitializePfnForOtherProcess((__int64)(v11 + 0xB000000000LL) / 48, (__int64)v12, v9, 0);
    if ( (_DWORD)v7 == 2 )
      v11[5] |= 0xFFFFFFFFFuLL;
    MiMarkPageActive((__int64)v11);
    v9 = (__int64)(v11 + 0xB000000000LL) / 48;
    v1 = a1;
  }
  while ( (_DWORD)v7 );
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v34) )
    v15 |= 0x100uLL;
  v17 = (__int64 *)0xFFFFF6FC80000000LL;
  v18 = 2LL;
  v19 = v15 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  v20 = v34 + 0x90380000000LL;
  do
  {
    v21 = v2;
    v2 = (unsigned __int64 *)*v2;
    *v21 = a1;
    v22 = (((__int64)(v21 + 0xB000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
    v19 = v22 | v16 & v19;
    *(__int64 *)((char *)v17 + v20) = v19;
    if ( MiPteInShadowRange((__int64)v17 + v20) )
      MiWritePteShadow((__int64)v17 + v20, v19);
    v23 = v22 | qword_1403D0230 & 0xFFFF000000000FFFuLL | 0x21;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v23 |= 0x100uLL;
    v24 = v23 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    MiInitializePfn((__int64)v21, v17, 4u, 4);
    *v17 = v24;
    if ( MiPteInShadowRange((__int64)v17) )
      MiWritePteShadow((__int64)v17, v24);
    ++v17;
    v16 = 0xFFFF000000000FFFuLL;
    --v18;
  }
  while ( v18 );
  v25 = v39;
  v26 = (__int64 *)0xFFFFF6FC80000010LL;
  do
  {
    v27 = v2;
    v2 = (unsigned __int64 *)*v2;
    v28 = qword_1403D0230 ^ (qword_1403D0230 ^ (((__int64)(v27 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v28 |= 0x100uLL;
    v30 = v28 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    MiInitializePfn(v29, v26, 4u, 4);
    *v26 = v30;
    if ( MiPteInShadowRange((__int64)v26) )
      MiWritePteShadow((__int64)v26, v30);
    ++v26;
    --v25;
  }
  while ( v25 );
  v31 = v36;
  v32 = v37;
  ++*v36;
  return v38 | (unsigned int)(unsigned __int16)(v32 & *v31);
}
