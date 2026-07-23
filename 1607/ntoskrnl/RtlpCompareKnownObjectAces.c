/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x140683E7C
 * Callers:
 *     RtlpIsDuplicateAce @ 0x140413CE0 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // r9
  int v8; // edi
  _DWORD *v9; // rdx
  int v10; // ebp
  int v11; // esi
  _DWORD *v12; // r8
  int v13; // ebp
  _DWORD *v14; // rcx

  v4 = *a2;
  if ( *((_BYTE *)RtlBaseAceType + v4) != *((_BYTE *)RtlBaseAceType + *a1)
    || *((_BYTE *)&RtlIsSystemAceType + v4) && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
  {
    return 0;
  }
  v5 = *((_DWORD *)a2 + 2);
  v6 = v5 & 1;
  if ( (v5 & 1) != 0 )
    v7 = a2 + 12;
  else
    v7 = 0LL;
  v8 = v5 & 2;
  if ( v8 )
  {
    if ( v6 )
      v9 = a2 + 28;
    else
      v9 = a2 + 12;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = *((_DWORD *)a1 + 2);
  v11 = v10 & 1;
  if ( (v10 & 1) != 0 )
    v12 = a1 + 12;
  else
    v12 = 0LL;
  v13 = v10 & 2;
  if ( v13 )
  {
    if ( v11 )
      v14 = a1 + 28;
    else
      v14 = a1 + 12;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v9 )
  {
    if ( !v14 || *v9 != *v14 || v9[1] != v14[1] || v9[2] != v14[2] || v9[3] != v14[3] )
      return 0;
  }
  else if ( v14 )
  {
    return 0;
  }
  if ( v7 )
  {
    if ( !v12 || *v7 != *v12 || v7[1] != v12[1] || v7[2] != v12[2] || v7[3] != v12[3] )
      return 0;
  }
  else if ( v12 )
  {
    return 0;
  }
  return RtlEqualSid(
           &a2[(v8 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v6 != 0 ? 0x10 : 0)],
           &a1[(v11 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v13 != 0 ? 0x10 : 0)]) != 0;
}
