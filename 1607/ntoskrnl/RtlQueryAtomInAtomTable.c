/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x140424320
 * Callers:
 *     NtQueryInformationAtom @ 0x1404B1934 (NtQueryInformationAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x140013A14 (RtlpLookupLowBox.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x14015273C (_snwprintf_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     RtlpLockAtomTable @ 0x140420E90 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140424810 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlQueryAtomInAtomTable(
        PRTL_ATOM_TABLE AtomTable,
        RTL_ATOM Atom,
        PULONG RefCount,
        PULONG PinCount,
        PWSTR AtomName,
        PULONG NameLength)
{
  ULONG v11; // esi
  ULONG v12; // r15d
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // edi
  unsigned int v16; // eax
  ULONG v17; // eax
  NTSTATUS v18; // [rsp+34h] [rbp-94h]
  wchar_t DstBuf[16]; // [rsp+68h] [rbp-60h] BYREF

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v11 = *NameLength & 0xFFFFFFFE;
  if ( Atom >= 0xC000u )
  {
    v18 = -1073741816;
    v13 = RtlpAtomMapAtomToHandleEntry(AtomTable, Atom & 0x3FFF);
    v14 = v13;
    if ( !v13 || *(_WORD *)(v13 + 10) != Atom || !RtlpLookupLowBox((__int64)AtomTable, v13, 0) )
      goto LABEL_38;
    v18 = 0;
    if ( RefCount )
      *RefCount = *(unsigned __int16 *)(v14 + 36);
    if ( PinCount )
      *PinCount = *(unsigned __int16 *)(v14 + 38);
    if ( !AtomName )
      goto LABEL_38;
    v15 = 2 * *(unsigned __int8 *)(v14 + 40);
    if ( EvaluateCurrentState((_DWORD **)&reg_FeatureDescriptors_a) )
    {
      if ( v15 < v11 )
        goto LABEL_35;
      if ( v11 >= 2 )
      {
        v16 = v11 - 2;
LABEL_34:
        v15 = v16;
LABEL_35:
        if ( v15 )
        {
          memmove(AtomName, (const void *)(v14 + 42), v15);
          AtomName[(unsigned __int64)v15 >> 1] = 0;
          *NameLength = v15;
          goto LABEL_38;
        }
LABEL_37:
        v18 = -1073741789;
        goto LABEL_38;
      }
    }
    else
    {
      v17 = *NameLength;
      if ( v15 < *NameLength )
        goto LABEL_35;
      if ( v17 >= 2 )
      {
        v16 = v17 - 2;
        goto LABEL_34;
      }
    }
    *NameLength = v15;
    goto LABEL_37;
  }
  if ( Atom )
  {
    v18 = 0;
    if ( RefCount )
      *RefCount = 1;
    if ( PinCount )
      *PinCount = 1;
    if ( !AtomName )
      goto LABEL_38;
    v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", Atom);
    if ( v12 >= v11 )
    {
      if ( v11 < 2 )
        goto LABEL_17;
      v12 = v11 - 2;
    }
    if ( v12 )
    {
      memmove(AtomName, DstBuf, v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
      *NameLength = v12;
      goto LABEL_38;
    }
LABEL_17:
    v18 = -1073741789;
    goto LABEL_38;
  }
  v18 = -1073741811;
LABEL_38:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v18;
}
