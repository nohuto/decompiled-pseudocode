/*
 * XREFs of RIMICAnalyzeUserPalmCluster @ 0x1C00D4760
 * Callers:
 *     RIMICUpdateDeadZone @ 0x1C00D4C10 (RIMICUpdateDeadZone.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C7D58 (WPP_RECORDER_SF_dd.c)
 *     RIMCALMGetAfterLifePosition @ 0x1C00CA010 (RIMCALMGetAfterLifePosition.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00CD760 (WPP_RECORDER_SF_dddd.c)
 *     ?RIMICEClassifyContact@@YAXPEAUtagHPD_CONTACT@@0W4tagRIMCALM_STATUS@@W4tagRIMIC_LEVEL@@@Z @ 0x1C00D3BE4 (-RIMICEClassifyContact@@YAXPEAUtagHPD_CONTACT@@0W4tagRIMCALM_STATUS@@W4tagRIMIC_LEVEL@@@Z.c)
 */

__int64 __fastcall RIMICAnalyzeUserPalmCluster(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // r13
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 *v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  unsigned int v16; // r13d
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int16 v20; // r9
  __int64 v21; // [rsp+28h] [rbp-90h]
  __int64 v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+30h] [rbp-88h]
  __int64 v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+40h] [rbp-78h]
  _QWORD *v27; // [rsp+58h] [rbp-60h]
  __int64 v28; // [rsp+60h] [rbp-58h]
  unsigned int v31; // [rsp+D0h] [rbp+18h]

  v2 = (_QWORD *)(a1 + 568);
  v3 = *(_QWORD **)(a1 + 568);
  v4 = 0;
  v5 = 0;
  v28 = a1 + 568;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 696) + 2276LL);
  v9 = a1;
  if ( (_DWORD)v8 || (result = HIDWORD(v8), HIDWORD(v8)) )
  {
    v31 = RIMCALMGetAfterLifePosition(a1, v8);
    v12 = v31;
    if ( v3 != v2 )
    {
      do
      {
        v13 = v3 - 1;
        v3 = (_QWORD *)*v3;
        v14 = *v13;
        v15 = a2;
        v27 = v3;
        if ( *(_DWORD *)(a2 + 1492) > *(_DWORD *)(v14 + 1492)
          && (unsigned int)(*(_DWORD *)(v14 + 24) - 1) <= 4
          && *(_DWORD *)(v14 + 720) )
        {
          v16 = 0;
          do
          {
            v17 = 2400LL * v16;
            v11 = v17 + *(_QWORD *)(v14 + 696);
            if ( *(_DWORD *)(v11 + 2336) && (*(_DWORD *)(v11 + 2392) & 0x10000) == 0 )
            {
              RIMICEClassifyContact(*(_DWORD **)(v15 + 696), v11, v12);
              v18 = *(_QWORD *)(v14 + 696);
              v11 = *(unsigned int *)(v17 + v18 + 2276);
              if ( (int)v11 <= (int)v8 )
              {
                ++v4;
                if ( (*(_DWORD *)(v17 + v18 + 2392) & 0x4000) != 0 )
                {
                  LODWORD(v26) = HIDWORD(v8);
                  LODWORD(v25) = v8;
                  LODWORD(v23) = *(_DWORD *)(v17 + v18 + 2280);
                  LODWORD(v21) = *(_DWORD *)(v17 + v18 + 2276);
                  WPP_RECORDER_SF_dddd(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v11,
                    4u,
                    0xDu,
                    (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
                    v21,
                    v23,
                    v25,
                    v26);
                  ++v6;
                }
              }
              else
              {
                ++v5;
                if ( (*(_DWORD *)(v17 + v18 + 2392) & 0x4000) != 0 )
                {
                  LODWORD(v26) = HIDWORD(v8);
                  LODWORD(v25) = v8;
                  LODWORD(v23) = *(_DWORD *)(v17 + v18 + 2280);
                  LODWORD(v21) = *(_DWORD *)(v17 + v18 + 2276);
                  WPP_RECORDER_SF_dddd(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v11,
                    4u,
                    0xCu,
                    (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
                    v21,
                    v23,
                    v25,
                    v26);
                  ++v7;
                }
              }
              v15 = a2;
              v12 = v31;
            }
            ++v16;
          }
          while ( v16 < *(_DWORD *)(v14 + 720) );
          v3 = v27;
          v2 = (_QWORD *)v28;
        }
      }
      while ( v3 != v2 );
      v9 = a1;
    }
    LODWORD(v23) = v7;
    LODWORD(v21) = v6;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      4u,
      0xEu,
      (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
      v21,
      v23);
    if ( v5 >= 2 && !v4 )
    {
      LODWORD(v24) = 0;
      v20 = 15;
      LODWORD(v22) = v5;
LABEL_23:
      result = WPP_RECORDER_SF_dd(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 v19,
                 4u,
                 v20,
                 (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
                 v22,
                 v24);
LABEL_24:
      gHandedness = 2;
LABEL_41:
      *(_DWORD *)(v9 + 636) |= 1u;
      return result;
    }
    if ( v4 < 2 || v5 )
    {
      if ( !v4 || !v5 )
        goto LABEL_34;
      if ( v7 > 2 * v6 )
      {
        LODWORD(v24) = v6;
        v20 = 17;
        LODWORD(v22) = v7;
        goto LABEL_23;
      }
      if ( v6 > 2 * v7 )
      {
        LODWORD(v24) = v6;
        LODWORD(v22) = v7;
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v19,
          4u,
          0x12u,
          (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
          v22,
          v24);
        result = 1LL;
        gHandedness = 1;
      }
      else
      {
LABEL_34:
        result = gHandedness;
      }
      if ( (_DWORD)result )
        goto LABEL_41;
      result = v31;
      if ( (v31 & 0xFFFFFFFD) == 0 )
        return result;
      if ( v31 == 3 )
      {
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   3u,
                   4u,
                   0x13u,
                   (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
        goto LABEL_24;
      }
      result = WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 4u,
                 0x14u,
                 (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
    }
    else
    {
      LODWORD(v24) = v4;
      LODWORD(v22) = 0;
      result = WPP_RECORDER_SF_dd(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 v19,
                 4u,
                 0x10u,
                 (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
                 v22,
                 v24);
    }
    gHandedness = 1;
    goto LABEL_41;
  }
  return result;
}
