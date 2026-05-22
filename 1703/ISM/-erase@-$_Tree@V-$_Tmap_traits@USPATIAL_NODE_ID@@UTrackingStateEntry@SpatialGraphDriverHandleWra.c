/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1800907AC
 * Callers:
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@@Z @ 0x18008A740 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 *     wil::details::ScopeExitFn__lambda_9b01a57624a3e62828204aad12a2dc84___::_ScopeExitFn__lambda_9b01a57624a3e62828204aad12a2dc84___ @ 0x18008BC2C (wil--details--ScopeExitFn__lambda_9b01a57624a3e62828204aad12a2dc84___--_ScopeExitFn__lambda_9b01.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::erase(
        _QWORD *a1,
        char **a2,
        char *a3)
{
  char *v3; // rbx
  char *v7; // rax
  __int64 i; // rax
  char *v9; // rcx
  char *v10; // r8
  char *v11; // rdx
  char *v12; // rax
  char *v13; // rcx
  char *v14; // rax
  __int64 v15; // rcx
  char **v16; // rax
  char v17; // cl
  bool j; // zf
  char *v19; // r10
  __int64 *v20; // rcx
  char **v21; // rcx
  char **v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  char **v29; // rcx
  char **v30; // rax
  __int64 *v31; // r9
  __int64 **v32; // rax
  char *v33; // rax
  char ***v34; // rax
  volatile signed __int32 *v35; // rsi
  __int64 v36; // rax
  char **result; // rax

  v3 = a3;
  if ( !a3[25] )
  {
    v7 = (char *)*((_QWORD *)a3 + 2);
    if ( v7[25] )
    {
      for ( i = *((_QWORD *)a3 + 1); !*(_BYTE *)(i + 25) && v3 == *(char **)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = (char *)i;
      v3 = (char *)i;
    }
    else
    {
      do
      {
        v3 = v7;
        v7 = *(char **)v7;
      }
      while ( !v7[25] );
    }
  }
  v9 = *(char **)a3;
  if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
  {
    v10 = (char *)*((_QWORD *)a3 + 2);
LABEL_15:
    v11 = (char *)*((_QWORD *)a3 + 1);
    if ( !v10[25] )
      *((_QWORD *)v10 + 1) = v11;
    if ( *(char **)(*a1 + 8LL) == a3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v10;
    }
    else if ( *(char **)v11 == a3 )
    {
      *(_QWORD *)v11 = v10;
    }
    else
    {
      *((_QWORD *)v11 + 2) = v10;
    }
    if ( *(char **)*a1 == a3 )
    {
      if ( v10[25] )
      {
        v12 = v11;
      }
      else
      {
        v13 = *(char **)v10;
        v12 = v10;
        while ( !v13[25] )
        {
          v12 = v13;
          v13 = *(char **)v13;
        }
      }
      *(_QWORD *)*a1 = v12;
    }
    if ( *(char **)(*a1 + 16LL) == a3 )
    {
      if ( v10[25] )
      {
        v14 = v11;
      }
      else
      {
        v15 = *((_QWORD *)v10 + 2);
        v14 = v10;
        while ( !*(_BYTE *)(v15 + 25) )
        {
          v14 = (char *)v15;
          v15 = *(_QWORD *)(v15 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v14;
    }
    goto LABEL_47;
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 2) + 25LL) )
  {
    v10 = *(char **)a3;
    goto LABEL_15;
  }
  v10 = (char *)*((_QWORD *)v3 + 2);
  if ( v3 == a3 )
    goto LABEL_15;
  *((_QWORD *)v9 + 1) = v3;
  *(_QWORD *)v3 = *(_QWORD *)a3;
  if ( v3 == *((char **)a3 + 2) )
  {
    v11 = v3;
  }
  else
  {
    v11 = (char *)*((_QWORD *)v3 + 1);
    if ( !v10[25] )
      *((_QWORD *)v10 + 1) = v11;
    *(_QWORD *)v11 = v10;
    *((_QWORD *)v3 + 2) = *((_QWORD *)a3 + 2);
    *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL) = v3;
  }
  if ( *(char **)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else
  {
    v16 = (char **)*((_QWORD *)a3 + 1);
    if ( *v16 == a3 )
      *v16 = v3;
    else
      v16[2] = v3;
  }
  *((_QWORD *)v3 + 1) = *((_QWORD *)a3 + 1);
  v17 = v3[24];
  v3[24] = a3[24];
  a3[24] = v17;
LABEL_47:
  if ( a3[24] == 1 )
  {
    for ( j = v10 == *(char **)(*a1 + 8LL); ; j = v19 == *(char **)(*a1 + 8LL) )
    {
      if ( j || (v19 = v11, v10[24] != 1) )
      {
LABEL_113:
        v10[24] = 1;
        break;
      }
      v20 = *(__int64 **)v11;
      if ( v10 == *(char **)v11 )
      {
        v20 = (__int64 *)*((_QWORD *)v11 + 2);
        if ( !*((_BYTE *)v20 + 24) )
        {
          *((_BYTE *)v20 + 24) = 1;
          v21 = (char **)*((_QWORD *)v11 + 2);
          v11[24] = 0;
          *((_QWORD *)v11 + 2) = *v21;
          if ( !(*v21)[25] )
            *((_QWORD *)*v21 + 1) = v11;
          v21[1] = (char *)*((_QWORD *)v11 + 1);
          if ( v11 == *(char **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v21;
          }
          else
          {
            v22 = (char **)*((_QWORD *)v11 + 1);
            if ( v11 == *v22 )
              *v22 = (char *)v21;
            else
              v22[2] = (char *)v21;
          }
          *v21 = v11;
          *((_QWORD *)v11 + 1) = v21;
          v20 = (__int64 *)*((_QWORD *)v11 + 2);
        }
        if ( !*((_BYTE *)v20 + 25) )
        {
          if ( *(_BYTE *)(*v20 + 24) != 1 || *(_BYTE *)(v20[2] + 24) != 1 )
          {
            if ( *(_BYTE *)(v20[2] + 24) == 1 )
            {
              *(_BYTE *)(*v20 + 24) = 1;
              v23 = *v20;
              *((_BYTE *)v20 + 24) = 0;
              *v20 = *(_QWORD *)(v23 + 16);
              v24 = *(_QWORD *)(v23 + 16);
              if ( !*(_BYTE *)(v24 + 25) )
                *(_QWORD *)(v24 + 8) = v20;
              *(_QWORD *)(v23 + 8) = v20[1];
              if ( v20 == *(__int64 **)(*a1 + 8LL) )
              {
                *(_QWORD *)(*a1 + 8LL) = v23;
              }
              else
              {
                v28 = (_QWORD *)v20[1];
                if ( v20 == (__int64 *)v28[2] )
                  v28[2] = v23;
                else
                  *v28 = v23;
              }
              *(_QWORD *)(v23 + 16) = v20;
              v20[1] = v23;
              v20 = (__int64 *)*((_QWORD *)v11 + 2);
            }
            *((_BYTE *)v20 + 24) = v11[24];
            v11[24] = 1;
            *(_BYTE *)(v20[2] + 24) = 1;
            v29 = (char **)*((_QWORD *)v11 + 2);
            *((_QWORD *)v11 + 2) = *v29;
            if ( !(*v29)[25] )
              *((_QWORD *)*v29 + 1) = v11;
            v29[1] = (char *)*((_QWORD *)v11 + 1);
            if ( v11 == *(char **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v29;
            }
            else
            {
              v30 = (char **)*((_QWORD *)v11 + 1);
              if ( v11 == *v30 )
                *v30 = (char *)v29;
              else
                v30[2] = (char *)v29;
            }
            *v29 = v11;
LABEL_112:
            *((_QWORD *)v11 + 1) = v29;
            goto LABEL_113;
          }
LABEL_81:
          *((_BYTE *)v20 + 24) = 0;
        }
      }
      else
      {
        if ( !*((_BYTE *)v20 + 24) )
        {
          *((_BYTE *)v20 + 24) = 1;
          v25 = *(__int64 **)v11;
          v11[24] = 0;
          *(_QWORD *)v11 = v25[2];
          v26 = v25[2];
          if ( !*(_BYTE *)(v26 + 25) )
            *(_QWORD *)(v26 + 8) = v11;
          v25[1] = *((_QWORD *)v11 + 1);
          if ( v11 == *(char **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v25;
          }
          else
          {
            v27 = (_QWORD *)*((_QWORD *)v11 + 1);
            if ( v11 == (char *)v27[2] )
              v27[2] = v25;
            else
              *v27 = v25;
          }
          v25[2] = (__int64)v11;
          *((_QWORD *)v11 + 1) = v25;
          v20 = *(__int64 **)v11;
        }
        if ( !*((_BYTE *)v20 + 25) )
        {
          if ( *(_BYTE *)(v20[2] + 24) != 1 || *(_BYTE *)(*v20 + 24) != 1 )
          {
            if ( *(_BYTE *)(*v20 + 24) == 1 )
            {
              *(_BYTE *)(v20[2] + 24) = 1;
              v31 = (__int64 *)v20[2];
              *((_BYTE *)v20 + 24) = 0;
              v20[2] = *v31;
              if ( !*(_BYTE *)(*v31 + 25) )
                *(_QWORD *)(*v31 + 8) = v20;
              v31[1] = v20[1];
              if ( v20 == *(__int64 **)(*a1 + 8LL) )
              {
                *(_QWORD *)(*a1 + 8LL) = v31;
              }
              else
              {
                v32 = (__int64 **)v20[1];
                if ( v20 == *v32 )
                  *v32 = v31;
                else
                  v32[2] = v31;
              }
              *v31 = (__int64)v20;
              v20[1] = (__int64)v31;
              v20 = *(__int64 **)v11;
            }
            *((_BYTE *)v20 + 24) = v11[24];
            v11[24] = 1;
            *(_BYTE *)(*v20 + 24) = 1;
            v29 = *(char ***)v11;
            *(_QWORD *)v11 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
            v33 = v29[2];
            if ( !v33[25] )
              *((_QWORD *)v33 + 1) = v11;
            v29[1] = (char *)*((_QWORD *)v11 + 1);
            if ( v11 == *(char **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v29;
            }
            else
            {
              v34 = (char ***)*((_QWORD *)v11 + 1);
              if ( v11 == (char *)v34[2] )
                v34[2] = v29;
              else
                *v34 = v29;
            }
            v29[2] = v11;
            goto LABEL_112;
          }
          goto LABEL_81;
        }
      }
      v10 = v11;
      v11 = (char *)*((_QWORD *)v11 + 1);
    }
  }
  v35 = (volatile signed __int32 *)*((_QWORD *)a3 + 8);
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, char *))v35)(v35, v11);
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
    }
  }
  std::_Deallocate(a3, 1uLL, 0x48uLL);
  v36 = a1[1];
  if ( v36 )
    a1[1] = v36 - 1;
  result = a2;
  *a2 = v3;
  return result;
}
