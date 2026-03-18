/*
 * XREFs of zzzSetDesktop @ 0x140059C20
 * Callers:
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     GetDesktopView @ 0x14005A3B0 (GetDesktopView.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     DesktopAllocInternal @ 0x140150424 (DesktopAllocInternal.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     CheckHandleFlag @ 0x1401BB438 (CheckHandleFlag.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall zzzSetDesktop(__int64 a1, __int64 a2, void *a3)
{
  _QWORD *v7; // r15
  __int64 v8; // r13
  _QWORD *v9; // r12
  _OWORD *v10; // r14
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  __int64 DesktopView; // rax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _BYTE v28[32]; // [rsp+60h] [rbp-48h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C8h] [rbp+20h] BYREF

  if ( a2
    && (*(_DWORD *)(a2 + 48) & 6) != 0
    && a2 != *(_QWORD *)(a1 + 488)
    && a1 != *(_QWORD *)(W32GetUserSessionState(a1, a2) + 68472) )
  {
    return 3221225506LL;
  }
  if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 520), 0xFFBFFFFF);
  *(_QWORD *)(a1 + 624) = a3;
  if ( a3
    && (HandleInformation = 0LL,
        Object = 0LL,
        ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) >= 0) )
  {
    ObfDereferenceObject(Object);
    *(_DWORD *)(a1 + 928) = HandleInformation.GrantedAccess;
    if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)CheckHandleFlag(0LL) )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 520), 0x400000u);
    }
    if ( !(unsigned int)SetHandleFlag(a3, 1LL) )
      return 3221225495LL;
  }
  else
  {
    *(_DWORD *)(a1 + 928) = 0;
  }
  v7 = (_QWORD *)(a1 + 488);
  if ( a2 && a2 == *v7 )
    return 0LL;
  v8 = *v7;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v28, *v7);
  v9 = (_QWORD *)(a1 + 480);
  v10 = *(_OWORD **)(a1 + 480);
  if ( *v7 )
  {
    v11 = *(_QWORD **)(a1 + 768);
    v12 = *(_QWORD **)(a1 + 776);
    if ( v11[1] != a1 + 768 || *v12 != a1 + 768 )
LABEL_26:
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    if ( v12 != v11 )
      v9 = (_QWORD *)(a1 + 480);
  }
  LockObjectAssignment(a1 + 488, a2);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 496) = *(_QWORD *)(a2 + 8);
    v16 = (_QWORD *)(a1 + 768);
    v17 = (_QWORD *)(a2 + 176);
    v18 = *(_QWORD *)(a2 + 176);
    if ( *(_QWORD *)(v18 + 8) != a2 + 176 )
      goto LABEL_26;
    *v16 = v18;
    *(_QWORD *)(a1 + 776) = v17;
    *(_QWORD *)(v18 + 8) = v16;
    *v17 = v16;
    v19 = (_OWORD *)DesktopAllocInternal(a2, 48LL, v15, 0LL);
    *v9 = v19;
    v21 = (_OWORD *)(a1 + 1088);
    if ( !v19 )
    {
      *v9 = v21;
      v19 = (_OWORD *)(a1 + 1088);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 496) = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 62912);
    v19 = (_OWORD *)(a1 + 1088);
    *v9 = a1 + 1088;
    v21 = (_OWORD *)(a1 + 1088);
  }
  if ( v10 )
  {
    if ( v10 != v19 )
    {
      *v19 = *v10;
      v19[1] = v10[1];
      v19[2] = v10[2];
    }
    if ( v10 != v21 )
      RtlFreeHeap(*(PVOID *)(v8 + 136), 0, v10);
  }
  else
  {
    *v19 = 0LL;
    v19[1] = 0LL;
    v19[2] = 0LL;
  }
  if ( a2 && (DesktopView = GetDesktopView(*(_QWORD *)(a1 + 456), a2)) != 0 )
  {
    v23 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(DesktopView + 16);
    *(_QWORD *)(a1 + 504) = v23;
    *(_QWORD *)(*(_QWORD *)(a1 + 512) + 32LL) = **(_QWORD **)(a1 + 496) - v23;
    *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL) = *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    *(_QWORD *)(a1 + 504) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 512) + 32LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL) = 0LL;
    v24 = (*(_DWORD *)(W32GetUserSessionState(v21, v20) + 68440) & 1) - 1;
    *(_DWORD *)(a1 + 784) = v24;
    v25 = *(_QWORD *)(a1 + 464);
    if ( v25 )
      *(_DWORD *)(v25 + 432) = v24;
  }
  v26 = *(_QWORD *)(a1 + 480);
  v27 = *(_QWORD *)(a1 + 512);
  if ( v26 == a1 + 1088 )
    *(_QWORD *)(v27 + 96) = 0LL;
  else
    *(_QWORD *)(v27 + 96) = v26 - *(_QWORD *)(a1 + 504);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v28);
  return 0LL;
}
