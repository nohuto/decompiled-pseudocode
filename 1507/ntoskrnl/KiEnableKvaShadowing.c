/*
 * XREFs of KiEnableKvaShadowing @ 0x1404028EC
 * Callers:
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 *     KxInitializeProcessorState @ 0x14059A9C8 (KxInitializeProcessorState.c)
 * Callees:
 *     HvlRescindEnlightenments @ 0x140195BF0 (HvlRescindEnlightenments.c)
 *     KiIsKvaLeakSimulated @ 0x140208B64 (KiIsKvaLeakSimulated.c)
 *     KiIsKvaShadowDisabled @ 0x140208B74 (KiIsKvaShadowDisabled.c)
 *     KiInitializeDescriptorIst @ 0x140209F60 (KiInitializeDescriptorIst.c)
 *     KiSetAddressPolicy @ 0x14020A1B8 (KiSetAddressPolicy.c)
 *     KiInitializeIdt @ 0x140401BAC (KiInitializeIdt.c)
 *     KiShadowProcessorAllocation @ 0x140402AA0 (KiShadowProcessorAllocation.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // al
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int16 v14; // ax

  if ( !(unsigned __int8)KiIsKvaShadowDisabled() )
  {
    if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
      *(_QWORD *)(v2 + 11392) = 3LL;
    if ( (unsigned __int8)KiIsKvaLeakSimulated() )
    {
      v5 = 1;
      KiKvaLeakageSimulate = 1;
    }
    else
    {
      v5 = KiKvaLeakageSimulate;
    }
    if ( !KiKvaLeakage && !v5 )
      return 1LL;
    v6 = __readcr3();
    *(_QWORD *)(v4 + 28288) = v6;
    *(_QWORD *)(v3 + 4216) = *(_QWORD *)(v3 + 4100);
    KiInitializeDescriptorIst(v4, v3);
    *(_QWORD *)(v7 + 4100) = v7 + 16896;
    if ( *(_DWORD *)(a1 + 36) )
    {
      result = KiShadowProcessorAllocation(a1, v7);
      if ( !(_DWORD)result )
        return result;
      v13 = 0LL;
      if ( (_DWORD)KeNumberProcessors_0 )
        v13 = KiProcessorBlock[0];
      v14 = *(_WORD *)(v13 + 28316);
      *(_DWORD *)(a1 + 28312) |= 2u;
      *(_WORD *)(a1 + 28316) = v14;
      goto LABEL_23;
    }
    KiInitializeIdt(v7, 1);
    KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
    byte_1403E4CC0 = 1;
    KiSetAddressPolicy(1);
    *(_WORD *)(a1 + 28316) = 24;
    if ( (*(_QWORD *)(a1 + 25192) & 0x10000000000LL) != 0 )
    {
      v8 = __readcr4();
      __writecr4(v8 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
      v9 = __readcr3();
      __writecr3(v9 | 2);
      KiFlushPcid = 1;
    }
    HvlRescindEnlightenments();
    KiKvaShadow = 1;
    if ( KiFlushPcid )
    {
      if ( *(_BYTE *)(a1 + 1597) != 1 )
      {
LABEL_18:
        KiKvaShadowMode = 1;
LABEL_23:
        if ( KiFlushPcid )
          _interlockedbittestandset64((volatile signed __int32 *)(a1 + 28288), 0x3FuLL);
        return 1LL;
      }
    }
    else if ( *(_BYTE *)(a1 + 1597) != 1 )
    {
      KiKvaShadowMode = 2;
      return 1LL;
    }
    v11 = __readcr4();
    __writecr4(v10 & v11);
    goto LABEL_18;
  }
  KiIsKvaShadowConfigDisabled = 1;
  return 1LL;
}
