/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C008C930
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B50B4 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00BA910 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C008AE98 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C008C8D4 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C008DE4C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008E13C (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C008E470 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 */

void **__fastcall CCD_TOPOLOGY::GetModalitySetId(void **this)
{
  unsigned __int16 v1; // bx
  wchar_t *v4; // rax
  unsigned __int16 v5; // r8
  WCHAR *v6; // rsi
  unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  _WORD *v9; // rdx
  unsigned int i; // r8d
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  SIZE_T v15; // rax
  unsigned __int64 v16; // kr00_8
  PVOID v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _WORD *v20; // rax
  unsigned int j; // r8d
  _WORD *v22; // rdx
  unsigned __int16 v23; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v25[64]; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v4 = (wchar_t *)operator new(0x8002uLL, 0x63644356u, PagedPool);
    v6 = v4;
    if ( v4 )
    {
      if ( CCD_TOPOLOGY::_QueryTopologySetIdStr((CCD_TOPOLOGY *)this, v4, v5) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, v6);
        CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v25, &DestinationString);
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)this);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v25);
        if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
        {
          v7 = (unsigned __int16 *)this[8];
          if ( v7 )
            v8 = v7[10];
          else
            v8 = 0LL;
          if ( (_WORD)v8 != *((_WORD *)this + 16) )
          {
            v13 = WdLogNewEntry5_WdAssertion(v8);
            WdLogEvent5_WdAssertion(v13);
          }
          v9 = this[8];
          for ( i = 0; ; ++i )
          {
            v11 = v9 ? v9[10] : 0;
            if ( i >= v11 || *(_DWORD *)&v9[108 * i + 116] != i )
              break;
          }
          if ( v9 )
            v12 = v9[10];
          else
            v12 = 0;
          if ( i >= v12 )
            goto LABEL_21;
          if ( v9 )
            v14 = v9[10];
          else
            v14 = 0;
          v16 = v14;
          v15 = 2LL * v14;
          if ( !is_mul_ok(v16, 2uLL) )
            v15 = -1LL;
          v17 = operator new(v15, 0x63644356u, PagedPool);
          this[7] = v17;
          if ( v17 )
          {
            for ( j = 0; ; ++j )
            {
              v22 = this[8];
              v23 = v22 ? v22[10] : 0;
              if ( j >= v23 )
                break;
              *((_WORD *)this[7] + *(unsigned int *)&v22[108 * j + 116]) = j;
            }
            goto LABEL_21;
          }
          v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18);
          v19[3] = this;
          v19[4] = this[8];
          v20 = this[8];
          if ( v20 )
            v1 = v20[10];
          v19[5] = v1;
          WdLogEvent5_WdLowResource(v19);
        }
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
      }
LABEL_21:
      operator delete(v6);
    }
  }
  return this;
}
