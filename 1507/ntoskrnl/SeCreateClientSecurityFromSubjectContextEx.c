/*
 * XREFs of SeCreateClientSecurityFromSubjectContextEx @ 0x14024F924
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 */

__int64 __fastcall SeCreateClientSecurityFromSubjectContextEx(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  void *v4; // rbx
  char v5; // r12
  __int64 v6; // r15
  int v10; // r8d
  int v11; // r14d
  void *v12; // rbp
  int ClientSecurity; // edi
  BOOLEAN DominatesTrust; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+10h]

  v16 = a2;
  v4 = *(void **)a1;
  v5 = 0;
  v6 = 0LL;
  DominatesTrust = 0;
  if ( !v4 )
    v4 = *(void **)(a1 + 16);
  ObfReferenceObjectWithTag(v4, 0x746C6644u);
  if ( *(_QWORD *)a1 )
  {
    v11 = 2;
    v12 = *(void **)(*(_QWORD *)(a1 + 16) + 1104LL);
    RtlSidDominatesForTrust(v12, *(PSID *)(*(_QWORD *)a1 + 1104LL), &DominatesTrust);
    if ( !DominatesTrust )
    {
      v5 = 1;
      v6 = (__int64)v12;
    }
  }
  else
  {
    v11 = 1;
  }
  LOBYTE(v10) = a3;
  ClientSecurity = SepCreateClientSecurityEx((_DWORD)v4, v16, v10, v11, 0, *(_DWORD *)(a1 + 8), 1, 0LL, v5, v6, a4);
  if ( ClientSecurity < 0 || !*(_BYTE *)(a4 + 8) )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return (unsigned int)ClientSecurity;
}
