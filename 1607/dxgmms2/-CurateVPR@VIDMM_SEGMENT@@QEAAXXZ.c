/*
 * XREFs of ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0098630
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A740 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 */

void __fastcall VIDMM_SEGMENT::CurateVPR(VIDMM_SEGMENT *this)
{
  __int64 v2; // r11
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  _QWORD **v5; // r9
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r11
  unsigned int v10; // r9d
  VIDMM_GLOBAL *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-28h]
  bool v21; // [rsp+70h] [rbp+8h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v22; // [rsp+78h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 440) )
  {
    v2 = *((_QWORD *)this + 53);
    v3 = *((_QWORD *)this + 54);
    *((_BYTE *)this + 440) = 1;
    if ( v3 < v2 * (unsigned __int64)(unsigned int)dword_1C0035418 / (unsigned int)dword_1C003541C )
    {
      v4 = 0LL;
      v5 = (_QWORD **)(*((_QWORD *)this + 18) + 40LL);
      v6 = 0LL;
      v7 = *v5;
      while ( v7 != v5 )
      {
        v8 = v7 - 3;
        v7 = (_QWORD *)*v7;
        if ( *v8 )
          v6 = v8[1];
        else
          v6 += v8[1];
        if ( v6 > v4 )
          v4 = v6;
      }
      v9 = v2 - v3;
      if ( v4 < v9 * (unsigned __int64)(unsigned int)dword_1C0035420 / (unsigned int)dword_1C0035424 )
      {
        v10 = *((_DWORD *)this + 4);
        v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v22 = 0LL;
        v19 = *((_QWORD *)this + 52);
        v18 = *((_QWORD *)this + 51);
        v21 = 0;
        v12 = VIDMM_GLOBAL::PrepareMoveResources(
                v11,
                v9 * (unsigned __int64)(unsigned int)dword_1C0035420 % (unsigned int)dword_1C0035424,
                v4,
                v10,
                v16,
                v17,
                v18,
                v19,
                v20,
                &v21,
                &v22);
        v14 = v12;
        if ( v12 < 0 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v13);
          v15[4] = v22;
          v15[3] = v14;
          v15[5] = v21;
          WdLogEvent5_WdWarning(v15);
        }
      }
    }
  }
}
