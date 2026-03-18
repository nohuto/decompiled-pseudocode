/*
 * XREFs of _anonymous_namespace_::GetWindowVisualizationSetting @ 0x14020525C
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401B8710 (_anonymous_namespace_--ContactVisualizationWorker.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall anonymous_namespace_::GetWindowVisualizationSetting(__int64 a1, __int64 a2, int a3, int a4, int *a5)
{
  int *v5; // rdi
  __int64 v6; // r14
  BOOL v7; // esi
  int v8; // eax
  unsigned int PointerVisualization; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int *v18; // r9
  int v19; // r8d
  __int64 v20; // rdi
  __int64 UserSessionState; // rax
  unsigned int Prop; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // [rsp+48h] [rbp+10h] BYREF

  v5 = a5;
  v27 = 0;
  v6 = a1;
  v7 = a2 == 0;
  *a5 = 0;
  v8 = *(_DWORD *)(a1 + 12);
  if ( (v8 & 0x10000) != 0 )
  {
    if ( a3 || a4 )
    {
      PointerVisualization = 1;
      v27 = 1;
    }
    else
    {
      PointerVisualization = a2 == 0;
      if ( !(_DWORD)a2 && *(_DWORD *)a1 == 2 )
      {
        a1 = *(_QWORD *)(a1 + 24);
        if ( a1 )
        {
          v20 = ValidateHwnd(a1);
          if ( v20 )
          {
            while ( 1 )
            {
              if ( !v20 )
              {
                PointerVisualization = v7;
                goto LABEL_19;
              }
              UserSessionState = W32GetUserSessionState(a1, a2);
              Prop = GetProp(v20, *(unsigned __int16 *)(UserSessionState + 41390), 1u);
              if ( (Prop & 0x20000) != 0 )
                break;
              if ( IsTopLevelWindow(v20) )
                v20 = 0LL;
              else
                v20 = *(_QWORD *)(v20 + 104);
            }
            PointerVisualization = (Prop >> 1) & 1;
          }
        }
      }
LABEL_19:
      if ( !PointerVisualization )
        goto LABEL_20;
    }
    if ( *(_DWORD *)v6 == 2 || *(_DWORD *)v6 == 3 )
    {
      a1 = *(_QWORD *)(v6 + 24);
      if ( a1 )
      {
        v23 = ValidateHwnd(a1);
        if ( v23 )
        {
          while ( v23 )
          {
            v24 = W32GetUserSessionState(a1, a2);
            v25 = GetProp(v23, *(unsigned __int16 *)(v24 + 41390), 1u);
            if ( (v25 & 0x20000000) != 0 )
            {
              if ( (v25 & 0x2000) != 0 )
              {
                PointerVisualization = 0;
                v27 = 0;
              }
              break;
            }
            if ( IsTopLevelWindow(v23) )
              v23 = 0LL;
            else
              v23 = *(_QWORD *)(v23 + 104);
          }
        }
      }
    }
LABEL_20:
    v17 = W32GetUserSessionState(a1, a2);
    v18 = &v27;
    v19 = PointerVisualization;
    goto LABEL_7;
  }
  if ( (v8 & 0x40000) != 0 )
  {
    v14 = W32GetUserSessionState(a1, a2);
    PointerVisualization = CTouchProcessor::GetPointerVisualization(
                             *(CTouchProcessor **)(v14 + 3256),
                             *(_WORD *)(v6 + 4),
                             v5);
    v17 = W32GetUserSessionState(v16, v15);
    v18 = 0LL;
    v19 = 1;
LABEL_7:
    CTouchProcessor::SetPointerVisualization(*(CTouchProcessor **)(v17 + 3256), *(_WORD *)(v6 + 4), v19, v18, 0);
    return PointerVisualization;
  }
  PointerVisualization = a2 == 0;
  if ( (v8 & 4) != 0 )
  {
    v10 = W32GetUserSessionState(a1, a2);
    PointerVisualization = CTouchProcessor::GetPointerVisualization(
                             *(CTouchProcessor **)(v10 + 3256),
                             *(_WORD *)(v6 + 4),
                             v5);
    if ( *v5 )
    {
      v26 = W32GetUserSessionState(v12, v11);
      CTouchProcessor::SetPointerVisualization(
        *(CTouchProcessor **)(v26 + 3256),
        *(_WORD *)(v6 + 4),
        PointerVisualization,
        0LL,
        0);
      if ( PointerVisualization )
        *v5 = 0;
    }
  }
  return PointerVisualization;
}
