/*
 * XREFs of DmmGetAllHMDTargetIdForAdapter @ 0x1C0078F94
 * Callers:
 *     ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C0078EBC (-DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmGetAllHMDTargetIdForAdapter(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // r10d
  _QWORD *v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
LABEL_17:
    WdLogEvent5_WdError(v17);
    return 3221225473LL;
  }
  if ( !*(_QWORD *)(a1 + 2128) )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  v6 = *(_QWORD *)(a1 + 2128);
  v7 = *(_QWORD *)(v6 + 88);
  if ( !v7 )
  {
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_17;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v18, *(_QWORD *)(v6 + 88));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 96) + 72LL));
  v8 = *(_QWORD *)(v7 + 96);
  v9 = 0;
  v10 = 0;
  v11 = (_QWORD *)(v8 + 24);
  if ( (_QWORD *)*v11 != v11 )
  {
    v12 = *v11 - 8LL;
    while ( v12 )
    {
      if ( *(_BYTE *)(v12 + 396) )
      {
        if ( (unsigned int)++v9 <= *a2 )
          *(_DWORD *)(a3 + 4LL * (unsigned int)(v9 - 1)) = *(_DWORD *)(v12 + 24);
        else
          v10 = 1;
      }
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 == v8 + 24 )
        v12 = 0LL;
      else
        v12 = v13 - 8;
    }
  }
  *a2 = v9;
  v14 = v10 != 0 ? 0xC0000023 : 0;
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
  return v14;
}
