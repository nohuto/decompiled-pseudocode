/*
 * XREFs of HUBCONNECTOR_MapRootHubPorts @ 0x1C006A2CC
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x1C006A748 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C0069BBC (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapRootHubPorts(__int64 a1)
{
  unsigned __int16 v1; // bx
  unsigned __int16 v3; // r14
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // r12
  __int64 *v6; // r15
  __int64 i; // rdi
  __int64 v8; // rdi
  int v9; // eax
  __int64 k; // rbp
  __int64 v11; // rbp
  int v12; // eax
  __int64 *v13; // rdi
  __int64 j; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  unsigned __int16 v18; // [rsp+70h] [rbp+8h]

  v1 = *(_WORD *)(a1 + 144);
  v3 = *(_WORD *)(a1 + 138);
  v4 = *(_WORD *)(a1 + 140);
  v18 = v4;
  v5 = *(_WORD *)(a1 + 146);
  if ( v1 <= v5 )
  {
    while ( v3 <= v4 )
    {
      v6 = (__int64 *)(a1 + 2304);
      for ( i = *(_QWORD *)(a1 + 2304); ; i = *(_QWORD *)(v8 + 248) )
      {
        v8 = i - 248;
        if ( v6 == (__int64 *)(v8 + 248) )
          break;
        if ( *(_WORD *)(v8 + 200) == v3 )
        {
          if ( v8 )
          {
            if ( (*(_DWORD *)(v8 + 204) & 0x10) != 0 )
            {
              if ( v3 == v4 )
              {
                *(_WORD *)(v8 + 212) = v1;
                *(_WORD *)(v8 + 214) = v5;
                *(_DWORD *)(v8 + 1368) = 1;
                *(_DWORD *)(v8 + 1372) = *(_DWORD *)(a1 + 88);
                if ( v1 <= v5 )
                {
                  v13 = (__int64 *)(a1 + 2304);
                  while ( 2 )
                  {
                    for ( j = *v13; ; j = *(_QWORD *)(v15 + 248) )
                    {
                      v15 = j - 248;
                      if ( v13 == (__int64 *)(v15 + 248) )
                        break;
                      if ( *(_WORD *)(v15 + 200) == v1 )
                      {
                        if ( v15 )
                        {
                          *(_DWORD *)(v15 + 1368) = 1;
                          *(_DWORD *)(v15 + 1372) = *(_DWORD *)(a1 + 88);
                          *(_DWORD *)(v15 + 1392) = v1;
                          *(_WORD *)(v15 + 1388) = 0;
                          if ( (int)HUBCONNECTOR_RegisterPort(v15) < 0 )
                            return;
                        }
                        break;
                      }
                    }
                    if ( ++v1 <= v5 )
                      continue;
                    break;
                  }
                }
              }
              else
              {
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v8 + 1432),
                  2u,
                  6u,
                  0x18u,
                  (__int64)&WPP_87e3f05bec5a3ef5eeee36d3d8873aec_Traceguids);
              }
              return;
            }
            *(_DWORD *)(v8 + 1368) = 1;
            *(_DWORD *)(v8 + 1372) = *(_DWORD *)(a1 + 88);
            *(_DWORD *)(v8 + 1392) = v1;
            v9 = *(_DWORD *)(v8 + 204);
            *(_WORD *)(v8 + 1388) = 0;
            if ( (v9 & 1) != 0 )
            {
              if ( (int)HUBCONNECTOR_RegisterPort(v8) < 0 )
                return;
              for ( k = *v6; ; k = *(_QWORD *)(v11 + 248) )
              {
                v11 = k - 248;
                if ( v6 == (__int64 *)(v11 + 248) )
                  goto LABEL_16;
                if ( *(_WORD *)(v11 + 200) == v1 )
                  break;
              }
              if ( !v11 )
              {
LABEL_16:
                LODWORD(v16) = v3;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(v8 + 1432),
                  2u,
                  6u,
                  0x19u,
                  (__int64)&WPP_87e3f05bec5a3ef5eeee36d3d8873aec_Traceguids,
                  v16);
                break;
              }
              *(_DWORD *)(v11 + 1368) = 1;
              *(_DWORD *)(v11 + 1372) = *(_DWORD *)(a1 + 88);
              *(_DWORD *)(v11 + 1392) = v1;
              v12 = *(_DWORD *)(v11 + 204);
              *(_WORD *)(v11 + 1388) = 0;
              if ( (v12 & 1) == 0 )
              {
                LODWORD(v17) = v1;
                LODWORD(v16) = v3;
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(v8 + 1432),
                  2u,
                  6u,
                  0x1Au,
                  (__int64)&WPP_87e3f05bec5a3ef5eeee36d3d8873aec_Traceguids,
                  v16,
                  v17);
              }
              if ( (int)HUBCONNECTOR_RegisterPort(v11) < 0 )
                return;
            }
          }
          break;
        }
      }
      ++v3;
      if ( ++v1 > v5 )
        return;
      v4 = v18;
    }
  }
}
