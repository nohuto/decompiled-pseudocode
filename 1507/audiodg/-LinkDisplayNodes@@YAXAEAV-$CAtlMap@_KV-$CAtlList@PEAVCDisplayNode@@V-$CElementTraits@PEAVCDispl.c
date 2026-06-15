/*
 * XREFs of ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x140033CBC
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAAEAPEAVCStreamInstance@@AEAPEAU__POSITION@@@Z @ 0x140029AC4 (-GetNext@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?GetNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x140033C6C (-GetNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 *     ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x140033DDC (-LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z.c)
 */

void __fastcall LinkDisplayNodes(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 *v7; // r11
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 Node; // rbp
  __int64 v11; // r11
  _QWORD *v12; // rcx
  struct CDisplayNode *v13; // rsi
  CDisplayNode **Next; // rax
  _QWORD *v15; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v18; // [rsp+88h] [rbp+20h] BYREF

  if ( a1[1] )
  {
    v4 = 0LL;
    if ( *((_DWORD *)a1 + 4) )
    {
      v5 = *a1;
      while ( !*(_QWORD *)(v5 + 8 * v4) )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)a1 + 4) )
          goto LABEL_6;
      }
      v6 = *(_QWORD *)(v5 + 8 * v4);
    }
    else
    {
LABEL_6:
      v6 = 0LL;
    }
    while ( v6 )
    {
      v7 = (__int64 *)v6;
      v8 = *(_QWORD *)(v6 + 56);
      if ( !v8 )
      {
        v9 = (unsigned int)(*(_DWORD *)(v6 + 64) % *((_DWORD *)a1 + 4) + 1);
        do
        {
          if ( (unsigned int)v9 >= *((_DWORD *)a1 + 4) )
            break;
          if ( *(_QWORD *)(*a1 + 8 * v9) )
            v8 = *(_QWORD *)(*a1 + 8 * v9);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( !v8 );
      }
      v6 = v8;
      Node = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::GetNode(
               a2,
               *v7,
               &v17,
               &v16,
               &v18);
      if ( Node )
      {
        v12 = *(_QWORD **)(v11 + 8);
        v15 = v12;
        while ( v15 )
        {
          v13 = (struct CDisplayNode *)*ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                                          (__int64)v12,
                                          &v15);
          v18 = *(_QWORD **)(Node + 8);
          while ( v18 )
          {
            Next = (CDisplayNode **)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                                      (__int64)v12,
                                      &v18);
            CDisplayNode::LinkToLeftDisplayNode(*Next, v13);
          }
        }
      }
    }
  }
}
