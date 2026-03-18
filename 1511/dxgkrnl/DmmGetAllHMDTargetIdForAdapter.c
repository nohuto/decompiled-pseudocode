/*
 * XREFs of DmmGetAllHMDTargetIdForAdapter @ 0x1C008D904
 * Callers:
 *     ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C008B3C4 (-DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmGetAllHMDTargetIdForAdapter(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // r10d
  _QWORD *v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225473LL;
  }
  if ( !*(_QWORD *)(a1 + 1984) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(_QWORD *)(a1 + 1984);
  v10 = *(_QWORD *)(v9 + 112);
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v18, *(_QWORD *)(v9 + 112));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 96) + 72LL));
  v11 = *(_QWORD *)(v10 + 96);
  v12 = 0;
  v13 = 0;
  v14 = (_QWORD *)(v11 + 24);
  if ( (_QWORD *)*v14 != v14 )
  {
    v15 = *v14 - 8LL;
    while ( v15 )
    {
      if ( *(_BYTE *)(v15 + 396) )
      {
        if ( (unsigned int)++v12 <= *a2 )
          *(_DWORD *)(a3 + 4LL * (unsigned int)(v12 - 1)) = *(_DWORD *)(v15 + 24);
        else
          v13 = 1;
      }
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 == v11 + 24 )
        v15 = 0LL;
      else
        v15 = v16 - 8;
    }
  }
  *a2 = v12;
  v17 = v13 != 0 ? 0xC0000023 : 0;
  if ( v11 )
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v18 + 40));
  return v17;
}
