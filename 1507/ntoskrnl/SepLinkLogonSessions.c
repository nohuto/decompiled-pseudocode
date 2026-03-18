/*
 * XREFs of SepLinkLogonSessions @ 0x140130B14
 * Callers:
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepStopReferencingLogonSession @ 0x14046BD78 (SepStopReferencingLogonSession.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SepReferenceLogonSession @ 0x14046E1E4 (SepReferenceLogonSession.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 */

__int64 __fastcall SepLinkLogonSessions(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  __int64 v5; // rsi
  NTSTATUS v7; // ebx
  PVOID v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  _QWORD *v12; // r14
  int v13; // eax
  _QWORD *v14; // r15
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rdx
  PVOID Object; // [rsp+40h] [rbp-19h] BYREF
  PVOID v20; // [rsp+48h] [rbp-11h] BYREF
  PVOID v21; // [rsp+50h] [rbp-9h] BYREF
  __int64 v22; // [rsp+58h] [rbp-1h] BYREF
  int v23; // [rsp+60h] [rbp+7h] BYREF
  __int64 v24; // [rsp+68h] [rbp+Fh]
  __int64 v25; // [rsp+70h] [rbp+17h]
  int v26; // [rsp+78h] [rbp+1Fh]
  __int128 v27; // [rsp+80h] [rbp+27h]
  __int64 v28; // [rsp+D8h] [rbp+7Fh] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, a3) )
    return (unsigned int)-1073741727;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 48LL) )
    return (unsigned int)-1073741811;
  v7 = ObReferenceObjectByHandle(a2, 0x88u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
  if ( v7 < 0 )
  {
LABEL_33:
    v8 = Object;
    goto LABEL_13;
  }
  v8 = Object;
  v9 = *((_QWORD *)Object + 27);
  if ( *(_QWORD *)(v9 + 48) )
    goto LABEL_19;
  v10 = *(_QWORD *)(a1 + 216);
  if ( v10 == v9 )
  {
    *(_DWORD *)(v10 + 32) |= 4u;
    v7 = 0;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 192) != 1 || *((_DWORD *)Object + 48) != 1 )
  {
LABEL_19:
    v7 = -1073741811;
    goto LABEL_13;
  }
  v23 = 48;
  v24 = 0LL;
  v26 = 0;
  v25 = 0LL;
  v27 = 0LL;
  v11 = SepDuplicateToken(a1, (unsigned int)&v23, 0, 1, 0, 0, 0, (__int64)&v20);
  v12 = v20;
  v7 = v11;
  if ( v11 < 0 )
  {
LABEL_23:
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    if ( !v5 )
      goto LABEL_13;
    _m_prefetchw((const void *)(v5 + 24));
    v16 = *(_QWORD *)(v5 + 24);
    while ( v16 - 1 > 0 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v16 - 1, v16);
      if ( v17 == v16 )
        goto LABEL_33;
    }
    if ( v16 != 1 )
      __fastfail(0xEu);
    v18 = *(_QWORD *)(v28 + 160);
    v22 = *(_QWORD *)(v28 + 8);
    SepDeReferenceLogonSession(&v22, v18);
    goto LABEL_33;
  }
  v13 = SepDuplicateToken((_DWORD)v8, (unsigned int)&v23, 0, 1, 0, 0, 0, (__int64)&v21);
  v14 = v21;
  v7 = v13;
  if ( v13 < 0 )
  {
LABEL_21:
    if ( v14 )
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    goto LABEL_23;
  }
  v7 = SepReferenceLogonSession(v12 + 3, &v28);
  if ( v7 < 0 )
    goto LABEL_16;
  *(_QWORD *)(v12[27] + 48LL) = v12;
  *(_QWORD *)(v12[27] + 16LL) = *(_QWORD *)(v14[27] + 8LL);
  *(_DWORD *)(v12[27] + 32LL) |= 2u;
  *(_QWORD *)(v14[27] + 48LL) = v14;
  *(_QWORD *)(v14[27] + 16LL) = *(_QWORD *)(v12[27] + 8LL);
  *(_DWORD *)(v14[27] + 32LL) |= 4u;
  v7 = SepStopReferencingLogonSession(v14);
  if ( v7 < 0 || (v7 = SepStopReferencingLogonSession(v12), v7 < 0) )
  {
LABEL_16:
    v5 = v28;
    goto LABEL_21;
  }
LABEL_13:
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  return (unsigned int)v7;
}
