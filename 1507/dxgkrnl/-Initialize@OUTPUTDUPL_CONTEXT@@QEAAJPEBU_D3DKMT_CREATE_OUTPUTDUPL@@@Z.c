/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0157918
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0152AC4 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_ppqq @ 0x1C001E9F8 (Template_ppqq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@H@Z @ 0x1C01524B8 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@H@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01541C0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C0156BC0 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0157830 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 *     ?TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z @ 0x1C01593E4 (-TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(
        OUTPUTDUPL_CONTEXT *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        __int64 a3,
        __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  OUTPUTDUPL_SESSION_MGR *v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // ebp
  UINT KeyedMutexCount; // eax
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int *v22; // rsi
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  int v25; // esi
  struct DXGPROCESS *Current; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ebp
  _QWORD *i; // r14
  DDAMetaData *v32; // rax
  DDAMetaData *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rsi
  __int64 v38; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v7, v8, v9);
  if ( !SessionData )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = 1222LL;
LABEL_3:
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v14 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
  if ( !v14 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = 1229LL;
    goto LABEL_3;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v14, *((struct _EPROCESS **)this + 3), *((_DWORD *)this + 81)) )
    return 3221225643LL;
  v16 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v18 = (unsigned int *)operator new[](0x98uLL, 0x674D444Fu, PagedPool);
      v22 = v18;
      if ( v18 )
      {
        v23 = *((_DWORD *)&a2->KeyedMutexs[0].hSharedSurfaceNt + 3 * v16);
        v24 = *((_DWORD *)&a2->KeyedMutexs[0].hSharedSurfaceNt + 3 * v16 + 1);
        *v18 = *((_DWORD *)&a2->KeyedMutexs[1].hSharedSurfaceNt + 3 * v16);
        v18[1] = v23;
        v18[2] = v24;
        *((_QWORD *)v18 + 2) = 0LL;
        *((_QWORD *)v18 + 12) = 0LL;
        v18[26] = 0;
        *((_QWORD *)v18 + 14) = 0LL;
        *((_QWORD *)v18 + 15) = 0LL;
        *((_QWORD *)v18 + 16) = 0LL;
        v18[34] = 0;
        memset(v18 + 6, 0, 0x48uLL);
      }
      else
      {
        v22 = 0LL;
      }
      *((_QWORD *)this + v16 + 6) = v22;
      if ( !v22 )
        break;
      v25 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(v22, 1LL, v20, v21);
      if ( v25 < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v29 + 24) = 1257LL;
        WdLogEvent5_WdError(v29);
        return (unsigned int)v25;
      }
      if ( ++v16 >= *((_DWORD *)this + 10) )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    *((_DWORD *)this + 4) = a2->VidPnSourceId;
    Current = DXGPROCESS::GetCurrent(v15);
    if ( Current )
      v28 = *((_QWORD *)Current + 10);
    else
      v28 = 0LL;
    if ( !v28 )
    {
      v12 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v12 + 24) = 1269LL;
      goto LABEL_3;
    }
    v30 = 0;
    for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
    {
      v32 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
      v33 = v32 ? DDAMetaData::DDAMetaData(v32) : 0LL;
      *(i - 10) = v33;
      if ( !v33 || !(unsigned int)DDAMetaData::Initialize(v33) )
        break;
      v34 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
      v37 = v34;
      if ( v34 )
      {
        *v34 = 0LL;
        v34[1] = 0LL;
        AUTOEXPANDALLOCATION::GetBuffer((void **)v34, 0x4000u, 0);
      }
      else
      {
        v37 = 0LL;
      }
      *i = v37;
      if ( !v37 || !*v37 )
      {
        v38 = WdLogNewEntry5_WdLowResource(v35);
        *(_QWORD *)(v38 + 24) = 0x4000LL;
        *(_QWORD *)(v38 + 32) = a2->VidPnSourceId;
        goto LABEL_41;
      }
      if ( (unsigned int)++v30 >= 2 )
      {
        if ( !*((_DWORD *)this + 81)
          || *((_DWORD *)this + 82)
          || (result = OUTPUTDUPL_CONTEXT::TriggerLowBoxOutputDuplicationWNF(this, 1), (int)result >= 0) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqq(
              a2->hAdapter,
              &EventOutputDuplicationCreate,
              v36,
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
  v38 = WdLogNewEntry5_WdLowResource(v19);
  *(_QWORD *)(v38 + 24) = a2->VidPnSourceId;
LABEL_41:
  WdLogEvent5_WdLowResource(v38);
  return 3221225495LL;
}
