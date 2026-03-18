/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0181558
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C017B898 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_ppqq @ 0x1C00257F8 (Template_ppqq.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C017B238 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C017BDC8 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017D0C0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C0180834 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0181470 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  OUTPUTDUPL_SESSION_MGR *v9; // rsi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v10; // r8
  __int64 *AdapterLuid; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebp
  UINT KeyedMutexCount; // eax
  unsigned int *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int *v19; // rsi
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  int v22; // esi
  struct DXGPROCESS *Current; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ebp
  _QWORD *i; // r14
  DDAMetaData *v29; // rax
  DDAMetaData *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rsi
  __int64 v35; // rax
  _QWORD v36[2]; // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+50h] [rbp-38h]
  char v38; // [rsp+A0h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 1226LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  v9 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
  if ( !v9 )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 1233LL;
    goto LABEL_3;
  }
  v10 = 0LL;
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v38);
    v10 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)v36;
    v12 = *AdapterLuid;
    v37 = *((_DWORD *)this + 4);
    v36[0] = *((_QWORD *)this + 4);
    v36[1] = v12;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v9, *((struct _EPROCESS **)this + 3), v10) )
    return 3221225643LL;
  v14 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v16 = (unsigned int *)operator new(0x98uLL, 0x674D444Fu, PagedPool);
      v19 = v16;
      if ( v16 )
      {
        v20 = *((_DWORD *)&a2->KeyedMutexs[0].hSharedSurfaceNt + 3 * v14);
        v21 = *((_DWORD *)&a2->KeyedMutexs[0].hSharedSurfaceNt + 3 * v14 + 1);
        *v16 = *((_DWORD *)&a2->KeyedMutexs[1].hSharedSurfaceNt + 3 * v14);
        v16[1] = v20;
        v16[2] = v21;
        *((_QWORD *)v16 + 2) = 0LL;
        *((_QWORD *)v16 + 12) = 0LL;
        v16[26] = 0;
        *((_QWORD *)v16 + 14) = 0LL;
        *((_QWORD *)v16 + 15) = 0LL;
        *((_QWORD *)v16 + 16) = 0LL;
        v16[34] = 0;
        memset(v16 + 6, 0, 0x48uLL);
      }
      else
      {
        v19 = 0LL;
      }
      *((_QWORD *)this + v14 + 6) = v19;
      if ( !v19 )
        break;
      v22 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(v19, 1, v18);
      if ( v22 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v26 + 24) = 1279LL;
        WdLogEvent5_WdError(v26);
        return (unsigned int)v22;
      }
      if ( ++v14 >= *((_DWORD *)this + 10) )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    Current = DXGPROCESS::GetCurrent(v13);
    if ( Current )
      v25 = *((_QWORD *)Current + 9);
    else
      v25 = 0LL;
    if ( !v25 )
    {
      v7 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v7 + 24) = 1288LL;
      goto LABEL_3;
    }
    v27 = 0;
    for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
    {
      v29 = (DDAMetaData *)operator new(0x50uLL, 0x674D444Fu, PagedPool);
      v30 = v29 ? DDAMetaData::DDAMetaData(v29) : 0LL;
      *(i - 10) = v30;
      if ( !v30 || !(unsigned int)DDAMetaData::Initialize(v30) )
        break;
      v31 = operator new(0x10uLL, 0x674D444Fu, PagedPool);
      v34 = v31;
      if ( v31 )
      {
        *v31 = 0LL;
        v31[1] = 0LL;
        AUTOEXPANDALLOCATION::GetBuffer((void **)v31, 0x4000u, 0);
      }
      else
      {
        v34 = 0LL;
      }
      *i = v34;
      if ( !v34 || !*v34 )
      {
        v35 = WdLogNewEntry5_WdLowResource(v32);
        *(_QWORD *)(v35 + 24) = 0x4000LL;
        *(_QWORD *)(v35 + 32) = a2->VidPnSourceId;
        goto LABEL_41;
      }
      if ( (unsigned int)++v27 >= 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
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
    }
  }
  v35 = WdLogNewEntry5_WdLowResource(v17);
  *(_QWORD *)(v35 + 24) = a2->VidPnSourceId;
LABEL_41:
  WdLogEvent5_WdLowResource(v35);
  return 3221225495LL;
}
