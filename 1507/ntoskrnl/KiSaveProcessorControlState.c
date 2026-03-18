/*
 * XREFs of KiSaveProcessorControlState @ 0x140182A80
 * Callers:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeSaveStateForHibernate @ 0x140183600 (KeSaveStateForHibernate.c)
 *     ExpSystemErrorHandler @ 0x14018C9A0 (ExpSystemErrorHandler.c)
 *     KdpReport @ 0x1401FE4B4 (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x140206774 (KiFreezeTargetExecution.c)
 *     KiSaveProcessorState @ 0x14020AEAC (KiSaveProcessorState.c)
 *     IopLiveDumpCorralDpc @ 0x1403FED6C (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1403FEF9C (IopLiveDumpEndMirroringCallback.c)
 *     KdpCommandString @ 0x14072CDA8 (KdpCommandString.c)
 *     KdpSymbol @ 0x14072D114 (KdpSymbol.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSaveProcessorControlState(__int64 _RCX, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // r8
  int v14; // r9d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx

  v2 = __readcr0();
  *(_QWORD *)_RCX = v2;
  v3 = __readcr2();
  *(_QWORD *)(_RCX + 8) = v3;
  v4 = __readcr3();
  *(_QWORD *)(_RCX + 16) = v4;
  v5 = __readcr4();
  *(_QWORD *)(_RCX + 24) = v5;
  *(_QWORD *)(_RCX + 160) = KeGetCurrentIrql();
  *(_WORD *)(_RCX + 114) = 0;
  __sgdt((void *)(_RCX + 86));
  __sidt((void *)(_RCX + 102));
  __asm { str     word ptr [rcx+70h] }
  *(_DWORD *)(_RCX + 116) = _mm_getcsr();
  *(_QWORD *)(_RCX + 216) = 0LL;
  if ( (*(_QWORD *)(_RCX + 24) & 0x40000LL) != 0 )
  {
    __asm { xgetbv }
    *(_DWORD *)(_RCX + 216) = 0;
    *(_DWORD *)(_RCX + 220) = a2;
  }
  v6 = __readdr(0);
  v7 = __readdr(1u);
  *(_QWORD *)(_RCX + 32) = v6;
  *(_QWORD *)(_RCX + 40) = v7;
  v8 = __readdr(2u);
  v9 = __readdr(3u);
  *(_QWORD *)(_RCX + 48) = v8;
  *(_QWORD *)(_RCX + 56) = v9;
  v10 = __readdr(6u);
  v11 = __readdr(7u);
  *(_QWORD *)(_RCX + 64) = v10;
  *(_QWORD *)(_RCX + 72) = v11;
  result = 0LL;
  __writedr(7u, 0LL);
  if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 && (v11 & 0x300) != 0 )
  {
    v13 = _RCX;
    v14 = KiLastBranchTOSMSR;
    if ( KiLastBranchTOSMSR )
    {
      v15 = __readmsr(KiLastBranchTOSMSR);
      v14 = v15;
    }
    v16 = __readmsr(v14 + KiLastBranchFromBaseMSR);
    *(_DWORD *)(_RCX + 136) = v16;
    v17 = KiLastBranchToBaseMSR;
    *(_DWORD *)(v13 + 140) = HIDWORD(v16);
    *(_QWORD *)(v13 + 128) = __readmsr(v14 + v17);
    *(_QWORD *)(v13 + 152) = __readmsr(KiLastExceptionFromBaseMSR);
    *(_QWORD *)(v13 + 144) = __readmsr(KiLastExceptionToBaseMSR);
    v18 = __readmsr(0x1D9u);
    v19 = HIDWORD(v18);
    result = (unsigned int)v18 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v19, result));
  }
  return result;
}
