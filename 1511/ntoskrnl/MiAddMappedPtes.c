/*
 * XREFs of MiAddMappedPtes @ 0x1403C7E10
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1403C7CC0 (MiMapViewInSystemSpace.c)
 *     MiMapSystemImage @ 0x1403CC804 (MiMapSystemImage.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5)
{
  unsigned __int64 v6; // r12
  __int64 *v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  unsigned int v13; // r13d
  __int64 SubsectionDriverProtos; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r15
  unsigned __int64 i; // rbp
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned __int64)&a1[a2];
  v8 = a1;
  v9 = (__int64 *)MiOffsetToProtos((_DWORD *)a3, *a4, &v19);
  v10 = (__int64)v9;
  if ( !v9 )
    return 3221225503LL;
  v12 = v19;
  if ( (*(_DWORD *)(a3 + 56) & 0x420) != 0 || (result = MiAddViewsForSection(v9, v19 + a2, 0LL), (int)result >= 0) )
  {
    v13 = a5;
    if ( (*(_BYTE *)(v10 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
      goto LABEL_15;
    if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
    {
      SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v10);
      if ( SubsectionDriverProtos )
        goto LABEL_18;
    }
    v15 = *(_QWORD *)(v10 + 8);
    v16 = v15 + 8 * v12;
    v17 = v15 + 8LL * *(unsigned int *)(v10 + 44);
    while ( 1 )
    {
      if ( (unsigned __int64)v8 >= v6 )
        return 0LL;
      if ( v16 >= v17 )
        break;
LABEL_20:
      *v8 = (v16 << 16) | 0x400;
      if ( MiPteInShadowRange((__int64)v8) )
        MiWritePteShadow((__int64)v8, (v16 << 16) | 0x400);
      ++v8;
      v16 += 8LL;
    }
    v10 = *(_QWORD *)(v10 + 16);
    if ( !v10 )
    {
      for ( i = *(_QWORD *)(a3 + 128)
              + 8
              * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32));
            v16 < i;
            v16 += 8LL )
      {
        *v8 = (v16 << 16) | 0x400;
        if ( MiPteInShadowRange((__int64)v8) )
          MiWritePteShadow((__int64)v8, (v16 << 16) | 0x400);
        if ( (unsigned __int64)++v8 >= v6 )
          break;
      }
      return 0LL;
    }
    v16 = *(_QWORD *)(v10 + 8);
    if ( (*(_BYTE *)(v10 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
    {
LABEL_15:
      SubsectionDriverProtos = MiGetSharedProtos(a3, v13, v10);
    }
    else
    {
      if ( (*(_DWORD *)(a3 + 56) & 0x20) == 0 )
        goto LABEL_19;
      SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v10);
      if ( !SubsectionDriverProtos )
        goto LABEL_19;
    }
LABEL_18:
    v16 = *(_QWORD *)(SubsectionDriverProtos + 32);
LABEL_19:
    v17 = v16 + 8LL * *(unsigned int *)(v10 + 44);
    goto LABEL_20;
  }
  return result;
}
