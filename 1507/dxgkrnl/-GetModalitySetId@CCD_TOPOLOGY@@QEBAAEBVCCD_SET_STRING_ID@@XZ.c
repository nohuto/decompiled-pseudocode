/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0065D8C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C009D124 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00B0F90 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C0064558 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C0065D30 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0067128 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C006745C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00675B8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void **__fastcall CCD_TOPOLOGY::GetModalitySetId(void **this)
{
  unsigned __int16 v1; // bx
  wchar_t *v4; // rax
  unsigned __int16 v5; // r8
  WCHAR *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  _WORD *v12; // rdx
  unsigned int i; // r8d
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr00_8
  void *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _WORD *v23; // rax
  unsigned int j; // r8d
  _WORD *v25; // rdx
  unsigned __int16 v26; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v28[64]; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v4 = (wchar_t *)operator new[](0x8002uLL, 0x63644356u, PagedPool);
    v6 = v4;
    if ( v4 )
    {
      if ( CCD_TOPOLOGY::_QueryTopologySetIdStr((CCD_TOPOLOGY *)this, v4, v5) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, v6);
        CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v28, &DestinationString);
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)this);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v28);
        if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
        {
          v10 = (unsigned __int16 *)this[8];
          if ( v10 )
            v11 = v10[10];
          else
            v11 = 0LL;
          if ( (_WORD)v11 != *((_WORD *)this + 16) )
          {
            v16 = WdLogNewEntry5_WdAssertion(v11, v7, v8, v9);
            WdLogEvent5_WdAssertion(v16);
          }
          v12 = this[8];
          for ( i = 0; ; ++i )
          {
            v14 = v12 ? v12[10] : 0;
            if ( i >= v14 || *(_DWORD *)&v12[108 * i + 116] != i )
              break;
          }
          if ( v12 )
            v15 = v12[10];
          else
            v15 = 0;
          if ( i >= v15 )
            goto LABEL_21;
          if ( v12 )
            v17 = v12[10];
          else
            v17 = 0;
          v19 = v17;
          v18 = 2LL * v17;
          if ( !is_mul_ok(v19, 2uLL) )
            v18 = -1LL;
          v20 = operator new[](v18, 0x63644356u, PagedPool);
          this[7] = v20;
          if ( v20 )
          {
            for ( j = 0; ; ++j )
            {
              v25 = this[8];
              v26 = v25 ? v25[10] : 0;
              if ( j >= v26 )
                break;
              *((_WORD *)this[7] + *(unsigned int *)&v25[108 * j + 116]) = j;
            }
            goto LABEL_21;
          }
          v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v21);
          v22[3] = this;
          v22[4] = this[8];
          v23 = this[8];
          if ( v23 )
            v1 = v23[10];
          v22[5] = v1;
          WdLogEvent5_WdLowResource(v22);
        }
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
      }
LABEL_21:
      operator delete(v6);
    }
  }
  return this;
}
