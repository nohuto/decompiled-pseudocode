/*
 * XREFs of ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x1800268E4
 * Callers:
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180029194 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180029EE0 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWindowRecord@CLegacySurfaceManager@@K@Z @ 0x1800B0CAC (-FindElement@-$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWi.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800B3708 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAHPEAVTokenToWindowRecord@CLegacySurfaceManager@@@Z @ 0x18011B924 (-RemoveElement@-$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAHPEAVTokenT.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x1801406D8 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::CleanUpPendingUpdates(CWindowNode *this, char a2)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 Element; // rax
  _DWORD *v9; // rcx
  unsigned int i; // edi
  unsigned int *v11; // rbx
  PVOID RestartKey; // [rsp+50h] [rbp+18h] BYREF

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 728);
LABEL_14:
  RestartKey = 0LL;
  while ( 1 )
  {
    v11 = (unsigned int *)RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v11 )
      break;
    if ( !a2 )
    {
      v5 = *((_DWORD *)this + 250);
      if ( v5 )
      {
        if ( *v11 == v5 )
          continue;
      }
      v6 = *((_QWORD *)this + 117);
      if ( v6 )
      {
        if ( *v11 == *(_DWORD *)(v6 + 264) )
          continue;
      }
    }
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    Element = CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::FindElement(v7 + 232, *v11);
    if ( Element )
      CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::RemoveElement(v7 + 232, Element);
    v9 = (_DWORD *)(*((_QWORD *)v11 + 1) + 16LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)v11 + 1) + 24LL), 0xFFFFFFFF) == 1 )
    {
      --v9[2];
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
    }
    for ( i = 0; i < v11[10]; ++i )
      CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(*((_QWORD *)v11 + 2) + 88LL * i));
    v11[10] = 0;
    DynArrayImpl<0>::ShrinkToSize(v11 + 4, 88LL);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(v3, v11);
    goto LABEL_14;
  }
}
