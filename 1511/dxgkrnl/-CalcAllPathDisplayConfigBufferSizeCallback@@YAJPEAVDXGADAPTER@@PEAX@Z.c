/*
 * XREFs of ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C5230
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall CalcAllPathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  _QWORD *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // edi
  __int64 v15; // rcx
  int v16; // edx
  _BYTE v17[64]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, a1, 0LL);
  if ( !*((_QWORD *)a1 + 248) )
    goto LABEL_5;
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
  v9 = v4;
  if ( v4 >= 0 )
  {
    v12 = *((_QWORD *)a1 + 248);
    v13 = *(_QWORD *)(v12 + 112);
    v14 = *(_DWORD *)(v12 + 104);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v18, v13);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 96) + 72LL));
    v15 = *(_QWORD *)(v13 + 96);
    v16 = *(_DWORD *)(v15 + 40);
    a2[1] += v14 * v16;
    a2[2] += v16 + v14;
    if ( (*a2 & 0x18) != 0 )
      a2[2] += v16;
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v18 + 40));
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
    v10[5] = *((unsigned int *)a1 + 63);
LABEL_5:
    v9 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  return v9;
}
