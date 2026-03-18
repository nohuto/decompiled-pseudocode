/*
 * XREFs of xxxDestroyThreadDDEObject @ 0x1C0132410
 * Callers:
 *     NtUserDdeInitialize @ 0x1C012B400 (NtUserDdeInitialize.c)
 *     _CsDdeUninitialize @ 0x1C01323E0 (_CsDdeUninitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDestroyThreadDDEObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct tagSVR_INSTANCE_INFO *v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 i; // rax
  __int64 j; // rax

  v4 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a2;
  v5 = gSharedInfo[1];
  if ( *(_BYTE *)(v4 + v5 + 16) != 9 || (*(_BYTE *)(v4 + v5 + 17) & 1) != 0 || *(_QWORD *)(v4 + v5 + 8) != a1 )
    return 0LL;
  v6 = psiiList;
  if ( (struct tagSVR_INSTANCE_INFO *)a2 == psiiList )
  {
    psiiList = *(struct tagSVR_INSTANCE_INFO **)(a2 + 24);
  }
  else
  {
    for ( i = *((_QWORD *)psiiList + 3); i != a2; i = *(_QWORD *)(i + 24) )
      v6 = (struct tagSVR_INSTANCE_INFO *)i;
    *((_QWORD *)v6 + 3) = *(_QWORD *)(a2 + 24);
  }
  v7 = *(_QWORD *)(a1 + 544);
  if ( a2 == v7 )
  {
    *(_QWORD *)(a1 + 544) = *(_QWORD *)(a2 + 32);
  }
  else
  {
    for ( j = *(_QWORD *)(v7 + 32); j != a2; j = *(_QWORD *)(j + 32) )
      v7 = j;
    *(_QWORD *)(v7 + 32) = *(_QWORD *)(a2 + 32);
  }
  if ( (unsigned int)HMMarkObjectDestroy(a2) )
  {
    v8 = *(_QWORD **)(a2 + 48);
    if ( HMAssignmentUnlock(a2 + 48) )
    {
      HMFreeObject(a2);
      xxxDestroyWindow(v8);
    }
    else
    {
      HMFreeObject(a2);
    }
  }
  return 1LL;
}
