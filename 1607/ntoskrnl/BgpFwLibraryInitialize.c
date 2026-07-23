/*
 * XREFs of BgpFwLibraryInitialize @ 0x140725E8C
 * Callers:
 *     BgLibraryInitialize @ 0x140725CB8 (BgLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     BgpFwLibraryEnable @ 0x14012754C (BgpFwLibraryEnable.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14014C434 (BgpGxProcessQrCodeBitmap.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     BgpFwReservePoolSwap @ 0x140725168 (BgpFwReservePoolSwap.c)
 *     AnFwProgressIndicatorTransition @ 0x140725550 (AnFwProgressIndicatorTransition.c)
 *     LogFwInitialize @ 0x1407255A8 (LogFwInitialize.c)
 *     BgpFwInitializeReservePool @ 0x1407257D8 (BgpFwInitializeReservePool.c)
 *     AnFwConfigureProgressResources @ 0x140727B18 (AnFwConfigureProgressResources.c)
 *     ResFwConfigureDisplayStringResources @ 0x140727BF4 (ResFwConfigureDisplayStringResources.c)
 *     BgpFwLibraryDestroy @ 0x140728770 (BgpFwLibraryDestroy.c)
 *     BgpBcInitializeCriticalMode @ 0x1407D3ED8 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x1407D42D4 (BgpFoInitialize.c)
 *     BgpFwInitializeLock @ 0x1407D4DE0 (BgpFwInitializeLock.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // r14d
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  __int64 Memory; // rax
  unsigned int v10; // ebp
  int v11; // eax
  unsigned int v12; // r13d
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // r15d
  _OWORD *v19; // rax
  _OWORD *v20; // r12
  __int64 v21; // rdx
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  unsigned int *v24; // r8
  __int64 v25; // r15
  _OWORD *v26; // rbx
  int v27; // eax
  __int64 v28; // rdi
  void *v29; // rbx
  void *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // [rsp+60h] [rbp+8h]
  unsigned int v45; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 116) < 3u )
    return 3221225561LL;
  v5 = *(_DWORD *)(a1 + 120) & 0x3FF0000;
  if ( (dword_1402F9F90 & 1) != 0 && (dword_1402F9F90 & 4) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x100000) == 0 )
      return 3221225485LL;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
  {
LABEL_10:
    BgpFwAcquireLock();
    if ( a2 == -1 )
    {
      dword_1402F9F90 &= ~2u;
      memset(&BgInternal, 0, 0x28uLL);
      dword_1402F9F90 |= 0x101800u;
      result = BgpFwLibraryEnable(a1 + 32);
      if ( (int)result < 0 )
        return result;
      dword_1402F9F90 &= ~0x2000u;
      v6 = *(_QWORD *)(a1 + 16);
      if ( v6 )
      {
        BgpFwReservePoolSwap(0, *(_QWORD *)(a1 + 224), *(_DWORD *)(a1 + 232), v6);
        qword_1402FA048 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 240));
        qword_1402FA040 = AnFwConfigureProgressResources(*(_QWORD *)(a1 + 248));
      }
      else
      {
        qword_1402FA048 = 0LL;
        qword_1402FA040 = 0LL;
      }
      LogFwInitialize();
    }
    else
    {
      dword_1402F9F90 &= ~0x1000u;
      AnFwProgressIndicatorTransition();
    }
    BgpFwReleaseLock();
    goto LABEL_76;
  }
  if ( a2 == -1 )
  {
    dword_1402F9F90 = BgpFwInitializeLock(0x100000LL) | 0xC04;
    qword_1402FA058 = (__int64)&qword_1402FA050;
    qword_1402FA050 = (__int64)&qword_1402FA050;
    v7 = *(_QWORD *)(a1 + 224);
    if ( !v7 || !*(_DWORD *)(a1 + 232) )
      return 3221225626LL;
    BgpFwInitializeReservePool(v7, 0x4000u, dword_14033FBE0);
    v8 = BgpFwLibraryEnable(a1 + 32);
    if ( v8 < 0 )
      goto LABEL_78;
    xmmword_1402F9FC8 = *(_OWORD *)(a1 + 100);
    if ( *(_QWORD *)(a1 + 88) )
    {
      Memory = BgpFwAllocateMemory(0x18uLL);
      if ( !Memory )
      {
LABEL_24:
        v8 = -1073741801;
LABEL_78:
        BgpFwLibraryDestroy();
        return (unsigned int)v8;
      }
      *(_QWORD *)Memory = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(Memory + 16) = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(Memory + 12) = 1;
      qword_1402FA028 = Memory;
      v8 = BgpFoInitialize(Memory);
      if ( v8 < 0 )
        goto LABEL_78;
    }
    if ( *(_DWORD *)(a1 + 116) >= 3u )
    {
      qword_1402FA0EC = *(_QWORD *)(a1 + 388);
      dword_1402FA0F4 = *(_DWORD *)(a1 + 396);
    }
    dword_1402FA0E8 = *(_DWORD *)(a1 + 384);
    v8 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
    if ( v8 < 0 )
      goto LABEL_78;
    goto LABEL_76;
  }
  BgpFwAcquireLock();
  v8 = BgpFwLibraryEnable(a1 + 32);
  if ( v8 < 0 )
  {
    BgpFwReleaseLock();
    goto LABEL_77;
  }
  *(PHYSICAL_ADDRESS *)&xmmword_1402F9F70 = MmGetPhysicalAddress(qword_1402F9F40);
  DWORD2(xmmword_1402F9F70) = DWORD2(BgInternal);
  HIDWORD(xmmword_1402F9F70) = DWORD1(BgInternal);
  LODWORD(xmmword_1402F9F80) = HIDWORD(BgInternal);
  if ( (_DWORD)xmmword_1402F9F30 == 4 )
  {
    DWORD2(xmmword_1402F9F80) = 3;
  }
  else if ( (_DWORD)xmmword_1402F9F30 == 5 )
  {
    DWORD2(xmmword_1402F9F80) = 4;
  }
  else
  {
    DWORD2(xmmword_1402F9F80) = 0;
  }
  v10 = 0;
  v11 = 400;
  v12 = 0;
  xmmword_1402FA060 = *(_OWORD *)(a1 + 256);
  v13 = 0;
  xmmword_1402FA070 = *(_OWORD *)(a1 + 272);
  xmmword_1402FA080 = *(_OWORD *)(a1 + 288);
  xmmword_1402FA090 = *(_OWORD *)(a1 + 304);
  xmmword_1402FA0A0 = *(_OWORD *)(a1 + 320);
  xmmword_1402FA0B0 = *(_OWORD *)(a1 + 336);
  xmmword_1402FA0C0 = *(_OWORD *)(a1 + 352);
  xmmword_1402FA0D0 = *(_OWORD *)(a1 + 368);
  if ( *(_QWORD *)(a1 + 72) )
  {
    v12 = 2;
    v13 = *(_DWORD *)(a1 + 84);
    v10 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
    v11 = v10 + 432;
  }
  v14 = 0;
  v15 = 0;
  v43 = 0;
  if ( *(_QWORD *)(a1 + 128) )
  {
    v14 = 32;
    v43 = 32;
    v15 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
    v11 += v15 + 32;
  }
  v16 = v13 + 16480 + v11;
  v17 = v16 - v14 - v15 - v12 * 16 - v10 - 400;
  v18 = ((v17 >> 3) + 15) & 0xFFFFFFF0;
  v45 = v18 + v16;
  v19 = (_OWORD *)BgpFwAllocateMemory(v18 + v16);
  qword_1402F9FC0 = (__int64)v19;
  v20 = v19;
  if ( !v19 )
  {
    BgpFwReleaseLock();
    goto LABEL_24;
  }
  v21 = 3LL;
  v22 = (_OWORD *)a1;
  do
  {
    *v19 = *v22;
    v19[1] = v22[1];
    v19[2] = v22[2];
    v19[3] = v22[3];
    v19[4] = v22[4];
    v19[5] = v22[5];
    v19[6] = v22[6];
    v19 += 8;
    v23 = v22[7];
    v22 += 8;
    *(v19 - 1) = v23;
    --v21;
  }
  while ( v21 );
  *v19 = *v22;
  *(_DWORD *)v20 = v45;
  *((_DWORD *)v20 + 30) |= 0x100000u;
  *((_QWORD *)v20 + 28) = 0LL;
  *((_DWORD *)v20 + 58) = 0;
  *((_QWORD *)v20 + 31) = 0LL;
  *((_QWORD *)v20 + 30) = 0LL;
  v24 = (unsigned int *)((char *)v20 + v10 + v12 * 16 + v15 + v43 + 400);
  BgpFwInitializeReservePool((__int64)v24 + v18, v17, v24);
  qword_1402FA030 = 0LL;
  if ( !v10 )
    goto LABEL_51;
  v25 = (__int64)(v20 + 25);
  v26 = &v20[v12 + 25];
  memmove(v26, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 80));
  *((_QWORD *)v20 + 50) = v26;
  *((_DWORD *)v20 + 103) = 1;
  *((_DWORD *)v20 + 102) = *(_DWORD *)(a1 + 80);
  *((_QWORD *)v20 + 52) = v26;
  dword_1402F9F90 |= 0x800u;
  v27 = BgpFoInitialize(v20 + 25);
  dword_1402F9F90 &= ~0x800u;
  if ( v27 < 0 )
    v25 = qword_1402FA030;
  else
    qword_1402FA030 = (__int64)(v20 + 25);
  if ( !v25 )
LABEL_51:
    DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
  qword_1402FA038 = 0LL;
  if ( v15 )
  {
    v28 = (__int64)&v20[v12 + 25] + v10;
    v29 = (void *)(v28 + v43);
    memmove(v29, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
    *(_DWORD *)(v28 + 12) = 1;
    *(_QWORD *)v28 = v29;
    *(_DWORD *)(v28 + 8) = *(_DWORD *)(a1 + 136);
    *(_QWORD *)(v28 + 16) = v29;
    qword_1402FA038 = v28;
  }
  memset(&Src, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v30 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
    Src = v30;
    if ( v30 )
    {
      memmove(v30, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
      LODWORD(Size) = *(_DWORD *)(a1 + 160);
      qword_1402F9FEC = *(_QWORD *)(a1 + 164);
    }
  }
  v31 = *(_QWORD *)(a1 + 184);
  if ( v31 && (int)BgpGxProcessQrCodeBitmap(v31, &qword_1402FA018) < 0 )
    qword_1402FA018 = 0LL;
  qword_1402FA028 = 0LL;
  if ( *(_QWORD *)(a1 + 88) )
  {
    v32 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
    v33 = (__int64)v32;
    if ( v32 )
    {
      memmove(v32, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
      v34 = BgpFwAllocateMemory(0x18uLL);
      v35 = v34;
      if ( !v34 )
      {
        v36 = v33;
LABEL_67:
        BgpFwFreeMemory(v36);
        goto LABEL_68;
      }
      *(_DWORD *)(v34 + 12) = 0;
      *(_QWORD *)v34 = v33;
      *(_DWORD *)(v34 + 8) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(v34 + 16) = v33;
      if ( (int)BgpFoInitialize(v34) < 0 )
      {
        BgpFwFreeMemory(v33);
        v36 = v35;
        goto LABEL_67;
      }
      qword_1402FA028 = v35;
    }
  }
LABEL_68:
  if ( *(_DWORD *)(a1 + 116) >= 3u )
  {
    qword_1402FA0EC = *(_QWORD *)(a1 + 388);
    dword_1402FA0F4 = *(_DWORD *)(a1 + 396);
  }
  v37 = *(_DWORD *)(a1 + 384);
  dword_1402F9F90 |= 0x8000u;
  dword_1402FA0E8 = v37;
  BgpBcInitializeCriticalMode(a1, a2);
  dword_1402F9F90 = dword_1402F9F90 & 0xFFFF77FF | 0x800;
  v38 = BgpFwAllocateMemory(0x38uLL);
  dword_1402F9F90 &= ~0x800u;
  v39 = v38;
  if ( v38 )
  {
    v40 = *(_QWORD *)(a1 + 240);
    if ( v40 )
    {
      *(_OWORD *)v39 = *(_OWORD *)v40;
      *(_QWORD *)(v39 + 16) = *(_QWORD *)(v40 + 16);
      *(_DWORD *)(v39 + 24) = *(_DWORD *)(v40 + 24);
      *((_QWORD *)v20 + 30) = v39;
      v39 += 28LL;
    }
    v41 = *(_QWORD *)(a1 + 248);
    if ( v41 )
    {
      *(_OWORD *)v39 = *(_OWORD *)v41;
      *(_QWORD *)(v39 + 16) = *(_QWORD *)(v41 + 16);
      *(_DWORD *)(v39 + 24) = *(_DWORD *)(v41 + 24);
      *((_QWORD *)v20 + 31) = v39;
    }
  }
  qword_1402FA048 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 240));
  qword_1402FA040 = AnFwConfigureProgressResources(*(_QWORD *)(a1 + 248));
  v42 = *(_DWORD *)(a1 + 124);
  dword_1402F9F90 |= v5 | 0x80;
  dword_1402F9F94 = v42;
  BgpFwReleaseLock();
  qword_1402FA020 = *(_QWORD *)(a1 + 216);
LABEL_76:
  dword_1402F9F90 |= 1u;
  v8 = 0;
LABEL_77:
  if ( v8 < 0 )
    goto LABEL_78;
  return (unsigned int)v8;
}
