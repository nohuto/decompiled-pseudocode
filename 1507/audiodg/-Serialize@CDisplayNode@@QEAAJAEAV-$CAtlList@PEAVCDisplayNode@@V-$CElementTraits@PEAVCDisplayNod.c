/*
 * XREFs of ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140034000
 * Callers:
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x140034188 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAAEAPEAVCStreamInstance@@AEAPEAU__POSITION@@@Z @ 0x140029AC4 (-GetNext@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x140033970 (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 */

__int64 __fastcall CDisplayNode::Serialize(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // ebx
  _DWORD *v9; // r9
  _QWORD *v10; // r8
  const char *DisplayName; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  rsize_t v15; // rdx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 *Next; // rax
  unsigned __int64 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rcx
  unsigned int Source; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *i; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  DisplayName = CDisplayNode::GetDisplayName((CDisplayNode *)a1);
  if ( memcpy_s((void *const)(*v10 + (unsigned int)*v9), (unsigned int)(4096 - *v9), "NODE", 5uLL) )
    return (unsigned int)-2147024774;
  *a4 += 5;
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( DisplayName[v13] );
  if ( memcpy_s(
         (void *const)(*a3 + (unsigned int)*a4),
         (unsigned int)(4096 - *a4),
         DisplayName,
         (unsigned int)(v13 + 1)) )
  {
    return (unsigned int)-2147024774;
  }
  do
    ++v12;
  while ( DisplayName[v12] );
  *a4 += v12 + 1;
  v14 = (unsigned int)*a4;
  v15 = (unsigned int)(4096 - v14);
  v16 = (void *)(*a3 + v14);
  Source = *(_DWORD *)(a1 + 24);
  if ( memcpy_s(v16, v15, &Source, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a4 += 4;
    for ( i = *(_QWORD **)(a1 + 8); i; *a4 += 4 )
    {
      Next = ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(v17, &i);
      v19 = *(_QWORD *)(a2 + 16);
      v20 = 0;
      v8 = -2147023728;
      v21 = *Next;
      if ( v19 )
      {
        v22 = 0LL;
        do
        {
          v23 = *(_QWORD **)a2;
          if ( !*(_QWORD *)a2 )
            goto LABEL_21;
          for ( ; v22; --v22 )
            v23 = (_QWORD *)*v23;
          if ( !v23 )
LABEL_21:
            ATL::AtlThrowImpl(-2147467259);
          if ( v21 == v23[2] )
          {
            Source = v20;
            v8 = 0;
          }
          v22 = ++v20;
        }
        while ( v20 < v19 );
      }
      if ( v8 < 0 )
        break;
      if ( memcpy_s((void *const)(*a3 + (unsigned int)*a4), (unsigned int)(4096 - *a4), &Source, 4uLL) )
        return (unsigned int)-2147024774;
    }
  }
  return (unsigned int)v8;
}
