/*
 * XREFs of ndisOidPreIovVPortParameters @ 0x1C00DB3E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0065540 (ndisIovFindVPortByVPortId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVPortParameters(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  _BYTE *v4; // r14
  __int64 v5; // rbp
  char v7; // r12
  int v8; // eax
  __int64 v9; // rax
  int v10; // r14d
  char v11; // al
  unsigned int v12; // r15d
  __int64 *VPortByVPortId; // rax
  int v14; // r11d
  __int64 *v15; // r10
  _BYTE *OidSourceHandle; // rax
  __int64 v17; // r10
  int v18; // eax
  char v19; // al
  __int64 v20; // rcx
  __int64 *v21; // rdx
  __int64 v22; // r8
  __int128 v23; // xmm1
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int128 v27; // xmm1

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0LL;
  v5 = 0LL;
  v7 = byte_1C0085321;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
  {
    WPP_SF_qq(0x34u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v1, v3);
    v7 = byte_1C0085321;
  }
  v8 = *(_DWORD *)(v3 + 4);
  if ( (v8 & 0xFFFFFFFD) != 0 && v8 != 1 )
    goto LABEL_5;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x23Cu )
  {
    *(_DWORD *)(v3 + 56) = 572;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    v2 = 1;
    goto LABEL_50;
  }
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 4672);
    if ( !v9 || !*(_QWORD *)(v1 + 3616) || (*(_BYTE *)(v9 + 8) & 3) != 3 )
      goto LABEL_5;
    v10 = *(_DWORD *)(v3 + 4);
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      if ( v10 == 1 )
      {
        v5 = *(_QWORD *)(v3 + 40);
        if ( !v5 )
          goto LABEL_31;
        v11 = *(_BYTE *)(v5 + 1);
        if ( v11 == 1 )
        {
          *(_DWORD *)(v3 + 52) = 572;
        }
        else if ( v11 == 2 )
        {
          *(_DWORD *)(v3 + 52) = 748;
        }
      }
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 40);
      *(_DWORD *)(v3 + 52) = 0;
      if ( !v5 )
        goto LABEL_31;
    }
    v12 = *(_DWORD *)(v5 + 12);
    VPortByVPortId = ndisIovFindVPortByVPortId(v1, v12);
    v15 = VPortByVPortId;
    if ( VPortByVPortId )
    {
      if ( (v10 & 0xFFFFFFFD) != 0 )
      {
        if ( v10 != 1 )
        {
          v4 = 0LL;
          goto LABEL_50;
        }
        OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
        if ( OidSourceHandle && *OidSourceHandle == 18 )
        {
          v4 = OidSourceHandle;
          if ( !v12 || *(_BYTE **)(v17 + 80) == OidSourceHandle )
          {
            v18 = *(_DWORD *)(v5 + 4);
            if ( (v18 & 0xFFFF0000) == 0
              || (v18 & 0x20000) != 0 && *(_WORD *)(v5 + 16) > 0x200u
              || (v18 & 0x80000) != 0
              && ((*(_DWORD *)(v17 + 64) & 3) != 0 || *(_DWORD *)(v5 + 544) != 1 || *(_DWORD *)(v17 + 656) == 1) )
            {
              v2 = 1;
              *(_DWORD *)(a1 + 40) = -1073741811;
            }
            else
            {
              *(_QWORD *)(v3 + 152) = v17;
            }
            goto LABEL_50;
          }
LABEL_5:
          v2 = 1;
          *(_DWORD *)(a1 + 40) = -1073741637;
          goto LABEL_50;
        }
        *(_DWORD *)(a1 + 40) = -1073741637;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = 0;
        v19 = *((_BYTE *)VPortByVPortId + 113);
        if ( v19 == 1 )
        {
          v20 = *(_QWORD *)(v3 + 40);
          v21 = v15 + 14;
          v22 = 4LL;
          do
          {
            *(_OWORD *)v20 = *(_OWORD *)v21;
            *(_OWORD *)(v20 + 16) = *((_OWORD *)v21 + 1);
            *(_OWORD *)(v20 + 32) = *((_OWORD *)v21 + 2);
            *(_OWORD *)(v20 + 48) = *((_OWORD *)v21 + 3);
            *(_OWORD *)(v20 + 64) = *((_OWORD *)v21 + 4);
            *(_OWORD *)(v20 + 80) = *((_OWORD *)v21 + 5);
            *(_OWORD *)(v20 + 96) = *((_OWORD *)v21 + 6);
            v20 += 128LL;
            v23 = *((_OWORD *)v21 + 7);
            v21 += 16;
            *(_OWORD *)(v20 - 16) = v23;
            --v22;
          }
          while ( v22 );
          *(_OWORD *)v20 = *(_OWORD *)v21;
          *(_OWORD *)(v20 + 16) = *((_OWORD *)v21 + 1);
          *(_OWORD *)(v20 + 32) = *((_OWORD *)v21 + 2);
          *(_QWORD *)(v20 + 48) = v21[6];
          *(_DWORD *)(v20 + 56) = *((_DWORD *)v21 + 14);
          *(_DWORD *)(v3 + 52) = v14;
        }
        else if ( v19 == 2 )
        {
          v24 = *(_QWORD *)(v3 + 40);
          v25 = v15 + 14;
          v26 = 5LL;
          do
          {
            *(_OWORD *)v24 = *(_OWORD *)v25;
            *(_OWORD *)(v24 + 16) = *((_OWORD *)v25 + 1);
            *(_OWORD *)(v24 + 32) = *((_OWORD *)v25 + 2);
            *(_OWORD *)(v24 + 48) = *((_OWORD *)v25 + 3);
            *(_OWORD *)(v24 + 64) = *((_OWORD *)v25 + 4);
            *(_OWORD *)(v24 + 80) = *((_OWORD *)v25 + 5);
            *(_OWORD *)(v24 + 96) = *((_OWORD *)v25 + 6);
            v24 += 128LL;
            v27 = *((_OWORD *)v25 + 7);
            v25 += 16;
            *(_OWORD *)(v24 - 16) = v27;
            --v26;
          }
          while ( v26 );
          *(_OWORD *)v24 = *(_OWORD *)v25;
          *(_OWORD *)(v24 + 16) = *((_OWORD *)v25 + 1);
          *(_OWORD *)(v24 + 32) = *((_OWORD *)v25 + 2);
          *(_OWORD *)(v24 + 48) = *((_OWORD *)v25 + 3);
          *(_OWORD *)(v24 + 64) = *((_OWORD *)v25 + 4);
          *(_OWORD *)(v24 + 80) = *((_OWORD *)v25 + 5);
          *(_QWORD *)(v24 + 96) = v25[12];
          *(_DWORD *)(v24 + 104) = *((_DWORD *)v25 + 26);
          *(_DWORD *)(v3 + 52) = 748;
        }
      }
LABEL_32:
      v4 = 0LL;
      v2 = 1;
      goto LABEL_50;
    }
LABEL_31:
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_32;
  }
LABEL_50:
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qqDD(0x35u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v1, v4, v2, *(_DWORD *)(a1 + 40));
  return v2;
}
