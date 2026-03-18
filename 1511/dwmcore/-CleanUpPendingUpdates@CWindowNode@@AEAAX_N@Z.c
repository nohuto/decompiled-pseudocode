/*
 * XREFs of ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x18005F010
 * Callers:
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180062E54 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800640B0 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180069228 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180123DE0 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::CleanUpPendingUpdates(CWindowNode *this, char a2)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  unsigned int i; // esi
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 920);
LABEL_2:
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    if ( !a2 )
    {
      v6 = *((_DWORD *)this + 298);
      if ( v6 )
      {
        if ( *(_DWORD *)v5 == v6 )
          continue;
      }
      v7 = *((_QWORD *)this + 141);
      if ( v7 )
      {
        if ( *(_DWORD *)v5 == *(_DWORD *)(v7 + 192) )
          continue;
      }
    }
    v8 = *(_DWORD *)v5;
    v11 = 0LL;
    Buffer = v8;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 232LL), &Buffer);
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v5[1] + 16LL));
    for ( i = 0; i < *((_DWORD *)v5 + 10); ++i )
      CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(v5[2] + 88LL * i));
    *((_DWORD *)v5 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 2, 88LL);
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(v3, v5);
    goto LABEL_2;
  }
}
