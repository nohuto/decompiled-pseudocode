/*
 * XREFs of itrp_CALL @ 0x1C00CB8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     itrp_InnerTraceExecute @ 0x1C02E0D7C (itrp_InnerTraceExecute.c)
 */

__int64 __fastcall itrp_CALL(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // bl
  int v4; // r13d
  int *v5; // r14
  __int64 v6; // r8
  int *v7; // r10
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // r11
  __int64 v13; // rbp
  __int64 v14; // r15
  unsigned __int16 v15; // r9
  unsigned __int16 i; // dx
  unsigned __int8 *v17; // rdi
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(); // r8
  __int64 result; // rax
  __int64 v22; // rcx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // edx
  unsigned __int8 *v28; // [rsp+30h] [rbp-48h] BYREF
  __int16 v29; // [rsp+38h] [rbp-40h]
  int v30; // [rsp+88h] [rbp+10h]
  int v31; // [rsp+90h] [rbp+18h]

  v1 = qword_1C03294E0;
  v31 = 0;
  v2 = 0;
  v30 = 0;
  v4 = 0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) )
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
    return result;
  }
  v5 = (int *)(qword_1C03294C8 - 4);
  qword_1C03294C8 = (__int64)v5;
  v6 = *v5;
  if ( (int)v6 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C03294E0 + 344) + 20LL) || (int)v6 < 0 )
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4372;
    return result;
  }
  v7 = (int *)(*(_QWORD *)(qword_1C03294E0 + 160) + 8 * v6);
  v8 = *((_WORD *)v7 + 3);
  if ( v8 >= 2u )
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4373;
    return result;
  }
  v9 = v8;
  v10 = *(_QWORD *)(qword_1C03294E0 + 16LL * v8 + 200);
  v11 = (unsigned __int8 *)(v10 + *v7);
  if ( (unsigned __int64)v11 < v10
    || (v12 = &v11[*((unsigned __int16 *)v7 + 2)],
        (unsigned __int64)v12 > v10 + *(unsigned int *)(qword_1C03294E0 + 16 * (v9 + 13)))
    || v12 < v11 )
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4363;
    return result;
  }
  v13 = qword_1C0329538;
  v14 = qword_1C0329540;
  if ( (unsigned int)(v6 - 64) <= 2
    && (*(_BYTE *)(qword_1C03294E0 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C03294E0 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C03294E0 + 454) & 0x100) != 0 )
  {
    v26 = *(_QWORD *)(qword_1C03294E0 + 8);
    v2 = 1;
    v27 = *(_DWORD *)(v26 + 88);
    *(_DWORD *)(v26 + 88) = 0;
    v1 = qword_1C03294E0;
    v5 = (int *)qword_1C03294C8;
    v31 = v27;
  }
  if ( ((unsigned int)v6 <= 2 || (_DWORD)v6 == 4 || (unsigned int)(v6 - 7) <= 1)
    && (*(_BYTE *)(v1 + 452) & 1) != 0
    && (*(_BYTE *)(v1 + 120) & 4) == 0
    && (*(_WORD *)(v1 + 454) & 0x200) != 0 )
  {
    v24 = *(_QWORD *)(v1 + 8);
    v2 |= 2u;
    v25 = *(_DWORD *)(v24 + 96);
    *(_DWORD *)(v24 + 96) = 0;
    v1 = qword_1C03294E0;
    v5 = (int *)qword_1C03294C8;
    v30 = v25;
  }
  if ( (_DWORD)v6 == 58
    && (*(_BYTE *)(v1 + 452) & 1) != 0
    && (*(_BYTE *)(v1 + 120) & 4) == 0
    && (*(_WORD *)(v1 + 454) & 0x800) != 0 )
  {
    v4 = *(_DWORD *)(v1 + 104);
    v2 |= 4u;
    *(_DWORD *)(v1 + 104) = 0x7FFFFFFF;
    v1 = qword_1C03294E0;
    v5 = (int *)qword_1C03294C8;
  }
  v15 = *(_WORD *)(v1 + 456);
  for ( i = 0; i < v15; ++i )
  {
    if ( *(_WORD *)(v1 + 2LL * i + 458) == (_WORD)v6 )
      break;
  }
  if ( i < v15 && (*(_BYTE *)(v1 + 452) & 1) != 0 && (*(_BYTE *)(v1 + 120) & 4) == 0 )
  {
    *(_WORD *)(v1 + 454) |= 0x10u;
    v1 = qword_1C03294E0;
    v2 |= 8u;
    v5 = (int *)qword_1C03294C8;
  }
  if ( !--dword_1C032954C )
    goto LABEL_65;
  if ( dword_1C032954C != 50 )
  {
    v17 = &v11[*((unsigned __int16 *)v7 + 2)];
    if ( dword_1C0329518 == 1 )
    {
      itrp_InnerTraceExecute(v11, v17);
    }
    else
    {
      if ( dword_1C0329518 == 2 )
      {
        qword_1C0329538 = (__int64)&v11[*((unsigned __int16 *)v7 + 2)];
        v18 = (unsigned __int64)v17;
        qword_1C0329540 = (__int64)v11;
        if ( v11 >= v17 )
          goto LABEL_29;
        while ( 1 )
        {
          v19 = *v11;
          if ( !--dword_1C0329550 )
          {
            dword_1C0329530 = 4366;
            goto LABEL_29;
          }
          v20 = function[v19];
          ++v11;
          if ( v20 == itrp_PUSHB1 )
          {
            v22 = *(_QWORD *)(v1 + 424);
            v23 = v11;
            if ( (v1 ^ *(_QWORD *)v1 ^ v22 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(v1 + 432)
              || !((v22 - (__int64)v5) >> 2) )
            {
              dword_1C0329530 = 4369;
              v11 = (unsigned __int8 *)v18;
              goto LABEL_28;
            }
            if ( (unsigned __int64)v11 < qword_1C0329540 || (++v11, (unsigned __int64)(v23 + 1) > v18) || v11 < v23 )
            {
              dword_1C0329530 = 4381;
              v11 = (unsigned __int8 *)v18;
              goto LABEL_28;
            }
            *v5 = *v23;
            v5 = (int *)(qword_1C03294C8 + 4);
            qword_1C03294C8 += 4LL;
          }
          else
          {
            if ( v20 == itrp_POP )
            {
              if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) == *(_QWORD *)(v1 + 432)
                && ((__int64)v5 - *(_QWORD *)v1) >> 2 )
              {
                qword_1C03294C8 = (__int64)--v5;
              }
              else
              {
                dword_1C0329530 = 4368;
                v11 = (unsigned __int8 *)v18;
              }
              goto LABEL_28;
            }
            v11 = (unsigned __int8 *)((__int64 (__fastcall *)(unsigned __int8 *, __int64, __int64 (__fastcall *)(), unsigned __int64))function[v19])(
                                       v11,
                                       v19,
                                       v20,
                                       v18);
            v5 = (int *)qword_1C03294C8;
          }
          v1 = qword_1C03294E0;
          v18 = qword_1C0329538;
LABEL_28:
          if ( v11 >= v17 )
            goto LABEL_29;
        }
      }
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    }
    goto LABEL_72;
  }
  v28 = v11;
  v29 = *((_WORD *)v7 + 2);
  if ( !(unsigned __int8)EngExpandStackAndCallout(itrp_CALL_helper, &v28, 24576LL) )
  {
LABEL_65:
    result = qword_1C0329538;
    dword_1C0329530 = 4358;
    return result;
  }
LABEL_72:
  v1 = qword_1C03294E0;
LABEL_29:
  ++dword_1C032954C;
  if ( (v2 & 8) != 0 )
  {
    *(_WORD *)(v1 + 454) &= ~0x10u;
    v1 = qword_1C03294E0;
  }
  if ( (v2 & 4) != 0 )
  {
    *(_DWORD *)(v1 + 104) = v4;
    v1 = qword_1C03294E0;
  }
  if ( (v2 & 2) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 8) + 96LL) = v30;
    v1 = qword_1C03294E0;
  }
  if ( (v2 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)(v1 + 8) + 88LL) = v31;
  qword_1C0329538 = v13;
  qword_1C0329540 = v14;
  if ( dword_1C0329530 )
    return v13;
  else
    return a1;
}
