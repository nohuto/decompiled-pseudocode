/*
 * XREFs of ndisPreProcessOid @ 0x1C000C130
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     ndisFDoOidRequestInternal @ 0x1C000B8D0 (ndisFDoOidRequestInternal.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     WPP_SF_qLqL @ 0x1C0058224 (WPP_SF_qLqL.c)
 */

__int64 __fastcall ndisPreProcessOid(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int8 v4; // r14
  unsigned int v9; // edi
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 (__fastcall *v17)(_QWORD *); // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v22; // eax
  unsigned int v23; // ecx
  _QWORD v24[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v9 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qLqL(34LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a3, a2, *(_DWORD *)(a2 + 32));
  if ( a3 == 17 )
  {
    v22 = *(_DWORD *)(a2 + 12);
    if ( v22 < 0x3C )
    {
      v23 = *(_DWORD *)(a1 + 376);
      if ( v23 )
        *(_WORD *)(a1 + 1822) = (v23 + v22 - 1) / v23;
    }
  }
  *(_DWORD *)(a2 + 88) &= ~4u;
  v10 = 0;
  v11 = 70;
  if ( *(_BYTE *)a1 == 17 )
    v12 = a1;
  else
    v12 = *(_QWORD *)(a1 + 32);
  if ( !*(_DWORD *)(a2 + 8) || (*(_DWORD *)(v12 + 1872) & 0x200) == 0 )
  {
    v13 = *(_DWORD *)(a2 + 32);
    v14 = 140;
    while ( v11 >= v10 )
    {
      v15 = *((_DWORD *)&unk_1C0075320 + 6 * v11);
      if ( v15 > v13 )
      {
        if ( !v11 )
          break;
        v14 = v11 - 1;
      }
      else
      {
        if ( v15 == v13 )
        {
          *(_DWORD *)(a2 + 92) = v11;
          memset(v24, 0, 0x30uLL);
          *(_DWORD *)(a2 + 88) |= 4u;
          v16 = *(_DWORD *)(a2 + 88);
          if ( a3 == 17 )
          {
            v24[0] = a1;
            v24[2] = 0LL;
          }
          else if ( a3 == 5 )
          {
            v24[2] = a1;
            v24[0] = 0LL;
          }
          v24[4] = a2;
          if ( (v16 & 0x220) != 0 )
            v24[3] = *(_QWORD *)(a2 + 104);
          else
            v24[3] = 0LL;
          if ( (v16 & 0x40) != 0 )
            v24[1] = *(_QWORD *)(a2 + 104);
          else
            v24[1] = 0LL;
          LODWORD(v24[5]) = 0;
          if ( (v16 & 0x840080) != 0 )
          {
            v4 = 0;
          }
          else
          {
            v17 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)&unk_1C0075320 + 3 * *(unsigned int *)(a2 + 92) + 1);
            if ( v17 )
            {
              v4 = v17(v24);
              if ( v4 == 1 )
              {
                ndisOidRequestComplete((__int64)v24, v18, v19, v20);
                v9 = 259;
              }
              else
              {
                v9 = v24[5];
              }
            }
          }
          break;
        }
        v10 = v11 + 1;
      }
      v11 = v10 + ((v14 - v10 + 1) >> 1);
      if ( v11 > v14 )
        break;
    }
  }
  *a4 = v9;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qdD(35LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a2, v9, v4);
  return v4;
}
