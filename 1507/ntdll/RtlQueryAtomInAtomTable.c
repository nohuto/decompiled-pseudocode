/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x180052A30
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x180052564 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180052590 (RtlpAtomMapAtomToHandleEntry.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x18008E850 (_snwprintf_s.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  NTSTATUS v10; // edi
  _RTL_HANDLE_TABLE_ENTRY *v11; // rax
  _RTL_HANDLE_TABLE_ENTRY *v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned int v14; // esi
  ULONG v15; // eax
  unsigned __int64 v16; // rbx
  ULONG v17; // eax
  wchar_t Buffer[16]; // [rsp+40h] [rbp-68h] BYREF

  if ( RtlpLockAtomTable((__int64)AtomTableHandle) )
  {
    if ( Atom < 0xC000u )
    {
      if ( !Atom )
      {
        v10 = -1073741811;
        goto LABEL_31;
      }
      v10 = 0;
      if ( AtomUsage )
        *AtomUsage = 1;
      if ( AtomFlags )
        *AtomFlags = 1;
      if ( !AtomName )
        goto LABEL_31;
      v14 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", Atom);
      v17 = *AtomNameLength;
      if ( v14 >= *AtomNameLength )
      {
        v14 = v17 - 2;
        if ( v17 < 2 )
          v14 = 0;
      }
      if ( v14 )
      {
        memmove(AtomName, Buffer, v14);
        v16 = (unsigned __int64)v14 >> 1;
        goto LABEL_14;
      }
    }
    else
    {
      v10 = -1073741816;
      v11 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTableHandle, Atom & 0x3FFF);
      v12 = v11;
      if ( !v11 )
        goto LABEL_31;
      if ( WORD1(v11[1].NextFree) != Atom )
        goto LABEL_31;
      v13 = (unsigned __int16 *)&v11[1].NextFree + 2;
      if ( !v13 )
        goto LABEL_31;
      v10 = 0;
      if ( AtomUsage )
        *AtomUsage = *v13;
      if ( AtomFlags )
        *AtomFlags = HIWORD(v12[1].NextFree);
      if ( !AtomName )
        goto LABEL_31;
      v14 = 2 * LOBYTE(v12[2].Flags);
      v15 = *AtomNameLength;
      if ( v14 >= *AtomNameLength )
      {
        if ( v15 < 2 )
        {
          *AtomNameLength = v14;
          v14 = 0;
        }
        else
        {
          v14 = v15 - 2;
        }
      }
      if ( v14 )
      {
        memmove(AtomName, (char *)&v12[2].NextFree + 2, v14);
        v16 = (unsigned __int64)v14 >> 1;
LABEL_14:
        AtomName[v16] = 0;
        *AtomNameLength = v14;
LABEL_31:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
        return v10;
      }
    }
    v10 = -1073741789;
    goto LABEL_31;
  }
  return -1073741811;
}
