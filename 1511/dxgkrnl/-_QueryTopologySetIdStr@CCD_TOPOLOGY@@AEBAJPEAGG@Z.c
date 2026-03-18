/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00A2B34
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00A4538 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0009FC0 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     RtlStringCchCopyW @ 0x1C000A4DC (RtlStringCchCopyW.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C005D208 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00C4084 (-DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C0181BB0 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

NTSTATUS __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(CCD_TOPOLOGY *this, unsigned __int16 *a2, unsigned __int16 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rbp
  unsigned __int16 v7; // di
  unsigned int v8; // r14d
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r15d
  NTSTATUS result; // eax
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int16 v17; // di
  unsigned __int16 *v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int16 v23; // [rsp+70h] [rbp+8h]
  unsigned __int16 v24; // [rsp+80h] [rbp+18h] BYREF

  v24 = a3;
  v4 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v4 + 20) )
  {
    v23 = 0;
    LODWORD(v6) = -1073741823;
    v7 = 16385;
    v8 = 0;
    while ( 1 )
    {
      v9 = 216LL * v8;
      if ( (*(_DWORD *)(v9 + v4 + 48) & 0x7000) != 0x7000 )
        return -1073741811;
      if ( !DxgkIsTargetHMD((const struct _LUID *)(v9 + v4 + 56), *(_DWORD *)(v9 + v4 + 68))
        && (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v8) )
      {
        if ( v8 )
        {
          if ( v7 )
            result = RtlStringCchCopyW(a2, v7, asc_1C00316A4);
          else
            result = -1073741811;
          if ( result == -2147483643 )
            result = -1073741789;
          if ( result < 0 )
            return result;
          --v7;
          ++a2;
        }
        v10 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                (struct _LUID *)(v9 + *((_QWORD *)this + 8) + 56LL),
                *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 68),
                a2,
                v7,
                &v24);
        v6 = v10;
        if ( v10 < 0 )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v22 = v8;
LABEL_37:
          v21[3] = v6;
          v21[4] = *(unsigned int *)(216 * v22 + *((_QWORD *)this + 8) + 68);
          v21[5] = *((_QWORD *)this + 8);
          v21[6] = *(int *)(216 * v22 + *((_QWORD *)this + 8) + 60);
          v21[7] = *(unsigned int *)(216 * v22 + *((_QWORD *)this + 8) + 56);
          WdLogEvent5_WdError(v21);
          return v6;
        }
        v12 = v8 + 1;
        v7 -= v24;
        *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 232) = v23++;
        a2 += v24;
        if ( v8 + 1 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        {
          do
          {
            if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v8, v12, 0) )
            {
              v14 = *((_QWORD *)this + 8);
              v15 = 216LL * v12;
              if ( *(_DWORD *)(v14 + v15 + 56) == *(_DWORD *)(v14 + v9 + 56)
                && *(_DWORD *)(v14 + v15 + 60) == *(_DWORD *)(v14 + v9 + 60)
                && *(_DWORD *)(v14 + v15 + 68) == *(_DWORD *)(v14 + v9 + 68) )
              {
                v16 = WdLogNewEntry5_WdAssertion(v14);
                WdLogEvent5_WdAssertion(v16);
              }
              if ( v7 )
                result = RtlStringCchCopyW(a2, v7, asc_1C00316A0);
              else
                result = -1073741811;
              if ( result == -2147483643 )
                result = -1073741789;
              if ( result < 0 )
                return result;
              v17 = v7 - 1;
              v18 = a2 + 1;
              v19 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                      (struct _LUID *)(v15 + *((_QWORD *)this + 8) + 56LL),
                      *(_DWORD *)(v15 + *((_QWORD *)this + 8) + 68),
                      v18,
                      v17,
                      &v24);
              v6 = v19;
              if ( v19 < 0 )
              {
                v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
                v22 = v12;
                goto LABEL_37;
              }
              v7 = v17 - v24;
              *(_DWORD *)(v15 + *((_QWORD *)this + 8) + 232) = v23++;
              a2 = &v18[v24];
            }
            ++v12;
          }
          while ( v12 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
        }
      }
      v4 = *((_QWORD *)this + 8);
      if ( ++v8 >= *(unsigned __int16 *)(v4 + 20) )
        return v6;
    }
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}
