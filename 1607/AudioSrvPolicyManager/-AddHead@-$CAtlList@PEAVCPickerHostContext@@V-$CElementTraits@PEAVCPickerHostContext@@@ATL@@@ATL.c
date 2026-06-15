/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x180017888
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800168F8 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 *i; // rcx
  __int64 v10; // rcx
  __int64 *result; // rax

  v2 = (__int64 *)qword_1800344D0;
  v4 = PickerHostContextManager::s_PickerHostContextList;
  if ( !qword_1800344D0 )
  {
    v5 = dword_1800344D8;
    if ( dword_1800344D8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_1800344D8 < 0x18 )
        goto LABEL_9;
      v6 = 24LL * (unsigned int)dword_1800344D8;
    }
    else
    {
      v6 = 0LL;
    }
    if ( (unsigned __int64)(-1 - v6) >= 8 )
    {
      v7 = malloc(v6 + 8);
      v8 = v7;
      if ( !v7 )
        goto LABEL_20;
      *v7 = qword_1800344C8;
      v5 = dword_1800344D8;
      v2 = (__int64 *)qword_1800344D0;
      qword_1800344C8 = (__int64)v7;
LABEL_10:
      if ( v8 )
      {
        for ( i = &v8[2 * (v5 - 1) + 1 + (unsigned int)(v5 - 1)]; --v5 >= 0; i -= 3 )
        {
          *i = (__int64)v2;
          v2 = i;
          qword_1800344D0 = (__int64)i;
        }
        goto LABEL_14;
      }
LABEL_20:
      ATL::AtlThrowImpl(-2147024882);
    }
LABEL_9:
    v8 = 0LL;
    goto LABEL_10;
  }
LABEL_14:
  v10 = *v2;
  if ( v2 )
    v2[2] = *a2;
  qword_1800344D0 = v10;
  v2[1] = 0LL;
  *v2 = v4;
  ++qword_1800344C0;
  if ( PickerHostContextManager::s_PickerHostContextList )
    *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = v2;
  else
    qword_1800344B8 = (__int64)v2;
  result = v2;
  PickerHostContextManager::s_PickerHostContextList = (__int64)v2;
  return result;
}
