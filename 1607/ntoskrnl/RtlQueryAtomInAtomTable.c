/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x140425460
 * Callers:
 *     NtQueryInformationAtom @ 0x1404CBF08 (NtQueryInformationAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x140013E94 (RtlpLookupLowBox.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x14015217C (_snwprintf_s.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
 *     RtlpLockAtomTable @ 0x140421FD0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140425940 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlQueryAtomInAtomTable(
        PRTL_ATOM_TABLE AtomTable,
        RTL_ATOM Atom,
        PULONG RefCount,
        PULONG PinCount,
        PWSTR AtomName,
        PULONG NameLength)
{
  ULONG v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // eax
  ULONG v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // edi
  ULONG v18; // eax
  NTSTATUS v19; // [rsp+34h] [rbp-94h]
  wchar_t DstBuf[16]; // [rsp+68h] [rbp-60h] BYREF

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v11 = *NameLength & 0xFFFFFFFE;
  if ( Atom >= 0xC000u )
  {
    v19 = -1073741816;
    v15 = RtlpAtomMapAtomToHandleEntry(AtomTable, Atom & 0x3FFF);
    v16 = v15;
    if ( !v15 || *(_WORD *)(v15 + 10) != Atom || !RtlpLookupLowBox((__int64)AtomTable, v15, 0) )
      goto LABEL_38;
    v19 = 0;
    if ( RefCount )
      *RefCount = *(unsigned __int16 *)(v16 + 36);
    if ( PinCount )
      *PinCount = *(unsigned __int16 *)(v16 + 38);
    if ( !AtomName )
      goto LABEL_38;
    v17 = 2 * *(unsigned __int8 *)(v16 + 40);
    v18 = *NameLength;
    if ( v17 >= *NameLength )
    {
      if ( v18 < 2 )
      {
        *NameLength = v17;
        goto LABEL_37;
      }
      v17 = v18 - 2;
    }
    if ( v17 )
    {
      memmove(AtomName, (const void *)(v16 + 42), v17);
      AtomName[(unsigned __int64)v17 >> 1] = 0;
      *NameLength = v17;
      goto LABEL_38;
    }
LABEL_37:
    v19 = -1073741789;
    goto LABEL_38;
  }
  if ( Atom )
  {
    v19 = 0;
    if ( RefCount )
      *RefCount = 1;
    if ( PinCount )
      *PinCount = 1;
    if ( !AtomName )
      goto LABEL_38;
    v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", Atom);
    if ( EvaluateCurrentState((_DWORD **)&g_Feature_1399796027_59803018_FeatureDescriptorDetails) )
    {
      if ( v12 < v11 )
        goto LABEL_20;
      if ( v11 < 2 )
        goto LABEL_22;
      v13 = v11 - 2;
    }
    else
    {
      v14 = *NameLength;
      if ( v12 < *NameLength )
        goto LABEL_20;
      if ( v14 < 2 )
        goto LABEL_22;
      v13 = v14 - 2;
    }
    v12 = v13;
LABEL_20:
    if ( v12 )
    {
      memmove(AtomName, DstBuf, v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
      *NameLength = v12;
      goto LABEL_38;
    }
LABEL_22:
    v19 = -1073741789;
    goto LABEL_38;
  }
  v19 = -1073741811;
LABEL_38:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v19;
}
