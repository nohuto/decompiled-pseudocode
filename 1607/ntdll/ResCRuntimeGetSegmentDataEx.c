/*
 * XREFs of ResCRuntimeGetSegmentDataEx @ 0x1800FF43C
 * Callers:
 *     ResCRuntimeGetResourceDataEx @ 0x180095F0C (ResCRuntimeGetResourceDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ResCDirectoryGetSegmentName @ 0x1800FFE78 (ResCDirectoryGetSegmentName.c)
 *     ResCKeSegmentOpenMapping @ 0x180100154 (ResCKeSegmentOpenMapping.c)
 *     ResCSegmentCreateMapping @ 0x1801001BC (ResCSegmentCreateMapping.c)
 *     ResCReleaseInitMutex @ 0x18010325C (ResCReleaseInitMutex.c)
 *     ResCRequestInitMutex @ 0x1801032B4 (ResCRequestInitMutex.c)
 *     _ResCOpenMapping @ 0x180103978 (_ResCOpenMapping.c)
 *     ResCGetSubIndexedName @ 0x18010543C (ResCGetSubIndexedName.c)
 */

__int64 __fastcall ResCRuntimeGetSegmentDataEx(__int64 a1, unsigned int a2, unsigned int a3, int a4, char a5)
{
  int v5; // r10d
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // r13d
  __int64 SegmentName; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 inited; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  wchar_t Src[264]; // [rsp+50h] [rbp-248h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0LL;
  if ( !a1 || !v5 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0LL;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( a2 >= *(_DWORD *)(*(_QWORD *)(v10 + 24) + 68LL)
    || (a5 & 2) == 0 && *(_DWORD *)(32LL * a2 + *(_QWORD *)(v10 + 32) + 24) )
  {
    return 0LL;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2) && (a5 & 0x10) == 0 )
  {
    v11 = (*(unsigned __int8 *)(a1 + 4) >> 2) & 1;
    if ( *(char *)a1 < 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2) = ResCKeSegmentOpenMapping(a2);
LABEL_18:
      v5 = a4;
      v6 = a3;
      goto LABEL_19;
    }
    SegmentName = ResCDirectoryGetSegmentName(v10, a2);
    v13 = SegmentName;
    if ( SegmentName )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = ResCOpenMapping(SegmentName);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
      {
        v14 = *(_QWORD *)(a1 + 32);
        if ( v14 )
        {
          if ( !(unsigned int)ResCGetSubIndexedName(
                                v14,
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
                                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 12LL),
                                v7,
                                Src) )
            return 0LL;
          inited = ResCRequestInitMutex(v13);
          if ( !inited )
            return 0LL;
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = ResCOpenMapping(v13);
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
            *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = ResCSegmentCreateMapping(Src, v11);
          ResCReleaseInitMutex(inited);
        }
      }
      goto LABEL_18;
    }
    return 0LL;
  }
LABEL_19:
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
    return 0LL;
  _mm_lfence();
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7);
  v17 = *(_QWORD *)(v16 + 32);
  if ( *(_QWORD *)v17 != 0x47455343534552LL )
  {
    DbgPrintEx(0xFFFFFFFF, 0, "*** RESCACHE: Segment %u magic field is corrupt!!! ***\n", v7);
    DbgPrintEx(0xFFFFFFFF, 0, "*** --------> Follow-up: avgarcia;erik;muidev ***\n");
    return 0LL;
  }
  if ( v6 + v5 >= *(_DWORD *)(v17 + 28) )
    return 0LL;
  if ( v17 && v6 < *(_DWORD *)(v17 + 28) )
    return *(_QWORD *)(v16 + 40) + v6;
  RtlSetLastWin32Error(87);
  return v9;
}
