/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x14068812C
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A55C (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlpQuerySecurityDescriptor @ 0x1404BA214 (RtlpQuerySecurityDescriptor.c)
 */

NTSTATUS __stdcall RtlSelfRelativeToAbsoluteSD2(PSECURITY_DESCRIPTOR SelfRelativeSD, PULONG BufferSize)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  ULONG v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // [rsp+50h] [rbp-30h] BYREF
  ULONG v16; // [rsp+54h] [rbp-2Ch]
  unsigned __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  if ( !SelfRelativeSD )
    return -1073741585;
  if ( !BufferSize )
    return -1073741584;
  v16 = *BufferSize;
  if ( v16 < 0x14 )
    return -1073741811;
  if ( *((__int16 *)SelfRelativeSD + 1) >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor((__int64)SelfRelativeSD, &v17, &v21, &v18, &v22, &v19, &v23, &v20, &v15);
  v6 = v17;
  v7 = v18;
  if ( v17 <= v18 )
    v8 = v18 + v22;
  else
    v8 = v17 + v21;
  v9 = v19;
  if ( v8 <= v19 )
    v8 = v19 + v23;
  v10 = v20;
  if ( v8 <= v20 )
    v8 = v20 + v15;
  v11 = 40;
  if ( v8 )
    v11 = ((v8 - (_DWORD)SelfRelativeSD - 13) & 0xFFFFFFF8) + 40;
  if ( v11 <= v16 )
  {
    if ( v8 )
      memmove((char *)SelfRelativeSD + 40, (char *)SelfRelativeSD + 20, v11 - 40LL);
    *((_WORD *)SelfRelativeSD + 1) &= ~0x8000u;
    v12 = v6 + 20;
    if ( !v6 )
      v12 = 0LL;
    *((_QWORD *)SelfRelativeSD + 1) = v12;
    v13 = v7 + 20;
    if ( !v7 )
      v13 = 0LL;
    *((_QWORD *)SelfRelativeSD + 2) = v13;
    v14 = v10 + 20;
    if ( !v10 )
      v14 = 0LL;
    *((_QWORD *)SelfRelativeSD + 3) = v14;
    if ( v9 )
      v2 = v9 + 20;
    *((_QWORD *)SelfRelativeSD + 4) = v2;
    return 0;
  }
  else
  {
    *BufferSize = v11;
    return -1073741789;
  }
}
