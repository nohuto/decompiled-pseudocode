/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x180063F00
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     RtlpQuerySecurityDescriptor @ 0x18006443C (RtlpQuerySecurityDescriptor.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD2(PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor, PULONG BufferSize)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  ULONG v10; // ecx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v15; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  if ( !SelfRelativeSecurityDescriptor )
    return -1073741585;
  if ( !BufferSize )
    return -1073741584;
  if ( *BufferSize < 0x14 )
    return -1073741811;
  if ( *((__int16 *)SelfRelativeSecurityDescriptor + 1) >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor(
    (_DWORD)SelfRelativeSecurityDescriptor,
    (unsigned int)&v16,
    (unsigned int)&v20,
    (unsigned int)&v17,
    (__int64)&v21,
    (__int64)&v18,
    (__int64)&v22,
    (__int64)&v19,
    (__int64)&v15);
  v5 = v16;
  v6 = v17;
  if ( v16 > v17 )
    v7 = v16 + v20;
  else
    v7 = v17 + v21;
  v8 = v18;
  if ( v7 <= v18 )
    v7 = v18 + v22;
  v9 = v19;
  if ( v7 <= v19 )
    v7 = v19 + v15;
  v10 = 40;
  if ( v7 )
    v10 = ((v7 - (_DWORD)SelfRelativeSecurityDescriptor - 13) & 0xFFFFFFF8) + 40;
  if ( v10 > *BufferSize )
  {
    *BufferSize = v10;
    return -1073741789;
  }
  else
  {
    if ( v7 )
      memmove((char *)SelfRelativeSecurityDescriptor + 40, (char *)SelfRelativeSecurityDescriptor + 20, v10 - 40LL);
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) &= ~0x8000u;
    v11 = v5 + 20;
    if ( !v5 )
      v11 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 1) = v11;
    v12 = v6 + 20;
    if ( !v6 )
      v12 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 2) = v12;
    v13 = v9 + 20;
    if ( !v9 )
      v13 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 3) = v13;
    if ( v8 )
      v2 = v8 + 20;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 4) = v2;
    return 0;
  }
}
