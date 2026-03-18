/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0064D90
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C0062120 (DxgkGetAdapterDefaultScaling.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z @ 0x1C006223C (-DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C013F478 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this)
{
  unsigned int v2; // edi
  struct DXGGLOBAL *Global; // r13
  unsigned int i; // r15d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v6; // rbx
  unsigned int j; // r15d
  struct _LUID *v8; // rbx
  unsigned int v9; // r14d
  unsigned int k; // r12d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int PreferredVidPnSourceList; // eax
  __int64 v15; // rcx
  __int64 v16; // r12
  unsigned int m; // r12d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rax
  int v19; // ecx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rax
  int v22; // eax
  unsigned int v23; // r14d
  unsigned int v24; // r14d
  __int64 v25; // rcx
  unsigned int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+28h] [rbp-69h] BYREF
  struct _LUID v30; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v31[16]; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v32[16]; // [rsp+78h] [rbp-19h] BYREF

  v2 = 0;
  Global = DXGGLOBAL::GetGlobal();
  for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++i )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v6 = PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 117) )
    {
      v22 = *((_DWORD *)PathDescriptor + 53);
      if ( v22 < 2 )
      {
        if ( v22 == 1 && (*(_DWORD *)v6 & 0x10000) != 0 && *((_DWORD *)v6 + 32) == 5 )
          DxgkGetAdapterDefaultScaling((struct _LUID *)v6 + 1, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v6 + 32);
        *(_DWORD *)v6 &= ~0x800000u;
        *((_DWORD *)v6 + 53) = 2;
      }
      v23 = *((_DWORD *)v6 + 5);
      if ( (v23 & 0xF0000000) != 0 )
      {
        v24 = v23 >> 28;
        LODWORD(v16) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                         (struct DXGGLOBAL *)((char *)Global + 808),
                         v24,
                         &v30,
                         &v29);
        if ( (int)v16 < 0 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v27[3] = v24;
LABEL_40:
          WdLogEvent5_WdError(v27);
          return (unsigned int)v16;
        }
        v26 = v29;
        *((_DWORD *)v6 + 5) &= 0xFFFFFFFu;
        *((_DWORD *)v6 + 4) = v26;
        *((struct _LUID *)v6 + 1) = v30;
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
    v8 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (v8->LowPart & 0x40000) != 0 )
    {
      v9 = 0;
      for ( k = j; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
      {
        v11 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( v8[1].LowPart == *((_DWORD *)v11 + 2) )
        {
          v12 = *((unsigned int *)v11 + 3);
          if ( v8[1].HighPart == (_DWORD)v12 )
          {
            if ( v9 >= 0x10 )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdError(v12);
              v28[3] = v9;
              v28[4] = v8[1].HighPart;
              v28[5] = v8[1].LowPart;
              v28[6] = -1073741811LL;
              WdLogEvent5_WdError(v28);
              return 3221225485LL;
            }
            v13 = v9;
            if ( *((_BYTE *)v11 + 117) )
              v31[v9] = -1;
            else
              v31[v9] = *((_DWORD *)v11 + 4);
            ++v9;
            v32[v13] = *((_DWORD *)v11 + 5);
          }
        }
      }
      PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList(v8 + 1, v9, (char *)v32, (char *)v31);
      v16 = PreferredVidPnSourceList;
      if ( PreferredVidPnSourceList < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v27[3] = v8[1].HighPart;
        v27[4] = v8[1].LowPart;
        v27[5] = v16;
        goto LABEL_40;
      }
      for ( m = j; m < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++m )
      {
        v18 = CCD_TOPOLOGY::GetPathDescriptor(this, m);
        if ( v8[1].LowPart == *((_DWORD *)v18 + 2) && v8[1].HighPart == *((_DWORD *)v18 + 3) )
        {
          v19 = 0;
          if ( v9 )
          {
            while ( v32[v19] != *((_DWORD *)v18 + 5) )
            {
              if ( ++v19 >= v9 )
                goto LABEL_23;
            }
            *((_DWORD *)v18 + 4) = v31[v19];
          }
LABEL_23:
          *(_DWORD *)v18 &= ~0x40000u;
        }
      }
    }
  }
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    do
    {
      v20 = CCD_TOPOLOGY::GetPathDescriptor(this, v2++);
      *(_DWORD *)v20 |= 0x40000u;
    }
    while ( v2 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
  }
  return 0LL;
}
