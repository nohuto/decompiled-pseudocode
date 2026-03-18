/*
 * XREFs of ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C00B3520
 * Callers:
 *     DxgkOpmTranslateHandle @ 0x1C00B23D4 (DxgkOpmTranslateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C00B34A8 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v16 + 24) = 22618LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v15 + 24) = 22619LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle(this, (DXGADAPTER **)a2) )
  {
    if ( *((_BYTE *)a2 + 24) )
    {
      return 3221225473LL;
    }
    else
    {
      *a3 = (void *)a2[2];
      return 0LL;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = 22628LL;
    WdLogEvent5_WdAssertion(v17);
    return 3223192844LL;
  }
}
