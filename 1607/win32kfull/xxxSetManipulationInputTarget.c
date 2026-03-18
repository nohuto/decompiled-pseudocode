/*
 * XREFs of xxxSetManipulationInputTarget @ 0x1C01C25B4
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01088A8 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0219DE0 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     GetInputDelegate @ 0x1C005804C (GetInputDelegate.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0113860 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0B7C (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01C12EC (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C13C0 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C1504 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C16E0 (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z @ 0x1C01C1B04 (-SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C01C1B64 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C01C1BBC (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F00C8 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F0AEC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F3918 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F3AA8 (-FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F3FB8 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0224340 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  struct tagPOINTERINPUTFRAME *v12; // rdi
  __int64 v14; // rax
  int v15; // r14d
  int v16; // ebx
  InputTransform *v17; // rax
  void *v18; // r8
  const struct tagINPUT_TRANSFORM *v19; // r9
  InputTransform *v20; // rsi
  __int64 v21; // rbp
  struct tagPOINTERINPUTFRAME *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r11d
  int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rbx
  const struct tagPOINTERINFONODE *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int16 v33; // r15
  unsigned __int64 v34; // rbp
  struct tagPOINTERINFONODE *ValidNodeInFrame; // r14
  __int64 v36; // rax
  struct tagINPUTPOINTERNODE *NodeById; // rax
  struct tagPOINTERQFRAME *v38; // rcx
  bool v39; // zf
  int PointerInputMessagesCore; // eax
  unsigned int v41; // ebx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // [rsp+30h] [rbp-78h]
  unsigned int v46; // [rsp+34h] [rbp-74h]
  int v47; // [rsp+38h] [rbp-70h]
  int v48; // [rsp+3Ch] [rbp-6Ch]
  unsigned int i; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  __int64 v51; // [rsp+50h] [rbp-58h]
  struct tagPOINTERQFRAME *v52; // [rsp+58h] [rbp-50h] BYREF
  __int64 v53; // [rsp+60h] [rbp-48h]

  v6 = 0LL;
  i = 0;
  v7 = FindAndReferenceFrameById(a1);
  v12 = v7;
  if ( v7 )
  {
    v14 = *((_QWORD *)v7 + 13);
    LOBYTE(v8) = 1;
    v15 = -__CFSHR__(*(_DWORD *)(v14 + 252), 6);
    v48 = v15;
    v16 = -__CFSHR__(*(_DWORD *)(v14 + 252), 7);
    v47 = v16;
    v17 = (InputTransform *)HMValidateHandleNoSecure(v11, v8, v9, v10);
    v20 = v17;
    if ( v17 )
      v21 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 384LL);
    else
      v21 = 0LL;
    v50 = v21;
    if ( v17 && !a6 )
    {
      if ( a5 && !*((_QWORD *)v17 + 42) )
        InputTransform::SetCompositionInput(v17, a5, v18);
      InputTransform::OnInput(v20, *(struct tagWND **)(*((_QWORD *)v12 + 11) + 136LL), (__int64)v18, v19);
    }
    v22 = ReferencePreviousFrameByDeviceInt((struct _LIST_ENTRY **)v12);
    v52 = SetupQFrame(v12, -1LL, 0);
    v26 = 0;
    v27 = 0LL;
    v45 = 0;
    v46 = 0;
    if ( *((_DWORD *)v12 + 10) )
    {
      v53 = v25;
      do
      {
        v28 = 216 * v27;
        v29 = 216 * v27 + *((_QWORD *)v12 + 11);
        v51 = 216 * v27;
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v29) )
        {
          if ( (unsigned int)IsManipulationThreadNode(v30) )
          {
            v23 = *(unsigned int *)(v29 + 4);
            if ( (v23 & 0x200) == 0 )
            {
              v31 = 0LL;
              if ( a3 )
              {
                v24 = *(unsigned __int16 *)(v29 + 60);
                while ( *(_DWORD *)(a4 + 4 * v31) != (_DWORD)v24 )
                {
                  v31 = (unsigned int)(v31 + 1);
                  if ( (unsigned int)v31 >= a3 )
                    goto LABEL_49;
                }
                if ( (v23 & 0x80u) == 0LL )
                {
                  LOBYTE(v23) = 1;
                  v32 = HMValidateHandleNoSecure(*(_QWORD *)(v29 + 80), v23, v24, a3);
                  v20 = (InputTransform *)v32;
                  if ( v32 )
                    v21 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 384LL);
                  else
                    v21 = 0LL;
                  v50 = v21;
                }
                if ( v21 )
                {
                  if ( !v6 )
                    v6 = SetupNewQFrame(v12, &v52, v21, v22 != 0LL);
                  *(_DWORD *)(v29 + 4) |= 0x200u;
                  v26 = 1;
                  v38 = v52;
                  v45 = 1;
                  if ( v52 )
                  {
                    *(_DWORD *)(v29 + 8) = *(_DWORD *)v6;
                    ++*((_DWORD *)v6 + 4);
                    --*((_DWORD *)v38 + 4);
                  }
                  v39 = v53 == 0;
                  *(_QWORD *)(v29 + 80) = *(_QWORD *)v20;
                  if ( !v39 )
                    *(_DWORD *)(v29 + 68) |= 0x400000u;
                  if ( GetInputDelegate((__int64)v20, 4096) )
                    *(_DWORD *)v29 |= 0x100000u;
                  ProcessQFrameNode(v6, v22, (struct tagPOINTERINFONODE *)v29);
                  *((_DWORD *)v6 + 5) |= 0x10u;
                }
                else
                {
                  v33 = *(_WORD *)(v29 + 60);
                  v34 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  if ( v22 )
                  {
                    ValidNodeInFrame = FindValidNodeInFrame(v22, v33, 0LL);
                    if ( ValidNodeInFrame )
                    {
                      *(_QWORD *)(v29 + 80) = 0LL;
                      *(_DWORD *)(v29 + 4) |= 0x200u;
                      ProcessWindowEnterLeave(v22, (struct tagPOINTERINFONODE *)v29);
                      if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                        ProcessAndUnreferencePreviousInput(
                          (const struct tagPOINTERINFONODE *)v29,
                          *((_QWORD *)ValidNodeInFrame + 2),
                          v34,
                          v48,
                          v47);
                    }
                    v28 = v51;
                  }
                  if ( (*(_DWORD *)(v29 + 68) & 0x40000) != 0 )
                    ProcessLostCaptureList(v33, 1, v12, v46, v34);
                  v36 = *((_QWORD *)v12 + 11);
                  *(_DWORD *)(v28 + v36) |= 0x2000u;
                  *(_QWORD *)(v28 + v36 + 16) = 0LL;
                  ++*((_DWORD *)v12 + 11);
                  NodeById = FindNodeById(v33, 0, 0);
                  if ( NodeById
                    && *((_DWORD *)NodeById + 9) == 3
                    && *((struct tagINPUTPOINTERNODE **)NodeById + 14) == (struct tagINPUTPOINTERNODE *)((char *)NodeById + 112) )
                  {
                    FreeNode(NodeById);
                  }
                  v21 = v50;
                  v26 = v45;
                }
              }
            }
          }
        }
LABEL_49:
        v27 = v46 + 1;
        v46 = v27;
      }
      while ( (unsigned int)v27 < *((_DWORD *)v12 + 10) );
      if ( v26 )
        TryCoalesceQFrame(v12, v22, v6);
      v15 = v48;
      v16 = v47;
    }
    if ( v22 )
      UnreferenceFrameInt(v22, v23, v24);
    if ( v26 )
    {
      PointerInputMessagesCore = xxxGeneratePointerInputMessagesCore(v15, v16, 1, v12);
      v41 = 0;
      for ( i = PointerInputMessagesCore; v41 < *((_DWORD *)v12 + 10); ++v41 )
      {
        v23 = *((_QWORD *)v12 + 11) + 216LL * v41;
        v42 = *(_DWORD *)(v23 + 4);
        if ( (v42 & 0x200) != 0 && (v42 & 0x400) == 0 )
        {
          v43 = *(_QWORD *)(v23 + 16);
          *(_DWORD *)(v23 + 4) = v42 | 0x400;
          if ( v43 )
          {
            v44 = *(_DWORD *)(v23 + 68);
            if ( (v44 & 4) != 0 )
              PointerList::SetPointerCapture(
                v43,
                v20,
                2 - (unsigned int)((v44 & 0x10000) != 0),
                1LL,
                -__CFSHR__(*(_DWORD *)v23, 21));
          }
        }
      }
    }
    UnreferenceFrameInt(v12, v23, v24);
    return i;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
