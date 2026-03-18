/*
 * XREFs of ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C015F9C0
 * Callers:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C015E7BC (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C015E97C (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C810 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C0144080 (-TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144410 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C0144D30 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGDODPRESENT::TriggerDisplayOnlyTdr(__int64 a1, int a2, int a3, __int64 a4)
{
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  ULONG_PTR StartContext; // rbx
  DXGADAPTER *Adapter; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  NTSTATUS v16; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  void *ThreadHandle; // [rsp+90h] [rbp+8h] BYREF

  _m_prefetchw((const void *)(a1 + 132));
  v8 = *(_DWORD *)(a1 + 132);
  do
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 132), v8 | 0x80000000, v8);
  }
  while ( v9 != v8 );
  if ( (v8 & 0x80000000) == 0 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    StartContext = (ULONG_PTR)RecoveryContext;
    if ( RecoveryContext )
    {
      *((_DWORD *)RecoveryContext + 4) = a2;
      Adapter = DXGDODPRESENT::GetAdapter((DXGDODPRESENT *)a1);
      *(_QWORD *)(StartContext + 32) = Adapter;
      DXGADAPTER::AcquireReference(Adapter);
      v13 = *(_QWORD **)(StartContext + 32);
      *(_DWORD *)(StartContext + 132) = 20515;
      *(_DWORD *)(StartContext + 136) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13[22] + 64LL) + 40LL) + 28LL);
      *(_QWORD *)(StartContext + 24) = a4;
      *(_DWORD *)(StartContext + 72) = a3;
      v14 = v13[55];
      if ( !v14 )
        v14 = v13[37];
      *(_QWORD *)(StartContext + 88) = v14;
      if ( !TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)StartContext) )
        return 1LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = PsCreateSystemThread(
              &ThreadHandle,
              0,
              &ObjectAttributes,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              0LL,
              (PKSTART_ROUTINE)DXGADAPTER::PresentDisplayOnlyRecoveryWorker,
              (PVOID)StartContext);
      if ( v16 < 0 )
        TdrBugcheckOnTimeout(StartContext, v16, 15);
      ZwClose(ThreadHandle);
    }
  }
  return 0LL;
}
