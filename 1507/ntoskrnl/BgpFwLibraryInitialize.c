/*
 * XREFs of BgpFwLibraryInitialize @ 0x14075D630
 * Callers:
 *     BgLibraryInitialize @ 0x14075CD30 (BgLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     BgpFwLibraryEnable @ 0x14015003C (BgpFwLibraryEnable.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     BgpFwReservePoolSwap @ 0x14075C158 (BgpFwReservePoolSwap.c)
 *     AnFwProgressIndicatorTransition @ 0x14075C350 (AnFwProgressIndicatorTransition.c)
 *     LogFwInitialize @ 0x14075C5B0 (LogFwInitialize.c)
 *     BgpFwInitializeReservePool @ 0x14075CC38 (BgpFwInitializeReservePool.c)
 *     ResFwConfigureDisplayStringResources @ 0x14075EAA0 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x14075EB1C (AnFwConfigureProgressResources.c)
 *     BgpFwLibraryDestroy @ 0x14075F6E8 (BgpFwLibraryDestroy.c)
 *     BgpBcInitializeCriticalMode @ 0x1407FD8F0 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x1407FDC5C (BgpFoInitialize.c)
 *     BgpFwInitializeLock @ 0x1407FE79C (BgpFwInitializeLock.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  __int64 v5; // r13
  int v6; // r15d
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebp
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edi
  _OWORD *v16; // rax
  _OWORD *v17; // r12
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  unsigned int *v20; // r8
  __int64 v21; // rdi
  _OWORD *v22; // rbx
  int v23; // eax
  __int64 v24; // rdi
  void *v25; // rbx
  void *v26; // rax
  void *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  __int64 result; // rax
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 Memory; // rax
  __int64 v40; // rcx
  unsigned int v41; // [rsp+70h] [rbp+8h]
  unsigned int v43; // [rsp+80h] [rbp+18h]
  int v44; // [rsp+88h] [rbp+20h]

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  v5 = 2LL;
  if ( *(_DWORD *)(a1 + 116) != 2 )
    return 3221225561LL;
  v6 = *(_DWORD *)(a1 + 120) & 0x3FF0000;
  if ( (dword_140323CF0 & 1) != 0 && (dword_140323CF0 & 4) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
      goto LABEL_39;
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
  {
LABEL_39:
    BgpFwAcquireLock();
    if ( a2 == -1 )
    {
      dword_140323CF0 &= ~2u;
      memset(&BgInternal, 0, 0x28uLL);
      dword_140323CF0 |= 0x101800u;
      result = BgpFwLibraryEnable(a1 + 32);
      if ( (int)result < 0 )
        return result;
      dword_140323CF0 &= ~0x2000u;
      v37 = *(_QWORD *)(a1 + 16);
      if ( v37 )
      {
        BgpFwReservePoolSwap(0, *(_QWORD *)(a1 + 192), *(_DWORD *)(a1 + 200), v37);
        qword_140323D88 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 208));
        qword_140323D80 = AnFwConfigureProgressResources(*(_QWORD *)(a1 + 216));
      }
      else
      {
        qword_140323D88 = 0LL;
        qword_140323D80 = 0LL;
      }
      LogFwInitialize();
    }
    else
    {
      dword_140323CF0 &= ~0x1000u;
      AnFwProgressIndicatorTransition();
    }
    BgpFwReleaseLock();
    goto LABEL_45;
  }
  if ( a2 == -1 )
  {
    dword_140323CF0 = BgpFwInitializeLock(0x100000LL) | 0xC04;
    qword_140323D98 = (__int64)&qword_140323D90;
    qword_140323D90 = (__int64)&qword_140323D90;
    v38 = *(_QWORD *)(a1 + 192);
    if ( !v38 || !*(_DWORD *)(a1 + 200) )
      return 3221225626LL;
    BgpFwInitializeReservePool(v38, 0x4000u, dword_14036BE80);
    v7 = BgpFwLibraryEnable(a1 + 32);
    if ( v7 < 0 )
      goto LABEL_52;
    xmmword_140323D28 = *(_OWORD *)(a1 + 100);
    if ( *(_QWORD *)(a1 + 88) )
    {
      Memory = BgpFwAllocateMemory(0x18uLL);
      if ( !Memory )
        goto LABEL_63;
      *(_QWORD *)Memory = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(Memory + 16) = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(Memory + 12) = 1;
      qword_140323D68 = Memory;
      v7 = BgpFoInitialize(Memory, 0LL);
      if ( v7 < 0 )
        goto LABEL_52;
    }
    v7 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
    if ( v7 < 0 )
      goto LABEL_52;
    goto LABEL_45;
  }
  BgpFwAcquireLock();
  v7 = BgpFwLibraryEnable(a1 + 32);
  if ( v7 >= 0 )
  {
    *(PHYSICAL_ADDRESS *)&xmmword_140323CD0 = MmGetPhysicalAddress(qword_140323CA0);
    DWORD2(xmmword_140323CD0) = DWORD2(BgInternal);
    HIDWORD(xmmword_140323CD0) = DWORD1(BgInternal);
    LODWORD(xmmword_140323CE0) = HIDWORD(BgInternal);
    if ( (_DWORD)xmmword_140323C90 == 4 )
    {
      DWORD2(xmmword_140323CE0) = 3;
    }
    else if ( (_DWORD)xmmword_140323C90 == 5 )
    {
      DWORD2(xmmword_140323CE0) = 4;
    }
    else
    {
      DWORD2(xmmword_140323CE0) = 0;
    }
    v8 = 0;
    v9 = 352;
    v43 = 0;
    xmmword_140323DA0 = *(_OWORD *)(a1 + 224);
    v10 = 0;
    v11 = 0;
    xmmword_140323DB0 = *(_OWORD *)(a1 + 240);
    xmmword_140323DC0 = *(_OWORD *)(a1 + 256);
    xmmword_140323DD0 = *(_OWORD *)(a1 + 272);
    xmmword_140323DE0 = *(_OWORD *)(a1 + 288);
    xmmword_140323DF0 = *(_OWORD *)(a1 + 304);
    xmmword_140323E00 = *(_OWORD *)(a1 + 320);
    xmmword_140323E10 = *(_OWORD *)(a1 + 336);
    if ( *(_QWORD *)(a1 + 72) )
    {
      v8 = 32;
      v11 = *(_DWORD *)(a1 + 84);
      v10 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
      v43 = 2;
      v9 = v10 + 384;
    }
    v12 = 0;
    v41 = 0;
    if ( *(_QWORD *)(a1 + 128) )
    {
      v12 = 32;
      v41 = 32;
      v2 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
      v9 += v2 + 32;
    }
    v13 = v11 + v9 + 16480;
    v14 = v13 - v12 - v2 - v8 - v10 - 352;
    v15 = ((v14 >> 3) + 15) & 0xFFFFFFF0;
    v44 = v15 + v13;
    v16 = (_OWORD *)BgpFwAllocateMemory(v15 + v13);
    qword_140323D20 = (__int64)v16;
    v17 = v16;
    if ( v16 )
    {
      v18 = (_OWORD *)a1;
      do
      {
        *v16 = *v18;
        v16[1] = v18[1];
        v16[2] = v18[2];
        v16[3] = v18[3];
        v16[4] = v18[4];
        v16[5] = v18[5];
        v16[6] = v18[6];
        v16 += 8;
        v19 = v18[7];
        v18 += 8;
        *(v16 - 1) = v19;
        --v5;
      }
      while ( v5 );
      *v16 = *v18;
      v16[1] = v18[1];
      v16[2] = v18[2];
      v16[3] = v18[3];
      v16[4] = v18[4];
      v16[5] = v18[5];
      *(_DWORD *)v17 = v44;
      *((_DWORD *)v17 + 30) |= 0x100000u;
      *((_QWORD *)v17 + 24) = 0LL;
      *((_DWORD *)v17 + 50) = 0;
      v20 = (unsigned int *)((char *)&v17[v43 + 22] + v2 + v41 + v10);
      *((_QWORD *)v17 + 27) = 0LL;
      *((_QWORD *)v17 + 26) = 0LL;
      BgpFwInitializeReservePool((__int64)v20 + v15, v14, v20);
      qword_140323D70 = 0LL;
      if ( !v10 )
        goto LABEL_69;
      v21 = (__int64)(v17 + 22);
      v22 = &v17[v43 + 22];
      memmove(v22, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 80));
      *((_QWORD *)v17 + 44) = v22;
      *((_DWORD *)v17 + 91) = 1;
      *((_DWORD *)v17 + 90) = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v17 + 46) = v22;
      dword_140323CF0 |= 0x800u;
      v23 = BgpFoInitialize(v17 + 22, 1LL);
      dword_140323CF0 &= ~0x800u;
      if ( v23 < 0 )
        v21 = qword_140323D70;
      else
        qword_140323D70 = (__int64)(v17 + 22);
      if ( !v21 )
LABEL_69:
        DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
      qword_140323D78 = 0LL;
      if ( v2 )
      {
        v24 = (__int64)v17 + v10 + v43 * 16 + 352;
        v25 = (void *)(v24 + v41);
        memmove(v25, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
        *(_DWORD *)(v24 + 12) = 1;
        *(_QWORD *)v24 = v25;
        *(_DWORD *)(v24 + 8) = *(_DWORD *)(a1 + 136);
        *(_QWORD *)(v24 + 16) = v25;
        qword_140323D78 = v24;
      }
      memset(&Src, 0, 0x28uLL);
      if ( *(_QWORD *)(a1 + 144) )
      {
        v26 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
        Src = v26;
        if ( v26 )
        {
          memmove(v26, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
          LODWORD(Size) = *(_DWORD *)(a1 + 160);
          qword_140323D4C = *(_QWORD *)(a1 + 164);
        }
      }
      qword_140323D68 = 0LL;
      if ( !*(_QWORD *)(a1 + 88) )
        goto LABEL_31;
      v27 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
      v28 = (__int64)v27;
      if ( !v27 )
        goto LABEL_31;
      memmove(v27, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
      v29 = BgpFwAllocateMemory(0x18uLL);
      v30 = v29;
      if ( v29 )
      {
        *(_DWORD *)(v29 + 12) = 0;
        *(_QWORD *)v29 = v28;
        *(_DWORD *)(v29 + 8) = *(_DWORD *)(a1 + 96);
        *(_QWORD *)(v29 + 16) = v28;
        if ( (int)BgpFoInitialize(v29, 0LL) >= 0 )
        {
          qword_140323D68 = v30;
LABEL_31:
          dword_140323CF0 |= 0x8000u;
          BgpBcInitializeCriticalMode(a1, a2);
          dword_140323CF0 = dword_140323CF0 & 0xFFFF77FF | 0x800;
          v31 = BgpFwAllocateMemory(0x38uLL);
          dword_140323CF0 &= ~0x800u;
          v32 = v31;
          if ( v31 )
          {
            v33 = *(_QWORD *)(a1 + 208);
            if ( v33 )
            {
              *(_OWORD *)v32 = *(_OWORD *)v33;
              *(_QWORD *)(v32 + 16) = *(_QWORD *)(v33 + 16);
              *(_DWORD *)(v32 + 24) = *(_DWORD *)(v33 + 24);
              *((_QWORD *)v17 + 26) = v32;
              v32 += 28LL;
            }
            v34 = *(_QWORD *)(a1 + 216);
            if ( v34 )
            {
              *(_OWORD *)v32 = *(_OWORD *)v34;
              *(_QWORD *)(v32 + 16) = *(_QWORD *)(v34 + 16);
              *(_DWORD *)(v32 + 24) = *(_DWORD *)(v34 + 24);
              *((_QWORD *)v17 + 27) = v32;
            }
          }
          qword_140323D88 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 208));
          qword_140323D80 = AnFwConfigureProgressResources(*(_QWORD *)(a1 + 216));
          v35 = *(_DWORD *)(a1 + 124);
          dword_140323CF0 |= v6 | 0x80;
          dword_140323CF4 = v35;
          BgpFwReleaseLock();
          qword_140323D60 = *(_QWORD *)(a1 + 184);
LABEL_45:
          dword_140323CF0 |= 1u;
          v7 = 0;
          goto LABEL_46;
        }
        BgpFwFreeMemory(v28);
        v40 = v30;
      }
      else
      {
        v40 = v28;
      }
      BgpFwFreeMemory(v40);
      goto LABEL_31;
    }
    BgpFwReleaseLock();
LABEL_63:
    v7 = -1073741801;
    goto LABEL_52;
  }
  BgpFwReleaseLock();
LABEL_46:
  if ( v7 < 0 )
LABEL_52:
    BgpFwLibraryDestroy();
  return (unsigned int)v7;
}
