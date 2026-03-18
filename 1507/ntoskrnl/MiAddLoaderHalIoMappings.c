/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x1407C9294
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiAddLoaderHalIoMappings(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 NextPageTable; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  char v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  ULONG_PTR v15; // r10
  _BOOL8 v16; // rax
  int v17; // r9d
  __int16 v18; // ax
  int v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF
  struct _KTHREAD *v21; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 <= v6 )
  {
    while ( 1 )
    {
      LOBYTE(a4) = 17;
      NextPageTable = MiGetNextPageTable(v5, v6, 1uLL, a4, 1, &v19);
      v5 = NextPageTable;
      if ( !NextPageTable )
      {
LABEL_34:
        CurrentThread = v21;
        goto LABEL_35;
      }
      if ( v19 != 1 )
        break;
      v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v20 = *(_QWORD *)v8;
      v5 = ((v8 << 25) + 0x10000000) >> 16;
LABEL_33:
      if ( v5 > v6 )
        goto LABEL_34;
    }
    while ( 1 )
    {
      a4 = *(_QWORD *)v5;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (a4 & 1) != 0
        && ((a4 & 0x20) == 0 || (a4 & 0x42) == 0) )
      {
        v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            a4 |= 0x20uLL;
          if ( (v10 & 0x42) != 0 )
            a4 |= 0x42uLL;
        }
      }
      v20 = a4;
      if ( (a4 & 1) == 0 )
        goto LABEL_31;
      v11 = a4;
      if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        v13 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * (((unsigned __int64)&v20 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v11 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v11 |= 0x42uLL;
        }
      }
      if ( MI_IS_PFN((v11 >> 12) & 0xFFFFFFFFFLL) )
        goto LABEL_31;
      if ( byte_14034EBA8 == 1 )
      {
        v16 = (a4 & 0x10) != 0;
        if ( (a4 & 0x10) == 0 && (a4 & 8) != 0 )
          goto LABEL_41;
      }
      else
      {
        v16 = (a4 & 0x10) != 0;
        if ( (a4 & 0x10) != 0 && (a4 & 8) == 0 )
        {
LABEL_41:
          v17 = 2;
          goto LABEL_30;
        }
      }
      v17 = !v16;
LABEL_30:
      MiReferenceIoPages(1, v15, 1LL, v17, 0LL, 0LL);
LABEL_31:
      v5 += 8LL;
      if ( v5 > v6 )
        goto LABEL_34;
      if ( (v5 & 0xFFF) == 0 )
        goto LABEL_33;
    }
  }
LABEL_35:
  v18 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v18;
  if ( !v18 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
