/*
 * XREFs of ndisPostSetOpenRSSParameters @ 0x1C0024300
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C0024270 (ndisOidPostRSSParameters.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

void __fastcall ndisPostSetOpenRSSParameters(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  unsigned int v6; // ecx
  __int64 v7; // rdi
  unsigned int v8; // edx
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // ebx
  bool v12; // r12
  KIRQL v13; // al
  _QWORD *v14; // r13
  _DWORD *v15; // rcx
  void *v16; // rcx
  int v17; // ebx
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]
  int v19; // [rsp+78h] [rbp+10h]
  int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v3 = a1[2];
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qqd(158LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3);
    a3 = v20;
  }
  v6 = 0;
  if ( (*(_DWORD *)(a2 + 88) & 0x800) != 0 )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v3 + 528);
    *(_DWORD *)(a2 + 48) = *(unsigned __int16 *)(v3 + 536);
    *(_QWORD *)(v3 + 528) = 0LL;
    *(_WORD *)(v3 + 536) = 0;
    *(_DWORD *)(a2 + 88) &= ~0x800u;
  }
  if ( !a3 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_DWORD *)(v7 + 16) + *(unsigned __int16 *)(v7 + 12);
    v9 = *(_DWORD *)(v7 + 24) + *(unsigned __int16 *)(v7 + 20);
    if ( *(_BYTE *)(v7 + 1) >= 2u )
      v6 = *(_DWORD *)(v7 + 28) + *(_DWORD *)(v7 + 32) * *(_DWORD *)(v7 + 36);
    v10 = *(_DWORD *)(v7 + 24) + *(unsigned __int16 *)(v7 + 20);
    if ( v8 > v9 )
      v10 = *(_DWORD *)(v7 + 16) + *(unsigned __int16 *)(v7 + 12);
    if ( v10 <= v6 )
    {
      v9 = v6;
    }
    else if ( v8 > v9 )
    {
      v9 = *(_DWORD *)(v7 + 16) + *(unsigned __int16 *)(v7 + 12);
    }
    v11 = (unsigned __int8)*(_DWORD *)(v7 + 8);
    v12 = (*(_BYTE *)(v7 + 4) & 0x10) != 0;
    v19 = v11;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    v14 = *(_QWORD **)(v3 + 56);
    NewIrql = v13;
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2305700;
    while ( v14 )
    {
      v15 = (_DWORD *)v14[61];
      if ( v15 && v14 != a1 )
      {
        if ( !v11 || v12 )
        {
          v14[61] = 0LL;
        }
        else
        {
          v17 = v15[2] & 0xFFFF00;
          memmove(v15, (const void *)v7, v9);
          *(_DWORD *)(v14[61] + 8LL) = v19 | v17;
          v11 = v19;
        }
      }
      v14 = (_QWORD *)v14[49];
    }
    if ( !v11 || v12 )
    {
      a1[61] = 0LL;
    }
    else
    {
      v16 = (void *)a1[60];
      a1[61] = v16;
      memmove(v16, (const void *)v7, v9);
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
    a3 = v20;
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqqL(159LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, a1, a2, a3);
}
