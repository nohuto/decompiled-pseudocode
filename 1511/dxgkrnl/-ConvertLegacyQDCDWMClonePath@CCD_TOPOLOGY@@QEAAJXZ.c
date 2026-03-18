/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A33EC
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000C12C (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C001FF24 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00AE2A0 (DxgkGetAdapterDefaultScaling.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z @ 0x1C00C05D4 (-DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C01458E8 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this)
{
  unsigned int v2; // edi
  unsigned int v3; // r15d
  DXGADAPTERSOURCEHASH *i; // r14
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v6; // rbx
  int v7; // eax
  unsigned int j; // r15d
  struct _LUID *v9; // rbx
  unsigned int v10; // r14d
  unsigned int k; // r12d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int PreferredVidPnSourceList; // eax
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned int m; // r12d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rax
  int v20; // ecx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rax
  unsigned int v23; // r12d
  __int64 v24; // rcx
  int AdapterAndSourceForHash; // r13d
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+28h] [rbp-69h] BYREF
  struct _LUID v30; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v31[16]; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v32[16]; // [rsp+78h] [rbp-19h] BYREF

  v2 = 0;
  v3 = 0;
  for ( i = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)this) + 952);
        v3 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
        ++v3 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v6 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 117) )
    {
      v7 = *((_DWORD *)PathDescriptor + 53);
      if ( v7 < 2 )
      {
        if ( v7 == 1 && (v6->LowPart & 0x10000) != 0 && v6[16].LowPart == 5 )
          DxgkGetAdapterDefaultScaling(&v6[1]);
        v6->LowPart &= ~0x800000u;
        v6[26].HighPart = 2;
      }
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i) & v6[2].HighPart) != 0 )
      {
        v23 = (unsigned int)v6[2].HighPart >> DXGADAPTERSOURCEHASH::GetHashBitShift(i);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(i, v23, &v30, &v29);
        if ( AdapterAndSourceForHash < 0 )
        {
          v26 = WdLogNewEntry5_WdError(v24);
          *(_QWORD *)(v26 + 24) = v23;
          WdLogEvent5_WdError(v26);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v6[2].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i);
        v6[2].LowPart = v29;
        v6[1] = v30;
      }
    }
    else
    {
      *(_DWORD *)PathDescriptor &= 0xFF7DFFFF;
      *((_DWORD *)PathDescriptor + 1) &= 0xFF7DFFFF;
      if ( *((_DWORD *)PathDescriptor + 53) )
      {
        *(_DWORD *)PathDescriptor &= 0xFFFFFF78;
        *((_DWORD *)PathDescriptor + 53) = 0;
      }
    }
  }
  for ( j = 0; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
  {
    v9 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (v9->LowPart & 0x40000) != 0 )
    {
      v10 = 0;
      for ( k = j; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
      {
        v12 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( v9[1].LowPart == *((_DWORD *)v12 + 2) )
        {
          v13 = *((unsigned int *)v12 + 3);
          if ( v9[1].HighPart == (_DWORD)v13 )
          {
            if ( v10 >= 0x10 )
            {
              v27 = (_QWORD *)WdLogNewEntry5_WdError(v13);
              v27[3] = v10;
              v27[4] = v9[1].HighPart;
              v27[5] = v9[1].LowPart;
              v27[6] = -1073741811LL;
              WdLogEvent5_WdError(v27);
              return 3221225485LL;
            }
            v14 = v10;
            if ( *((_BYTE *)v12 + 117) )
              v31[v10] = -1;
            else
              v31[v10] = *((_DWORD *)v12 + 4);
            ++v10;
            v32[v14] = *((_DWORD *)v12 + 5);
          }
        }
      }
      PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList(v9 + 1, v10, v32, v31);
      v17 = PreferredVidPnSourceList;
      if ( PreferredVidPnSourceList < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v28[3] = v9[1].HighPart;
        v28[4] = v9[1].LowPart;
        v28[5] = v17;
        WdLogEvent5_WdError(v28);
        return (unsigned int)v17;
      }
      for ( m = j; m < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++m )
      {
        v19 = CCD_TOPOLOGY::GetPathDescriptor(this, m);
        if ( v9[1].LowPart == *((_DWORD *)v19 + 2) && v9[1].HighPart == *((_DWORD *)v19 + 3) )
        {
          v20 = 0;
          if ( v10 )
          {
            while ( v32[v20] != *((_DWORD *)v19 + 5) )
            {
              if ( ++v20 >= v10 )
                goto LABEL_23;
            }
            *((_DWORD *)v19 + 4) = v31[v20];
          }
LABEL_23:
          *(_DWORD *)v19 &= ~0x40000u;
        }
      }
    }
  }
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    do
    {
      v21 = CCD_TOPOLOGY::GetPathDescriptor(this, v2++);
      *(_DWORD *)v21 |= 0x40000u;
    }
    while ( v2 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
  }
  return 0LL;
}
