/*
 * XREFs of ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00080EC
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0064CC0 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0065370 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D3B0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkSetDisplayMode @ 0x1C00AF380 (DxgkSetDisplayMode.c)
 *     DxgkCheckOcclusion @ 0x1C00C5750 (DxgkCheckOcclusion.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0132040 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkCreateOutputDupl @ 0x1C0159800 (DxgkCreateOutputDupl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGUSERCRIT::Acquire(DXGUSERCRIT *this, unsigned int a2)
{
  _QWORD *v4; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v4[3] = 275LL;
    v4[4] = 4LL;
    v4[5] = this;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 32LL))(a2);
  *((_BYTE *)this + 16) = 1;
}
