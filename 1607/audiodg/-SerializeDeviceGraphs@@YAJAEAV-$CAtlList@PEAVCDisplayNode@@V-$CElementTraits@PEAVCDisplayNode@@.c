/*
 * XREFs of ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x140031598
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140017F8C (--_U@YAPEAX_K@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140031050 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140031410 (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SerializeDeviceGraphs(__int64 a1, _QWORD *a2, int *a3)
{
  _DWORD *v6; // rbx
  int v7; // edi
  __int64 v8; // rcx
  int v9; // edx
  __int64 *Next; // rax
  _DWORD *v11; // rcx
  int Source; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v15[1] = -2LL;
  v6 = operator new[](0x1000uLL);
  v15[2] = v6;
  v15[0] = v6;
  if ( v6 )
  {
    v7 = 0;
    Source = *(_QWORD *)(a1 + 16);
    if ( memcpy_s(v6 + 1, 0xFFCuLL, &Source, 4uLL) )
    {
      v7 = -2147024774;
    }
    else
    {
      v9 = 8;
      v16 = 8;
      v14 = *(_QWORD **)a1;
      if ( v14 )
      {
        while ( 1 )
        {
          Next = ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v8, &v14);
          v7 = CDisplayNode::Serialize(*Next, a1, v15, &v16);
          if ( v7 < 0 )
            break;
          if ( !v14 )
          {
            v9 = v16;
            goto LABEL_8;
          }
        }
      }
      else
      {
LABEL_8:
        *v6 = v9;
        v11 = v6;
        v6 = 0LL;
        *a2 = v11;
        *a3 = v9;
      }
    }
  }
  else
  {
    v7 = -2147024882;
  }
  operator delete(v6);
  return (unsigned int)v7;
}
