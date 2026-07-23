/*
 * XREFs of ResCRuntimeGetResourceDataEx @ 0x180094738
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCDirectoryGetEntryCopyAndIndex @ 0x1800862E8 (ResCDirectoryGetEntryCopyAndIndex.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F72E8 (ResCRuntimeGetSegmentDataEx.c)
 *     ResCHitsEntryHit @ 0x1800F7E60 (ResCHitsEntryHit.c)
 */

__int64 __fastcall ResCRuntimeGetResourceDataEx(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _QWORD *v7; // rsi
  __int64 v10; // rbp
  _DWORD *v11; // rbp
  int v12; // eax
  __int64 result; // rax
  int v14; // r15d
  __int128 v15; // xmm0
  __int64 v16; // rcx
  _DWORD *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-94h]
  __int128 *v26; // [rsp+38h] [rbp-90h]
  __int128 v27; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v28[3]; // [rsp+50h] [rbp-78h] BYREF

  v7 = ResRuntimeView;
  v26 = a2;
  if ( !ResRuntimeView
    || (v10 = *((_QWORD *)ResRuntimeView + 2)) == 0
    || (v11 = *(_DWORD **)(v10 + 24)) == 0LL
    || (a4 & 0xFFFFFF) != 0
    || !a3 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    goto LABEL_39;
  }
  v12 = v11[12];
  v24 = 0;
  if ( (v12 & 0x100000) != 0 )
  {
    if ( a6 )
      *a6 = 0;
    return -1LL;
  }
  v14 = 3;
  do
  {
    _InterlockedOr(v23, 0);
    v15 = *a2;
    v16 = v7[2];
    v25 = v11[4];
    v27 = v15;
    v17 = (_DWORD *)((unsigned __int64)v28 & -(__int64)((unsigned int)ResCDirectoryGetEntryCopyAndIndex(
                                                                        v16,
                                                                        &v27,
                                                                        a3,
                                                                        v28,
                                                                        &v24) != 0));
    _InterlockedOr(v23, 0);
    if ( v11[6] <= v25 )
    {
      if ( v17 )
        goto LABEL_16;
      if ( v11[5] <= v25 )
        goto LABEL_39;
    }
    a2 = v26;
    --v14;
  }
  while ( v14 );
  if ( !v17 )
    goto LABEL_39;
LABEL_16:
  if ( a4 != (v17[11] & 0xFF000000) )
  {
    if ( (v17[11] & 0x4000000) != 0 )
    {
      v18 = *(_QWORD *)(v7[2] + 64LL);
      if ( v18 )
        ResCHitsEntryHit(v18, v24);
    }
LABEL_39:
    if ( a6 )
      *a6 = 0;
    return 0LL;
  }
  v19 = *(_QWORD *)(v7[2] + 64LL);
  if ( v19 )
    ResCHitsEntryHit(v19, v24);
  if ( (v11[12] & 0x80000) != 0 )
  {
    if ( a6 )
      *a6 = 0;
    return -3LL;
  }
  else
  {
    if ( a6 )
      *a6 = v17[7];
    if ( a7 )
      *a7 = v17[5];
    v20 = (unsigned int)v17[5];
    if ( *(_QWORD *)(v7[3] + 8 * v20) || (a5 & 0x10) == 0 )
    {
      result = ResCRuntimeGetSegmentDataEx(v7, v20, (unsigned int)v17[6], (unsigned int)v17[7], a5);
      if ( result )
      {
        v21 = *(_QWORD *)(v7[2] + 64LL);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 24);
          if ( v22 )
            ++*(_QWORD *)(v22 + 24);
        }
      }
    }
    else
    {
      return -2LL;
    }
  }
  return result;
}
