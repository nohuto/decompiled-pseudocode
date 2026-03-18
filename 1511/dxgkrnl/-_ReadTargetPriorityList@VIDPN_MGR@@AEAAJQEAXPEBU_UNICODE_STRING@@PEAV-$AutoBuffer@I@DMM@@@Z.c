/*
 * XREFs of ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C00DD5EC
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00DD684 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C002ADD4 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B9A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, __int64 a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rdi
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  void **v25; // [rsp+30h] [rbp-40h] BYREF
  __int128 v26; // [rsp+38h] [rbp-38h]
  void **v27; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v29; // [rsp+58h] [rbp-18h]
  int v30; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v32; // [rsp+94h] [rbp+24h]

  v32 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v12 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    KeyValueInformation = 0LL;
    v29 = 0LL;
    v25 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v27 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v26 = 0LL;
    v30 = 3;
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v25, ResultLength);
    v19 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v20 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      v22 = v20;
      if ( v20 < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v23 + 24) = v22;
        WdLogEvent5_WdError(v23);
LABEL_12:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v25);
        return (unsigned int)v22;
      }
      v22 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a4, v22);
      v16 = *(void **)(a4 + 32);
      if ( v16 )
      {
        memmove(v16, v19 + 12, v22);
        LODWORD(v22) = 0;
        goto LABEL_12;
      }
    }
    v24 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    WdLogEvent5_WdLowResource(v24);
    LODWORD(v22) = -1073741801;
    goto LABEL_12;
  }
  if ( v7 >= 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v14);
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v12;
  return 3221226021LL;
}
