/*
 * XREFs of MiDeletePerSessionProtos @ 0x14021BD68
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x1405833BC (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x1401FF2DC (KeSetPagePrivilege.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(_KPROCESS *Process, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rax
  __int64 v3; // r15
  unsigned __int64 Blink; // rdi
  unsigned __int8 v5; // si
  __int64 Blink_high; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  ULONG_PTR v11; // r14
  __int128 v13; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 v14; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+48h]

  Flink = Process->ProfileListHead.Flink;
  v3 = 0LL;
  Blink = (unsigned __int64)Process->ProfileListHead.Blink;
  v5 = 17;
  *((_QWORD *)&v13 + 1) = 0LL;
  v14 = 17;
  Blink_high = HIDWORD(Flink[2].Blink);
  *(_QWORD *)&v13 = *(_QWORD *)&Process->Header.Lock;
  v15 = Blink + 8 * Blink_high;
  if ( Blink < v15 )
  {
    v7 = Blink + 0x90482413000LL;
    do
    {
      if ( (Blink & 0xFFF) == 0 || v5 == 17 )
      {
        if ( v5 != 17 )
          MiUnlockProtoPoolPage(v3, v5);
        while ( 1 )
        {
          v3 = MiLockProtoPoolPage(Blink, &v14);
          if ( v3 )
            break;
          MmAccessFault(2uLL, Blink, 0, 0LL);
        }
        v5 = v14;
      }
      v8 = *(_QWORD *)Blink;
      if ( v7 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, a2)
        && (v8 & 1) != 0
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        a2 = *(_QWORD *)&Process[2].ProcessLock;
        if ( a2 )
        {
          v9 = *(_QWORD *)(a2 + 8 * ((Blink >> 3) & 0x1FF));
          if ( (v9 & 0x20) != 0 )
            v8 |= 0x20uLL;
          if ( (v9 & 0x42) != 0 )
            v8 |= 0x42uLL;
        }
        v5 = v14;
      }
      if ( !v8 )
        break;
      if ( (v8 & 0x400) == 0 )
      {
        v10 = MiLockTransitionLeafPage((_KPROCESS *)Blink, 0LL);
        v11 = v10;
        if ( v10 )
        {
          if ( (MiFlags & 0x30000) != 0 && (MiFlags & 0x80000) != 0 && ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 3 )
          {
            MiRemoveLockedPageChargeAndDecRef(v10);
            KeSetPagePrivilege((__int64)(v11 + 0x58000000000LL) / 48, &v13, 16);
            MiClearPfnImageVerified(v11, 4u);
          }
          if ( (unsigned int)MiDeleteLockedTransitionPte((ULONG_PTR *)Blink, v11, 0x11u, 1LL) == 3 )
            --Blink_high;
        }
        else if ( v8 != MiMakeDemandZeroPte(24LL) )
        {
          MiReleasePageFileSpace((struct _KEVENT *)MiSystemPartition, v8, 1);
        }
      }
      *(_QWORD *)&v13 = v13 + 4096;
      Blink += 8LL;
      v7 += 8LL;
    }
    while ( Blink < v15 );
    if ( v5 != 17 )
      MiUnlockProtoPoolPage(v3, v5);
  }
  return Blink_high;
}
