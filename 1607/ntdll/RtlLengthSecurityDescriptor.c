/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x180074530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthSecurityDescriptor(__int64 a1)
{
  __int16 v1; // r8
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax

  v1 = *(_WORD *)(a1 + 2) & 0x8000;
  v2 = *(__int16 *)(a1 + 2) < 0 ? 20 : 40;
  if ( v1 )
  {
    if ( !*(_DWORD *)(a1 + 4) )
      goto LABEL_6;
    v3 = a1 + *(unsigned int *)(a1 + 4);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
  }
  if ( v3 )
    v2 += (4 * *(unsigned __int8 *)(v3 + 1) + 11) & 0xFFFFFFFC;
LABEL_6:
  if ( v1 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_11;
    v4 = a1 + *(unsigned int *)(a1 + 8);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
  }
  if ( v4 )
    v2 += (4 * *(unsigned __int8 *)(v4 + 1) + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_17;
  if ( v1 )
  {
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_17;
    v5 = a1 + *(unsigned int *)(a1 + 16);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 32);
  }
  if ( v5 )
    v2 += (*(unsigned __int16 *)(v5 + 2) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( v1 )
    {
      if ( !*(_DWORD *)(a1 + 12) )
        return v2;
      v7 = a1 + *(unsigned int *)(a1 + 12);
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 24);
    }
    if ( v7 )
      v2 += (*(unsigned __int16 *)(v7 + 2) + 3) & 0xFFFFFFFC;
  }
  return v2;
}
