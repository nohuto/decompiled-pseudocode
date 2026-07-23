/*
 * XREFs of ResCRuntimeGetResourceDataEx @ 0x180095F0C
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     ResCDirectoryGetEntryCopyAndIndex @ 0x18008A1B0 (ResCDirectoryGetEntryCopyAndIndex.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x1800FF43C (ResCRuntimeGetSegmentDataEx.c)
 *     ResCHitsEntryHit @ 0x1800FFF8C (ResCHitsEntryHit.c)
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
  __int64 result; // rax
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  int v22; // eax
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
    goto LABEL_7;
  }
  v22 = v11[12];
  v24 = 0;
  if ( (v22 & 0x100000) != 0 )
  {
    if ( a6 )
      *a6 = 0;
    return -1LL;
  }
  v13 = 3;
  do
  {
    _InterlockedOr(v23, 0);
    v19 = *a2;
    v20 = v7[2];
    v25 = v11[4];
    v27 = v19;
    v21 = (_DWORD *)((unsigned __int64)v28 & -(__int64)((unsigned int)ResCDirectoryGetEntryCopyAndIndex(
                                                                        v20,
                                                                        &v27,
                                                                        a3,
                                                                        v28,
                                                                        &v24) != 0));
    _InterlockedOr(v23, 0);
    if ( v11[6] <= v25 )
    {
      if ( v21 )
        goto LABEL_13;
      if ( v11[5] <= v25 )
        goto LABEL_7;
    }
    a2 = v26;
    --v13;
  }
  while ( v13 );
  if ( !v21 )
    goto LABEL_7;
LABEL_13:
  if ( a4 != (v21[11] & 0xFF000000) )
  {
    if ( (v21[11] & 0x4000000) != 0 )
    {
      v15 = *(_QWORD *)(v7[2] + 64LL);
      if ( v15 )
        ResCHitsEntryHit(v15, v24);
    }
LABEL_7:
    if ( a6 )
      *a6 = 0;
    return 0LL;
  }
  v14 = *(_QWORD *)(v7[2] + 64LL);
  if ( v14 )
    ResCHitsEntryHit(v14, v24);
  if ( (v11[12] & 0x80000) != 0 )
  {
    if ( a6 )
      *a6 = 0;
    return -3LL;
  }
  else
  {
    if ( a6 )
      *a6 = v21[7];
    if ( a7 )
      *a7 = v21[5];
    v16 = (unsigned int)v21[5];
    if ( *(_QWORD *)(v7[3] + 8 * v16) || (a5 & 0x10) == 0 )
    {
      result = ResCRuntimeGetSegmentDataEx(v7, v16, (unsigned int)v21[6], (unsigned int)v21[7], a5);
      if ( result )
      {
        v17 = *(_QWORD *)(v7[2] + 64LL);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 24);
          if ( v18 )
            ++*(_QWORD *)(v18 + 24);
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
