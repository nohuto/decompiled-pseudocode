/*
 * XREFs of EtwpValidateFilterDescriptors @ 0x1406674A0
 * Callers:
 *     EtwpValidateEnableNotification @ 0x1404CE7A0 (EtwpValidateEnableNotification.c)
 * Callees:
 *     EtwpAllocatePayloadFilterData @ 0x140666918 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x14066699C (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x140666E9C (EtwpCreatePerfectHashFunction.c)
 */

__int64 __fastcall EtwpValidateFilterDescriptors(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  int v6; // r15d
  int v7; // edx
  unsigned int v8; // esi
  int v9; // r14d
  unsigned __int64 v10; // r10
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  char *v14; // r11
  _QWORD *v15; // rdx
  int StringFilterData; // eax
  __int64 v17; // r10
  unsigned int v18; // edx
  _WORD *v19; // rax
  _QWORD *v20; // r9
  unsigned int v21; // ecx
  _WORD *v22; // rax
  char *v23; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+28h] [rbp-30h]
  int v25; // [rsp+2Ch] [rbp-2Ch]

  v2 = a1[29];
  if ( v2 > 8 )
    return 3221225485LL;
  v6 = 0;
  v7 = 0;
  v8 = 16 * v2 + 120;
  v9 = 0;
  if ( !v2 )
    return a1[1] != v6 + v8 ? 0xC000000D : 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)&a1[4 * v9 + 30];
    if ( v10 < v8 )
      return 3221225485LL;
    if ( (a1[20] & 0x20) != 0 )
    {
      v11 = a1[4 * v9 + 33];
      if ( v11 == -2147479552 || v11 == -2147483136 || v11 == -2147483392 || v11 == 0x80000000 || v11 == -2147483646 )
        return 3221225485LL;
    }
    v12 = (unsigned int)a1[4 * v9 + 32];
    if ( (unsigned int)v12 > 0x400 && a1[4 * v9 + 33] != -2147483392 )
      return 3221225485LL;
    if ( (unsigned int)v12 > 0x1000 || v10 + v12 > (unsigned int)a1[1] )
      return 3221225485LL;
    v13 = a1[4 * v9 + 33];
    v14 = (char *)a1 + v10;
    v6 += v12;
    v24 = a1[4 * v9 + 32];
    v25 = v13;
    v23 = (char *)a1 + v10;
    switch ( v13 )
    {
      case -2147483640:
        v15 = a2;
LABEL_17:
        StringFilterData = EtwpAllocateStringFilterData((__int64)&v23, v15);
        goto LABEL_44;
      case -2147483632:
        v15 = a2 + 1;
        goto LABEL_17;
      case -2147483616:
        v15 = a2 + 2;
        goto LABEL_17;
      case -2147479552:
        if ( (unsigned int)(v12 - 6) > 0x3FA )
          goto LABEL_41;
        v17 = *((unsigned __int16 *)v14 + 1);
        if ( v12 != 2 * v17 + 4 )
          goto LABEL_41;
        if ( (unsigned __int16)(v17 - 1) > 0x3Fu )
          return (unsigned int)-1073741811;
        v18 = 0;
        if ( *((_WORD *)v14 + 1) )
        {
          v19 = v14 + 4;
          while ( *v19 != 0xFFFF )
          {
            ++v18;
            ++v19;
            if ( v18 >= (unsigned int)v17 )
              goto LABEL_30;
          }
          return (unsigned int)-1073741811;
        }
LABEL_30:
        v20 = a2 + 4;
LABEL_31:
        StringFilterData = EtwpCreatePerfectHashFunction(*v14, (_WORD *)v14 + 2, v17, v20);
        goto LABEL_44;
      case -2147483136:
        if ( (unsigned int)(v12 - 6) > 0x3FA || (v17 = *((unsigned __int16 *)v14 + 1), v12 != 2 * v17 + 4) )
        {
LABEL_41:
          v7 = -1073741811;
          goto LABEL_45;
        }
        if ( (unsigned __int16)(v17 - 1) > 0x3Fu )
          return (unsigned int)-1073741811;
        v21 = 0;
        if ( *((_WORD *)v14 + 1) )
        {
          v22 = v14 + 4;
          while ( *v22 != 0xFFFF )
          {
            ++v21;
            ++v22;
            if ( v21 >= (unsigned int)v17 )
              goto LABEL_40;
          }
          return (unsigned int)-1073741811;
        }
LABEL_40:
        v20 = a2 + 3;
        goto LABEL_31;
    }
    if ( v13 != -2147483392 )
      goto LABEL_45;
    StringFilterData = EtwpAllocatePayloadFilterData((__int64)(a1 + 10), (__int64)&v23, a2 + 5);
LABEL_44:
    v7 = StringFilterData;
LABEL_45:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( (unsigned int)++v9 >= a1[29] )
      return a1[1] != v6 + v8 ? 0xC000000D : 0;
  }
}
