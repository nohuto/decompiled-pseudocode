/*
 * XREFs of AuthzBasepCompareOctetStringOperands @ 0x140234818
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140234DDC (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1402356F4 (AuthzBasepValueInSet.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 */

__int64 __fastcall AuthzBasepCompareOctetStringOperands(unsigned __int8 a1, __int64 a2)
{
  size_t *v3; // r8
  _QWORD *v4; // rdx
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  size_t v8; // r8
  unsigned int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  void *Buf1; // [rsp+20h] [rbp-28h]
  size_t Size[2]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-10h]

  v3 = Size;
  v4 = (_QWORD *)(a2 + 32);
  v5 = 2LL;
  do
  {
    if ( *((_DWORD *)v4 - 5) == 1 )
    {
      *(v3 - 1) = *v4;
      v6 = *((_DWORD *)v4 - 2);
    }
    else
    {
      v7 = *(_QWORD *)(*(v4 - 2) + 40LL);
      *(v3 - 1) = *(_QWORD *)v7;
      v6 = *(_DWORD *)(v7 + 8);
    }
    *(_DWORD *)v3 = v6;
    v4 += 5;
    v3 += 2;
    --v5;
  }
  while ( v5 );
  v8 = v16;
  v9 = Size[0];
  if ( LODWORD(Size[0]) < v16 )
    v8 = LODWORD(Size[0]);
  v10 = memcmp(Buf1, (const void *)Size[1], v8);
  v11 = 0;
  v12 = v10;
  if ( !v10 )
  {
    if ( v9 <= v16 )
    {
      if ( v9 < v16 )
        v12 = -1;
    }
    else
    {
      v12 = 1;
    }
  }
  switch ( a1 )
  {
    case 0x80u:
      LOBYTE(v11) = v12 == 0;
      goto LABEL_25;
    case 0x81u:
      LOBYTE(v11) = v12 != 0;
      goto LABEL_25;
    case 0x82u:
      LOBYTE(v11) = v12 < 0;
      goto LABEL_25;
    case 0x83u:
      LOBYTE(v11) = v12 <= 0;
      goto LABEL_25;
    case 0x84u:
      LOBYTE(v11) = v12 > 0;
      goto LABEL_25;
    case 0x85u:
      LOBYTE(v11) = v12 >= 0;
LABEL_25:
      v12 = v11;
      break;
  }
  return (unsigned int)v12;
}
