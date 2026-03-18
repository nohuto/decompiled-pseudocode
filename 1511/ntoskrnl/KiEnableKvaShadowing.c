/*
 * XREFs of KiEnableKvaShadowing @ 0x1403B186C
 * Callers:
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 *     KxInitializeProcessorState @ 0x14052F9AC (KxInitializeProcessorState.c)
 * Callees:
 *     HvlRescindEnlightenments @ 0x140166E34 (HvlRescindEnlightenments.c)
 *     KiInitializeDescriptorIst @ 0x1401CA66C (KiInitializeDescriptorIst.c)
 *     KiSetAddressPolicy @ 0x1401CA818 (KiSetAddressPolicy.c)
 *     KiIsKvaLeakSimulated @ 0x1401CBE38 (KiIsKvaLeakSimulated.c)
 *     KiIsKvaShadowDisabled @ 0x1401CBE48 (KiIsKvaShadowDisabled.c)
 *     KiInitializeIdt @ 0x1403B134C (KiInitializeIdt.c)
 *     KiShadowProcessorAllocation @ 0x1403B19D4 (KiShadowProcessorAllocation.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // al
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 result; // rax

  if ( !(unsigned __int8)KiIsKvaShadowDisabled() )
  {
    if ( (unsigned __int8)KiIsKvaLeakSimulated() )
    {
      v4 = 1;
      KiKvaLeakageSimulate = 1;
    }
    else
    {
      v4 = KiKvaLeakageSimulate;
    }
    if ( !KiKvaLeakage && !v4 )
      return 1LL;
    v5 = __readcr3();
    *(_QWORD *)(v3 + 28288) = v5;
    *(_QWORD *)(v2 + 4216) = *(_QWORD *)(v2 + 4100);
    KiInitializeDescriptorIst(v3, v2);
    *(_QWORD *)(v6 + 4100) = v6 + 16896;
    if ( *(_DWORD *)(a1 + 36) )
    {
      result = KiShadowProcessorAllocation(a1, v6);
      if ( !(_DWORD)result )
        return result;
      *(_DWORD *)(a1 + 28312) |= 2u;
      goto LABEL_19;
    }
    KiInitializeIdt(v6, 1);
    KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
    byte_140395CC0 = 1;
    KiSetAddressPolicy(1);
    if ( (*(_QWORD *)(a1 + 25192) & 0x40000000000LL) != 0 )
    {
      v7 = __readcr4();
      __writecr4(v7 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
      v8 = __readcr3();
      __writecr3(v8 | 2);
      KiFlushPcid = 1;
    }
    HvlRescindEnlightenments();
    KiKvaShadow = 1;
    if ( KiFlushPcid )
    {
      if ( *(_BYTE *)(a1 + 1597) != 1 )
      {
LABEL_16:
        KiKvaShadowMode = 1;
LABEL_19:
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
    v10 = __readcr4();
    __writecr4(v9 & v10);
    goto LABEL_16;
  }
  KiIsKvaShadowConfigDisabled = 1;
  return 1LL;
}
