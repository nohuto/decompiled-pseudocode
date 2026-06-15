/*
 * XREFs of ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x1800A61CC
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000DD60 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000E350 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDuckWorkItem@@PEAV312@1@Z @ 0x1800763CC (-NewNode@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAV.c)
 *     ??0CDuckWorkItem@@QEAA@PEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x1800A410C (--0CDuckWorkItem@@QEAA@PEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ??_GCDuckWorkItem@@QEAAPEAXI@Z @ 0x1800A447C (--_GCDuckWorkItem@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::QueueDuckingWorkItem(__int64 a1, char *a2, int a3, int a4, int a5)
{
  __int64 v8; // r15
  _QWORD *v9; // rax
  CDuckWorkItem *v10; // r14
  signed int v11; // esi
  __int64 *v12; // rax
  __int64 **v13; // rcx
  __int64 v14; // rax
  signed int LastError; // eax
  __int64 v16; // rcx
  signed int *v18; // rbx
  __int64 v19[4]; // [rsp+40h] [rbp-48h] BYREF
  ATL::CAtlException *v20; // [rsp+60h] [rbp-28h] BYREF

  v19[1] = -2LL;
  v8 = a1;
  v9 = operator new(0x18uLL);
  v19[0] = (__int64)v9;
  if ( v9 )
    v10 = (CDuckWorkItem *)CDuckWorkItem::CDuckWorkItem(v9, a2, a3, a4, a5);
  else
    v10 = 0LL;
  v19[0] = (__int64)v10;
  if ( !v10 )
    goto LABEL_22;
  if ( !*(_DWORD *)(*(_QWORD *)v10 - 16LL) )
    goto LABEL_21;
  EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 208));
  v11 = 0;
  try
  {
    v19[2] = v8 + 248;
    v12 = ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::NewNode(
            v8 + 248,
            v19,
            *(_QWORD *)(v8 + 256));
    v19[3] = (__int64)v12;
    v13 = *(__int64 ***)(v8 + 256);
    if ( v13 )
      *v13 = v12;
    else
      *(_QWORD *)(v8 + 248) = v12;
    *(_QWORD *)(v8 + 256) = v12;
  }
  catch ( ATL::CAtlException *v20 )
  {
    v18 = (signed int *)v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _resetstkoflw();
    v8 = a1;
    v11 = *v18;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 208));
  if ( v11 < 0 )
  {
LABEL_21:
    CDuckWorkItem::`scalar deleting destructor'(v10);
LABEL_22:
    v11 = -2147024882;
    goto LABEL_23;
  }
  if ( *(_QWORD *)(v8 + 296)
    || (v14 = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 56LL))(
                ThreadPool,
                CDuckingManager::OnDuckWorkItem,
                v8),
        (*(_QWORD *)(v8 + 296) = v14) != 0LL) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
      ThreadPool,
      *(_QWORD *)(v8 + 296));
LABEL_23:
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_24;
  }
  CDuckWorkItem::`scalar deleting destructor'(v10);
  LastError = GetLastError();
  v11 = LastError;
  if ( LastError > 0 )
    v11 = (unsigned __int16)LastError | 0x80070000;
  v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x32u,
      (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
      v11);
    goto LABEL_23;
  }
LABEL_24:
  if ( v11 < 0
    && (struct _GUID *)v16 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v16 + 28) & 0x8000000) != 0
    && *(_BYTE *)(v16 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v16 + 16), 0x33u, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, v11);
  }
  return (unsigned int)v11;
}
