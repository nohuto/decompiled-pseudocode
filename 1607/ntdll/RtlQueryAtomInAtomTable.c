/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1800678A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x18006822C (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180068258 (RtlpAtomMapAtomToHandleEntry.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1800A1410 (_snwprintf_s.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     EvaluateCurrentState @ 0x1800E2B50 (EvaluateCurrentState.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  ULONG v10; // ebx
  NTSTATUS v11; // edi
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int16 *v15; // rax
  unsigned int v16; // eax
  ULONG v17; // eax
  wchar_t Buffer[16]; // [rsp+50h] [rbp-68h] BYREF

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v10 = *AtomNameLength & 0xFFFFFFFE;
  if ( Atom >= 0xC000u )
  {
    v11 = -1073741816;
    v13 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, Atom & 0x3FFF);
    v14 = v13;
    if ( !v13 )
      goto LABEL_38;
    if ( *(_WORD *)(v13 + 10) != Atom )
      goto LABEL_38;
    v15 = (unsigned __int16 *)(v13 + 12);
    if ( !v15 )
      goto LABEL_38;
    v11 = 0;
    if ( AtomUsage )
      *AtomUsage = *v15;
    if ( AtomFlags )
      *AtomFlags = *(unsigned __int16 *)(v14 + 14);
    if ( !AtomName )
      goto LABEL_38;
    v12 = 2 * *(unsigned __int8 *)(v14 + 16);
    if ( (unsigned int)EvaluateCurrentState(0LL) )
    {
      if ( v12 < v10 )
        goto LABEL_34;
      if ( v10 >= 2 )
      {
        v16 = v10 - 2;
LABEL_32:
        v12 = v16;
        goto LABEL_34;
      }
    }
    else
    {
      v17 = *AtomNameLength;
      if ( v12 < *AtomNameLength )
        goto LABEL_34;
      if ( v17 >= 2 )
      {
        v16 = v17 - 2;
        goto LABEL_32;
      }
    }
    *AtomNameLength = v12;
    v12 = 0;
LABEL_34:
    if ( v12 )
    {
      memmove(AtomName, (const void *)(v14 + 18), v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
      goto LABEL_36;
    }
LABEL_37:
    v11 = -1073741789;
    goto LABEL_38;
  }
  if ( Atom )
  {
    v11 = 0;
    if ( AtomUsage )
      *AtomUsage = 1;
    if ( AtomFlags )
      *AtomFlags = 1;
    if ( !AtomName )
      goto LABEL_38;
    v12 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", Atom);
    if ( v12 >= v10 )
    {
      if ( v10 < 2 )
        v12 = 0;
      else
        v12 = v10 - 2;
    }
    if ( v12 )
    {
      memmove(AtomName, Buffer, v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
LABEL_36:
      *AtomNameLength = v12;
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v11 = -1073741811;
LABEL_38:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return v11;
}
