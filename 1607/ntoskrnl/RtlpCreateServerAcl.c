/*
 * XREFs of RtlpCreateServerAcl @ 0x1406843E8
 * Callers:
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlUShortAdd @ 0x14000838C (RtlUShortAdd.c)
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 */

NTSTATUS __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  USHORT v7; // di
  _BYTE *v9; // rax
  unsigned __int16 *v10; // rbx
  unsigned int v11; // ebp
  USHORT v12; // r9
  __int64 v13; // r10
  NTSTATUS result; // eax
  USHORT v15; // cx
  USHORT v16; // dx
  __int16 v17; // ax
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // dx
  __int64 v20; // r10
  int v21; // r11d
  ACL *PoolWithTag; // rax
  unsigned int v23; // ebp
  ACL *v24; // r15
  char *v25; // rdi
  unsigned __int8 *v26; // r15
  char v27; // al
  char *v28; // r12
  unsigned __int8 *v29; // r14
  char *v30; // rdi
  char *v31; // rdi
  int v32; // edx
  __int16 v33; // ax
  ACL *pusResult; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h]

  Src = a3;
  LOWORD(pusResult) = 8;
  v7 = 8;
  if ( !a1 )
  {
    v9 = a5;
    *a4 = 0LL;
    *v9 = 0;
    return 0;
  }
  v10 = (unsigned __int16 *)(a1 + 8);
  v11 = *(unsigned __int16 *)(a1 + 4);
  v12 = 4 * (a3[1] + 2);
  v13 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( *(_BYTE *)v13 )
    {
      if ( a2 && *(_BYTE *)v13 == 4 )
      {
        v17 = *(unsigned __int8 *)(v13 + 13);
        v18 = 4 * (v17 + 2);
        if ( v18 <= v12 )
          v16 = v12 - 4 * v17 - 8;
        else
          v16 = v18 - v12;
        v15 = v7;
LABEL_13:
        result = RtlUShortAdd(v15, v16, (USHORT *)&pusResult);
        if ( result < 0 )
          return result;
        v7 = (unsigned __int16)pusResult;
      }
      result = RtlUShortAdd(v7, *(_WORD *)(v13 + 2), (USHORT *)&pusResult);
      if ( result < 0 )
        return result;
      v7 = (unsigned __int16)pusResult;
      v13 = v19 + v20;
      if ( v21 + 1 >= v11 )
        goto LABEL_17;
    }
    result = RtlUShortAdd(v7, v12, (USHORT *)&pusResult);
    if ( result < 0 )
      return result;
    v15 = (unsigned __int16)pusResult;
    v16 = 4;
    goto LABEL_13;
  }
LABEL_17:
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x63416553u);
  *a4 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  *a5 = 1;
  RtlCreateAcl(PoolWithTag, v7, 3u);
  v23 = 0;
  v24 = *a4;
  pusResult = v24;
  v25 = (char *)&v24[1];
  if ( *(_WORD *)(a1 + 4) )
  {
    v26 = (unsigned __int8 *)Src;
    do
    {
      v27 = *(_BYTE *)v10;
      if ( !*(_BYTE *)v10 || a2 && v27 == 4 )
      {
        v28 = v25;
        if ( v27 )
          v29 = (unsigned __int8 *)v10 + RtlLengthSid(v10 + 6) + 12;
        else
          v29 = (unsigned __int8 *)(v10 + 4);
        *(_QWORD *)v25 = *(_QWORD *)v10;
        v30 = v25 + 12;
        memmove(v30, v26, 4 * v26[1] + 8);
        v31 = &v30[(unsigned __int8)(4 * (v26[1] + 2))];
        memmove(v31, v29, 4 * v29[1] + 8);
        v32 = v29[1];
        v25 = &v31[4 * v32 + 8];
        v33 = v26[1] + 7;
        *v28 = 4;
        *((_WORD *)v28 + 1) = 4 * (v32 + v33);
        *((_WORD *)v28 + 4) = 1;
      }
      else
      {
        memmove(v25, v10, v10[1]);
        v25 += v10[1];
      }
      ++v23;
      v10 = (unsigned __int16 *)((char *)v10 + v10[1]);
    }
    while ( v23 < *(unsigned __int16 *)(a1 + 4) );
    v24 = pusResult;
  }
  v24->AceCount = *(_WORD *)(a1 + 4);
  return 0;
}
