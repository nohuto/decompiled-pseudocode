/*
 * XREFs of ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C0064558
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0065D8C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000136C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     RtlStringCchCopyW @ 0x1C00089F8 (RtlStringCchCopyW.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C00AF6E0 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C017D738 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

NTSTATUS __fastcall CCD_TOPOLOGY::_QueryTopologySetIdStr(
        CCD_TOPOLOGY *this,
        NTSTRSAFE_PWSTR pszDest,
        unsigned __int16 a3)
{
  __int64 v4; // rcx
  wchar_t *v5; // rsi
  __int64 v6; // rbp
  unsigned __int16 v7; // di
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int16 v10; // r11
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r15d
  NTSTATUS result; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int16 v21; // di
  unsigned __int16 *v22; // rsi
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned __int16 v27; // [rsp+70h] [rbp+8h]
  unsigned __int16 v28; // [rsp+80h] [rbp+18h] BYREF

  v28 = a3;
  v4 = *((_QWORD *)this + 8);
  v5 = pszDest;
  if ( *(_WORD *)(v4 + 20) )
  {
    v27 = 0;
    LODWORD(v6) = -1073741823;
    v7 = 16385;
    v8 = 0;
    while ( 1 )
    {
      v9 = 216LL * v8;
      if ( (*(_DWORD *)(v9 + v4 + 48) & 0x7000) != 0x7000 )
        return -1073741811;
      if ( (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v8) )
      {
        if ( v8 )
        {
          if ( v7 )
          {
            result = RtlStringCchCopyW(v5, v7, asc_1C0031554);
            v10 = -1;
          }
          else
          {
            result = -1073741811;
          }
          if ( result == -2147483643 )
            result = -1073741789;
          if ( result < 0 )
            return result;
          v7 += v10;
          ++v5;
        }
        v11 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                (struct _LUID *)(v9 + *((_QWORD *)this + 8) + 56LL),
                *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 68),
                v5,
                v7,
                &v28);
        v6 = v11;
        if ( v11 < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v26 = v8;
LABEL_36:
          v25[3] = v6;
          v25[4] = *(unsigned int *)(216 * v26 + *((_QWORD *)this + 8) + 68);
          v25[5] = *((_QWORD *)this + 8);
          v25[6] = *(int *)(216 * v26 + *((_QWORD *)this + 8) + 60);
          v25[7] = *(unsigned int *)(216 * v26 + *((_QWORD *)this + 8) + 56);
          WdLogEvent5_WdError(v25);
          return v6;
        }
        v13 = v8 + 1;
        v7 -= v28;
        *(_DWORD *)(v9 + *((_QWORD *)this + 8) + 232) = v27++;
        v5 += v28;
        if ( v8 + 1 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        {
          do
          {
            if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v8, v13, 0) )
            {
              v18 = *((_QWORD *)this + 8);
              v19 = 216LL * v13;
              if ( *(_DWORD *)(v18 + v19 + 56) == *(_DWORD *)(v18 + v9 + 56)
                && *(_DWORD *)(v18 + v19 + 60) == *(_DWORD *)(v18 + v9 + 60)
                && *(_DWORD *)(v18 + v19 + 68) == *(_DWORD *)(v18 + v9 + 68) )
              {
                v20 = WdLogNewEntry5_WdAssertion(v18, v15, v16, v17);
                WdLogEvent5_WdAssertion(v20);
              }
              if ( v7 )
                result = RtlStringCchCopyW(v5, v7, asc_1C0031550);
              else
                result = -1073741811;
              if ( result == -2147483643 )
                result = -1073741789;
              if ( result < 0 )
                return result;
              v21 = v7 - 1;
              v22 = v5 + 1;
              v23 = CCD_TOPOLOGY::_QueryMonitorIdStr(
                      (struct _LUID *)(v19 + *((_QWORD *)this + 8) + 56LL),
                      *(_DWORD *)(v19 + *((_QWORD *)this + 8) + 68),
                      v22,
                      v21,
                      &v28);
              v6 = v23;
              if ( v23 < 0 )
              {
                v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
                v26 = v13;
                goto LABEL_36;
              }
              v7 = v21 - v28;
              *(_DWORD *)(v19 + *((_QWORD *)this + 8) + 232) = v27++;
              v5 = &v22[v28];
            }
            ++v13;
          }
          while ( v13 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
        }
      }
      v4 = *((_QWORD *)this + 8);
      if ( ++v8 >= *(unsigned __int16 *)(v4 + 20) )
        return v6;
    }
  }
  else
  {
    *pszDest = 0;
    return 0;
  }
}
