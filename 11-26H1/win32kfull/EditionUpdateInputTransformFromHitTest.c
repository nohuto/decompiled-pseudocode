/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x1400981B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x140098104 (-SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x140099DDC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x14009A48C (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqi @ 0x14029D290 (WPP_RECORDER_AND_TRACE_SF_qqi.c)
 */

__int64 __fastcall EditionUpdateInputTransformFromHitTest(
        __int64 a1,
        struct tagWND *a2,
        void *a3,
        unsigned __int64 *a4,
        struct tagWND *a5,
        struct tagINPUT_TRANSFORM *a6)
{
  struct tagWND *v6; // r14
  __int64 v7; // rdi
  int v8; // ebx
  void *v9; // rbp
  unsigned int v10; // r15d
  char v11; // si
  __int64 v12; // rdx
  struct tagINPUTTRANSFORMLIST *inited; // rax
  __int64 v14; // rdx
  struct CompositionInputObject **v15; // rbx
  CompositionObject *v16; // rcx
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // bl
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx

  v6 = *(struct tagWND **)(a1 + 80);
  v7 = 0LL;
  v8 = (int)a4;
  v9 = a3;
  v10 = 0;
  if ( (!a2 || SetCompositionInputWindowUIOwner(*(struct tagWND **)(a1 + 80), a2)) && !v8 )
  {
    v11 = 1;
    v10 = 1;
    if ( (unsigned int)InputTransform::StoreTransform(v6, a5, a6, a4) )
    {
      inited = InitInputTransformList(v6);
      if ( !inited )
        goto LABEL_23;
      v15 = (struct CompositionInputObject **)((char *)inited + 96);
      v16 = (CompositionObject *)*((_QWORD *)inited + 12);
      if ( v16 )
      {
        CompositionObject::Release(v16);
        *v15 = 0LL;
      }
      if ( (int)CompositionInputObject::ResolveHandle(v9, 1u, 1, v15) < 0 )
      {
LABEL_23:
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v11 = 0;
        }
        v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v11;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v24,
            *(_QWORD *)(UserSessionState + 69152),
            4,
            20,
            44,
            (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids,
            (char)v6,
            (char)v9);
        }
      }
    }
    else
    {
      v10 = 0;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v11;
        WPP_RECORDER_AND_TRACE_SF_qqi(*((_QWORD *)WPP_GLOBAL_Control + 3), v21, v20, *(_QWORD *)(v19 + 69152));
      }
      v9 = a3;
    }
  }
  if ( v6 )
    v7 = *(_QWORD *)v6;
  return EtwTraceDITResolveDCompInputHandleToHwnd(v9, v7, *(_QWORD *)a6, v10);
}
