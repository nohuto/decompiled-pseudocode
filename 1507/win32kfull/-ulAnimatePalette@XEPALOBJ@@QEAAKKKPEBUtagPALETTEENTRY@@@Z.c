/*
 * XREFs of ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B5338
 * Callers:
 *     GreAnimatePalette @ 0x1C02B1E30 (GreAnimatePalette.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XEPALOBJ::ulAnimatePalette(
        struct PALETTE **this,
        unsigned int a2,
        int a3,
        const struct tagPALETTEENTRY *a4)
{
  __int64 v5; // rdi
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  struct PALETTE *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // rsi
  unsigned __int8 *v14; // rdi
  struct PALETTE *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // r15
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  void (__fastcall *v24)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v29; // [rsp+80h] [rbp+30h] BYREF

  v5 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29);
  v9 = *this;
  if ( *this == ppalDefault )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_26;
  v10 = *((_DWORD *)v9 + 7);
  if ( (unsigned int)v5 >= v10 )
    goto LABEL_26;
  if ( (int)v5 + a3 > v10 )
    a3 = v10 - v5;
  if ( !a3 )
  {
LABEL_26:
    v12 = 0;
    goto LABEL_27;
  }
  v11 = v5;
  v12 = 0;
  v13 = *((_QWORD *)v9 + 16) + 4 * v5;
  v14 = 0LL;
  v26 = 0LL;
  v27 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v15 = *this;
  if ( *((_DWORD *)*this + 14) )
  {
    v16 = *((_QWORD *)v15 + 6);
    if ( (*(_DWORD *)(v16 + 2196) & 0x100) != 0 )
    {
      v26 = *(_QWORD *)(v16 + 1832);
      v17 = *((_QWORD *)v15 + 10);
      if ( v17 )
        v14 = (unsigned __int8 *)(v17 + v11 + 4);
    }
  }
  v18 = (char *)a4 - v13;
  do
  {
    v19 = *(_DWORD *)&v18[v13];
    --a3;
    v20 = (*(_BYTE *)(v13 + 3) & 1) == 0;
    LODWORD(v29) = v19;
    if ( !v20 )
    {
      ++v12;
      *(_DWORD *)v13 = v19;
      if ( !v14 )
        goto LABEL_18;
      v21 = *v14;
      v22 = *(_QWORD *)(v26 + 128);
      if ( (*(_DWORD *)(v22 + 4 * v21) & 0x1000000) != 0 )
      {
        BYTE3(v29) = HIBYTE(*(_DWORD *)(v22 + 4 * v21));
        *(_DWORD *)(v22 + 4 * v21) = v29;
      }
    }
    if ( v14 )
      ++v14;
LABEL_18:
    v13 += 4LL;
  }
  while ( a3 );
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  if ( v14 )
  {
    v29 = *((_QWORD *)*this + 6);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v28, (struct PDEVOBJ *)&v29);
    v27 = *(_QWORD *)(v29 + 72);
    GreAcquireSemaphore(v27);
    GreAcquireSemaphore(*(_QWORD *)(v29 + 64));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v29 + 64), 11LL);
    v23 = v29;
    if ( (*(_DWORD *)(v29 + 2196) & 0x100) != 0 && (*(_DWORD *)(v29 + 56) & 0x400) == 0 )
    {
      v24 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v29 + 1792);
      if ( v24 )
      {
        v24(*(_QWORD *)(*(_QWORD *)(v29 + 40) + 1824LL), &v26, 0LL, 0LL, *(_DWORD *)(v26 + 28));
        v23 = v29;
      }
      else
      {
        v12 = 0;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(v23 + 64));
    GreReleaseSemaphoreInternal(*(_QWORD *)(v29 + 64));
    SEMOBJ::vUnlock((SEMOBJ *)&v27);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v28);
  }
LABEL_27:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  return v12;
}
