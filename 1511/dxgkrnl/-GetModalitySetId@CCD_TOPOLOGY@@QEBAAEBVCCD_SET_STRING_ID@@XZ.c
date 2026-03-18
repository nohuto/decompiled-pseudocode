/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00A4538
 * Callers:
 *     sub_1C005CCE0 @ 0x1C005CCE0 (sub_1C005CCE0.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C0061048 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A2778 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0061B74 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C0061EA8 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C0062004 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00A2B34 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00A44DC (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

void **__fastcall CCD_TOPOLOGY::GetModalitySetId(void **this)
{
  unsigned __int16 v1; // bx
  unsigned __int16 *v4; // rax
  unsigned __int16 v5; // r8
  WCHAR *v6; // rsi
  CCD_SET_STRING_ID *v7; // rax
  unsigned __int16 *v8; // rax
  __int64 v9; // rcx
  _WORD *v10; // rdx
  unsigned int i; // r8d
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  SIZE_T v16; // rax
  unsigned __int64 v17; // kr00_8
  PVOID v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdx
  _WORD *v24; // rax
  unsigned int j; // r8d
  _WORD *v26; // rdx
  unsigned __int16 v27; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v29[64]; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v4 = (unsigned __int16 *)operator new[](0x8002uLL, 0x63644356u, PagedPool);
    v6 = v4;
    if ( v4 )
    {
      if ( CCD_TOPOLOGY::_QueryTopologySetIdStr((CCD_TOPOLOGY *)this, v4, v5) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, v6);
        v7 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v29, &DestinationString);
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)this, (__int64)v7);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v29);
        if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
        {
          v8 = (unsigned __int16 *)this[8];
          if ( v8 )
            v9 = v8[10];
          else
            v9 = 0LL;
          if ( (_WORD)v9 != *((_WORD *)this + 16) )
          {
            v14 = WdLogNewEntry5_WdAssertion(v9);
            WdLogEvent5_WdAssertion(v14);
          }
          v10 = this[8];
          for ( i = 0; ; ++i )
          {
            v12 = v10 ? v10[10] : 0;
            if ( i >= v12 || *(_DWORD *)&v10[108 * i + 116] != i )
              break;
          }
          if ( v10 )
            v13 = v10[10];
          else
            v13 = 0;
          if ( i >= v13 )
            goto LABEL_21;
          if ( v10 )
            v15 = v10[10];
          else
            v15 = 0;
          v17 = v15;
          v16 = 2LL * v15;
          if ( !is_mul_ok(v17, 2uLL) )
            v16 = -1LL;
          v18 = operator new[](v16, 0x63644356u, PagedPool);
          this[7] = v18;
          if ( v18 )
          {
            for ( j = 0; ; ++j )
            {
              v26 = this[8];
              v27 = v26 ? v26[10] : 0;
              if ( j >= v27 )
                break;
              *((_WORD *)this[7] + *(unsigned int *)&v26[108 * j + 116]) = j;
            }
            goto LABEL_21;
          }
          v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
          v23[3] = this;
          v23[4] = this[8];
          v24 = this[8];
          if ( v24 )
            v1 = v24[10];
          v23[5] = v1;
          WdLogEvent5_WdLowResource(v23);
        }
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
      }
LABEL_21:
      operator delete(v6);
    }
  }
  return this;
}
