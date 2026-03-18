/*
 * XREFs of ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DA630
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 */

__int64 __fastcall CalcAllPathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  _QWORD *v11; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rcx
  int v17; // edx
  _BYTE v18[80]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, a1, 0LL);
  if ( !*(_QWORD *)(v4 + 2128) )
    goto LABEL_5;
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
  v10 = v5;
  if ( v5 >= 0 )
  {
    v13 = *((_QWORD *)a1 + 266);
    v14 = *(_QWORD *)(v13 + 88);
    v15 = *(_DWORD *)(v13 + 80);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, v14);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 96) + 72LL));
    v16 = *(_QWORD *)(v14 + 96);
    v17 = *(_DWORD *)(v16 + 40);
    a2[1] += v15 * v17;
    a2[2] += v17 + v15;
    if ( (*a2 & 0x18) != 0 )
      a2[2] += v17;
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
  }
  else if ( v5 == -1073741130 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v11[3] = a1;
    v11[4] = *((int *)a1 + 68);
    v11[5] = *((unsigned int *)a1 + 67);
LABEL_5:
    v10 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  return v10;
}
