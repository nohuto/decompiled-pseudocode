/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x18004F230
 * Callers:
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        ULONG SubAuthority0,
        ULONG SubAuthority1,
        ULONG SubAuthority2,
        ULONG SubAuthority3,
        ULONG SubAuthority4,
        ULONG SubAuthority5,
        ULONG SubAuthority6,
        ULONG SubAuthority7,
        PSID *Sid)
{
  ULONG v15; // ebx
  int v16; // edi
  ULONG v17; // eax
  char *Heap; // rax
  int v19; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi

  if ( SubAuthorityCount > 8u )
    return -1073741704;
  v15 = NtdllBaseTag;
  v16 = SubAuthorityCount;
  v17 = RtlLengthRequiredSid(SubAuthorityCount);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v15 + 1310720, v17);
  if ( Heap )
  {
    Heap[1] = SubAuthorityCount;
    *Heap = 1;
    *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
    *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
    v19 = v16 - 1;
    if ( v19 )
    {
      v21 = v19 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  if ( v26 != 1 )
                    goto LABEL_5;
                  *((_DWORD *)Heap + 9) = SubAuthority7;
                }
                *((_DWORD *)Heap + 8) = SubAuthority6;
              }
              *((_DWORD *)Heap + 7) = SubAuthority5;
            }
            *((_DWORD *)Heap + 6) = SubAuthority4;
          }
          *((_DWORD *)Heap + 5) = SubAuthority3;
        }
        *((_DWORD *)Heap + 4) = SubAuthority2;
      }
      *((_DWORD *)Heap + 3) = SubAuthority1;
    }
    *((_DWORD *)Heap + 2) = SubAuthority0;
LABEL_5:
    *Sid = Heap;
    return 0;
  }
  return -1073741801;
}
