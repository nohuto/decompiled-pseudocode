/*
 * XREFs of EtwpCreatePerfectHashFunction @ 0x1406A8F18
 * Callers:
 *     EtwpValidateFilterDescriptors @ 0x1406A9544 (EtwpValidateFilterDescriptors.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpFillPerfectHashTable @ 0x1406A9114 (EtwpFillPerfectHashTable.c)
 */

__int64 __fastcall EtwpCreatePerfectHashFunction(char a1, _WORD *a2, unsigned __int16 a3, _QWORD *a4)
{
  unsigned __int8 v4; // bl
  char v6; // r13
  _QWORD *v8; // r15
  unsigned __int16 v9; // si
  int v10; // ecx
  char v11; // bp
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // dx
  char v14; // cl
  int v15; // r8d
  _WORD *v16; // rax
  __int64 v17; // r9
  _WORD *v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned __int16 v22; // di
  _BYTE *PoolWithTag; // rax
  __int64 v24; // rcx
  __int16 v26; // [rsp+34h] [rbp-254h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-250h]
  _BYTE v28[2]; // [rsp+40h] [rbp-248h] BYREF
  _DWORD v29[127]; // [rsp+42h] [rbp-246h] BYREF

  v4 = 0;
  v6 = a1;
  v27 = a4;
  v8 = a4;
  v26 = 0;
  v9 = 0;
  v10 = a3 - 1;
  v11 = 0;
  v12 = 63;
  v13 = 1;
  if ( v10 > 1 )
  {
    do
      v13 = (2 * v13) | 1;
    while ( v13 < v10 );
    if ( v13 > 0x40u )
      return 3221225473LL;
  }
LABEL_4:
  v14 = 0;
  while ( 1 )
  {
    v15 = 0;
    v16 = v29;
    v17 = 128LL;
    do
    {
      *v16 = -1;
      v16 += 2;
      --v17;
    }
    while ( v17 );
    if ( a3 )
    {
      v18 = a2;
      v19 = a3;
      do
      {
        v20 = (unsigned __int16)(v13 & __ROR2__(*v18, v14));
        if ( LOWORD(v29[v20]) == 0xFFFF )
        {
          LOWORD(v15) = v15 + 1;
          LOWORD(v29[v20]) = *v18;
        }
        ++v18;
        --v19;
      }
      while ( v19 );
      v8 = v27;
      v6 = a1;
      if ( (unsigned __int16)v15 > v9 )
      {
        v9 = v15;
        v11 = v14;
        v12 = v13;
      }
    }
    if ( (_WORD)v15 == a3 )
      break;
    if ( (unsigned __int8)++v14 >= 0x10u )
    {
      v13 = (2 * v13) | 1;
      if ( v13 <= 0x40u )
        goto LABEL_4;
      break;
    }
  }
  if ( !v9 )
    return 3221225473LL;
  LOBYTE(v15) = v11;
  v22 = EtwpFillPerfectHashTable((_DWORD)a2, a3, v15, v12, (__int64)v28, (__int64)&v26);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(4 * v22 + 10), 0x46777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = v11;
  *((_WORD *)PoolWithTag + 1) = v12;
  *((_WORD *)PoolWithTag + 2) = v22;
  *PoolWithTag = v6 != 0;
  if ( v22 )
  {
    do
    {
      v24 = v4++;
      *(_DWORD *)&PoolWithTag[4 * v24 + 6] = *(_DWORD *)&v28[4 * v24];
    }
    while ( v4 < v22 );
    v8 = v27;
  }
  *v8 = PoolWithTag;
  return 0LL;
}
