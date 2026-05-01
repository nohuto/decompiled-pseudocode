/*
 * XREFs of ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUHSTRING__@@@Z @ 0x180001EE0
 * Callers:
 *     _lambda_a644c9ca355a20c9ec9333f2681dd115_::operator() @ 0x1800091D4 (_lambda_a644c9ca355a20c9ec9333f2681dd115_--operator().c)
 * Callees:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180002244 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ??$EnumerateAllAppsListTiles@V_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_@@@OneCoreDataHelpers@@YAJPEAUIVisualElementEnumerator@@V_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_@@@Z @ 0x180003914 (--$EnumerateAllAppsListTiles@V_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_@@@OneCoreDataHelpers@@YA.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18001ED08 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18001EF74 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        HSTRING a4)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PCWSTR StringRawBuffer; // rax
  int CallingProcessHandle; // eax
  void *v14; // rdx
  bool *v15; // r9
  int v16; // ebx
  __int64 v17; // rdx
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 v21; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp+10h] BYREF

  v19 = -2;
  if ( *((struct ITileManager **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct IVisualElementEnumerator **)this + 11) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( !WindowsIsStringEmpty(a4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
      (char *)this + 56,
      StringRawBuffer);
  }
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v11, v10, &hObject);
  v16 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v17 = 61LL;
LABEL_22:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v17,
      (unsigned int)"xbox\\onecore\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)CallingProcessHandle,
      -2);
    goto LABEL_23;
  }
  CallingProcessHandle = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, v14, &v21, v15);
  v16 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v17 = 65LL;
    goto LABEL_22;
  }
  if ( !(_BYTE)v21 )
  {
    v16 = -2147024891;
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x42,
      (unsigned int)"xbox\\onecore\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)0x80070005LL,
      -2);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    goto LABEL_26;
  }
  CallingProcessHandle = OneCoreDataHelpers::EnumerateAllAppsListTiles<_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_>(
                           *((_QWORD *)this + 11),
                           this);
  v16 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v17 = 75LL;
    goto LABEL_22;
  }
LABEL_23:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( v16 < 0 )
LABEL_26:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x1D,
      (unsigned int)"xbox\\onecore\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v16,
      v19);
  return (unsigned int)v16;
}
