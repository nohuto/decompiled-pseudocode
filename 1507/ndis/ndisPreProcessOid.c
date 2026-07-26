/*
 * XREFs of ndisPreProcessOid @ 0x1C0007250
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0006A40 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qLqL @ 0x1C0053274 (WPP_SF_qLqL.c)
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
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *); // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v9 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qLqL(34LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a3, a2, *(_DWORD *)(a2 + 32));
  if ( a3 == 17 )
  {
    v23 = *(_DWORD *)(a2 + 12);
    if ( v23 < 0x3C )
    {
      v24 = *(_DWORD *)(a1 + 376);
      if ( v24 )
        *(_WORD *)(a1 + 1822) = (v24 + v23 - 1) / v24;
    }
  }
  *(_DWORD *)(a2 + 88) &= ~4u;
  v10 = 0;
  v11 = 70;
  v12 = a1;
  if ( *(_BYTE *)a1 != 17 )
    v12 = *(_QWORD *)(a1 + 32);
  if ( !*(_DWORD *)(a2 + 8) || (*(_DWORD *)(v12 + 1872) & 0x200) == 0 )
  {
    v13 = *(_DWORD *)(a2 + 32);
    v14 = 140;
    while ( v11 >= v10 )
    {
      v15 = *((_DWORD *)&unk_1C0071CC0 + 6 * v11);
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
          memset(v25, 0, 0x30uLL);
          *(_DWORD *)(a2 + 88) |= 4u;
          v16 = *(_DWORD *)(a2 + 88);
          if ( a3 == 17 )
          {
            v25[0] = a1;
            v25[2] = 0LL;
          }
          else if ( a3 == 5 )
          {
            v25[2] = a1;
            v25[0] = 0LL;
          }
          v25[4] = a2;
          if ( (v16 & 0x220) != 0 )
            v25[3] = *(_QWORD *)(a2 + 104);
          else
            v25[3] = 0LL;
          if ( (v16 & 0x40) != 0 )
            v25[1] = *(_QWORD *)(a2 + 104);
          else
            v25[1] = 0LL;
          v17 = *(unsigned int *)(a2 + 92);
          LODWORD(v25[5]) = 0;
          if ( (v16 & 0x840080) != 0 )
          {
            v4 = 0;
          }
          else
          {
            v18 = (__int64 (__fastcall *)(__int64 *))*((_QWORD *)&unk_1C0071CC0 + 3 * v17 + 1);
            if ( v18 )
            {
              v4 = v18(v25);
              if ( v4 == 1 )
              {
                ndisOidRequestComplete(v25, v19, v20, v21);
                v9 = 259;
              }
              else
              {
                v9 = v25[5];
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
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qdD(35LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a2, v9, v4);
  return v4;
}
