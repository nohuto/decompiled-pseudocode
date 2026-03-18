/*
 * XREFs of KiFindReadyThread @ 0x14010D020
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400A15C0 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiFindReadyThread(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v9; // rbp
  int v10; // r11d
  unsigned int v11; // eax
  _QWORD **v12; // rdi
  _QWORD *v13; // r10
  unsigned int v14; // eax
  char *v15; // r8
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *result; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  char v30; // [rsp+48h] [rbp+20h]

  v4 = a2 + 22784;
  if ( !a2 )
    v4 = a3 + 16;
  v9 = *(_QWORD *)(a1 + 1608);
  v10 = 64;
LABEL_4:
  _BitScanReverse(&v11, a4);
  a4 ^= 1 << v11;
  v12 = (_QWORD **)(v4 + 16LL * v11);
  v30 = v11;
  v13 = *v12;
  while ( 1 )
  {
    v14 = *((unsigned __int8 *)v13 - 91);
    v15 = (char *)(v13 - 27);
    v16 = v13[45];
    if ( v14 >= 5 )
    {
      if ( (KiDynamicHeteroCpuPolicyMask & 1) != 0 && *(_BYTE *)(*((_QWORD *)v15 + 68) + 1490LL) == 2 )
        goto LABEL_19;
      if ( (KiDynamicHeteroCpuPolicyMask & 2) == 0 )
        goto LABEL_22;
      v17 = v15[195];
      if ( v15[195] < 16 )
      {
        if ( *((_QWORD *)v15 + 13) )
        {
          v18 = *((_QWORD *)v15 + 13);
          if ( v18 )
          {
            v19 = *(unsigned int *)(a1 + 1624) + v18;
            if ( v19 )
            {
              if ( (*(_BYTE *)(v19 + 112) & 8) != 0 )
                v17 = 1;
            }
          }
        }
      }
      if ( v17 >= KiDynamicHeteroCpuPolicyImportantPriority )
      {
LABEL_19:
        if ( (KiDynamicHeteroCpuPolicyMask & 4) == 0 )
          goto LABEL_21;
        v20 = *((_DWORD *)v15 + 21);
        if ( *((_DWORD *)v15 + 20) > v20 )
          v20 = *((_DWORD *)v15 + 20);
        if ( v20 < (unsigned __int64)(unsigned int)KiDynamicHeteroCpuPolicyExpectedCycles )
          v14 = KiDynamicHeteroCpuPolicyImportantShort;
        else
LABEL_21:
          v14 = KiDynamicHeteroCpuPolicyImportant;
      }
      else
      {
LABEL_22:
        v14 = KiDefaultDynamicHeteroCpuPolicy;
      }
    }
    if ( v14 )
    {
      v21 = *(_QWORD *)(a1 + 1600);
      v22 = 2LL * (int)v14;
      if ( (v16 & *(_QWORD *)(v21 + 8 * v22 + 184)) != 0 )
        v16 &= *(_QWORD *)(v21 + 8 * v22 + 184);
    }
    if ( (v16 & v9) != 0 )
      break;
LABEL_36:
    v13 = (_QWORD *)*v13;
    --v10;
    if ( v13 == v12 || !v10 )
    {
      if ( !a4 || !v10 )
        return 0LL;
      goto LABEL_4;
    }
  }
  v23 = *((_QWORD *)v15 + 13);
  if ( v23 )
  {
    v24 = *(unsigned int *)(a1 + 1624) + v23;
    if ( v24 )
    {
      while ( (*(_BYTE *)(v24 + 112) & 2) == 0 )
      {
        v24 = *(_QWORD *)(v24 + 392);
        if ( !v24 )
          goto LABEL_31;
      }
      goto LABEL_36;
    }
  }
LABEL_31:
  if ( a2 )
  {
    v25 = (_QWORD *)*v13;
    v26 = (_QWORD *)v13[1];
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v26 != v13 )
      __fastfail(3u);
    *v26 = v25;
    v25[1] = v26;
    if ( v26 == v25 )
    {
      *(_DWORD *)(a2 + 22680) ^= 1 << v30;
      result = v13 - 27;
      *((_DWORD *)v15 + 134) = *(_DWORD *)(a1 + 36);
      return result;
    }
  }
  else
  {
    v28 = (_QWORD *)*v13;
    v29 = (_QWORD *)*((_QWORD *)v15 + 28);
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v29 != v13 )
      __fastfail(3u);
    *v29 = v28;
    v28[1] = v29;
    if ( v29 == v28 )
      *(_DWORD *)(a3 + 8) ^= 1 << v30;
  }
  result = v13 - 27;
  *((_DWORD *)v15 + 134) = *(_DWORD *)(a1 + 36);
  return result;
}
