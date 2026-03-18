/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C015BC30
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0156D64 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_ppqq @ 0x1C001E9F0 (Template_ppqq.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@H@Z @ 0x1C0156758 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@H@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0158378 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C015AED8 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C015BB48 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 *     ?TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z @ 0x1C015D6FC (-TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  OUTPUTDUPL_SESSION_MGR *v9; // rcx
  unsigned int v10; // ebp
  UINT KeyedMutexCount; // eax
  unsigned int *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int *v17; // rsi
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  __int64 v20; // rcx
  int v21; // esi
  struct DXGPROCESS *Current; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ebp
  _QWORD *i; // r14
  DDAMetaData *v28; // rax
  DDAMetaData *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rsi
  __int64 v36; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 1222LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  v9 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
  if ( !v9 )
  {
    v7 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v7 + 24) = 1229LL;
    goto LABEL_3;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v9, *((struct _EPROCESS **)this + 3), *((_DWORD *)this + 81)) )
    return 3221225643LL;
  v10 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v12 = (unsigned int *)operator new[](0x98uLL, 0x674D444Fu, PagedPool);
      v17 = v12;
      if ( v12 )
      {
        v18 = *((_DWORD *)&a2->KeyedMutexs[0].hSharedSurfaceNt + 3 * v10);
        v19 = *((_DWORD *)&a2->KeyedMutexs[0].hSharedSurfaceNt + 3 * v10 + 1);
        *v12 = *((_DWORD *)&a2->KeyedMutexs[1].hSharedSurfaceNt + 3 * v10);
        v12[1] = v18;
        v12[2] = v19;
        *((_QWORD *)v12 + 2) = 0LL;
        *((_QWORD *)v12 + 12) = 0LL;
        v12[26] = 0;
        *((_QWORD *)v12 + 14) = 0LL;
        *((_QWORD *)v12 + 15) = 0LL;
        *((_QWORD *)v12 + 16) = 0LL;
        v12[34] = 0;
        memset(v12 + 6, 0, 0x48uLL);
      }
      else
      {
        v17 = 0LL;
      }
      *((_QWORD *)this + v10 + 6) = v17;
      if ( !v17 )
        break;
      v21 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(v17, 1, v15);
      if ( v21 < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v25 + 24) = 1257LL;
        WdLogEvent5_WdError(v25);
        return (unsigned int)v21;
      }
      if ( ++v10 >= *((_DWORD *)this + 10) )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    *((_DWORD *)this + 4) = a2->VidPnSourceId;
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
      v24 = *((_QWORD *)Current + 10);
    else
      v24 = 0LL;
    if ( !v24 )
    {
      v7 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v7 + 24) = 1269LL;
      goto LABEL_3;
    }
    v26 = 0;
    for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
    {
      v28 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
      v29 = v28 ? DDAMetaData::DDAMetaData(v28) : 0LL;
      *(i - 10) = v29;
      if ( !v29 || !(unsigned int)DDAMetaData::Initialize(v29) )
        break;
      v30 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
      v35 = v30;
      if ( v30 )
      {
        *v30 = 0LL;
        v30[1] = 0LL;
        AUTOEXPANDALLOCATION::GetBuffer((void **)v30, 0x4000u, 0);
      }
      else
      {
        v35 = 0LL;
      }
      *i = v35;
      if ( !v35 || !*v35 )
      {
        v36 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
        *(_QWORD *)(v36 + 24) = 0x4000LL;
        *(_QWORD *)(v36 + 32) = a2->VidPnSourceId;
        goto LABEL_41;
      }
      if ( (unsigned int)++v26 >= 2 )
      {
        if ( !*((_DWORD *)this + 81)
          || *((_DWORD *)this + 82)
          || (result = OUTPUTDUPL_CONTEXT::TriggerLowBoxOutputDuplicationWNF(this, 1), (int)result >= 0) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqq(
              a2->hAdapter,
              &EventOutputDuplicationCreate,
              v33,
              this,
              a2->hAdapter,
              a2->VidPnSourceId,
              a2->KeyedMutexCount);
          return 0LL;
        }
        return result;
      }
    }
  }
  v36 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
  *(_QWORD *)(v36 + 24) = a2->VidPnSourceId;
LABEL_41:
  WdLogEvent5_WdLowResource(v36);
  return 3221225495LL;
}
