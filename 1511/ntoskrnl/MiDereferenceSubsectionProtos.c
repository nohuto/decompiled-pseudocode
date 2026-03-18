/*
 * XREFs of MiDereferenceSubsectionProtos @ 0x14062C0F4
 * Callers:
 *     MiCreatePerSessionProtos @ 0x14062BE88 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x1401E3148 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x1401E31B0 (MiUpdatePerSessionProto.c)
 */

void __fastcall MiDereferenceSubsectionProtos(__int64 a1, unsigned int a2, __int64 **a3)
{
  __int64 *SessionProtosInSubsection; // rax
  __int64 *v6; // rbx
  __int64 v8; // rcx

  if ( (*(_BYTE *)(a1 + 34) & 2) != 0 )
  {
    SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a1, a2);
    v6 = SessionProtosInSubsection;
    if ( (*((_DWORD *)SessionProtosInSubsection + 10))-- == 1 )
    {
      MiUpdatePerSessionProto(*(_QWORD *)a1, a1, (unsigned __int64)SessionProtosInSubsection, 0);
      *((_DWORD *)v6 + 10) = *(_DWORD *)(a1 + 44);
      v8 = (__int64)*a3;
      v6[3] = a1;
      *v6 = v8;
      *a3 = v6;
    }
  }
}
