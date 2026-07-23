/*
 * XREFs of RtlpIsAttributeAceInSacl @ 0x1800E244C
 * Callers:
 *     RtlpMergeSecurityAttributeInformation @ 0x180088700 (RtlpMergeSecurityAttributeInformation.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18007053C (RtlStringCbLengthW.c)
 *     memcmp @ 0x18009A690 (memcmp.c)
 */

char __fastcall RtlpIsAttributeAceInSacl(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  char v4; // si
  char v7; // r12
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int *v11; // r14
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int *v18; // rsi
  unsigned int v19; // r13d
  unsigned int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // ebp
  unsigned int Size; // [rsp+20h] [rbp-48h]
  _QWORD v24[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+10h]

  v24[0] = 0LL;
  v4 = a3;
  *a4 = 0;
  v7 = 0;
  if ( !a2 )
    return 0;
  v9 = 4 * *(unsigned __int8 *)(a1 + 9) + 8;
  v10 = *(unsigned __int16 *)(a1 + 2) - v9;
  if ( (int)(v10 - 8) <= 20 )
    return 1;
  v11 = (unsigned int *)(v9 + a1 + 8);
  v12 = v10 - 8;
  if ( v10 - 8 < *v11 )
    return 1;
  v13 = v12 - *v11;
  if ( v13 < 4 || (int)RtlStringCbLengthW((unsigned int *)((char *)v11 + *v11), v13, v24) < 0 )
    return 1;
  v14 = a2 + 8;
  v15 = 0;
  Size = v24[0];
  v25 = 0;
  if ( !*(_WORD *)(a2 + 4) )
    return v7;
  while ( 1 )
  {
    if ( *(_BYTE *)v14 != 18 || v4 && (*(_BYTE *)(v14 + 1) & 0x10) == 0 )
      goto LABEL_21;
    v16 = 4 * *(unsigned __int8 *)(v14 + 9) + 8;
    v17 = *(unsigned __int16 *)(v14 + 2) - v16;
    if ( (int)(v17 - 8) <= 20 )
      goto LABEL_21;
    v18 = (unsigned int *)(v16 + v14 + 8);
    v19 = v17 - 8;
    if ( v17 - 8 >= *v18 )
    {
      v20 = v19 - *v18;
      if ( v20 >= 4 )
        break;
    }
LABEL_20:
    v4 = a3;
LABEL_21:
    ++v15;
    v14 += *(unsigned __int16 *)(v14 + 2);
    v25 = v15;
    if ( v15 >= *(unsigned __int16 *)(a2 + 4) )
      return v7;
  }
  if ( (int)RtlStringCbLengthW((unsigned int *)((char *)v18 + *v18), v20, v24) < 0 )
    goto LABEL_19;
  if ( LODWORD(v24[0]) == Size && !memcmp((char *)v18 + *v18, (char *)v11 + *v11, Size) )
    v7 = 1;
  if ( !v7 )
  {
LABEL_19:
    v15 = v25;
    goto LABEL_20;
  }
  if ( a3 && v19 == v12 )
  {
    v21 = v11[2];
    v22 = v18[2];
    *((_BYTE *)v11 + 10) = 0;
    *((_BYTE *)v18 + 10) = 0;
    if ( !memcmp(v18, v11, v12) )
      *a4 = 1;
    v11[2] = v21;
    v18[2] = v22;
  }
  return v7;
}
