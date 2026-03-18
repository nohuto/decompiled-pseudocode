/*
 * XREFs of itrp_CALL @ 0x1C00C5390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     itrp_InnerTraceExecute @ 0x1C02DCFDC (itrp_InnerTraceExecute.c)
 */

__int64 __fastcall itrp_CALL(__int64 a1)
{
  __int64 v1; // r9
  int v2; // r13d
  int v3; // r12d
  int v4; // r15d
  char v5; // bl
  __int64 v7; // rcx
  __int64 v8; // r8
  int *v9; // rdi
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // r11
  __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned __int16 v17; // r10
  unsigned __int16 i; // dx
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int8 *v24; // [rsp+30h] [rbp-38h] BYREF
  __int16 v25; // [rsp+38h] [rbp-30h]

  v1 = qword_1C0323160;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || (v7 = qword_1C0323148, !((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2)) )
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
    return result;
  }
  qword_1C0323148 -= 4LL;
  v8 = *(int *)(v7 - 4);
  if ( (int)v8 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C0323160 + 344) + 20LL) || (int)v8 < 0 )
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4372;
    return result;
  }
  v9 = (int *)(*(_QWORD *)(qword_1C0323160 + 160) + 8 * v8);
  v10 = *((_WORD *)v9 + 3);
  if ( v10 >= 2u )
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4373;
    return result;
  }
  v11 = v10;
  v12 = *(_QWORD *)(qword_1C0323160 + 16LL * v10 + 200);
  v13 = (unsigned __int8 *)(v12 + *v9);
  if ( (unsigned __int64)v13 < v12
    || (v14 = &v13[*((unsigned __int16 *)v9 + 2)],
        (unsigned __int64)v14 > v12 + *(unsigned int *)(qword_1C0323160 + 16 * (v11 + 13)))
    || v14 < v13 )
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4363;
    return result;
  }
  v15 = qword_1C03231C0;
  v16 = qword_1C03231B8;
  if ( (unsigned int)(v8 - 64) <= 2
    && (*(_BYTE *)(qword_1C0323160 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C0323160 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C0323160 + 454) & 0x100) != 0 )
  {
    v23 = *(_QWORD *)(qword_1C0323160 + 8);
    v5 = 1;
    v2 = *(_DWORD *)(v23 + 88);
    *(_DWORD *)(v23 + 88) = 0;
    v1 = qword_1C0323160;
  }
  if ( ((unsigned int)v8 <= 2 || (_DWORD)v8 == 4 || (unsigned int)(v8 - 7) <= 1)
    && (*(_BYTE *)(v1 + 452) & 1) != 0
    && (*(_BYTE *)(v1 + 120) & 4) == 0
    && (*(_WORD *)(v1 + 454) & 0x200) != 0 )
  {
    v22 = *(_QWORD *)(v1 + 8);
    v5 |= 2u;
    v3 = *(_DWORD *)(v22 + 96);
    *(_DWORD *)(v22 + 96) = 0;
    v1 = qword_1C0323160;
  }
  if ( (_DWORD)v8 == 58
    && (*(_BYTE *)(v1 + 452) & 1) != 0
    && (*(_BYTE *)(v1 + 120) & 4) == 0
    && (*(_WORD *)(v1 + 454) & 0x800) != 0 )
  {
    v4 = *(_DWORD *)(v1 + 104);
    v5 |= 4u;
    *(_DWORD *)(v1 + 104) = 0x7FFFFFFF;
    v1 = qword_1C0323160;
  }
  v17 = *(_WORD *)(v1 + 456);
  for ( i = 0; i < v17; ++i )
  {
    if ( *(_WORD *)(v1 + 2LL * i + 458) == (_WORD)v8 )
      break;
  }
  if ( i < v17 && (*(_BYTE *)(v1 + 452) & 1) != 0 && (*(_BYTE *)(v1 + 120) & 4) == 0 )
  {
    *(_WORD *)(v1 + 454) |= 0x10u;
    v1 = qword_1C0323160;
    v5 |= 8u;
  }
  if ( !--dword_1C03231CC )
    goto LABEL_54;
  if ( dword_1C03231CC == 50 )
  {
    v24 = v13;
    v25 = *((_WORD *)v9 + 2);
    if ( (unsigned __int8)EngExpandStackAndCallout(itrp_CALL_helper, &v24, 24576LL, v1) )
    {
LABEL_25:
      v1 = qword_1C0323160;
      goto LABEL_26;
    }
LABEL_54:
    result = qword_1C03231B8;
    dword_1C03231B0 = 4358;
    return result;
  }
  v19 = (unsigned __int64)&v13[*((unsigned __int16 *)v9 + 2)];
  if ( dword_1C0323198 == 1 )
  {
    itrp_InnerTraceExecute(v13, v19);
    goto LABEL_25;
  }
  if ( dword_1C0323198 != 2 )
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  qword_1C03231B8 = v19;
  qword_1C03231C0 = (__int64)v13;
  if ( (unsigned __int64)v13 < v19 )
  {
    while ( 1 )
    {
      v20 = *v13;
      if ( !--dword_1C03231D0 )
        break;
      v13 = (unsigned __int8 *)((__int64 (__fastcall *)(unsigned __int8 *, _QWORD))function[v20])(
                                 v13 + 1,
                                 (unsigned int)v20);
      if ( (unsigned __int64)v13 >= v19 )
        goto LABEL_25;
    }
    dword_1C03231B0 = 4366;
    goto LABEL_25;
  }
LABEL_26:
  ++dword_1C03231CC;
  if ( (v5 & 8) != 0 )
  {
    *(_WORD *)(v1 + 454) &= ~0x10u;
    v1 = qword_1C0323160;
  }
  if ( (v5 & 4) != 0 )
  {
    *(_DWORD *)(v1 + 104) = v4;
    v1 = qword_1C0323160;
  }
  if ( (v5 & 2) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 8) + 96LL) = v3;
    v1 = qword_1C0323160;
  }
  if ( (v5 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)(v1 + 8) + 88LL) = v2;
  qword_1C03231B8 = v16;
  qword_1C03231C0 = v15;
  if ( dword_1C03231B0 )
    return v16;
  else
    return a1;
}
