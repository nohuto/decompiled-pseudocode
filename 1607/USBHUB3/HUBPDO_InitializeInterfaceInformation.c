/*
 * XREFs of HUBPDO_InitializeInterfaceInformation @ 0x1C0011670
 * Callers:
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C001189C (HUBPDO_ValidateSelectInterfaceUrb.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall HUBPDO_InitializeInterfaceInformation(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  char v3; // bp
  char v4; // r15
  unsigned __int8 *v5; // r8
  unsigned int v8; // r14d
  unsigned __int8 *v9; // rdx
  int v10; // r11d
  unsigned int v11; // ebx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r10
  unsigned __int8 *v14; // rax
  _BYTE *v15; // r9
  __int64 v16; // rcx
  unsigned __int8 *v17; // rsi
  unsigned __int8 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // edx
  char *v21; // rbx
  __int64 v22; // rbp
  int v23; // r8d
  __int64 v25; // [rsp+28h] [rbp-40h]

  v3 = *((_BYTE *)a2 + 3);
  v4 = *((_BYTE *)a2 + 2);
  v5 = (unsigned __int8 *)(a3 + 32);
  LOWORD(v8) = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( *v5 < 9u )
    goto LABEL_36;
  if ( v5[1] != 2 )
    goto LABEL_36;
  v12 = *((_WORD *)v5 + 1);
  if ( v12 < 9u )
    goto LABEL_36;
  v13 = (unsigned __int64)&v5[v12];
  v14 = &v5[*v5];
  v15 = v14 + 2;
  if ( (unsigned __int64)(v14 + 2) > v13 )
    goto LABEL_36;
  do
  {
    v16 = *v14;
    v17 = &v14[v16];
    if ( (unsigned __int64)&v14[v16] > v13 || !(_BYTE)v16 )
      break;
    v18 = v14[1];
    if ( v18 == 4 )
    {
      if ( (unsigned __int8)v16 >= 9u )
      {
        if ( *v15 == v4 )
        {
          ++v10;
          if ( v9 )
            goto LABEL_23;
          if ( v14[3] == v3 )
            v9 = v14;
        }
        else if ( v10 )
        {
          break;
        }
      }
    }
    else if ( v18 == 5 && v9 )
    {
      if ( (unsigned __int8)v16 < 7u )
      {
        v9 = 0LL;
        break;
      }
      ++v11;
    }
    v15 = v17 + 2;
    v14 += v16;
  }
  while ( (unsigned __int64)(v17 + 2) <= v13 );
  if ( !v9 )
    goto LABEL_36;
LABEL_23:
  if ( v9[4] > v11 )
    v9 = 0LL;
  if ( v9 )
  {
    v19 = v9[4];
    v8 = 24 * (v19 + 1);
    if ( *a2 >= v8 )
    {
      *((_DWORD *)a2 + 1) = 0;
      v20 = 0;
      *((_QWORD *)a2 + 1) = 0LL;
      *((_DWORD *)a2 + 4) = v19;
      if ( (_DWORD)v19 )
      {
        v21 = (char *)a2 + 27;
        v22 = v19;
        do
        {
          v23 = *(_DWORD *)(v21 + 17);
          *(_WORD *)(v21 - 1) = 0;
          *(_DWORD *)(v21 + 1) = 0;
          *(_QWORD *)(v21 + 5) = 0LL;
          if ( (v23 & 0xFFFFFFF0) != 0 )
          {
            LODWORD(v25) = v23;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
              3u,
              5u,
              0x23u,
              (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
              v25);
            v20 = -1073721344;
          }
          if ( (*(_DWORD *)(v21 + 17) & 1) == 0 )
            *(_WORD *)(v21 - 3) = 0;
          v21 += 24;
          --v22;
        }
        while ( v22 );
      }
    }
    else
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x22u,
        (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
        *a2,
        24 * (v19 + 1));
      v20 = -1073729536;
    }
  }
  else
  {
LABEL_36:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      2u,
      5u,
      0x21u,
      (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids);
    v20 = -1073725440;
  }
  *a2 = v8;
  return v20;
}
