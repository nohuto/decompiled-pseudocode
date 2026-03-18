/*
 * XREFs of xxxSetManipulationInputTarget @ 0x1C0230EE8
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0132C4C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0220200 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     GetInputDelegate @ 0x1C008C688 (GetInputDelegate.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F072C (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8A30 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F943C (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC374 (-FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01FC898 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0227F54 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C022F3A8 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C022FB64 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022FC38 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022FD7C (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C022FE6C (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z @ 0x1C02302F4 (-SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C0230354 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C023063C (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall xxxSetManipulationInputTarget(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct tagWND *a5,
        int a6)
{
  struct tagPOINTERQFRAME *v6; // r13
  struct tagPOINTERINPUTFRAME *v7; // rax
  unsigned __int64 v8; // r10
  struct tagPOINTERINPUTFRAME *v9; // rdi
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  InputTransform *v14; // rax
  void *v15; // r8
  const struct tagINPUT_TRANSFORM *v16; // r9
  InputTransform *v17; // rsi
  __int64 v18; // rbp
  struct tagPOINTERINPUTFRAME *v19; // r12
  int v20; // r11d
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rbx
  const struct tagPOINTERINFONODE *v25; // rcx
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int16 v29; // r15
  unsigned __int64 v30; // rbp
  struct tagPOINTERINFONODE *ValidNodeInFrame; // r14
  __int64 v32; // rax
  struct tagINPUTPOINTERNODE *NodeById; // rax
  struct tagPOINTERQFRAME *v34; // rcx
  bool v35; // zf
  unsigned int PointerInputMessagesCore; // eax
  unsigned int v37; // ebx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // [rsp+30h] [rbp-78h]
  int v43; // [rsp+34h] [rbp-74h]
  int v44; // [rsp+38h] [rbp-70h]
  unsigned int v45; // [rsp+3Ch] [rbp-6Ch]
  unsigned int i; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+48h] [rbp-60h]
  __int64 v48; // [rsp+50h] [rbp-58h]
  struct tagPOINTERQFRAME *v49; // [rsp+58h] [rbp-50h] BYREF
  __int64 v50; // [rsp+60h] [rbp-48h]

  v6 = 0LL;
  i = 0;
  v7 = FindAndReferenceFrameById(a1);
  v9 = v7;
  if ( v7 )
  {
    v11 = *((_QWORD *)v7 + 11);
    v12 = -__CFSHR__(*(_DWORD *)(v11 + 236), 4);
    v45 = v12;
    v13 = -__CFSHR__(*(_DWORD *)(v11 + 236), 5);
    v43 = v13;
    v14 = (InputTransform *)HMValidateHandleNoSecure(v8, 1);
    v17 = v14;
    if ( v14 )
      v18 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 392LL);
    else
      v18 = 0LL;
    v47 = v18;
    if ( v14 && !a6 )
    {
      if ( a5 && !*((_QWORD *)v14 + 42) )
        InputTransform::SetCompositionInput(v14, a5, v15);
      InputTransform::OnInput(v17, *(struct tagWND **)(*((_QWORD *)v9 + 9) + 136LL), (__int64)v15, v16);
    }
    v19 = ReferencePreviousFrameByDeviceInt((struct _LIST_ENTRY **)v9);
    v49 = SetupQFrame(v9, -1LL, 0);
    v21 = 0;
    v22 = 0LL;
    v44 = 0;
    v42 = 0;
    if ( *((_DWORD *)v9 + 6) )
    {
      v50 = v20;
      do
      {
        v23 = 216 * v22;
        v24 = 216 * v22 + *((_QWORD *)v9 + 9);
        v48 = 216 * v22;
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v24) )
        {
          if ( IsManipulationThreadNode(v25) )
          {
            v26 = *(_DWORD *)(v24 + 4);
            if ( (v26 & 0x100) == 0 )
            {
              v27 = 0LL;
              if ( a3 )
              {
                while ( *(_DWORD *)(a4 + 4 * v27) != *(unsigned __int16 *)(v24 + 60) )
                {
                  v27 = (unsigned int)(v27 + 1);
                  if ( (unsigned int)v27 >= a3 )
                    goto LABEL_48;
                }
                if ( (v26 & 0x40) == 0 )
                {
                  v28 = HMValidateHandleNoSecure(*(_QWORD *)(v24 + 80), 1);
                  v17 = (InputTransform *)v28;
                  if ( v28 )
                    v18 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 392LL);
                  else
                    v18 = 0LL;
                  v47 = v18;
                }
                if ( v18 )
                {
                  if ( !v6 )
                    v6 = SetupNewQFrame(v9, &v49, v18, v19 != 0LL);
                  *(_DWORD *)(v24 + 4) |= 0x100u;
                  v21 = 1;
                  v34 = v49;
                  v44 = 1;
                  if ( v49 )
                  {
                    *(_DWORD *)(v24 + 8) = *(_DWORD *)v6;
                    ++*((_DWORD *)v6 + 4);
                    --*((_DWORD *)v34 + 4);
                  }
                  v35 = v50 == 0;
                  *(_QWORD *)(v24 + 80) = *(_QWORD *)v17;
                  if ( !v35 )
                    *(_DWORD *)(v24 + 68) |= 0x400000u;
                  if ( GetInputDelegate((__int64)v17, 4096) )
                    *(_DWORD *)v24 |= 0x80000u;
                  ProcessQFrameNode(v6, v19, (struct tagPOINTERINFONODE *)v24);
                  *((_DWORD *)v6 + 5) |= 0x10u;
                }
                else
                {
                  v29 = *(_WORD *)(v24 + 60);
                  v30 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  if ( v19 )
                  {
                    ValidNodeInFrame = FindValidNodeInFrame(v19, v29, 0LL);
                    if ( ValidNodeInFrame )
                    {
                      *(_QWORD *)(v24 + 80) = 0LL;
                      *(_DWORD *)(v24 + 4) |= 0x100u;
                      ProcessWindowEnterLeave(v19, (struct tagPOINTERINFONODE *)v24);
                      if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                        ProcessAndUnreferencePreviousInput(
                          (const struct tagPOINTERINFONODE *)v24,
                          *((_QWORD *)ValidNodeInFrame + 2),
                          v30,
                          v45,
                          v43);
                    }
                    v23 = v48;
                  }
                  if ( (*(_DWORD *)(v24 + 68) & 0x40000) != 0 )
                    ProcessLostCaptureList(v29, 1, v9, v42, v30);
                  v32 = *((_QWORD *)v9 + 9);
                  *(_DWORD *)(v23 + v32) |= 0x1000u;
                  *(_QWORD *)(v23 + v32 + 16) = 0LL;
                  ++*((_DWORD *)v9 + 7);
                  NodeById = FindNodeById(v29, 0, 0);
                  if ( NodeById
                    && *((_DWORD *)NodeById + 9) == 3
                    && *((struct tagINPUTPOINTERNODE **)NodeById + 14) == (struct tagINPUTPOINTERNODE *)((char *)NodeById + 112) )
                  {
                    FreeNode(NodeById);
                  }
                  v18 = v47;
                  v21 = v44;
                }
              }
            }
          }
        }
LABEL_48:
        v22 = v42 + 1;
        v42 = v22;
      }
      while ( (unsigned int)v22 < *((_DWORD *)v9 + 6) );
      if ( v21 )
        TryCoalesceQFrame(v9, v19, v6);
      v12 = v45;
      v13 = v43;
    }
    if ( v19 )
      UnreferenceFrameInt(v19);
    if ( v21 )
    {
      PointerInputMessagesCore = xxxGeneratePointerInputMessagesCore(v12, v13, 1, v9);
      v37 = 0;
      for ( i = PointerInputMessagesCore; v37 < *((_DWORD *)v9 + 6); ++v37 )
      {
        v38 = *((_QWORD *)v9 + 9) + 216LL * v37;
        v39 = *(_DWORD *)(v38 + 4);
        if ( (v39 & 0x100) != 0 && (v39 & 0x200) == 0 )
        {
          v40 = *(_QWORD *)(v38 + 16);
          *(_DWORD *)(v38 + 4) = v39 | 0x200;
          if ( v40 )
          {
            v41 = *(_DWORD *)(v38 + 68);
            if ( (v41 & 4) != 0 )
              PointerList::SetPointerCapture(
                v40,
                (__int64)v17,
                2 - ((v41 & 0x10000) != 0),
                1,
                -__CFSHR__(*(_DWORD *)v38, 20));
          }
        }
      }
    }
    UnreferenceFrameInt(v9);
    return i;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
